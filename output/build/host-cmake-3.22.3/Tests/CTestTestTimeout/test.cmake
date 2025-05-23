cmake_minimum_required(VERSION 2.8.12)

# Settings:
set(CTEST_DASHBOARD_ROOT                "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CTestTest")
set(CTEST_SITE                          "codespaces-1ee735")
set(CTEST_BUILD_NAME                    "CTestTest-Linux-g++-Timeout")

set(CTEST_SOURCE_DIRECTORY              "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CTestTestTimeout")
set(CTEST_BINARY_DIRECTORY              "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CTestTestTimeout")
set(CTEST_CVS_COMMAND                   "")
set(CTEST_CMAKE_GENERATOR               "Unix Makefiles")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
set(CTEST_COVERAGE_COMMAND              "/usr/bin/gcov")
set(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

#CTEST_EMPTY_BINARY_DIRECTORY(${CTEST_BINARY_DIRECTORY})

file(WRITE "${CTEST_BINARY_DIRECTORY}/CMakeCache.txt" "
TIMEOUT:STRING=
")

CTEST_START(Experimental)
CTEST_CONFIGURE(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_BUILD(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_TEST(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)

set(log ${CTEST_BINARY_DIRECTORY}/timeout.log)
if(EXISTS "${log}")
  # Verify that the timeout test did not finish sleeping.
  file(STRINGS "${log}" after_sleep REGEX "after sleep")
  if(after_sleep)
    message(FATAL_ERROR "Log indicates timeout did not kill child.")
  else()
    message(STATUS "Log indicates timeout correctly killed child.")
  endif()
else()
  message(FATAL_ERROR "Log does not exist:\n  ${log}")
endif()
