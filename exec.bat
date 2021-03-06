@echo off
ubuntu1804 run "g++ -static sys/sys.cpp -liw -o build/init; mkdir build; mkdir rootfs; cd build; find . | cpio -o -H newc | gzip > ../rootfs/rootfs.cpio.gz"
qemu-system-x86_64 -kernel kernel\arch\x86_64\boot\bzImage -initrd rootfs/rootfs.cpio.gz