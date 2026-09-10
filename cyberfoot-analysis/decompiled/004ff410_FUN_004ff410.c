// Address: 004ff410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff410(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    (**(code **)(*param_1 + 0x4c))(param_1,param_2,&local_1c);
  }
  else if (*(char *)((int)param_1 + 0xe) == '\x01') {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_1c);
  }
  FUN_004fe444(param_1,param_2,&local_1c);
  return;
}

