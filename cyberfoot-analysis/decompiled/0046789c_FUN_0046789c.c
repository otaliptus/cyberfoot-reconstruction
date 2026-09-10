// Address: 0046789c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046789c(int *param_1,undefined4 param_2)

{
  FUN_00465d78(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    FUN_00466440(param_1,1);
  }
  if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
    *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) | 2;
  }
  FUN_00467818(param_1,param_2,0,DAT_004678e4);
  return;
}

