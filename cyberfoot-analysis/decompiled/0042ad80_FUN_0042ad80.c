// Address: 0042ad80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ad80(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_0041e430(DAT_0066c8ec,iVar1);
  FUN_0042b628(iVar1,0);
  FUN_00403a84(*(undefined4 *)(iVar1 + 0xc));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x10));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x14));
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x38));
  FUN_0041e640(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

