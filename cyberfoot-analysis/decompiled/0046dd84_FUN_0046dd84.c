// Address: 0046dd84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046dd84(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (iVar1 == DAT_0066305c) {
    FUN_004633d8(0);
  }
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x160));
  FUN_004653e0(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

