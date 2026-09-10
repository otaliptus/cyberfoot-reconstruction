// Address: 00498450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00498450(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[5] != 0x66) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x37] < (uint)param_1[8]) {
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = param_1[0x37];
      *(int *)(iVar2 + 8) = param_1[8];
      (**(code **)param_1[2])();
    }
    if (*(int *)(param_1[0x52] + 0xc) != 0) {
      (**(code **)(param_1[0x52] + 4))();
    }
    uVar1 = param_1[0x3a] * 8;
    if (param_3 < uVar1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)();
    }
    iVar2 = (**(code **)(param_1[0x55] + 4))(param_1,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      param_1[0x37] = param_1[0x37] + uVar1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    uVar1 = 0;
  }
  return uVar1;
}

