// Address: 004e7b1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7b1c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[8] = param_1[0xb];
  iVar1 = param_2;
  if (param_1[6] < param_2) {
    iVar1 = param_1[6];
  }
  if (param_2 < param_1[7]) {
    iVar1 = param_1[7];
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  param_1[0xb] = iVar1;
  (**(code **)(*param_1 + 0x10))();
  if ((param_1[0xe] < 1) && (*(char *)((int)param_1 + 5) == '\0')) {
    if (*(char *)((int)param_1 + 0x11) == '\0') {
      uVar2 = (**(code **)(*(int *)param_1[9] + 0xcc))((int *)param_1[9],param_1[8],param_1[0xb]);
      (**(code **)(*(int *)param_1[9] + 0xdc))((int *)param_1[9],param_1,uVar2,0);
    }
    else {
      uVar2 = (**(code **)(*(int *)param_1[9] + 0xd0))((int *)param_1[9],param_1[8],param_1[0xb]);
      (**(code **)(*(int *)param_1[9] + 0xdc))((int *)param_1[9],param_1,0,uVar2);
    }
  }
  return;
}

