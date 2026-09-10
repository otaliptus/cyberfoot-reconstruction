// Address: 00517d78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00517d78(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_0040281c(*(undefined4 *)(iVar1 + 0x14));
  FUN_0040281c(*(undefined4 *)(iVar1 + 0x18));
  FUN_0040281c(*(undefined4 *)(iVar1 + 0x1c));
  FUN_00403a74(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

