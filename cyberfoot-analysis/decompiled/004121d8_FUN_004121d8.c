// Address: 004121d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004121d8(undefined4 param_1,undefined2 *param_2,int *param_3)

{
  char cVar1;
  int *local_c;
  
  local_c = param_3;
  cVar1 = FUN_00418f24(*param_2,&local_c);
  if (cVar1 == '\0') {
    FUN_004121a8(param_1,param_2);
  }
  else {
    (**(code **)(*local_c + 0x28))(local_c,param_1,param_2,1);
  }
  return;
}

