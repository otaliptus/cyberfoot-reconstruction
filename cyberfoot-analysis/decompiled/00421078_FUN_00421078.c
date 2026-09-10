// Address: 00421078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421078(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_004208f4(param_2,param_2,param_3,0,0);
  iVar1 = (**(code **)*param_2)();
  (**(code **)(*param_1 + 4))(param_1,iVar1);
  if (iVar1 != 0) {
    FUN_00420b00(param_2,param_1[1],iVar1);
  }
  return;
}

