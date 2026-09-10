// Address: 00498e04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498e04(int *param_1,undefined4 param_2,uint param_3)

{
  if (0xfffd < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)();
  }
  FUN_004988fc(param_1,param_2);
  FUN_0049891c(param_1,param_3 + 2);
  return;
}

