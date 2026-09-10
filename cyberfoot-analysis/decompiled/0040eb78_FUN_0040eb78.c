// Address: 0040eb78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040eb78(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if (BVar1 != 0) {
    DAT_006620ec = local_94.dwPlatformId;
    DAT_006620f0 = local_94.dwMajorVersion;
    DAT_006620f4 = local_94.dwMinorVersion;
    if (local_94.dwPlatformId == 1) {
      _DAT_006620f8 = local_94.dwBuildNumber & 0xffff;
    }
    else {
      _DAT_006620f8 = local_94.dwBuildNumber;
    }
    FUN_00404b54(&DAT_006620fc,local_94.szCSDVersion,0x80);
  }
  return;
}

