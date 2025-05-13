cmd_libbb/perror_nomsg.o := /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-gcc -Wp,-MD,libbb/.perror_nomsg.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.0"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -march=i486 -mtune=i386 -mpreferred-stack-boundary=2 -malign-data=abi -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"perror_nomsg"'  -DKBUILD_MODNAME='"perror_nomsg"' -c -o libbb/perror_nomsg.o libbb/perror_nomsg.c

deps_libbb/perror_nomsg.o := \
  libbb/perror_nomsg.c \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdc-predef.h \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include-fixed/limits.h \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include-fixed/syslimits.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/limits.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/libc-header-start.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/features.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/features-time64.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/wordsize.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/timesize.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/cdefs.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/long-double.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/gnu/stubs.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/gnu/stubs-32.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/posix1_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/local_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/limits.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/pthread_stack_min-dynamic.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/posix2_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/xopen_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/uio_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/byteswap.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/byteswap.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/typesizes.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/time64.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/endian.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/endian.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/endianness.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/uintn-identity.h \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdint.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdint.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/wchar.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdint-intn.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdint-uintn.h \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdbool.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/unistd.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/posix_opt.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/environments.h \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stddef.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/confname.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/getopt_posix.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/getopt_core.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/unistd.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/unistd_ext.h \

libbb/perror_nomsg.o: $(deps_libbb/perror_nomsg.o)

$(deps_libbb/perror_nomsg.o):
