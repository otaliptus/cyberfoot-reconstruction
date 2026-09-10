// Address: 0045e008
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e008(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x23c));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x278));
  FUN_0045d260(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

