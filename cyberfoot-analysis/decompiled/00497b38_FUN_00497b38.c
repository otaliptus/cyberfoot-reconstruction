// Address: 00497b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497b38(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[5] != 100) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_1[0x10] == 0) {
    iVar1 = (**(code **)param_1[1])(param_1,0,0x348);
    param_1[0x10] = iVar1;
  }
  param_1[0xd] = 8;
  FUN_00497a3c(param_1,0x4b,1);
  FUN_00497ae0(param_1);
  iVar1 = 0;
  piVar2 = param_1 + 0x1d;
  do {
    *(undefined1 *)piVar2 = 0;
    *(undefined1 *)(piVar2 + 4) = 1;
    *(undefined1 *)(piVar2 + 8) = 5;
    iVar1 = iVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 1);
  } while (iVar1 < 0x10);
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (8 < param_1[0xd]) {
    param_1[0x2d] = 1;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)((int)param_1 + 0xd1) = 1;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  *(undefined2 *)(param_1 + 0x35) = 1;
  *(undefined2 *)((int)param_1 + 0xd6) = 1;
  FUN_00497c38(param_1);
  return;
}

