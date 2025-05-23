cmake_minimum_required(VERSION 3.15)

include(CheckSymbolExists)
include(CheckIPOSupported)

project(ninja)

# --- optional link-time optimization
check_ipo_supported(RESULT lto_supported OUTPUT error)

if(lto_supported)
	message(STATUS "IPO / LTO enabled")
	set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE TRUE)
else()
	message(STATUS "IPO / LTO not supported: <${error}>")
endif()

# --- compiler flags
if(MSVC)
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
	string(REPLACE "/GR" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
	add_compile_options(/W4 /wd4100 /wd4267 /wd4706 /wd4702 /wd4244 /GR- /Zc:__cplusplus)
	add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
else()
	include(CheckCXXCompilerFlag)
	check_cxx_compiler_flag(-Wno-deprecated flag_no_deprecated)
	if(flag_no_deprecated)
		add_compile_options(-Wno-deprecated)
	endif()
	check_cxx_compiler_flag(-fdiagnostics-color flag_color_diag)
	if(flag_color_diag)
		add_compile_options(-fdiagnostics-color)
	endif()
endif()

# --- optional re2c
find_program(RE2C re2c)
if(RE2C)
	# the depfile parser and ninja lexers are generated using re2c.
	function(re2c IN OUT)
		add_custom_command(DEPENDS ${IN} OUTPUT ${OUT}
			COMMAND ${RE2C} -b -i --no-generation-date --no-version -o ${OUT} ${IN}
		)
	endfunction()
	re2c(${PROJECT_SOURCE_DIR}/src/depfile_parser.in.cc ${PROJECT_BINARY_DIR}/depfile_parser.cc)
	re2c(${PROJECT_SOURCE_DIR}/src/lexer.in.cc ${PROJECT_BINARY_DIR}/lexer.cc)
	add_library(libninja-re2c OBJECT ${PROJECT_BINARY_DIR}/depfile_parser.cc ${PROJECT_BINARY_DIR}/lexer.cc)
else()
	message(WARNING "re2c was not found; changes to src/*.in.cc will not affect your build.")
	add_library(libninja-re2c OBJECT src/depfile_parser.cc src/lexer.cc)
endif()
target_include_directories(libninja-re2c PRIVATE src)

# --- Check for 'browse' mode support
function(check_platform_supports_browse_mode RESULT)
	# Make sure the inline.sh script works on this platform.
	# It uses the shell commands such as 'od', which may not be available.

	execute_process(
		COMMAND sh -c "echo 'TEST' | src/inline.sh var"
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
		RESULT_VARIABLE inline_result
		OUTPUT_QUIET
		ERROR_QUIET
	)
	if(NOT inline_result EQUAL "0")
		# The inline script failed, so browse mode is not supported.
		set(${RESULT} "0" PARENT_SCOPE)
		if(NOT WIN32)
			message(WARNING "browse feature omitted due to inline script failure")
		endif()
		return()
	endif()

	# Now check availability of the unistd header
	check_symbol_exists(fork "unistd.h" HAVE_FORK)
	check_symbol_exists(pipe "unistd.h" HAVE_PIPE)
	set(browse_supported 0)
	if (HAVE_FORK AND HAVE_PIPE)
		set(browse_supported 1)
	endif ()
	set(${RESULT} "${browse_supported}" PARENT_SCOPE)
	if(NOT browse_supported)
		message(WARNING "browse feature omitted due to missing `fork` and `pipe` functions")
	endif()

endfunction()

check_platform_supports_browse_mode(platform_supports_ninja_browse)

# Core source files all build into ninja library.
add_library(libninja OBJECT
	src/build_log.cc
	src/build.cc
	src/clean.cc
	src/clparser.cc
	src/dyndep.cc
	src/dyndep_parser.cc
	src/debug_flags.cc
	src/deps_log.cc
	src/disk_interface.cc
	src/edit_distance.cc
	src/eval_env.cc
	src/graph.cc
	src/graphviz.cc
	src/json.cc
	src/line_printer.cc
	src/manifest_parser.cc
	src/metrics.cc
	src/missing_deps.cc
	src/parser.cc
	src/state.cc
	src/status.cc
	src/string_piece_util.cc
	src/tokenpool-gnu-make.cc
	src/util.cc
	src/version.cc
)
if(WIN32)
	target_sources(libninja PRIVATE
		src/subprocess-win32.cc
		src/includes_normalize-win32.cc
		src/msvc_helper-win32.cc
		src/msvc_helper_main-win32.cc
		src/getopt.c
		src/minidump-win32.cc
		src/tokenpool-gnu-make-win32.cc
	)
else()
	target_sources(libninja PRIVATE
		src/subprocess-posix.cc
		src/tokenpool-gnu-make-posix.cc
	)
	if(CMAKE_SYSTEM_NAME STREQUAL "OS400" OR CMAKE_SYSTEM_NAME STREQUAL "AIX")
		target_sources(libninja PRIVATE src/getopt.c)
	endif()

	# Needed for perfstat_cpu_total
	if(CMAKE_SYSTEM_NAME STREQUAL "AIX")
		target_link_libraries(libninja PUBLIC "-lperfstat")
	endif()
endif()

#Fixes GetActiveProcessorCount on MinGW
if(MINGW)
target_compile_definitions(libninja PRIVATE _WIN32_WINNT=0x0601 __USE_MINGW_ANSI_STDIO=1)
endif()

# On IBM i (identified as "OS400" for compatibility reasons) and AIX, this fixes missing
# PRId64 (and others) at compile time in C++ sources
if(CMAKE_SYSTEM_NAME STREQUAL "OS400" OR CMAKE_SYSTEM_NAME STREQUAL "AIX")
	add_compile_definitions(__STDC_FORMAT_MACROS)
endif()

# Main executable is library plus main() function.
add_executable(ninja src/ninja.cc)
target_link_libraries(ninja PRIVATE libninja libninja-re2c)

if(WIN32)
  target_sources(ninja PRIVATE windows/ninja.manifest)
endif()

# Adds browse mode into the ninja binary if it's supported by the host platform.
if(platform_supports_ninja_browse)
	# Inlines src/browse.py into the browse_py.h header, so that it can be included
	# by src/browse.cc
	add_custom_command(
		OUTPUT build/browse_py.h
		MAIN_DEPENDENCY src/browse.py
		DEPENDS src/inline.sh
		COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/build
		COMMAND src/inline.sh kBrowsePy
						< src/browse.py
						> ${PROJECT_BINARY_DIR}/build/browse_py.h
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
		VERBATIM
	)

	target_compile_definitions(ninja PRIVATE NINJA_HAVE_BROWSE)
	target_sources(ninja PRIVATE src/browse.cc)
	set_source_files_properties(src/browse.cc
		PROPERTIES
			OBJECT_DEPENDS "${PROJECT_BINARY_DIR}/build/browse_py.h"
			INCLUDE_DIRECTORIES "${PROJECT_BINARY_DIR}"
			COMPILE_DEFINITIONS NINJA_PYTHON="python"
	)
endif()

include(CTest)
if(BUILD_TESTING)
  # Tests all build into ninja_test executable.
  add_executable(ninja_test
    src/build_log_test.cc
    src/build_test.cc
    src/clean_test.cc
    src/clparser_test.cc
    src/depfile_parser_test.cc
    src/deps_log_test.cc
    src/disk_interface_test.cc
    src/dyndep_parser_test.cc
    src/edit_distance_test.cc
    src/graph_test.cc
    src/json_test.cc
    src/lexer_test.cc
    src/manifest_parser_test.cc
    src/missing_deps_test.cc
    src/ninja_test.cc
    src/state_test.cc
    src/string_piece_util_test.cc
    src/subprocess_test.cc
    src/test.cc
    src/tokenpool_test.cc
    src/util_test.cc
  )
  if(WIN32)
    target_sources(ninja_test PRIVATE src/includes_normalize_test.cc src/msvc_helper_test.cc)
  endif()
  target_link_libraries(ninja_test PRIVATE libninja libninja-re2c)

  foreach(perftest
    build_log_perftest
    canon_perftest
    clparser_perftest
    depfile_parser_perftest
    hash_collision_bench
    manifest_parser_perftest
  )
    add_executable(${perftest} src/${perftest}.cc)
    target_link_libraries(${perftest} PRIVATE libninja libninja-re2c)
  endforeach()

  if(CMAKE_SYSTEM_NAME STREQUAL "AIX" AND CMAKE_SIZEOF_VOID_P EQUAL 4)
    # These tests require more memory than will fit in the standard AIX shared stack/heap (256M)
    target_link_options(hash_collision_bench PRIVATE "-Wl,-bmaxdata:0x80000000")
    target_link_options(manifest_parser_perftest PRIVATE "-Wl,-bmaxdata:0x80000000")
  endif()

  add_test(NAME NinjaTest COMMAND ninja_test)
endif()

install(TARGETS ninja)
