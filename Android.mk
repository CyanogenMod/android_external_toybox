#
# Copyright (C) 2014 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

LOCAL_PATH := $(call my-dir)

#
# To update:
#

#  git remote add toybox https://github.com/gfto/toybox.git
#  git fetch toybox
#  git merge toybox/master
#  mm -j32
#  # (Make any necessary Android.mk changes and test the new toybox.)
#  git push aosp HEAD:master  # Push directly, avoiding gerrit.
#  git push aosp HEAD:refs/for/master  # Push to gerrit.
#
#  # Now commit any necessary Android.mk changes like normal:
#  repo start post-sync .
#  git commit -a


include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
    lib/args.c \
    lib/dirtree.c \
    lib/getmountlist.c \
    lib/help.c \
    lib/lib.c \
    lib/llist.c \
    lib/net.c \
    lib/portability.c \
    lib/xwrap.c \
    main.c \
    toys/lsb/dmesg.c \
    toys/lsb/hostname.c \
    toys/lsb/killall.c \
    toys/lsb/md5sum.c \
    toys/lsb/mknod.c \
    toys/lsb/mktemp.c \
    toys/lsb/mount.c \
    toys/lsb/pidof.c \
    toys/lsb/seq.c \
    toys/lsb/sync.c \
    toys/lsb/umount.c \
    toys/other/acpi.c \
    toys/other/blkid.c \
    toys/other/blockdev.c \
    toys/other/bzcat.c \
    toys/other/catv.c \
    toys/other/chroot.c \
    toys/other/chvt.c \
    toys/other/clear.c \
    toys/other/count.c \
    toys/other/dos2unix.c \
    toys/other/factor.c \
    toys/other/fallocate.c \
    toys/other/free.c \
    toys/other/freeramdisk.c \
    toys/other/fsfreeze.c \
    toys/other/help.c \
    toys/other/ifconfig.c \
    toys/other/inotifyd.c \
    toys/other/insmod.c \
    toys/other/losetup.c \
    toys/other/lsattr.c \
    toys/other/lsmod.c \
    toys/other/lspci.c \
    toys/other/lsusb.c \
    toys/other/makedevs.c \
    toys/other/mkswap.c \
    toys/other/modinfo.c \
    toys/other/mountpoint.c \
    toys/other/nbd_client.c \
    toys/other/netcat.c \
    toys/other/oneit.c \
    toys/other/partprobe.c \
    toys/other/pivot_root.c \
    toys/other/pmap.c \
    toys/other/printenv.c \
    toys/other/pwdx.c \
    toys/other/readahead.c \
    toys/other/readlink.c \
    toys/other/realpath.c \
    toys/other/rev.c \
    toys/other/rfkill.c \
    toys/other/rmmod.c \
    toys/other/setsid.c \
    toys/other/stat.c \
    toys/other/swapoff.c \
    toys/other/swapon.c \
    toys/other/switch_root.c \
    toys/other/sysctl.c \
    toys/other/tac.c \
    toys/other/taskset.c \
    toys/other/timeout.c \
    toys/other/truncate.c \
    toys/other/unshare.c \
    toys/other/usleep.c \
    toys/other/vconfig.c \
    toys/other/vmstat.c \
    toys/other/which.c \
    toys/other/yes.c \
    toys/pending/chcon.c \
    toys/pending/more.c \
    toys/posix/basename.c \
    toys/posix/cal.c \
    toys/posix/cat.c \
    toys/posix/chgrp.c \
    toys/posix/chmod.c \
    toys/posix/cksum.c \
    toys/posix/cmp.c \
    toys/posix/comm.c \
    toys/posix/cp.c \
    toys/posix/cut.c \
    toys/posix/date.c \
    toys/posix/df.c \
    toys/posix/dirname.c \
    toys/posix/du.c \
    toys/posix/echo.c \
    toys/posix/env.c \
    toys/posix/expand.c \
    toys/posix/false.c \
    toys/posix/find.c \
    toys/posix/grep.c \
    toys/posix/head.c \
    toys/posix/id.c \
    toys/posix/kill.c \
    toys/posix/ln.c \
    toys/posix/ls.c \
    toys/posix/mkdir.c \
    toys/posix/mkfifo.c \
    toys/posix/nice.c \
    toys/posix/nl.c \
    toys/posix/nohup.c \
    toys/posix/od.c \
    toys/posix/paste.c \
    toys/posix/patch.c \
    toys/posix/pwd.c \
    toys/posix/renice.c \
    toys/posix/rm.c \
    toys/posix/rmdir.c \
    toys/posix/sleep.c \
    toys/posix/sort.c \
    toys/posix/split.c \
    toys/posix/strings.c \
    toys/posix/tail.c \
    toys/posix/tee.c \
    toys/posix/time.c \
    toys/posix/touch.c \
    toys/posix/true.c \
    toys/posix/tty.c \
    toys/posix/uname.c \
    toys/posix/uniq.c \
    toys/posix/uudecode.c \
    toys/posix/uuencode.c \
    toys/posix/wc.c \
    toys/posix/xargs.c \

LOCAL_CFLAGS += \
    -Os \
    -Wno-char-subscripts \
    -Wno-sign-compare \
    -Wno-uninitialized \
    -Wno-unused-parameter \
    -funsigned-char -ffunction-sections -fdata-sections -fno-asynchronous-unwind-tables \

LOCAL_SHARED_LIBRARIES := libselinux

LOCAL_MODULE := toybox

# dupes: cat chown cmp date df du grep id ifconfig ls
#        mount mv nc netcat notify(inotifyd) renice
#        touch umount
# non-Linux: count freeramdisk fstype nbd-client oneit vconfig
# useless?: chvt fsfreeze install makedevs mkfifo mktemp partprobe pivot_root pwdx rev
#           rfkill switch_root tty unshare
# prefer efs2progs instead?: blkid chattr lsattr

ALL_TOOLS := \
    acpi \
    basename \
    blockdev \
    bzcat \
    cal \
    catv \
    chcon \
    chgrp \
    chmod \
    chroot \
    cksum \
    clear \
    comm \
    cp \
    cut \
    dirname \
    dmesg \
    dos2unix \
    echo \
    egrep \
    env \
    expand \
    factor \
    fallocate \
    false \
    fgrep \
    find \
    free \
    groups \
    head \
    hostname \
    insmod \
    kill \
    killall \
    ln \
    logname \
    losetup \
    lsmod \
    lspci \
    lsusb \
    md5sum \
    mkdir \
    mknod \
    mkswap \
    modinfo \
    more \
    mountpoint \
    nice \
    nl \
    nohup \
    od \
    paste \
    patch \
    pidof \
    pmap \
    printenv \
    pwd \
    readahead \
    readlink \
    realpath \
    rm \
    rmdir \
    rmmod \
    seq \
    setsid \
    sha1sum \
    sleep \
    sort \
    split \
    stat \
    strings \
    swapoff \
    swapon \
    sync \
    sysctl \
    tac \
    tail \
    taskset \
    tee \
    time \
    timeout \
    true \
    truncate \
    uname \
    uniq \
    unix2dos \
    usleep \
    uudecode \
    uuencode \
    vmstat \
    wc \
    which \
    whoami \
    xargs \
    yes \

# Install the symlinks.
LOCAL_POST_INSTALL_CMD := $(hide) $(foreach t,$(ALL_TOOLS),ln -sf toybox $(TARGET_OUT)/bin/$(t);)

include $(BUILD_EXECUTABLE)
