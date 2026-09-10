// Address: 0050b078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0050b078(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0050b02c(param_1,iVar3);
      if ((*(char *)(iVar1 + 0xa9) != '\0') &&
         (iVar1 = FUN_0050b02c(param_1,iVar3), *(char *)(iVar1 + 0x54) != '\0')) {
        iVar2 = FUN_0050b02c(param_1,iVar3);
        if (param_2 != iVar2) {
          return 0;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

