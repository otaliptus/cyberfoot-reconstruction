// Address: 004983a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004983a0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uStack_10;
  
  uStack_10 = param_3;
  if (param_1[5] != 0x65) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[8] <= (uint)param_1[0x37]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1[0x37];
    *(int *)(iVar1 + 8) = param_1[8];
    (**(code **)param_1[2])();
  }
  if (*(int *)(param_1[0x52] + 0xc) != 0) {
    (**(code **)(param_1[0x52] + 4))();
  }
  if ((uint)(param_1[8] - param_1[0x37]) < param_3) {
    param_3 = param_1[8] - param_1[0x37];
  }
  uStack_10 = 0;
  (**(code **)(param_1[0x53] + 4))(param_1,param_2,&uStack_10);
  param_1[0x37] = param_1[0x37] + param_3;
  return param_3;
}

