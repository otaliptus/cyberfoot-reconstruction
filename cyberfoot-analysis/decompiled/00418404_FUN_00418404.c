// Address: 00418404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418404(int param_1,undefined4 param_2,undefined2 *param_3,undefined4 param_4)

{
  char cVar1;
  int *local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  if (((short)param_4 != *(short *)(param_1 + 4)) &&
     (cVar1 = FUN_00418f24(*param_3,&local_c), cVar1 != '\0')) {
    (**(code **)(*local_c + 0x1c))(local_c,local_8,param_3,param_4);
    return;
  }
  FUN_00418844(param_1);
  return;
}

