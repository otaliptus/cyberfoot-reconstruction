// Address: 00492ac4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492ac4(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar1 + 0x30) == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))
                      (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4));
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
  }
  iVar2 = *(int *)(iVar1 + 0x44);
  if (iVar2 != 0) {
    if (iVar2 == 1) goto LAB_00492b82;
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
              (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4),iVar1 + 0x34,
               param_4,param_3,param_2,*(undefined4 *)(iVar1 + 0x48));
    if (*(uint *)(iVar1 + 0x34) < *(uint *)(iVar1 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(int *)(iVar1 + 0x48) = *(int *)(param_1 + 0x13c) + -1;
  if (*(int *)(iVar1 + 0x4c) == *(int *)(param_1 + 0x140)) {
    FUN_00492920(param_1);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
LAB_00492b82:
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
            (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4),iVar1 + 0x34,param_4
             ,param_3,param_2,*(undefined4 *)(iVar1 + 0x48));
  if (*(uint *)(iVar1 + 0x48) <= *(uint *)(iVar1 + 0x34)) {
    if (*(int *)(iVar1 + 0x4c) == 1) {
      FUN_00492824(param_1);
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) ^ 1;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(int *)(iVar1 + 0x34) = *(int *)(param_1 + 0x13c) + 1;
    *(int *)(iVar1 + 0x48) = *(int *)(param_1 + 0x13c) + 2;
    *(undefined4 *)(iVar1 + 0x44) = 2;
  }
  return;
}

