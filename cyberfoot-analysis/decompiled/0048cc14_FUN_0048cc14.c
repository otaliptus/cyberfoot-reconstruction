// Address: 0048cc14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048cc14(int *param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 + param_5;
  if ((((uint)param_2[1] < uVar4) || ((uint)param_2[3] < param_5)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    (**(code **)*param_1)();
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[6] + param_2[4]) < uVar4)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)();
    }
    if (param_2[9] != 0) {
      FUN_0048cab8(param_1,param_2,1);
      param_2[9] = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      iVar2 = uVar4 - param_2[4];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_2[6] = iVar2;
    }
    FUN_0048cab8(param_1,param_2,0);
  }
  if ((uint)param_2[7] < uVar4) {
    if ((uint)param_2[7] < param_3) {
      uVar3 = param_3;
      if (param_4 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x16;
        (**(code **)*param_1)();
      }
    }
    else {
      uVar3 = param_2[7];
    }
    if (param_4 != 0) {
      param_2[7] = uVar4;
    }
    if (param_2[8] == 0) {
      if (param_4 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x16;
        (**(code **)*param_1)();
      }
    }
    else {
      iVar2 = param_2[2];
      iVar1 = param_2[6];
      for (uVar3 = uVar3 - iVar1; uVar3 < uVar4 - iVar1; uVar3 = uVar3 + 1) {
        FUN_00497770(*(undefined4 *)(*param_2 + uVar3 * 4),iVar2);
      }
    }
  }
  if (param_4 != 0) {
    param_2[9] = 1;
  }
  return (param_3 - param_2[6]) * 4 + *param_2;
}

