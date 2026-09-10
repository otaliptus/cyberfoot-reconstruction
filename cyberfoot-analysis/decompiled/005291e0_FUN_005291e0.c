// Address: 005291e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005291e0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 uVar1;
  undefined1 local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_3;
  local_10 = param_3[1];
  local_c = param_3[2];
  local_8 = param_3[3];
  if ((*(int *)(*(int *)(param_1 + 4) + 0x38) == 0) ||
     (*(int *)(*(int *)(param_1 + 4) + 4) == 0x1fffffff)) {
    local_28 = local_14 + -1;
    local_2c = local_10 + -1;
    local_30 = (local_c - local_14) + 1;
    local_34 = (local_8 - local_10) + 1;
    FUN_004aeba4(local_24,param_2,param_3,(float)local_34,(float)local_30,(float)local_2c,
                 (float)local_28);
  }
  else {
    local_28 = (local_c - local_14) + -1;
    local_2c = (local_8 - local_10) + -1;
    FUN_004aeba4(local_24,param_2,param_3,(float)local_2c,(float)local_28,(float)local_10,
                 (float)local_14);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    FUN_00529348(param_1,param_2,local_24);
  }
  if ((double)CONCAT44(param_10,param_9) < (double)CONCAT44(param_6,param_5)) {
    FUN_00529918(param_1,param_2,&local_14,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
    ;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = param_4;
    FUN_0052a138(param_1,&local_14,local_44,param_4);
    FUN_005299cc(param_1,param_2,local_44,uVar1);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00529ca4(param_1,param_2,&local_14,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
    ;
  }
  if ((*(char *)(param_1 + 0x38) == '\0') && (*(char *)(param_1 + 0x3a) != '\0')) {
    FUN_00529388(param_1,param_2,&local_14,param_4);
  }
  return;
}

