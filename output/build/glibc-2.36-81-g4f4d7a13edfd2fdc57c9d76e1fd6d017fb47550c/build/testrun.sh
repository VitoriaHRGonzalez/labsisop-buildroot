#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
cat << EOF
Usage: $0 [OPTIONS] <program> [ARGUMENTS...]

  --tool=TOOL  Run with the specified TOOL. It can be strace, rpctrace,
               valgrind or container. The container will run within
               support/test-container.  For strace and valgrind,
               additional arguments can be passed after the tool name.
EOF

  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux.so.2 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace*)
    exec $toolname  -EGCONV_PATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata  -ELOCPATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata  -ELC_ALL=C  /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.2 --library-path /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  rpctrace)
    exec rpctrace  -EGCONV_PATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata  -ELOCPATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata  -ELC_ALL=C  /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.2 --library-path /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  valgrind*)
    exec env GCONV_PATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C $toolname  /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.2 --library-path /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C  /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.2 --library-path /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support/test-container env GCONV_PATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C  /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.2 --library-path /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
