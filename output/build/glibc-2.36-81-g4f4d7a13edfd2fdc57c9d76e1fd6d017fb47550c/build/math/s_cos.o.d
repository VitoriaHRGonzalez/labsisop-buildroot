$(common-objpfx)math/s_cos.o: \
 ../sysdeps/ieee754/dbl-64/s_cos.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/i386/symbol-hacks.h \
 ../sysdeps/wordsize-32/divdi3-symbol-hacks.h \
 ../sysdeps/generic/symbol-hacks.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/i386/symbol-hacks.h:
../sysdeps/wordsize-32/divdi3-symbol-hacks.h:
../sysdeps/generic/symbol-hacks.h:
