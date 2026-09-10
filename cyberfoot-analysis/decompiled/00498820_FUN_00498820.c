// Address: 00498820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498820(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00499b5c(param_1,0);
  if (param_1[0x2b] == 0) {
    FUN_0049aefc(param_1);
    FUN_0049b8e8(param_1);
    FUN_0049a214(param_1,0);
  }
  FUN_0049bf0c(param_1);
  if (param_1[0x2c] == 0) {
    if (param_1[0x38] == 0) {
      FUN_0049dc50(param_1);
    }
    else {
      FUN_0049ca18(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)();
  }
  if ((param_1[0x29] < 2) && (param_1[0x2d] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_0049a9f8(param_1,uVar1);
  FUN_00499cfc(param_1,0);
  FUN_004990a0(param_1);
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)param_1[0x56])();
  return;
}

