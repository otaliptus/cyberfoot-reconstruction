// Address: 004f07f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f07f4(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_004f36ec(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x279) == '\0') {
    if (*(char *)(param_1 + 0x23c) == '\0') {
      if (*param_2 == 0x26) {
        if ((0 < *(int *)(param_1 + 0x2b0)) && ((param_3 & 2) == 0)) {
          FUN_004f0798(param_1,*(int *)(param_1 + 0x2b0) + -1);
        }
      }
      else if (((*param_2 == 0x28) &&
               (iVar1 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))(),
               *(int *)(param_1 + 0x2b0) < iVar1 + -1)) && ((param_3 & 2) == 0)) {
        FUN_004f0798(param_1,*(int *)(param_1 + 0x2b0) + 1);
      }
    }
  }
  else {
    iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x270),PTR_PTR_004e9a2c);
    if (*param_2 == 0x26) {
      if ((0 < *(int *)(iVar1 + 0x278)) && ((param_3 & 2) == 0)) {
        FUN_004f0798(param_1,*(int *)(iVar1 + 0x278) + -1);
      }
    }
    else if (((*param_2 == 0x28) &&
             (iVar2 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))(),
             *(int *)(iVar1 + 0x278) < iVar2 + -1)) && ((param_3 & 2) == 0)) {
      FUN_004f0798(param_1,*(int *)(iVar1 + 0x278) + 1);
    }
  }
  return;
}

