// Address: 0050af58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050af58(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0041e078(*(undefined4 *)(param_1 + 0x3c),param_2,param_3,param_3);
  iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 8) + -1;
  iVar3 = param_2;
  if (iVar1 <= iVar4) {
    iVar4 = (iVar4 - iVar1) + 1;
    do {
      iVar2 = FUN_0050b02c(param_1,iVar1);
      if (((param_2 != iVar2) &&
          (iVar2 = FUN_0050b02c(param_1,iVar1), *(char *)(iVar2 + 0x54) != '\0')) &&
         (iVar2 = FUN_0050b02c(param_1,iVar1), *(char *)(iVar2 + 0xa9) != '\0')) {
        iVar3 = FUN_0050b02c(param_1,iVar1);
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

