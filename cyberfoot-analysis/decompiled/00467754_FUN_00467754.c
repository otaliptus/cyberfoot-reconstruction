// Address: 00467754
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467754(int *param_1)

{
  int iVar1;
  
  if (*(short *)((int)param_1 + 0x122) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x3c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x3c))();
      if (*(int *)(iVar1 + 0x40) != param_1[0x48]) {
        (*(code *)param_1[0x48])(param_1[0x49],param_1);
        return;
      }
    }
  }
  if (((*(byte *)(param_1 + 7) & 0x10) == 0) && (param_1[0x1b] != 0)) {
    (**(code **)(*(int *)param_1[0x1b] + 0x18))((int *)param_1[0x1b],param_1);
  }
  else if (*(short *)((int)param_1 + 0x122) != 0) {
    (*(code *)param_1[0x48])(param_1[0x49],param_1);
  }
  return;
}

