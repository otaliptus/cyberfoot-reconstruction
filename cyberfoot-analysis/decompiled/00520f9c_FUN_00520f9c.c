// Address: 00520f9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520f9c(void)

{
  int iVar1;
  char extraout_DL;
  undefined4 extraout_EDX;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00403e50();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0041e01c(*(undefined4 *)(iVar1 + 0x18),iVar3);
      FUN_00403a84();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00403a84(*(undefined4 *)(iVar1 + 0x18));
  FUN_00520d5c(iVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),extraout_DL) & 0xfffffffc);
  if ('\0' < extraout_DL) {
    FUN_00403e38(iVar1);
  }
  return;
}

