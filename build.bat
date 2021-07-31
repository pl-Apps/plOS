@echo off
ubuntu1804 run "g++ -static sys/sys.cpp -o build/init; mkdir build; mkdir rootfs; cd build; find . | cpio -o -H newc | gzip > ../rootfs/rootfs.cpio.gz;"
ubuntu1804 run "cd kernel; make isoimage FDINITRD=$(pwd)/../rootfs/rootfs.cpio.gz; rm -rf ../rootfs; rm -rf ../build;"
