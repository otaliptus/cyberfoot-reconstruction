// Address: 0041f034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f034(int *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x14))(param_1,param_2,1);
  iVar1 = FUN_0041e104(param_1[2]);
  if (param_2 == iVar1) {
    FUN_0041df0c(param_1[2],*(int *)(param_1[2] + 8) + -1);
  }
  else {
    FUN_0041e1b8(param_1[2],param_2);
  }
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0041e960(param_1,param_2,1);
  FUN_0041ecfc(param_1);
  return;
}

