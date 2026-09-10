// Address: 0050b0d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0050b0d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_0050b02c(param_1,iVar2);
      if ((*(char *)(iVar1 + 0xa9) != '\0') &&
         (iVar1 = FUN_0050b02c(param_1,iVar2), *(char *)(iVar1 + 0x54) != '\0')) {
        iVar2 = FUN_0050b02c(param_1,iVar2);
        if (param_2 != iVar2) {
          return 0;
        }
        return 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}

