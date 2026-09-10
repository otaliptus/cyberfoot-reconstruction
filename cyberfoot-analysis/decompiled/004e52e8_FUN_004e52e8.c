// Address: 004e52e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e52e8(undefined4 param_1,uint param_2,uint param_3,int *param_4,char param_5,
                 char param_6,int *param_7,int param_8)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = *param_7;
  local_14 = param_7[1];
  local_10 = param_7[2];
  local_c = param_7[3];
  local_8 = param_3;
  if (param_6 == '\0') {
    *param_4 = local_18 + param_8;
  }
  else if (param_6 == '\x01') {
    *param_4 = local_10 - (param_8 + param_2);
  }
  else if (param_6 == '\x02') {
    FUN_00407190(&local_18,&local_20);
    iVar1 = (int)param_2 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((param_2 & 1) != 0);
    }
    *param_4 = local_20 - iVar1;
  }
  if (param_5 == '\0') {
    param_4[1] = param_8 + local_14;
  }
  else if (param_5 == '\x01') {
    param_4[1] = local_c - (param_8 + local_8);
  }
  else if (param_5 == '\x02') {
    FUN_00407190(&local_18,&local_20);
    iVar1 = (int)local_8 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((local_8 & 1) != 0);
    }
    param_4[1] = local_1c - iVar1;
  }
  return;
}

