// Address: 0053bf78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0053bf78(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if ((local_98.dwMajorVersion < 6) &&
     ((local_98.dwMajorVersion != 5 || (local_98.dwMinorVersion == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar4 = 0;
  if (bVar3) {
    iVar1 = (**(code **)PTR_DAT_0066b358)();
    if (iVar1 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
  }
  uVar2 = FUN_0053beb8("COMCTL32.DLL");
  return 5 < (uVar2 >> 0x10 & 0xff) & bVar4;
}

