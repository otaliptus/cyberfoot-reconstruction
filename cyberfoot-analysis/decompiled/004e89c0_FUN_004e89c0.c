// Address: 004e89c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e89c0(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x25c));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x260));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x238));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x268));
  FUN_004e86cc(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

