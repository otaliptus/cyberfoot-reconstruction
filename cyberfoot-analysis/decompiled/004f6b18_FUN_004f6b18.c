// Address: 004f6b18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6b18(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f5b28(param_1,param_2);
  if (param_3 != *(char *)(iVar1 + 0x22)) {
    iVar1 = FUN_004f5b28(param_1,param_2);
    *(char *)(iVar1 + 0x22) = param_3;
    if (param_3 == '\0') {
      *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + -1;
    }
    else {
      *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + 1;
    }
  }
  return;
}

