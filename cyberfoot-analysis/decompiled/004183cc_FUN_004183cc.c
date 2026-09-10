// Address: 004183cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004183cc(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *local_10;
  
  local_10 = param_3;
  cVar1 = FUN_00418f24((short)*param_3,&local_10);
  if (cVar1 == '\0') {
    FUN_00418844(param_1);
  }
  else {
    (**(code **)(*local_10 + 0x1c))(local_10,param_2,param_3,*(undefined2 *)(param_1 + 4));
  }
  return;
}

