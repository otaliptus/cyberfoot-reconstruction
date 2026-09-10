// Address: 004738d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004738d8(void)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  while (0 < *(int *)(*(int *)(iVar1 + 0x4c) + 8)) {
    uVar2 = FUN_0041e104(*(int *)(iVar1 + 0x4c));
    FUN_0047490c(iVar1,uVar2);
  }
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x50));
  FUN_00473c34(iVar1);
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x4c));
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  if (*(int *)(iVar1 + 0x54) != 0) {
    FUN_00403a84();
  }
  FUN_00426ea4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

