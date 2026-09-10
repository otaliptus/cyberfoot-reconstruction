// Address: 0041cc58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041cc58(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar3);
      cVar1 = FUN_004039e8(uVar2,param_2);
      if (cVar1 != '\0') {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x54))(*(int **)(param_1 + 8),param_2);
  if (iVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),iVar4);
  }
  return uVar2;
}

