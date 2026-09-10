// Address: 00472638
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472638(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (*(int *)(iVar1 + 0x5c) != 0) {
    FUN_00472a4c(*(int *)(iVar1 + 0x5c),iVar1);
  }
  FUN_004277a4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

