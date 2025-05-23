# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-1997, 2000-2007, 2009-2010 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file can be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU General Public
# License but which still want to provide support for the GNU gettext
# functionality.
# Please note that the actual code of GNU gettext is covered by the GNU
# General Public License and is *not* in the public domain.
#
# Origin: gettext-0.18.3
GETTEXT_MACRO_VERSION = 0.18

PACKAGE = util-linux
VERSION = 2.38
PACKAGE_BUGREPORT = kzak@redhat.com

SED = /usr/bin/sed
SHELL = /bin/sh


srcdir = .
top_srcdir = ..


prefix = /workspaces/labsisop-buildroot/output/host
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

# We use $(mkdir_p).
# In automake <= 1.9.x, $(mkdir_p) is defined either as "mkdir -p --" or as
# "$(mkinstalldirs)" or as "$(install_sh) -d". For these automake versions,
# ${SHELL} /workspaces/labsisop-buildroot/output/build/host-util-linux-2.38/config/install-sh does not start with $(SHELL), so we add it.
# In automake >= 1.10, $(MKDIR_P) is derived from ${MKDIR_P}, which is defined
# either as "/path/to/mkdir -p" or ".../install-sh -c -d". For these automake
# versions, $(mkinstalldirs) and $(install_sh) are unused.
mkinstalldirs = $(SHELL) ${SHELL} /workspaces/labsisop-buildroot/output/build/host-util-linux-2.38/config/install-sh -d
install_sh = $(SHELL) ${SHELL} /workspaces/labsisop-buildroot/output/build/host-util-linux-2.38/config/install-sh
MKDIR_P = /usr/bin/mkdir -p
mkdir_p = $(MKDIR_P)

GMSGFMT_ = /usr/bin/msgfmt
GMSGFMT_no = /usr/bin/msgfmt
GMSGFMT_yes = /usr/bin/msgfmt
GMSGFMT = $(GMSGFMT_$(USE_MSGCTXT))
MSGFMT_ = /usr/bin/msgfmt
MSGFMT_no = /usr/bin/msgfmt
MSGFMT_yes = /usr/bin/msgfmt
MSGFMT = $(MSGFMT_$(USE_MSGCTXT))
XGETTEXT_ = /usr/bin/xgettext
XGETTEXT_no = /usr/bin/xgettext
XGETTEXT_yes = /usr/bin/xgettext
XGETTEXT = $(XGETTEXT_$(USE_MSGCTXT))
MSGMERGE = msgmerge
MSGMERGE_UPDATE = /usr/bin/msgmerge --update
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POFILES =  ca.po cs.po da.po de.po es.po et.po eu.po fi.po fr.po gl.po hr.po hu.po id.po it.po ja.po nl.po pl.po pt_BR.po pt.po ru.po sl.po sv.po tr.po uk.po vi.po zh_CN.po zh_TW.po
GMOFILES =  ca.gmo cs.gmo da.gmo de.gmo es.gmo et.gmo eu.gmo fi.gmo fr.gmo gl.gmo hr.gmo hu.gmo id.gmo it.gmo ja.gmo nl.gmo pl.gmo pt_BR.gmo pt.gmo ru.gmo sl.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo zh_TW.gmo
UPDATEPOFILES =  ca.po-update cs.po-update da.po-update de.po-update es.po-update et.po-update eu.po-update fi.po-update fr.po-update gl.po-update hr.po-update hu.po-update id.po-update it.po-update ja.po-update nl.po-update pl.po-update pt_BR.po-update pt.po-update ru.po-update sl.po-update sv.po-update tr.po-update uk.po-update vi.po-update zh_CN.po-update zh_TW.po-update
DUMMYPOFILES =  ca.nop cs.nop da.nop de.nop es.nop et.nop eu.nop fi.nop fr.nop gl.nop hr.nop hu.nop id.nop it.nop ja.nop nl.nop pl.nop pt_BR.nop pt.nop ru.nop sl.nop sv.nop tr.nop uk.nop vi.nop zh_CN.nop zh_TW.nop
DISTFILES.common = Makefile.in.in remove-potcdate.sin \
$(DISTFILES.common.extra1) $(DISTFILES.common.extra2) $(DISTFILES.common.extra3)
DISTFILES = $(DISTFILES.common) Makevars POTFILES.in \
$(POFILES) $(GMOFILES) \
$(DISTFILES.extra1) $(DISTFILES.extra2) $(DISTFILES.extra3)

POTFILES = \
     ../disk-utils/addpart.c \
     ../disk-utils/blockdev.c \
     ../disk-utils/cfdisk.c \
     ../disk-utils/cramfs_common.c \
     ../disk-utils/cramfs.h \
     ../disk-utils/delpart.c \
     ../disk-utils/fdformat.c \
     ../disk-utils/fdisk.c \
     ../disk-utils/fdisk.h \
     ../disk-utils/fdisk-list.c \
     ../disk-utils/fdisk-list.h \
     ../disk-utils/fdisk-menu.c \
     ../disk-utils/fsck.c \
     ../disk-utils/fsck.cramfs.c \
     ../disk-utils/fsck.minix.c \
     ../disk-utils/isosize.c \
     ../disk-utils/minix_programs.h \
     ../disk-utils/mkfs.bfs.c \
     ../disk-utils/mkfs.c \
     ../disk-utils/mkfs.cramfs.c \
     ../disk-utils/mkfs.minix.c \
     ../disk-utils/mkswap.c \
     ../disk-utils/partx.c \
     ../disk-utils/raw.c \
     ../disk-utils/resizepart.c \
     ../disk-utils/sfdisk.c \
     ../disk-utils/swaplabel.c \
     ../include/all-io.h \
     ../include/bitops.h \
     ../include/blkdev.h \
     ../include/buffer.h \
     ../include/canonicalize.h \
     ../include/caputils.h \
     ../include/carefulputc.h \
     ../include/cctype.h \
     ../include/c.h \
     ../include/closestream.h \
     ../include/color-names.h \
     ../include/colors.h \
     ../include/cpuset.h \
     ../include/crc32c.h \
     ../include/crc32.h \
     ../include/c_strtod.h \
     ../include/debug.h \
     ../include/debugobj.h \
     ../include/encode.h \
     ../include/env.h \
     ../include/exec_shell.h \
     ../include/exitcodes.h \
     ../include/fileeq.h \
     ../include/fileutils.h \
     ../include/fuzz.h \
     ../include/idcache.h \
     ../include/ismounted.h \
     ../include/iso9660.h \
     ../include/jsonwrt.h \
     ../include/linux_version.h \
     ../include/list.h \
     ../include/loopdev.h \
     ../include/mangle.h \
     ../include/match.h \
     ../include/mbsalign.h \
     ../include/mbsedit.h \
     ../include/md5.h \
     ../include/minix.h \
     ../include/monotonic.h \
     ../include/namespace.h \
     ../include/nls.h \
     ../include/optutils.h \
     ../include/pager.h \
     ../include/partx.h \
     ../include/path.h \
     ../include/pathnames.h \
     ../include/pidfd-utils.h \
     ../include/plymouth-ctrl.h \
     ../include/procfs.h \
     ../include/pt-bsd.h \
     ../include/pt-gpt-partnames.h \
     ../include/pt-mbr.h \
     ../include/pt-mbr-partnames.h \
     ../include/pt-sgi.h \
     ../include/pt-sun.h \
     ../include/pty-session.h \
     ../include/pwdutils.h \
     ../include/randutils.h \
     ../include/rpmatch.h \
     ../include/selinux-utils.h \
     ../include/sha1.h \
     ../include/signames.h \
     ../include/statfs_magic.h \
     ../include/strutils.h \
     ../include/strv.h \
     ../include/swapheader.h \
     ../include/swapprober.h \
     ../include/sysfs.h \
     ../include/timer.h \
     ../include/timeutils.h \
     ../include/ttyutils.h \
     ../include/widechar.h \
     ../include/xalloc.h \
     ../lib/blkdev.c \
     ../libblkid/src/blkidP.h \
     ../libblkid/src/cache.c \
     ../libblkid/src/config.c \
     ../libblkid/src/dev.c \
     ../libblkid/src/devname.c \
     ../libblkid/src/devno.c \
     ../libblkid/src/encode.c \
     ../libblkid/src/evaluate.c \
     ../libblkid/src/getsize.c \
     ../libblkid/src/init.c \
     ../libblkid/src/partitions/aix.c \
     ../libblkid/src/partitions/aix.h \
     ../libblkid/src/partitions/atari.c \
     ../libblkid/src/partitions/bsd.c \
     ../libblkid/src/partitions/dos.c \
     ../libblkid/src/partitions/gpt.c \
     ../libblkid/src/partitions/mac.c \
     ../libblkid/src/partitions/minix.c \
     ../libblkid/src/partitions/partitions.c \
     ../libblkid/src/partitions/partitions.h \
     ../libblkid/src/partitions/sgi.c \
     ../libblkid/src/partitions/solaris_x86.c \
     ../libblkid/src/partitions/sun.c \
     ../libblkid/src/partitions/ultrix.c \
     ../libblkid/src/partitions/unixware.c \
     ../libblkid/src/probe.c \
     ../libblkid/src/read.c \
     ../libblkid/src/resolve.c \
     ../libblkid/src/save.c \
     ../libblkid/src/superblocks/adaptec_raid.c \
     ../libblkid/src/superblocks/apfs.c \
     ../libblkid/src/superblocks/bcache.c \
     ../libblkid/src/superblocks/befs.c \
     ../libblkid/src/superblocks/bfs.c \
     ../libblkid/src/superblocks/bitlocker.c \
     ../libblkid/src/superblocks/bluestore.c \
     ../libblkid/src/superblocks/btrfs.c \
     ../libblkid/src/superblocks/cramfs.c \
     ../libblkid/src/superblocks/ddf_raid.c \
     ../libblkid/src/superblocks/drbd.c \
     ../libblkid/src/superblocks/drbdmanage.c \
     ../libblkid/src/superblocks/drbdproxy_datalog.c \
     ../libblkid/src/superblocks/erofs.c \
     ../libblkid/src/superblocks/exfat.c \
     ../libblkid/src/superblocks/exfs.c \
     ../libblkid/src/superblocks/ext.c \
     ../libblkid/src/superblocks/f2fs.c \
     ../libblkid/src/superblocks/gfs.c \
     ../libblkid/src/superblocks/hfs.c \
     ../libblkid/src/superblocks/highpoint_raid.c \
     ../libblkid/src/superblocks/hpfs.c \
     ../libblkid/src/superblocks/iso9660.c \
     ../libblkid/src/superblocks/isw_raid.c \
     ../libblkid/src/superblocks/jfs.c \
     ../libblkid/src/superblocks/jmicron_raid.c \
     ../libblkid/src/superblocks/linux_raid.c \
     ../libblkid/src/superblocks/lsi_raid.c \
     ../libblkid/src/superblocks/luks.c \
     ../libblkid/src/superblocks/lvm.c \
     ../libblkid/src/superblocks/minix.c \
     ../libblkid/src/superblocks/mpool.c \
     ../libblkid/src/superblocks/netware.c \
     ../libblkid/src/superblocks/nilfs.c \
     ../libblkid/src/superblocks/ntfs.c \
     ../libblkid/src/superblocks/nvidia_raid.c \
     ../libblkid/src/superblocks/ocfs.c \
     ../libblkid/src/superblocks/promise_raid.c \
     ../libblkid/src/superblocks/refs.c \
     ../libblkid/src/superblocks/reiserfs.c \
     ../libblkid/src/superblocks/romfs.c \
     ../libblkid/src/superblocks/silicon_raid.c \
     ../libblkid/src/superblocks/squashfs.c \
     ../libblkid/src/superblocks/stratis.c \
     ../libblkid/src/superblocks/superblocks.c \
     ../libblkid/src/superblocks/superblocks.h \
     ../libblkid/src/superblocks/swap.c \
     ../libblkid/src/superblocks/sysv.c \
     ../libblkid/src/superblocks/ubi.c \
     ../libblkid/src/superblocks/ubifs.c \
     ../libblkid/src/superblocks/udf.c \
     ../libblkid/src/superblocks/ufs.c \
     ../libblkid/src/superblocks/vdo.c \
     ../libblkid/src/superblocks/vfat.c \
     ../libblkid/src/superblocks/via_raid.c \
     ../libblkid/src/superblocks/vmfs.c \
     ../libblkid/src/superblocks/vxfs.c \
     ../libblkid/src/superblocks/xfs.c \
     ../libblkid/src/superblocks/zfs.c \
     ../libblkid/src/superblocks/zonefs.c \
     ../libblkid/src/tag.c \
     ../libblkid/src/topology/dm.c \
     ../libblkid/src/topology/evms.c \
     ../libblkid/src/topology/ioctl.c \
     ../libblkid/src/topology/lvm.c \
     ../libblkid/src/topology/md.c \
     ../libblkid/src/topology/sysfs.c \
     ../libblkid/src/topology/topology.c \
     ../libblkid/src/topology/topology.h \
     ../libblkid/src/verify.c \
     ../libblkid/src/version.c \
     ../lib/buffer.c \
     ../lib/canonicalize.c \
     ../lib/caputils.c \
     ../lib/color-names.c \
     ../lib/colors.c \
     ../lib/cpuset.c \
     ../lib/crc32.c \
     ../lib/crc32c.c \
     ../lib/c_strtod.c \
     ../lib/encode.c \
     ../lib/env.c \
     ../lib/exec_shell.c \
     ../libfdisk/src/alignment.c \
     ../libfdisk/src/ask.c \
     ../libfdisk/src/bsd.c \
     ../libfdisk/src/context.c \
     ../libfdisk/src/dos.c \
     ../libfdisk/src/fdiskP.h \
     ../libfdisk/src/field.c \
     ../libfdisk/src/gpt.c \
     ../libfdisk/src/init.c \
     ../libfdisk/src/item.c \
     ../libfdisk/src/iter.c \
     ../libfdisk/src/label.c \
     ../libfdisk/src/partition.c \
     ../libfdisk/src/parttype.c \
     ../libfdisk/src/script.c \
     ../libfdisk/src/sgi.c \
     ../libfdisk/src/sun.c \
     ../libfdisk/src/table.c \
     ../libfdisk/src/test.c \
     ../libfdisk/src/utils.c \
     ../libfdisk/src/version.c \
     ../libfdisk/src/wipe.c \
     ../lib/fileeq.c \
     ../lib/fileutils.c \
     ../lib/idcache.c \
     ../lib/ismounted.c \
     ../lib/jsonwrt.c \
     ../lib/langinfo.c \
     ../lib/linux_version.c \
     ../lib/loopdev.c \
     ../lib/mangle.c \
     ../lib/match.c \
     ../lib/mbsalign.c \
     ../lib/mbsedit.c \
     ../lib/md5.c \
     ../lib/monotonic.c \
     ../libmount/python/context.c \
     ../libmount/python/fs.c \
     ../libmount/python/pylibmount.c \
     ../libmount/python/pylibmount.h \
     ../libmount/python/tab.c \
     ../libmount/src/btrfs.c \
     ../libmount/src/cache.c \
     ../libmount/src/context.c \
     ../libmount/src/context_loopdev.c \
     ../libmount/src/context_mount.c \
     ../libmount/src/context_umount.c \
     ../libmount/src/context_veritydev.c \
     ../libmount/src/fs.c \
     ../libmount/src/fuzz.c \
     ../libmount/src/init.c \
     ../libmount/src/iter.c \
     ../libmount/src/lock.c \
     ../libmount/src/monitor.c \
     ../libmount/src/mountP.h \
     ../libmount/src/optmap.c \
     ../libmount/src/optstr.c \
     ../libmount/src/tab.c \
     ../libmount/src/tab_diff.c \
     ../libmount/src/tab_parse.c \
     ../libmount/src/tab_update.c \
     ../libmount/src/test.c \
     ../libmount/src/utils.c \
     ../libmount/src/version.c \
     ../lib/pager.c \
     ../lib/path.c \
     ../lib/plymouth-ctrl.c \
     ../lib/procfs.c \
     ../lib/pty-session.c \
     ../lib/pwdutils.c \
     ../lib/randutils.c \
     ../lib/selinux-utils.c \
     ../lib/sha1.c \
     ../lib/signames.c \
     ../libsmartcols/src/calculate.c \
     ../libsmartcols/src/cell.c \
     ../libsmartcols/src/column.c \
     ../libsmartcols/src/grouping.c \
     ../libsmartcols/src/init.c \
     ../libsmartcols/src/iter.c \
     ../libsmartcols/src/line.c \
     ../libsmartcols/src/print-api.c \
     ../libsmartcols/src/print.c \
     ../libsmartcols/src/smartcolsP.h \
     ../libsmartcols/src/symbols.c \
     ../libsmartcols/src/table.c \
     ../libsmartcols/src/version.c \
     ../libsmartcols/src/walk.c \
     ../lib/strutils.c \
     ../lib/strv.c \
     ../lib/swapprober.c \
     ../lib/sysfs.c \
     ../lib/timer.c \
     ../lib/timeutils.c \
     ../lib/ttyutils.c \
     ../libuuid/src/clear.c \
     ../libuuid/src/compare.c \
     ../libuuid/src/copy.c \
     ../libuuid/src/gen_uuid.c \
     ../libuuid/src/isnull.c \
     ../libuuid/src/pack.c \
     ../libuuid/src/parse.c \
     ../libuuid/src/predefined.c \
     ../libuuid/src/test_uuid.c \
     ../libuuid/src/unpack.c \
     ../libuuid/src/unparse.c \
     ../libuuid/src/uuidd.h \
     ../libuuid/src/uuid.h \
     ../libuuid/src/uuidP.h \
     ../libuuid/src/uuid_time.c \
     ../login-utils/auth.c \
     ../login-utils/auth.h \
     ../login-utils/ch-common.c \
     ../login-utils/ch-common.h \
     ../login-utils/chfn.c \
     ../login-utils/chsh.c \
     ../login-utils/islocal.c \
     ../login-utils/islocal.h \
     ../login-utils/last.c \
     ../login-utils/libuser.c \
     ../login-utils/libuser.h \
     ../login-utils/login.c \
     ../login-utils/logindefs.c \
     ../login-utils/logindefs.h \
     ../login-utils/lslogins.c \
     ../login-utils/newgrp.c \
     ../login-utils/nologin.c \
     ../login-utils/runuser.c \
     ../login-utils/setpwnam.c \
     ../login-utils/setpwnam.h \
     ../login-utils/su.c \
     ../login-utils/su-common.c \
     ../login-utils/su-common.h \
     ../login-utils/sulogin.c \
     ../login-utils/sulogin-consoles.c \
     ../login-utils/sulogin-consoles.h \
     ../login-utils/utmpdump.c \
     ../login-utils/vipw.c \
     ../misc-utils/blkid.c \
     ../misc-utils/cal.c \
     ../misc-utils/fincore.c \
     ../misc-utils/findfs.c \
     ../misc-utils/findmnt.c \
     ../misc-utils/findmnt.h \
     ../misc-utils/findmnt-verify.c \
     ../misc-utils/getopt.c \
     ../misc-utils/hardlink.c \
     ../misc-utils/kill.c \
     ../misc-utils/logger.c \
     ../misc-utils/look.c \
     ../misc-utils/lsblk.c \
     ../misc-utils/lsblk-devtree.c \
     ../misc-utils/lsblk.h \
     ../misc-utils/lsblk-mnt.c \
     ../misc-utils/lsblk-properties.c \
     ../misc-utils/lsfd-bdev.c \
     ../misc-utils/lsfd.c \
     ../misc-utils/lsfd-cdev.c \
     ../misc-utils/lsfd-counter.c \
     ../misc-utils/lsfd-counter.h \
     ../misc-utils/lsfd-fifo.c \
     ../misc-utils/lsfd-file.c \
     ../misc-utils/lsfd-filter.c \
     ../misc-utils/lsfd-filter.h \
     ../misc-utils/lsfd.h \
     ../misc-utils/lsfd-sock.c \
     ../misc-utils/lsfd-unkn.c \
     ../misc-utils/lslocks.c \
     ../misc-utils/mcookie.c \
     ../misc-utils/namei.c \
     ../misc-utils/rename.c \
     ../misc-utils/test_uuidd.c \
     ../misc-utils/uuidd.c \
     ../misc-utils/uuidgen.c \
     ../misc-utils/uuidparse.c \
     ../misc-utils/whereis.c \
     ../misc-utils/wipefs.c \
     ../schedutils/chrt.c \
     ../schedutils/ionice.c \
     ../schedutils/sched_attr.h \
     ../schedutils/taskset.c \
     ../schedutils/uclampset.c \
     ../sys-utils/blkdiscard.c \
     ../sys-utils/blkzone.c \
     ../sys-utils/chcpu.c \
     ../sys-utils/chmem.c \
     ../sys-utils/choom.c \
     ../sys-utils/ctrlaltdel.c \
     ../sys-utils/dmesg.c \
     ../sys-utils/eject.c \
     ../sys-utils/fallocate.c \
     ../sys-utils/flock.c \
     ../sys-utils/fsfreeze.c \
     ../sys-utils/fstrim.c \
     ../sys-utils/hwclock.c \
     ../sys-utils/hwclock-cmos.c \
     ../sys-utils/hwclock.h \
     ../sys-utils/hwclock-rtc.c \
     ../sys-utils/ipcmk.c \
     ../sys-utils/ipcrm.c \
     ../sys-utils/ipcs.c \
     ../sys-utils/ipcutils.c \
     ../sys-utils/ipcutils.h \
     ../sys-utils/irq-common.c \
     ../sys-utils/irq-common.h \
     ../sys-utils/irqtop.c \
     ../sys-utils/ldattach.c \
     ../sys-utils/losetup.c \
     ../sys-utils/lscpu-arm.c \
     ../sys-utils/lscpu.c \
     ../sys-utils/lscpu-cpu.c \
     ../sys-utils/lscpu-cputype.c \
     ../sys-utils/lscpu-dmi.c \
     ../sys-utils/lscpu.h \
     ../sys-utils/lscpu-topology.c \
     ../sys-utils/lscpu-virt.c \
     ../sys-utils/lsipc.c \
     ../sys-utils/lsirq.c \
     ../sys-utils/lsmem.c \
     ../sys-utils/lsns.c \
     ../sys-utils/mount.c \
     ../sys-utils/mountpoint.c \
     ../sys-utils/nsenter.c \
     ../sys-utils/pivot_root.c \
     ../sys-utils/prlimit.c \
     ../sys-utils/readprofile.c \
     ../sys-utils/renice.c \
     ../sys-utils/rfkill.c \
     ../sys-utils/rtcwake.c \
     ../sys-utils/setarch.c \
     ../sys-utils/setpriv.c \
     ../sys-utils/setsid.c \
     ../sys-utils/swapoff.c \
     ../sys-utils/swapon.c \
     ../sys-utils/swapon-common.c \
     ../sys-utils/swapon-common.h \
     ../sys-utils/switch_root.c \
     ../sys-utils/tunelp.c \
     ../sys-utils/umount.c \
     ../sys-utils/unshare.c \
     ../sys-utils/wdctl.c \
     ../sys-utils/zramctl.c \
     ../term-utils/agetty.c \
     ../term-utils/mesg.c \
     ../term-utils/script.c \
     ../term-utils/scriptlive.c \
     ../term-utils/script-playutils.c \
     ../term-utils/script-playutils.h \
     ../term-utils/scriptreplay.c \
     ../term-utils/setterm.c \
     ../term-utils/ttymsg.c \
     ../term-utils/ttymsg.h \
     ../term-utils/wall.c \
     ../term-utils/write.c \
     ../text-utils/col.c \
     ../text-utils/colcrt.c \
     ../text-utils/colrm.c \
     ../text-utils/column.c \
     ../text-utils/hexdump.c \
     ../text-utils/hexdump-conv.c \
     ../text-utils/hexdump-display.c \
     ../text-utils/hexdump.h \
     ../text-utils/hexdump-parse.c \
     ../text-utils/line.c \
     ../text-utils/more.c \
     ../text-utils/pg.c \
     ../text-utils/rev.c \
     ../text-utils/ul.c

CATALOGS =  ca.gmo cs.gmo da.gmo de.gmo es.gmo et.gmo eu.gmo fi.gmo fr.gmo gl.gmo hr.gmo hu.gmo id.gmo it.gmo ja.gmo nl.gmo pl.gmo pt_BR.gmo pt.gmo ru.gmo sl.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo zh_TW.gmo

# Makevars gets inserted here. (Don't remove this line!)
# Makefile variables for PO directory in any package using GNU gettext.

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = --keyword=_ --keyword=N_ --keyword=P_:1,2

# This option gets passed to msgmerge.
MSGMERGE_OPTIONS = --no-wrap --previous

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = Karel Zak <kzak@redhat.com>

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = util-linux@vger.kernel.org

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES =

.SUFFIXES:
.SUFFIXES: .po .gmo .mo .sed .sin .nop .po-create .po-update

.po.mo:
	@echo "$(MSGFMT) -c -o $@ $<"; \
	$(MSGFMT) -c -o t-$@ $< && mv t-$@ $@

.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o $${lang}.gmo $${lang}.po"; \
	cd $(srcdir) && rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o t-$${lang}.gmo $${lang}.po && mv t-$${lang}.gmo $${lang}.gmo

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@


all: all-no

all-yes: stamp-po
all-no:

# Ensure that the gettext macros and this Makefile.in.in are in sync.
CHECK_MACRO_VERSION = \
	test "$(GETTEXT_MACRO_VERSION)" = "0.18" \
	  || { echo "*** error: gettext infrastructure mismatch: using a Makefile.in.in from gettext version $(GETTEXT_MACRO_VERSION) but the autoconf macros are from gettext version 0.18" 1>&2; \
	       exit 1; \
	     }

# $(srcdir)/$(DOMAIN).pot is only created when needed. When xgettext finds no
# internationalized messages, no $(srcdir)/$(DOMAIN).pot is created (because
# we don't want to bother translators with empty POT files). We assume that
# LINGUAS is empty in this case, i.e. $(POFILES) and $(GMOFILES) are empty.
# In this case, stamp-po is a nop (i.e. a phony target).

# stamp-po is a timestamp denoting the last time at which the CATALOGS have
# been loosely updated. Its purpose is that when a developer or translator
# checks out the package via CVS, and the $(DOMAIN).pot file is not in CVS,
# "make" will update the $(DOMAIN).pot and the $(CATALOGS), but subsequent
# invocations of "make" will do nothing. This timestamp would not be necessary
# if updating the $(CATALOGS) would always touch them; however, the rule for
# $(POFILES) has been designed to not touch files that don't need to be
# changed.
stamp-po: $(srcdir)/$(DOMAIN).pot
	@$(CHECK_MACRO_VERSION)
	test ! -f $(srcdir)/$(DOMAIN).pot || \
	  test -z "$(GMOFILES)" || $(MAKE) $(GMOFILES)
	@test ! -f $(srcdir)/$(DOMAIN).pot || { \
	  echo "touch stamp-po" && \
	  echo timestamp > stamp-poT && \
	  mv stamp-poT stamp-po; \
	}

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
# The determination of whether the package xyz is a GNU one is based on the
# heuristic whether some file in the top level directory mentions "GNU xyz".
# If GNU 'find' is available, we avoid grepping through monster files.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in remove-potcdate.sed
	if { if (LC_ALL=C find --version) 2>/dev/null | grep GNU >/dev/null; then \
	       LC_ALL=C find -L $(top_srcdir) -maxdepth 1 -type f -size -10000000c -exec grep 'GNU util-linux' /dev/null '{}' ';' 2>/dev/null; \
	     else \
	       LC_ALL=C grep 'GNU util-linux' $(top_srcdir)/* 2>/dev/null; \
	     fi; \
	   } | grep -v 'libtool:' >/dev/null; then \
	  package_gnu='GNU '; \
	else \
	  package_gnu=''; \
	fi; \
	if test -n '$(MSGID_BUGS_ADDRESS)' || test '$(PACKAGE_BUGREPORT)' = '@'PACKAGE_BUGREPORT'@'; then \
	  msgid_bugs_address='$(MSGID_BUGS_ADDRESS)'; \
	else \
	  msgid_bugs_address='$(PACKAGE_BUGREPORT)'; \
	fi; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_gnu}util-linux" \
	      --package-version='2.38' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	esac
	test ! -f $(DOMAIN).po || { \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	if test -f "$(srcdir)/$${lang}.po"; then \
	  test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	  echo "$${cdcmd}$(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot"; \
	  cd $(srcdir) \
	    && { case `$(MSGMERGE_UPDATE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	           '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) $${lang}.po $(DOMAIN).pot;; \
	           *) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot;; \
	         esac; \
	       }; \
	else \
	  $(MAKE) $${lang}.po-create; \
	fi


install: install-exec install-data
install-exec:
install-data: install-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    $(INSTALL_DATA) $(srcdir)/$$file \
			    $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data: installdirs-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	else \
	  : ; \
	fi
installdirs-data-no:
installdirs-data-yes:
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data: uninstall-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f stamp-po $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir:
	$(MAKE) update-po
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: stamp-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  dists="$$dists Makevars.template"; \
	fi; \
	if test -f $(srcdir)/$(DOMAIN).pot; then \
	  dists="$$dists $(DOMAIN).pot stamp-po"; \
	fi; \
	if test -f $(srcdir)/ChangeLog; then \
	  dists="$$dists ChangeLog"; \
	fi; \
	for i in 0 1 2 3 4 5 6 7 8 9; do \
	  if test -f $(srcdir)/ChangeLog.$$i; then \
	    dists="$$dists ChangeLog.$$i"; \
	  fi; \
	done; \
	if test -f $(srcdir)/LINGUAS; then dists="$$dists LINGUAS"; fi; \
	for file in $$dists; do \
	  if test -f $$file; then \
	    cp -p $$file $(distdir) || exit 1; \
	  else \
	    cp -p $(srcdir)/$$file $(distdir) || exit 1; \
	  fi; \
	done

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for creating PO files.

.nop.po-create:
	@lang=`echo $@ | sed -e 's/\.po-create$$//'`; \
	echo "File $$lang.po does not exist. If you are a translator, you can create it through 'msginit'." 1>&2; \
	exit 1

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if { case `$(MSGMERGE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	       '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       *) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	     esac; \
	   }; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

# Recreate Makefile by invoking config.status. Explicitly invoke the shell,
# because execution permission bits may not work on the current file system.
# Use /bin/bash, which is the shell determined by autoconf for the use by its
# scripts, not $(SHELL) which is hardwired to /bin/sh and may be deficient.
Makefile: Makefile.in.in Makevars $(top_builddir)/config.status POTFILES.in LINGUAS
	cd $(top_builddir) \
	  && /bin/bash ./config.status $(subdir)/$@.in po-directories

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
# Special Makefile rules for English message catalogs with quotation marks.

DISTFILES.common.extra1 = quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot

.SUFFIXES: .insert-header .po-update-en

en@quot.po-create:
	$(MAKE) en@quot.po-update
en@boldquot.po-create:
	$(MAKE) en@boldquot.po-update

en@quot.po-update: en@quot.po-update-en
en@boldquot.po-update: en@boldquot.po-update-en

.insert-header.po-update-en:
	@lang=`echo $@ | sed -e 's/\.po-update-en$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) $(SED) -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@quot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@quot.header/g' $(srcdir)/insert-header.sin > en@quot.insert-header

en@boldquot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@boldquot.header/g' $(srcdir)/insert-header.sin > en@boldquot.insert-header

mostlyclean: mostlyclean-quot
mostlyclean-quot:
	rm -f *.insert-header
