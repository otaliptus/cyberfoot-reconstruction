// Address: 0050aea4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0050aea4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0050b02c(param_1,iVar3);
      if ((*(char *)(iVar1 + 0xa9) != '\0') &&
         (iVar1 = FUN_0050b02c(param_1,iVar3), *(char *)(iVar1 + 0x54) != '\0')) {
        uVar2 = FUN_0050b02c(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

