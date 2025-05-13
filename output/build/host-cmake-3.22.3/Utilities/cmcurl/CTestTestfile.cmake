# CMake generated Testfile for 
# Source directory: /workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Utilities/cmcurl
# Build directory: /workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[curl]=] "curltest" "http://open.cdash.org/user.php")
set_tests_properties([=[curl]=] PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Utilities/cmcurl/CMakeLists.txt;1506;add_test;/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
