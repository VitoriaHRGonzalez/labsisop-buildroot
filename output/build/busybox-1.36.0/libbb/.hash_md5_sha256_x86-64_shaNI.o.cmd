cmd_libbb/hash_md5_sha256_x86-64_shaNI.o := /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-gcc -Wp,-MD,libbb/.hash_md5_sha256_x86-64_shaNI.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.0"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -march=i486 -mtune=i386 -mpreferred-stack-boundary=2 -malign-data=abi -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os        -c -o libbb/hash_md5_sha256_x86-64_shaNI.o libbb/hash_md5_sha256_x86-64_shaNI.S

deps_libbb/hash_md5_sha256_x86-64_shaNI.o := \
  libbb/hash_md5_sha256_x86-64_shaNI.S \
    $(wildcard include/config/sha256/hwaccel.h) \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdc-predef.h \

libbb/hash_md5_sha256_x86-64_shaNI.o: $(deps_libbb/hash_md5_sha256_x86-64_shaNI.o)

$(deps_libbb/hash_md5_sha256_x86-64_shaNI.o):
