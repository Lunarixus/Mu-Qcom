#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/IoLib.h>
#include <Library/PcdLib.h>
#include <Library/SerialPortLib.h>

#include <Library/MemoryMapHelperLib.h>
#include <Library/PlatformPrePiLib.h>

#include "InitializationUtils.h"

VOID
EarlyInitialization(VOID)
{
  EFI_STATUS                      Status;
  ARM_MEMORY_REGION_DESCRIPTOR_EX DisplayMemoryRegion;
  ARM_MEMORY_REGION_DESCRIPTOR_EX PStoreMemoryRegion;

  // Initialize SerialPortLib
  SerialPortInitialize();

  // Get "Display Reserved" Memory Region Infos
  Status = LocateMemoryMapAreaByName("Display Reserved", &DisplayMemoryRegion);
  if (!EFI_ERROR (Status)) {
    // Clear Screen
    ZeroMem((VOID *)DisplayMemoryRegion.Address, DisplayMemoryRegion.Length);
  }

  Status = LocateMemoryMapAreaByName("PStore", &PStoreMemoryRegion);
  if(!EFI_ERROR (Status)) {
    // Clear PStore area
    UINT8 *base = (UINT8 *)PStoreMemoryRegion.Address;
    for (UINTN i = 0; i < PStoreMemoryRegion.Length; i++) {
      base[i] = 0;
    }
  }

  // Print UEFI Infos
  DEBUG ((EFI_D_WARN, "\nMu-Qcom on %a (AArch64)\n", (CHAR16 *)FixedPcdGetPtr(PcdSmbiosSystemModel)));
  DEBUG ((EFI_D_WARN, "Firmware version %s built on %a at %a\n\n", (CHAR16 *)PcdGetPtr(PcdFirmwareVersionString), __TIME__, __DATE__));

  // Do platform specific initialization here
  PlatformInitialize();
}
