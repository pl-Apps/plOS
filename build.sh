rm ./plOS.iso
rm ./dist/x86_64/*
make build-x86_64
mv ./dist/x86_64/kernel.iso ./plOS.iso
qemu-system-x86_64 -cdrom ./plOS.iso