srcdir = /workspaces/labsisop-buildroot/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c

# Uncomment the line below if you want to do parallel build.
# PARALLELMFLAGS = -j 4

.PHONY: all install bench

all .DEFAULT:
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

install:
	LC_ALL=C; export LC_ALL; \
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

bench bench-clean bench-build:
	$(MAKE) -C $(srcdir)/benchtests $(PARALLELMFLAGS) objdir=`pwd` $@

# Convenience target to rebuild ULPs for all math tests.
regen-ulps:
	$(MAKE) -C $(srcdir)/math $(PARALLELMFLAGS) objdir=`pwd` $@
