// Address: 00427010
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427010(int *param_1,int param_2)

{
  FUN_00403c80(param_2,param_1);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,*(undefined4 *)(param_2 + 8));
  FUN_00426fbc(param_1,param_2);
  FUN_00427530(param_2,1);
  if ((*(byte *)(param_1 + 7) & 0x10) != 0) {
    FUN_004274e0(param_2,1,1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}

