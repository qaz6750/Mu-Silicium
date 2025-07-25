APRIORI DXE {
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/hotdog/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF Binaries/hotdog/EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Binaries/hotdog/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/hotdog/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif 

  INF Binaries/hotdog/QcomPkg/Drivers/PILDxe/PILDxe.inf
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/hotdog/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
