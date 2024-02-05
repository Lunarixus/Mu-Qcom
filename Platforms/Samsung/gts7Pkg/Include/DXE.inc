  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/gts7/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRAMDxe/DynamicRAMDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
!if $(USE_DISPLAYDXE) == 1
	INF Binaries/gts7/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

  INF Binaries/gts7/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Binaries/gts7/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF Binaries/gts7/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SdccDxe/SdccDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/RedriverDxe/RedriverDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/VibDxe/VibDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/SubPmicDxe/SubPmicDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SamsungDxe/GuidedFvDxe/GuidedFvDxe.inf

  INF Binaries/alioth/QcomPkg/Drivers/UFSDxe/UFSDxe.inf # Use Alioth UFSDxe, ours crashes
  INF Binaries/gts7/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

  # Only used for DisplayDxe for Qualcomm Demura
  #INF Binaries/gts7/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_DISPLAYDXE) == 1
	INF Binaries/gts7/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
	INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/gts7/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/gts7/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/alioth/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/gts7/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/gts7/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
