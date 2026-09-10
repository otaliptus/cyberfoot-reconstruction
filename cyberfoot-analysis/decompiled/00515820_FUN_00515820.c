// Address: 00515820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00515820(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar1);
      if (*(char *)(iVar2 + 0xa9) != '\0') {
        FUN_0050ed44(param_1,iVar1);
        uVar3 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar1);
        FUN_00512d88(param_1,uVar3);
        return;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

