#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/BootShim.bin "./Build/gts7Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/GTS7_UEFI.fd" > "./Build/gts7Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/GTS7_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/gts7Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/GTS7_UEFI.fd-bootshim" > "./Build/gts7Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/GTS7_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/gts7Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/GTS7_UEFI.fd-bootshim.gz" ./ImageResources/DTBs/gts7.dtb > ./ImageResources/bootpayload.bin||exit 1

# Create bootable Android boot.img
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/bootpayload.bin \
  --ramdisk ./ImageResources/ramdisk \
  --kernel_offset 0x00000000 \
  --ramdisk_offset 0x00000000 \
  --tags_offset 0x00000000 \
  --os_version 11.0.0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 1 \
  -o boot.img \
  ||_error "\nFailed to create Android Boot Image!\n"

# Compress Boot Image in a tar File for Odin/heimdall Flash
tar -c boot.img -f Mu-gts7.tar||exit 1
mv boot.img Mu-gts7.img||exit 1
