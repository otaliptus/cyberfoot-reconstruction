// Address: 004a6578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6578(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_0040281c(*(undefined4 *)(iVar1 + 4),*(int *)(iVar1 + 8) + 1);
  FUN_00403a74(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

