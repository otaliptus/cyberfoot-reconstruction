// Address: 005157b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005157b4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar4);
      if ((*(char *)(iVar2 + 0xa9) != '\0') &&
         (iVar2 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar4),
         *(char *)(iVar2 + 0x54) != '\0')) {
        FUN_0050ed44(param_1,iVar4);
        uVar3 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar4);
        FUN_00512d88(param_1,uVar3);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

