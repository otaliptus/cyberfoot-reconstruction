// Address: 004e7abc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7abc(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    if (param_2 < 0) {
      param_1[6] = 0;
    }
    uVar1 = FUN_004e7d80(param_1);
    (**(code **)(*param_1 + 0xc))(param_1,uVar1);
    (**(code **)(*param_1 + 0x10))();
    if (param_1[6] < param_1[0xb]) {
      FUN_004e7b1c(param_1,param_1[6]);
    }
  }
  return;
}

