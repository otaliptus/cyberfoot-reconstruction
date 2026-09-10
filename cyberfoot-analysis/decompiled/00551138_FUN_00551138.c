// Address: 00551138
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00551138(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_ZF;
  
  FUN_00404cf0(*(undefined4 *)(param_1 + 0x24),param_2);
  if (!(bool)in_ZF) {
    FUN_00404928(param_1 + 0x24,param_2);
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x19d) != '\0')) {
      FUN_00551138(*(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(param_1 + 0x24));
    }
    FUN_00550f2c(param_1);
  }
  return;
}

