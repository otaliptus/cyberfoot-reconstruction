// Address: 00520540
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520540(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_0051ab3c(*(undefined4 *)(*(int *)(iVar1 + 8) + 0x30),iVar1);
  }
  FUN_0041e640(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

