// Address: 0042d438
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d438(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar3) {
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar3);
      cVar1 = thunk_FUN_00403cb4(uVar2,param_2);
      if (cVar1 != '\0') {
        FUN_0041df0c(*(undefined4 *)(param_1 + 4),iVar3);
        FUN_0041df0c(*(undefined4 *)(param_1 + 8),iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

