cmd_coreutils/dirname.o := /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-gcc -Wp,-MD,coreutils/.dirname.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.0"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -march=i486 -mtune=i386 -mpreferred-stack-boundary=2 -malign-data=abi -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"dirname"'  -DKBUILD_MODNAME='"dirname"' -c -o coreutils/dirname.o coreutils/dirname.c

deps_coreutils/dirname.o := \
  coreutils/dirname.c \
    $(wildcard include/config/dirname.h) \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdc-predef.h \
  include/libbb.h \
    $(wildcard include/config/feature/shadowpasswds.h) \
    $(wildcard include/config/use/bb/shadow.h) \
    $(wildcard include/config/selinux.h) \
    $(wildcard include/config/feature/utmp.h) \
    $(wildcard include/config/locale/support.h) \
    $(wildcard include/config/use/bb/pwd/grp.h) \
    $(wildcard include/config/lfs.h) \
    $(wildcard include/config/feature/buffers/go/on/stack.h) \
    $(wildcard include/config/feature/buffers/go/in/bss.h) \
    $(wildcard include/config/extra/cflags.h) \
    $(wildcard include/config/variable/arch/pagesize.h) \
    $(wildcard include/config/feature/verbose.h) \
    $(wildcard include/config/feature/etc/services.h) \
    $(wildcard include/config/feature/ipv6.h) \
    $(wildcard include/config/feature/seamless/xz.h) \
    $(wildcard include/config/feature/seamless/lzma.h) \
    $(wildcard include/config/feature/seamless/bz2.h) \
    $(wildcard include/config/feature/seamless/gz.h) \
    $(wildcard include/config/feature/seamless/z.h) \
    $(wildcard include/config/float/duration.h) \
    $(wildcard include/config/feature/check/names.h) \
    $(wildcard include/config/feature/prefer/applets.h) \
    $(wildcard include/config/long/opts.h) \
    $(wildcard include/config/feature/pidfile.h) \
    $(wildcard include/config/feature/syslog.h) \
    $(wildcard include/config/feature/syslog/info.h) \
    $(wildcard include/config/warn/simple/msg.h) \
    $(wildcard include/config/feature/individual.h) \
    $(wildcard include/config/shell/ash.h) \
    $(wildcard include/config/shell/hush.h) \
    $(wildcard include/config/echo.h) \
    $(wildcard include/config/sleep.h) \
    $(wildcard include/config/printf.h) \
    $(wildcard include/config/test.h) \
    $(wildcard include/config/test1.h) \
    $(wildcard include/config/test2.h) \
    $(wildcard include/config/kill.h) \
    $(wildcard include/config/killall.h) \
    $(wildcard include/config/killall5.h) \
    $(wildcard include/config/chown.h) \
    $(wildcard include/config/ls.h) \
    $(wildcard include/config/xxx.h) \
    $(wildcard include/config/route.h) \
    $(wildcard include/config/feature/hwib.h) \
    $(wildcard include/config/desktop.h) \
    $(wildcard include/config/feature/crond/d.h) \
    $(wildcard include/config/feature/setpriv/capabilities.h) \
    $(wildcard include/config/run/init.h) \
    $(wildcard include/config/feature/securetty.h) \
    $(wildcard include/config/pam.h) \
    $(wildcard include/config/use/bb/crypt.h) \
    $(wildcard include/config/feature/adduser/to/group.h) \
    $(wildcard include/config/feature/del/user/from/group.h) \
    $(wildcard include/config/ioctl/hex2str/error.h) \
    $(wildcard include/config/feature/editing.h) \
    $(wildcard include/config/feature/editing/history.h) \
    $(wildcard include/config/feature/tab/completion.h) \
    $(wildcard include/config/feature/username/completion.h) \
    $(wildcard include/config/feature/editing/fancy/prompt.h) \
    $(wildcard include/config/feature/editing/savehistory.h) \
    $(wildcard include/config/feature/editing/vi.h) \
    $(wildcard include/config/feature/editing/save/on/exit.h) \
    $(wildcard include/config/pmap.h) \
    $(wildcard include/config/feature/show/threads.h) \
    $(wildcard include/config/feature/ps/additional/columns.h) \
    $(wildcard include/config/feature/topmem.h) \
    $(wildcard include/config/feature/top/smp/process.h) \
    $(wildcard include/config/pgrep.h) \
    $(wildcard include/config/pkill.h) \
    $(wildcard include/config/pidof.h) \
    $(wildcard include/config/sestatus.h) \
    $(wildcard include/config/unicode/support.h) \
    $(wildcard include/config/feature/mtab/support.h) \
    $(wildcard include/config/feature/clean/up.h) \
    $(wildcard include/config/feature/devfs.h) \
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
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/ctype.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/locale_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__locale_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/dirent.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/dirent.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/dirent_ext.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/errno.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/errno.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/errno.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/errno.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno-base.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/error_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/fcntl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/fcntl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/fcntl-linux.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_iovec.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/falloc.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_timespec.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/time_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stat.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/struct_stat.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/fcntl2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/inttypes.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/netdb.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/netinet/in.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/socket.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/socket.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/clock_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/clockid_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/timer_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/select.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/select.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/sigset_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__sigset_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_timeval.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/select2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/thread-shared-types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/pthreadtypes-arch.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/atomic_wide_counter.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/struct_mutex.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/struct_rwlock.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/socket_type.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sockaddr.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/socket.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/socket.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/sockios.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/sockios.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_osockaddr.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/socket2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/in.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/rpc/netdb.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/sigevent_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__sigval_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/netdb.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/setjmp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/setjmp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct___jmp_buf_tag.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/setjmp2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/signal.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/signum-generic.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/signum-arch.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/sig_atomic_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/siginfo_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/siginfo-arch.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/siginfo-consts.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/siginfo-consts-arch.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/sigval_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigevent-consts.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigaction.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigcontext.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/stack_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/ucontext.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigstack.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigstksz.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/ss_flags.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_sigstack.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sigthread.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/signal_ext.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/paths.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdio.h \
  /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdarg.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__fpos_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__mbstate_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__fpos64_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/__FILE.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/FILE.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_FILE.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/cookie_io_functions_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdio_lim.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/floatn.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/floatn-common.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdio2-decl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdio2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/stdlib.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/waitflags.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/waitstatus.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/alloca.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdlib-float.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/stdlib.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/string.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/strings.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/strings_fortified.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/string_fortified.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/libgen.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/poll.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/poll.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/poll.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/poll2.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/ioctl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/ioctls.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/ioctls.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/ioctls.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/ioctl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/ioctl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/ioctl.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/ioctl-types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/ttydefaults.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/mman.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/mman.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/mman-map-flags-generic.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/mman-linux.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/mman-shared.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/mman_ext.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/resource.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/resource.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_rusage.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/stat.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/statx.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/stat.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/int-ll64.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/bitsperlong.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/posix_types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/stddef.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/posix_types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/posix_types_32.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/posix_types.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/statx-generic.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_statx_timestamp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_statx.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/time.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/sysmacros.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/sysmacros.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/wait.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/idtype_t.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/termios.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-struct.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-c_cc.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-c_iflag.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-c_oflag.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-baud.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-c_cflag.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-c_lflag.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-tcflow.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/termios-misc.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/time.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/time.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/timex.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_tm.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/types/struct_itimerspec.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/param.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/param.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/param.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/param.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/param.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/pwd.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/grp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/shadow.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/mntent.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/sys/statfs.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/statfs.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/utmp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/utmp.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/utmpx.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/bits/utmpx.h \
  /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/arpa/inet.h \
  include/xatonum.h \

coreutils/dirname.o: $(deps_coreutils/dirname.o)

$(deps_coreutils/dirname.o):
