# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.36
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /usr
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
bindir = ${exec_prefix}/bin
slibdir = /lib
rtlddir = /lib
complocaledir = ${exec_prefix}/lib/locale
sysconfdir = /etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = /sbin
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = /var
localedir = ${datarootdir}/locale
multidir= .

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = sysdeps/unix/sysv/linux/ldd-rewrite.sed

# System configuration.
config-machine = i686
base-machine = i386
config-vendor = buildroot
config-os = linux-gnu
config-sysdirs =  sysdeps/unix/sysv/linux/i386/i686 sysdeps/i386/i686/nptl sysdeps/unix/sysv/linux/i386 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/i386/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/i386 sysdeps/unix sysdeps/posix sysdeps/i386/i686/fpu/multiarch sysdeps/i386/i686/fpu sysdeps/i386/i686/multiarch sysdeps/i386/i686 sysdeps/i386/fpu sysdeps/x86/fpu sysdeps/i386 sysdeps/x86 sysdeps/wordsize-32 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include
sysincludes = -nostdinc -isystem /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include -isystem /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/include-fixed -isystem /workspaces/labsisop-buildroot/output/host/i686-buildroot-linux-gnu/sysroot/usr/include
c++-sysincludes = 
c++-cstdlib-header = 
c++-cmath-header = 
c++-bits-std_abs-h = 
all-warnings = 
enable-werror = no

have-z-execstack = yes
have-protected-data = yes
have-insert = no
have-glob-dat-reloc = yes
with-fp = yes
enable-timezone-tools = yes
unwind-find-fde = yes
have-fpie = yes
have-ssp = no
stack-protector = -fno-stack-protector
no-stack-protector = 
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
bind-now = no
use-default-link = no
have-cxx-thread_local = no
have-loop-to-function = yes
have-textrel_ifunc = yes

multi-arch = default

mach-interface-list = 

experimental-malloc = yes

memory-tagging = no

nss-crypt = no
static-nss-crypt = no

# Configuration options.
build-shared = yes
build-profile = no
build-static-nss = no
cross-compiling = yes
force-install = yes
build-crypt = yes
build-nscd = yes
use-nscd = yes
build-hardcoded-path-in-tests= no
build-pt-chown = no
have-tunables = yes
pthread-in-libc = yes

# Build tools.
CC = /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-gcc
CXX = 
BUILD_CC = gcc
CFLAGS = -Os -fno-lto
CPPFLAGS-config = 
CPPUNDEFS = 
extra-nonshared-cflags = 
rtld-early-cflags = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/../../../../i686-buildroot-linux-gnu/bin/ar
NM = /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-gcc-nm
MAKEINFO = :
AS = $(CC) -c
BISON = bison
AUTOCONF = no
OBJDUMP = /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/../../../../i686-buildroot-linux-gnu/bin/objdump
OBJCOPY = /workspaces/labsisop-buildroot/output/host/lib/gcc/i686-buildroot-linux-gnu/11.3.0/../../../../i686-buildroot-linux-gnu/bin/objcopy
GPROF = gprof
READELF = /workspaces/labsisop-buildroot/output/host/bin/i686-buildroot-linux-gnu-readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = no
LN_S = ln -s
MSGFMT = msgfmt

# Script execution tools.
BASH = /bin/sh
AWK = gawk
PERL = /usr/bin/perl
PYTHON = python3 -B

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (Buildroot) 
PKGVERSION_TEXI = (Buildroot) 
REPORT_BUGS_TO = <https://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{https://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

have-gnu-retain = no
with-lld = no
have-z-start-stop-gc = yes
have-depaudit = yes
have-dt-relr = yes
have-no-dynamic-linker = yes
have-static-pie = yes
have-mtls-dialect-gnu2 = yes
enable-cet = no
enable-x86-isa-level = yes
build-mathvec = no
have-ifunc = yes
have-gcc-ifunc = yes
build-pic-default = yes
cc-pie-default = yes
build-pie-default = yes
enable-static-pie = yes
