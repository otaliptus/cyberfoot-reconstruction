// Address: 00479e54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00479e54(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x34));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x44));
  FUN_00426ea4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

