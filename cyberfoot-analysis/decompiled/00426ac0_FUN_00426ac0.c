// Address: 00426ac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426ac0(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(iVar1 + 0x10) == '\0')) {
    FUN_00426dac(iVar1);
    if (*(char *)(iVar1 + 0xc) != '\0') {
      FUN_00426d84(iVar1);
    }
    FUN_00426db4(iVar1);
  }
  if (*(HANDLE *)(iVar1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
  }
  FUN_00403a74(iVar1,extraout_EDX & 0xfffffffc);
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x38));
  FUN_0042679c();
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

