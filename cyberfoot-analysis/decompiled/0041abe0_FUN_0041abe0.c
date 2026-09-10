// Address: 0041abe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041abe0(int *param_1,int param_2,undefined4 param_3)

{
  code *local_10;
  
  local_10 = *(code **)(param_2 + 8);
  if (((uint)local_10 & 0xff000000) == 0xff000000) {
    FUN_00406898(((uint)local_10 & 0xffffff) + (int)param_1,param_3);
  }
  else {
    if (((uint)local_10 & 0xff000000) == 0xfe000000) {
      local_10 = *(code **)(*param_1 + (int)(short)local_10);
    }
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
      (*local_10)(param_1,param_3);
    }
    else {
      (*local_10)(param_1,*(int *)(param_2 + 0x10),param_3);
    }
  }
  return;
}

