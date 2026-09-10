// Address: 0048d9b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0048d9b0(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[5] != 0xce) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = param_1[0x23];
      *(int *)(iVar2 + 8) = param_1[0x1d];
      (**(code **)param_1[2])();
    }
    uVar1 = param_1[0x4e] * param_1[0x4f];
    if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)();
    }
    iVar2 = (**(code **)(param_1[0x6b] + 0xc))(param_1,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      param_1[0x23] = param_1[0x23] + uVar1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    uVar1 = 0;
  }
  return uVar1;
}

