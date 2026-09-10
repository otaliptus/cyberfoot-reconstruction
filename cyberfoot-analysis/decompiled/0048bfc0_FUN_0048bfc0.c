// Address: 0048bfc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048bfc0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xc;
    *(undefined4 *)(iVar2 + 0x18) = 0x3e;
    *(int *)(iVar2 + 0x1c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x1d0) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x15;
    *(undefined4 *)(iVar2 + 0x18) = 0x1d0;
    *(int *)(iVar2 + 0x1c) = param_3;
    (**(code **)*param_1)();
  }
  iVar2 = *param_1;
  iVar1 = param_1[3];
  FUN_0048aaf4();
  *param_1 = iVar2;
  param_1[3] = iVar1;
  param_1[4] = 1;
  FUN_0048cfe4(param_1);
  param_1[2] = 0;
  piVar3 = param_1 + 0x29;
  param_1[6] = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  piVar3 = param_1 + 0x2d;
  do {
    iVar2 = iVar2 + 1;
    *piVar3 = 0;
    piVar3[4] = 0;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  param_1[0x4c] = 0;
  FUN_00497590(param_1);
  FUN_0048d638(param_1);
  param_1[5] = 200;
  return;
}

