# CMake generated Testfile for 
# Source directory: /workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3
# Build directory: /workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/EnforceConfig.cmake")
add_test([=[SystemInformationNew]=] "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/bin/cmake" "--system-information" "-G" "Unix Makefiles")
set_tests_properties([=[SystemInformationNew]=] PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/CMakeLists.txt;865;add_test;/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/CMakeLists.txt;0;")
subdirs("Source/kwsys")
subdirs("Utilities/std")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmnghttp2")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmzstd")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
