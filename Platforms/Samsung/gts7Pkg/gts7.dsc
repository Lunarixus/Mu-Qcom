## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = gts7xlwifi
  PLATFORM_GUID                  = 539f03c6-9ef9-4b7d-b7b8-455abe2bcc2e
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/gts7Pkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = gts7Pkg/gts7.fdf
  USE_DISPLAYDXE                 = 0
  AB_SLOT_SUPPORT                = 0

  SOC_TYPE                       = 1

[BuildOptions.common]
  *_*_*_CC_FLAGS = -DSOC_TYPE=$(SOC_TYPE)

[LibraryClasses.common]
  DeviceMemoryMapLib|gts7Pkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceConfigurationMapLib|gts7Pkg/Library/DeviceConfigurationMapLib/DeviceConfigurationMapLib.inf

[PcdsFixedAtBuild.common]
  # Device Specific
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000        # Starting Address
  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x9FF8C000

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000     # 256K stack

  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVendor|L"No Maintainer"  # Device Maintainer

  # SmBios
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemVendor|"Samsung Electronics"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Galaxy Tab S7+"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"T970"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Galaxy_Tab_S7_T970"
  gQcomPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Galaxy Tab S7+"

  # Simple FrameBuffer
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|2800
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1752
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferColorDepth|32

  # Power Services
  gQcomPkgTokenSpaceGuid.PcdIsPowerOkImplemented|TRUE

  # Dynamic RAM
  gQcomPkgTokenSpaceGuid.PcdRamPartitionBase|0xB4500000

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1752
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2800
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1752
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2800
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|200
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|134
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|200
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|134

!include SM8250Pkg/SM8250Pkg.dsc.inc
