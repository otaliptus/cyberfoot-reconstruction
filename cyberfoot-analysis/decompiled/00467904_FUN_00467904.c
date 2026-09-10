// Address: 00467904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467904(int *param_1,undefined4 param_2)

{
  FUN_00465d78(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    FUN_00466440(param_1,1);
  }
  if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
    FUN_00403c80(param_1);
  }
  FUN_00467818(param_1,param_2,0,DAT_00467954);
  return;
}

