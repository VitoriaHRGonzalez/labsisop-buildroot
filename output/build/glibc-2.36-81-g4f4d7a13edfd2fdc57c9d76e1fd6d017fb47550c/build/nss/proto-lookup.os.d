$(common-objpfx)nss/proto-lookup.os: \
 proto-lookup.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/i386/symbol-hacks.h \
 ../sysdeps/wordsize-32/divdi3-symbol-hacks.h \
 ../sysdeps/generic/symbol-hacks.h XXX-lookup.c ../include/assert.h \
 ../assert/assert.h ../include/features.h ../include/features-time64.h \
 ../sysdeps/unix/sysv/linux/features-time64.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/unix/sysv/linux/x86/bits/timesize.h ../include/stdc-predef.h \
 ../include/sys/cdefs.h ../misc/sys/cdefs.h \
 ../sysdeps/ieee754/ldbl-96/bits/long-double.h ../include/gnu/stubs.h \
 nsswitch.h ../include/arpa/nameser.h ../resolv/arpa/nameser.h \
 ../include/sys/param.h ../misc/sys/param.h \
 /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stddef.h \
 ../include/sys/types.h ../posix/sys/types.h ../include/bits/types.h \
 ../posix/bits/types.h ../sysdeps/unix/sysv/linux/x86/bits/typesizes.h \
 ../bits/time64.h ../include/bits/types/clock_t.h \
 ../time/bits/types/clock_t.h ../include/bits/types/clockid_t.h \
 ../time/bits/types/clockid_t.h ../include/bits/types/time_t.h \
 ../time/bits/types/time_t.h ../include/bits/types/timer_t.h \
 ../time/bits/types/timer_t.h ../bits/stdint-intn.h ../include/endian.h \
 ../string/endian.h ../include/bits/endian.h ../string/bits/endian.h \
 ../sysdeps/x86/bits/endianness.h ../bits/byteswap.h \
 ../bits/uintn-identity.h ../include/sys/select.h ../misc/sys/select.h \
 ../bits/select.h ../include/bits/types/sigset_t.h \
 ../signal/bits/types/sigset_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h \
 ../include/bits/types/struct_timeval.h \
 ../time/bits/types/struct_timeval.h \
 ../include/bits/types/struct_timespec.h \
 ../time/bits/types/struct_timespec.h ../include/struct___timespec64.h \
 ../include/struct___timeval64.h ../sysdeps/nptl/bits/pthreadtypes.h \
 ../sysdeps/nptl/bits/thread-shared-types.h \
 ../sysdeps/x86/nptl/bits/pthreadtypes-arch.h \
 ../include/bits/atomic_wide_counter.h ../bits/atomic_wide_counter.h \
 ../sysdeps/x86/nptl/bits/struct_mutex.h \
 ../sysdeps/x86/nptl/bits/struct_rwlock.h ../include/limits.h \
 ../bits/libc-header-start.h \
 /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../sysdeps/unix/sysv/linux/bits/local_lim.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/limits.h \
 ../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h \
 ../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h \
 ../include/bits/posix2_lim.h ../posix/bits/posix2_lim.h \
 ../include/bits/xopen_lim.h ../sysdeps/unix/sysv/linux/bits/uio_lim.h \
 ../include/signal.h ../signal/signal.h ../bits/signum-generic.h \
 ../sysdeps/unix/sysv/linux/bits/signum-arch.h \
 ../include/bits/types/sig_atomic_t.h ../signal/bits/types/sig_atomic_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h \
 ../include/bits/types/__sigval_t.h ../signal/bits/types/__sigval_t.h \
 ../sysdeps/unix/sysv/linux/x86/bits/siginfo-arch.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h \
 ../include/bits/types/sigval_t.h ../signal/bits/types/sigval_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h \
 ../sysdeps/unix/sysv/linux/bits/sigevent-consts.h \
 ../sysdeps/unix/sysv/linux/bits/sigaction.h \
 ../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h \
 ../sysdeps/unix/sysv/linux/bits/types/stack_t.h \
 ../sysdeps/unix/sysv/linux/x86/sys/ucontext.h ../include/bits/sigstack.h \
 ../sysdeps/unix/sysv/linux/x86/include/bits/sigstack.h \
 ../sysdeps/unix/sysv/linux/bits/sigstack.h ../include/bits/sigstksz.h \
 ../sysdeps/unix/sysv/linux/bits/ss_flags.h \
 ../include/bits/types/struct_sigstack.h \
 ../signal/bits/types/struct_sigstack.h \
 ../sysdeps/pthread/bits/sigthread.h \
 ../sysdeps/unix/sysv/linux/bits/signal_ext.h \
 ../sysdeps/unix/sysv/linux/sigsetops.h ../include/libc-pointer-arith.h \
 ../include/stdint.h ../stdlib/stdint.h ../bits/wchar.h \
 ../bits/stdint-uintn.h ../sysdeps/unix/sysv/linux/bits/param.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/param.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/param.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/param.h \
 ../include/arpa/nameser_compat.h ../resolv/arpa/nameser_compat.h \
 ../include/string.h ../include/locale.h ../locale/locale.h \
 ../include/bits/locale.h ../locale/bits/locale.h \
 ../include/bits/types/locale_t.h ../locale/bits/types/locale_t.h \
 ../include/bits/types/__locale_t.h ../locale/bits/types/__locale_t.h \
 ../sysdeps/x86/string_private.h ../string/string.h ../include/strings.h \
 ../string/strings.h ../include/netinet/in.h ../inet/netinet/in.h \
 ../include/sys/socket.h ../socket/sys/socket.h \
 ../include/bits/types/struct_iovec.h ../misc/bits/types/struct_iovec.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h \
 ../sysdeps/unix/sysv/linux/bits/socket_type.h ../bits/sockaddr.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/socket.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/socket.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/sockios.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/sockios.h \
 ../include/bits/types/struct_osockaddr.h \
 ../socket/bits/types/struct_osockaddr.h \
 ../sysdeps/unix/sysv/linux/bits/in.h ../include/nss.h ../nss/nss.h \
 ../include/resolv.h \
 /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdbool.h \
 ../resolv/resolv.h ../include/stdio.h ../sysdeps/x86/bits/floatn.h \
 ../bits/floatn-common.h ../libio/stdio.h \
 /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdarg.h \
 ../include/bits/types/__fpos_t.h ../libio/bits/types/__fpos_t.h \
 ../include/bits/types/__mbstate_t.h ../wcsmbs/bits/types/__mbstate_t.h \
 ../include/bits/types/__fpos64_t.h ../libio/bits/types/__fpos64_t.h \
 ../include/bits/types/__FILE.h ../libio/bits/types/__FILE.h \
 ../include/bits/types/FILE.h ../libio/bits/types/FILE.h \
 ../include/bits/types/struct_FILE.h ../libio/bits/types/struct_FILE.h \
 ../include/bits/types/cookie_io_functions_t.h \
 ../libio/bits/types/cookie_io_functions_t.h \
 $(common-objpfx)bits/stdio_lim.h \
 ../libio/libio.h ../include/bits/types/wint_t.h \
 ../wcsmbs/bits/types/wint_t.h ../include/gconv.h ../iconv/gconv.h \
 ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h \
 ../include/bits/types/res_state.h ../resolv/bits/types/res_state.h \
 ../include/search.h ../misc/search.h ../include/dlfcn.h ../dlfcn/dlfcn.h \
 ../include/bits/dlfcn.h ../bits/dlfcn.h ../include/bits/dl_find_object.h \
 ../sysdeps/x86/bits/dl_find_object.h ../include/link.h ../elf/link.h \
 ../include/elf.h ../elf/elf.h ../sysdeps/generic/dl-dtprocnum.h \
 ../bits/elfclass.h ../sysdeps/x86/bits/link.h ../bits/link_lavcurrent.h \
 ../sysdeps/x86/linkmap.h ../sysdeps/posix/dl-fileid.h \
 ../include/sys/stat.h ../io/sys/stat.h \
 ../sysdeps/unix/sysv/linux/bits/stat.h \
 ../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h \
 ../include/bits/statx.h ../io/bits/statx.h \
 ../include/bits/statx-generic.h ../io/bits/statx-generic.h \
 ../include/bits/types/struct_statx_timestamp.h \
 ../io/bits/types/struct_statx_timestamp.h \
 ../include/bits/types/struct_statx.h ../io/bits/types/struct_statx.h \
 ../sysdeps/unix/sysv/linux/x86/xstatver.h \
 ../sysdeps/unix/sysv/linux/struct_stat_time64.h \
 ../sysdeps/unix/sysv/linux/bits/struct_stat_time64_helper.h \
 ../sysdeps/x86/dl-lookupcfg.h ../sysdeps/generic/dl-lookupcfg.h \
 ../sysdeps/i386/i686/nptl/tls.h ../sysdeps/i386/nptl/tls.h \
 ../sysdeps/unix/sysv/linux/i386/i686/dl-sysdep.h \
 ../sysdeps/unix/sysv/linux/i386/dl-sysdep.h \
 ../sysdeps/unix/sysv/linux/dl-sysdep.h ../sysdeps/generic/dl-sysdep.h \
 ../include/stdlib.h ../stdlib/stdlib.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/alloca.h ../stdlib/alloca.h ../include/stackinfo.h \
 ../sysdeps/i386/stackinfo.h ../sysdeps/pthread/allocalim.h \
 ../include/bits/stdlib-float.h ../stdlib/bits/stdlib-float.h \
 ../include/rtld-malloc.h ../sysdeps/unix/sysv/linux/i386/sysdep.h \
 ../sysdeps/unix/sysv/linux/sysdep.h \
 ../sysdeps/unix/sysv/linux/i386/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h ../include/errno.h \
 ../stdlib/errno.h ../sysdeps/unix/sysv/linux/bits/errno.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/errno.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/errno.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno.h \
 /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno-base.h \
 ../bits/types/error_t.h ../sysdeps/unix/i386/sysdep.h \
 ../sysdeps/unix/sysdep.h ../sysdeps/generic/sysdep.h \
 ../sysdeps/generic/dwarf2.h ../sysdeps/unix/sysv/linux/single-thread.h \
 ../include/sys/single_threaded.h ../misc/sys/single_threaded.h \
 ../sysdeps/unix/sysv/linux/include/sys/syscall.h \
 ../sysdeps/unix/sysv/linux/i386/arch-syscall.h ../sysdeps/i386/sysdep.h \
 ../sysdeps/x86/sysdep.h ../sysdeps/generic/dl-dtv.h ../nptl/descr.h \
 ../include/sched.h ../posix/sched.h \
 ../sysdeps/unix/sysv/linux/bits/sched.h \
 ../bits/types/struct_sched_param.h ../include/bits/cpu-set.h \
 ../posix/bits/cpu-set.h ../include/setjmp.h ../setjmp/setjmp.h \
 ../sysdeps/x86/bits/setjmp.h \
 ../include/bits/types/struct___jmp_buf_tag.h \
 ../setjmp/bits/types/struct___jmp_buf_tag.h ../sysdeps/x86/hp-timing.h \
 ../sysdeps/i386/i686/isa.h ../sysdeps/generic/hp-timing-common.h \
 ../sysdeps/generic/_itoa.h ../include/list_t.h \
 ../sysdeps/nptl/lowlevellock.h ../include/atomic.h \
 ../sysdeps/x86/atomic-machine.h \
 ../sysdeps/unix/sysv/linux/x86/elision-conf.h ../include/pthread.h \
 ../sysdeps/nptl/pthread.h ../include/time.h ../time/time.h \
 ../sysdeps/unix/sysv/linux/bits/time.h \
 ../sysdeps/unix/sysv/linux/bits/timex.h \
 ../include/bits/types/struct_tm.h ../time/bits/types/struct_tm.h \
 ../include/bits/types/struct_itimerspec.h \
 ../time/bits/types/struct_itimerspec.h ../time/mktime-internal.h \
 ../include/sys/time.h ../time/sys/time.h \
 ../sysdeps/unix/sysv/linux/time-clockid.h \
 ../sysdeps/nptl/lowlevellock-futex.h \
 ../sysdeps/unix/sysv/linux/sysdep-cancel.h \
 ../sysdeps/x86/nptl/pthreaddef.h ../sysdeps/nptl/thread_db.h \
 ../sysdeps/unix/sysv/linux/sys/procfs.h \
 ../sysdeps/unix/sysv/linux/x86/sys/user.h \
 ../sysdeps/unix/sysv/linux/x86/bits/procfs.h \
 ../sysdeps/unix/sysv/linux/x86/bits/procfs-id.h \
 ../sysdeps/unix/sysv/linux/bits/procfs-prregset.h \
 ../sysdeps/unix/sysv/linux/bits/procfs-extra.h \
 ../sysdeps/generic/unwind.h ../sysdeps/generic/tls-internal-struct.h \
 ../sysdeps/unix/sysv/linux/sys/rseq.h \
 ../sysdeps/unix/sysv/linux/x86/bits/rseq.h \
 ../sysdeps/unix/sysv/linux/internal-sigset.h \
 ../sysdeps/i386/nptl/tcb-access.h ../sysdeps/nptl/libc-lock.h \
 ../sysdeps/generic/libc-lock-arch.h ../sysdeps/nptl/libc-lockP.h \
 ../sysdeps/x86/link_map.h ../sysdeps/generic/link_map.h \
 ../sysdeps/generic/dl-relocate-ld.h databases.def ../nss/nss_module.h \
 ../nss/function.def ../nss/nss_action.h ../nss/nsswitch.h \
 ../nss/nss_database.h ../include/file_change_detection.h \
 ../nss/nss_action.h ../nss/databases.def
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/i386/symbol-hacks.h:
../sysdeps/wordsize-32/divdi3-symbol-hacks.h:
../sysdeps/generic/symbol-hacks.h:
XXX-lookup.c:
../include/assert.h:
../assert/assert.h:
../include/features.h:
../include/features-time64.h:
../sysdeps/unix/sysv/linux/features-time64.h:
../sysdeps/x86/bits/wordsize.h:
../sysdeps/unix/sysv/linux/x86/bits/timesize.h:
../include/stdc-predef.h:
../include/sys/cdefs.h:
../misc/sys/cdefs.h:
../sysdeps/ieee754/ldbl-96/bits/long-double.h:
../include/gnu/stubs.h:
nsswitch.h:
../include/arpa/nameser.h:
../resolv/arpa/nameser.h:
../include/sys/param.h:
../misc/sys/param.h:
/workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stddef.h:
../include/sys/types.h:
../posix/sys/types.h:
../include/bits/types.h:
../posix/bits/types.h:
../sysdeps/unix/sysv/linux/x86/bits/typesizes.h:
../bits/time64.h:
../include/bits/types/clock_t.h:
../time/bits/types/clock_t.h:
../include/bits/types/clockid_t.h:
../time/bits/types/clockid_t.h:
../include/bits/types/time_t.h:
../time/bits/types/time_t.h:
../include/bits/types/timer_t.h:
../time/bits/types/timer_t.h:
../bits/stdint-intn.h:
../include/endian.h:
../string/endian.h:
../include/bits/endian.h:
../string/bits/endian.h:
../sysdeps/x86/bits/endianness.h:
../bits/byteswap.h:
../bits/uintn-identity.h:
../include/sys/select.h:
../misc/sys/select.h:
../bits/select.h:
../include/bits/types/sigset_t.h:
../signal/bits/types/sigset_t.h:
../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h:
../include/bits/types/struct_timeval.h:
../time/bits/types/struct_timeval.h:
../include/bits/types/struct_timespec.h:
../time/bits/types/struct_timespec.h:
../include/struct___timespec64.h:
../include/struct___timeval64.h:
../sysdeps/nptl/bits/pthreadtypes.h:
../sysdeps/nptl/bits/thread-shared-types.h:
../sysdeps/x86/nptl/bits/pthreadtypes-arch.h:
../include/bits/atomic_wide_counter.h:
../bits/atomic_wide_counter.h:
../sysdeps/x86/nptl/bits/struct_mutex.h:
../sysdeps/x86/nptl/bits/struct_rwlock.h:
../include/limits.h:
../bits/libc-header-start.h:
/workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include-fixed/limits.h:
../include/bits/posix1_lim.h:
../posix/bits/posix1_lim.h:
../sysdeps/unix/sysv/linux/bits/local_lim.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/limits.h:
../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h:
../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h:
../include/bits/posix2_lim.h:
../posix/bits/posix2_lim.h:
../include/bits/xopen_lim.h:
../sysdeps/unix/sysv/linux/bits/uio_lim.h:
../include/signal.h:
../signal/signal.h:
../bits/signum-generic.h:
../sysdeps/unix/sysv/linux/bits/signum-arch.h:
../include/bits/types/sig_atomic_t.h:
../signal/bits/types/sig_atomic_t.h:
../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h:
../include/bits/types/__sigval_t.h:
../signal/bits/types/__sigval_t.h:
../sysdeps/unix/sysv/linux/x86/bits/siginfo-arch.h:
../sysdeps/unix/sysv/linux/bits/siginfo-consts.h:
../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h:
../include/bits/types/sigval_t.h:
../signal/bits/types/sigval_t.h:
../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h:
../sysdeps/unix/sysv/linux/bits/sigevent-consts.h:
../sysdeps/unix/sysv/linux/bits/sigaction.h:
../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h:
../sysdeps/unix/sysv/linux/bits/types/stack_t.h:
../sysdeps/unix/sysv/linux/x86/sys/ucontext.h:
../include/bits/sigstack.h:
../sysdeps/unix/sysv/linux/x86/include/bits/sigstack.h:
../sysdeps/unix/sysv/linux/bits/sigstack.h:
../include/bits/sigstksz.h:
../sysdeps/unix/sysv/linux/bits/ss_flags.h:
../include/bits/types/struct_sigstack.h:
../signal/bits/types/struct_sigstack.h:
../sysdeps/pthread/bits/sigthread.h:
../sysdeps/unix/sysv/linux/bits/signal_ext.h:
../sysdeps/unix/sysv/linux/sigsetops.h:
../include/libc-pointer-arith.h:
../include/stdint.h:
../stdlib/stdint.h:
../bits/wchar.h:
../bits/stdint-uintn.h:
../sysdeps/unix/sysv/linux/bits/param.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/param.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/param.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/param.h:
../include/arpa/nameser_compat.h:
../resolv/arpa/nameser_compat.h:
../include/string.h:
../include/locale.h:
../locale/locale.h:
../include/bits/locale.h:
../locale/bits/locale.h:
../include/bits/types/locale_t.h:
../locale/bits/types/locale_t.h:
../include/bits/types/__locale_t.h:
../locale/bits/types/__locale_t.h:
../sysdeps/x86/string_private.h:
../string/string.h:
../include/strings.h:
../string/strings.h:
../include/netinet/in.h:
../inet/netinet/in.h:
../include/sys/socket.h:
../socket/sys/socket.h:
../include/bits/types/struct_iovec.h:
../misc/bits/types/struct_iovec.h:
../sysdeps/unix/sysv/linux/bits/socket.h:
../sysdeps/unix/sysv/linux/bits/socket_type.h:
../bits/sockaddr.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/socket.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/socket.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/sockios.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/sockios.h:
../include/bits/types/struct_osockaddr.h:
../socket/bits/types/struct_osockaddr.h:
../sysdeps/unix/sysv/linux/bits/in.h:
../include/nss.h:
../nss/nss.h:
../include/resolv.h:
/workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdbool.h:
../resolv/resolv.h:
../include/stdio.h:
../sysdeps/x86/bits/floatn.h:
../bits/floatn-common.h:
../libio/stdio.h:
/workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include/stdarg.h:
../include/bits/types/__fpos_t.h:
../libio/bits/types/__fpos_t.h:
../include/bits/types/__mbstate_t.h:
../wcsmbs/bits/types/__mbstate_t.h:
../include/bits/types/__fpos64_t.h:
../libio/bits/types/__fpos64_t.h:
../include/bits/types/__FILE.h:
../libio/bits/types/__FILE.h:
../include/bits/types/FILE.h:
../libio/bits/types/FILE.h:
../include/bits/types/struct_FILE.h:
../libio/bits/types/struct_FILE.h:
../include/bits/types/cookie_io_functions_t.h:
../libio/bits/types/cookie_io_functions_t.h:
$(common-objpfx)bits/stdio_lim.h:
../libio/libio.h:
../include/bits/types/wint_t.h:
../wcsmbs/bits/types/wint_t.h:
../include/gconv.h:
../iconv/gconv.h:
../include/shlib-compat.h:
$(common-objpfx)abi-versions.h:
../include/bits/types/res_state.h:
../resolv/bits/types/res_state.h:
../include/search.h:
../misc/search.h:
../include/dlfcn.h:
../dlfcn/dlfcn.h:
../include/bits/dlfcn.h:
../bits/dlfcn.h:
../include/bits/dl_find_object.h:
../sysdeps/x86/bits/dl_find_object.h:
../include/link.h:
../elf/link.h:
../include/elf.h:
../elf/elf.h:
../sysdeps/generic/dl-dtprocnum.h:
../bits/elfclass.h:
../sysdeps/x86/bits/link.h:
../bits/link_lavcurrent.h:
../sysdeps/x86/linkmap.h:
../sysdeps/posix/dl-fileid.h:
../include/sys/stat.h:
../io/sys/stat.h:
../sysdeps/unix/sysv/linux/bits/stat.h:
../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h:
../include/bits/statx.h:
../io/bits/statx.h:
../include/bits/statx-generic.h:
../io/bits/statx-generic.h:
../include/bits/types/struct_statx_timestamp.h:
../io/bits/types/struct_statx_timestamp.h:
../include/bits/types/struct_statx.h:
../io/bits/types/struct_statx.h:
../sysdeps/unix/sysv/linux/x86/xstatver.h:
../sysdeps/unix/sysv/linux/struct_stat_time64.h:
../sysdeps/unix/sysv/linux/bits/struct_stat_time64_helper.h:
../sysdeps/x86/dl-lookupcfg.h:
../sysdeps/generic/dl-lookupcfg.h:
../sysdeps/i386/i686/nptl/tls.h:
../sysdeps/i386/nptl/tls.h:
../sysdeps/unix/sysv/linux/i386/i686/dl-sysdep.h:
../sysdeps/unix/sysv/linux/i386/dl-sysdep.h:
../sysdeps/unix/sysv/linux/dl-sysdep.h:
../sysdeps/generic/dl-sysdep.h:
../include/stdlib.h:
../stdlib/stdlib.h:
../sysdeps/unix/sysv/linux/bits/waitflags.h:
../bits/waitstatus.h:
../include/alloca.h:
../stdlib/alloca.h:
../include/stackinfo.h:
../sysdeps/i386/stackinfo.h:
../sysdeps/pthread/allocalim.h:
../include/bits/stdlib-float.h:
../stdlib/bits/stdlib-float.h:
../include/rtld-malloc.h:
../sysdeps/unix/sysv/linux/i386/sysdep.h:
../sysdeps/unix/sysv/linux/sysdep.h:
../sysdeps/unix/sysv/linux/i386/kernel-features.h:
../sysdeps/unix/sysv/linux/kernel-features.h:
../include/errno.h:
../stdlib/errno.h:
../sysdeps/unix/sysv/linux/bits/errno.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/linux/errno.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm/errno.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno.h:
/workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno-base.h:
../bits/types/error_t.h:
../sysdeps/unix/i386/sysdep.h:
../sysdeps/unix/sysdep.h:
../sysdeps/generic/sysdep.h:
../sysdeps/generic/dwarf2.h:
../sysdeps/unix/sysv/linux/single-thread.h:
../include/sys/single_threaded.h:
../misc/sys/single_threaded.h:
../sysdeps/unix/sysv/linux/include/sys/syscall.h:
../sysdeps/unix/sysv/linux/i386/arch-syscall.h:
../sysdeps/i386/sysdep.h:
../sysdeps/x86/sysdep.h:
../sysdeps/generic/dl-dtv.h:
../nptl/descr.h:
../include/sched.h:
../posix/sched.h:
../sysdeps/unix/sysv/linux/bits/sched.h:
../bits/types/struct_sched_param.h:
../include/bits/cpu-set.h:
../posix/bits/cpu-set.h:
../include/setjmp.h:
../setjmp/setjmp.h:
../sysdeps/x86/bits/setjmp.h:
../include/bits/types/struct___jmp_buf_tag.h:
../setjmp/bits/types/struct___jmp_buf_tag.h:
../sysdeps/x86/hp-timing.h:
../sysdeps/i386/i686/isa.h:
../sysdeps/generic/hp-timing-common.h:
../sysdeps/generic/_itoa.h:
../include/list_t.h:
../sysdeps/nptl/lowlevellock.h:
../include/atomic.h:
../sysdeps/x86/atomic-machine.h:
../sysdeps/unix/sysv/linux/x86/elision-conf.h:
../include/pthread.h:
../sysdeps/nptl/pthread.h:
../include/time.h:
../time/time.h:
../sysdeps/unix/sysv/linux/bits/time.h:
../sysdeps/unix/sysv/linux/bits/timex.h:
../include/bits/types/struct_tm.h:
../time/bits/types/struct_tm.h:
../include/bits/types/struct_itimerspec.h:
../time/bits/types/struct_itimerspec.h:
../time/mktime-internal.h:
../include/sys/time.h:
../time/sys/time.h:
../sysdeps/unix/sysv/linux/time-clockid.h:
../sysdeps/nptl/lowlevellock-futex.h:
../sysdeps/unix/sysv/linux/sysdep-cancel.h:
../sysdeps/x86/nptl/pthreaddef.h:
../sysdeps/nptl/thread_db.h:
../sysdeps/unix/sysv/linux/sys/procfs.h:
../sysdeps/unix/sysv/linux/x86/sys/user.h:
../sysdeps/unix/sysv/linux/x86/bits/procfs.h:
../sysdeps/unix/sysv/linux/x86/bits/procfs-id.h:
../sysdeps/unix/sysv/linux/bits/procfs-prregset.h:
../sysdeps/unix/sysv/linux/bits/procfs-extra.h:
../sysdeps/generic/unwind.h:
../sysdeps/generic/tls-internal-struct.h:
../sysdeps/unix/sysv/linux/sys/rseq.h:
../sysdeps/unix/sysv/linux/x86/bits/rseq.h:
../sysdeps/unix/sysv/linux/internal-sigset.h:
../sysdeps/i386/nptl/tcb-access.h:
../sysdeps/nptl/libc-lock.h:
../sysdeps/generic/libc-lock-arch.h:
../sysdeps/nptl/libc-lockP.h:
../sysdeps/x86/link_map.h:
../sysdeps/generic/link_map.h:
../sysdeps/generic/dl-relocate-ld.h:
databases.def:
../nss/nss_module.h:
../nss/function.def:
../nss/nss_action.h:
../nss/nsswitch.h:
../nss/nss_database.h:
../include/file_change_detection.h:
../nss/nss_action.h:
../nss/databases.def:
