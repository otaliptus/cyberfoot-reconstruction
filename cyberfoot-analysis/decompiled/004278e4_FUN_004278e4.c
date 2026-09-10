// Address: 004278e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004278e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x50),iVar2);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        FUN_0041df0c(*(undefined4 *)(param_1 + 0x50),iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

