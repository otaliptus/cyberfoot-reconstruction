// Address: 005be728
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be728(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (*(int *)(iVar1 + 0x4c) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x4c) + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_0041e01c(*(undefined4 *)(iVar1 + 0x4c),iVar3);
        FUN_00403a84();
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00403a84(*(undefined4 *)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}

