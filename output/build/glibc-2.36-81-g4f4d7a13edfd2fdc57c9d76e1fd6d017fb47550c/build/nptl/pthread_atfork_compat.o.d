$(common-objpfx)nptl/pthread_atfork_compat.o: \
 ../sysdeps/pthread/pthread_atfork_compat.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/i386/symbol-hacks.h \
 ../sysdeps/wordsize-32/divdi3-symbol-hacks.h \
 ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/nptl/pthread_atfork_compat.h ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/i386/symbol-hacks.h:
../sysdeps/wordsize-32/divdi3-symbol-hacks.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/nptl/pthread_atfork_compat.h:
../include/shlib-compat.h:
$(common-objpfx)abi-versions.h:
