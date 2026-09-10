// Address: 0046eac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046eac8(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((param_1 == *(int *)(*(int *)(param_1 + 0x1c) + 100)) ||
     (((iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 100), iVar3 = param_1,
       iVar2 == *(int *)(param_1 + 0x14) && (*(int *)(param_1 + 4) != 0)) &&
      (iVar2 = FUN_0046e97c(iVar2), iVar2 == 1)))) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x44))(piVar1,&iStack_1c);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x8c))(piVar1,&iStack_1c);
    if (param_2 == '\x01') {
      iStack_10 = iStack_10 - iStack_18;
    }
    else {
      iStack_10 = iStack_14 - iStack_1c;
    }
  }
  else {
    do {
      iVar2 = iVar3;
      if (iVar2 == *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
        if (param_2 == *(char *)(iVar2 + 0x10)) {
          return *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
        }
        iVar2 = FUN_0046ee90(iVar2);
        return iVar2;
      }
      iVar3 = *(int *)(iVar2 + 0x14);
    } while (param_2 != *(char *)(*(int *)(iVar2 + 0x14) + 0x10));
    iVar3 = FUN_0046ee90(iVar2);
    iStack_10 = FUN_0046e9cc(iVar2);
    iStack_10 = iVar3 - iStack_10;
  }
  return iStack_10;
}

