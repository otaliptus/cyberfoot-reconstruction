// Address: 0048d920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048d920(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iStack_10;
  
  iStack_10 = param_3;
  if (param_1[5] != 0xcd) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = param_1[0x23];
      *(int *)(iVar1 + 8) = param_1[0x1d];
      (**(code **)param_1[2])();
    }
    iStack_10 = 0;
    (**(code **)(param_1[0x6a] + 4))(param_1,param_2,&iStack_10);
    param_1[0x23] = param_1[0x23] + param_3;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    param_3 = 0;
  }
  return param_3;
}

