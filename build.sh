make build-x86_64
cp ./dist/x86_64/kernel.iso ./plOS.iso
qemu-system-x86_64 -cdrom ./plOS.iso
