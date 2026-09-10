// Address: 00530d20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00530d20(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (*(int *)(iVar1 + 0x214) != 0) {
    FUN_00403a84();
  }
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x240));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x22c));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x264));
  FUN_0046e804(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

