Kitware maintains this branch of Ninja in order to provide features
that have not yet been integrated upstream:

* make-style jobserver support

This branch may be *rebased* without notice for maintenance on top of
the upstream `master` branch.  It will be removed once upstream has
integrated the features.

Parts of this branch are under upstream consideration:

* https://github.com/ninja-build/ninja/pull/1140

As each PR is accepted additional parts of this branch will be submitted
incrementally.

Binaries built from versions of this branch are available here:

* https://github.com/Kitware/ninja/releases

-----------------------------------------------------------------------------

# Ninja

Ninja is a small build system with a focus on speed.
https://ninja-build.org/

See [the manual](https://ninja-build.org/manual.html) or
`doc/manual.asciidoc` included in the distribution for background
and more details.

Binaries for Linux, Mac, and Windows are available at
  [GitHub](https://github.com/ninja-build/ninja/releases).
Run `./ninja -h` for Ninja help.

Installation is not necessary because the only required file is the
resulting ninja binary. However, to enable features like Bash
completion and Emacs and Vim editing modes, some files in misc/ must be
copied to appropriate locations.

If you're interested in making changes to Ninja, read
[CONTRIBUTING.md](CONTRIBUTING.md) first.

## Building Ninja itself

You can either build Ninja via the custom generator script written in Python or
via CMake. For more details see
[the wiki](https://github.com/ninja-build/ninja/wiki).

### Python

```
./configure.py --bootstrap
```

This will generate the `ninja` binary and a `build.ninja` file you can now use
to build Ninja with itself.

### CMake

```
cmake -Bbuild-cmake
cmake --build build-cmake
```

The `ninja` binary will now be inside the `build-cmake` directory (you can
choose any other name you like).

To run the unit tests:

```
./build-cmake/ninja_test
```
