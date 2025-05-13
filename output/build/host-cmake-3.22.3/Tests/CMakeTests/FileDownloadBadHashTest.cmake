if(NOT "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/workspaces/labsisop-buildroot/output/build/host-cmake-3.22.3/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
