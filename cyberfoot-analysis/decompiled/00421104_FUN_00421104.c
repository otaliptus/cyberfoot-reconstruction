// Address: 00421104
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421104(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  FUN_00420fb8(param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}

