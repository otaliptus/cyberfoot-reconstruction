// Address: 00472d88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472d88(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x98));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x9c));
  if (*(int *)(iVar1 + 0x90) != 0) {
    FUN_0040fe60(iVar1 + 0x90);
  }
  FUN_00472638(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

