// Address: 0044c054
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c054(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x234));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x238));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x23c));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x248));
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x24c));
  FUN_0045cbb4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

