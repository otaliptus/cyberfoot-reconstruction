// Address: 00528c98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528c98(int param_1,undefined4 *param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,double param_7,double param_8)

{
  int iVar1;
  float10 in_ST0;
  int local_68;
  int local_64;
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34 [2];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  double local_c;
  
  local_24 = *param_2;
  uStack_20 = param_2[1];
  uStack_1c = param_2[2];
  uStack_18 = param_2[3];
  if (param_3 == '\0') {
    if ((*(int *)(*(int *)(param_1 + 0x10) + 4) == 0x1fffffff) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 0x38) == 0)) {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44);
      local_48 = local_2c - local_44;
    }
    else {
      FUN_0052a340(param_1,&local_24,local_34);
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      FUN_0052a340(param_1,&local_24,&local_44);
      local_48 = (local_2c - iVar1) - local_44;
    }
    local_c = (double)local_48;
    if (param_7 - param_8 <= (double)_DAT_0052906c) {
      local_14 = 0.0;
    }
    else {
      FUN_00432370();
      local_14 = (double)in_ST0;
    }
    if ((*(int *)(*(int *)(param_1 + 0x10) + 4) == 0x1fffffff) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 0x38) == 0)) {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44,SUB42((float)local_34[0],0));
      FUN_0052a340(param_1,&local_24,local_58,(float)local_14,(float)local_40);
      FUN_0052a340(param_1,&local_24,&local_68);
      local_48 = local_4c - local_64;
      FUN_004aeba4(param_4);
    }
    else {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44,
                   SUB42((float)*(int *)(*(int *)(param_1 + 0x10) + 0x38) / _DAT_00529070 +
                         (float)local_34[0],0));
      FUN_0052a340(param_1,&local_24,local_58,(float)local_14,
                   (float)*(int *)(*(int *)(param_1 + 0x10) + 0x38) / _DAT_00529070 +
                   (float)local_40);
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      FUN_0052a340(param_1,&local_24,&local_68);
      local_48 = (local_4c - iVar1) - local_64;
      FUN_004aeba4(param_4);
    }
  }
  else if (param_3 == '\x01') {
    if ((*(int *)(*(int *)(param_1 + 0x10) + 4) == 0x1fffffff) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 0x38) == 0)) {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44);
      local_48 = local_28 - local_40;
    }
    else {
      FUN_0052a340(param_1,&local_24,local_34);
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      FUN_0052a340(param_1,&local_24,&local_44);
      local_48 = (local_28 - iVar1) - local_40;
    }
    local_c = (double)local_48;
    if (param_7 - param_8 <= (double)_DAT_0052906c) {
      local_14 = 0.0;
    }
    else {
      FUN_00432370();
      local_14 = (double)in_ST0;
    }
    if ((*(int *)(*(int *)(param_1 + 0x10) + 4) == 0x1fffffff) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 0x38) == 0)) {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44,SUB42((float)local_34[0],0));
      FUN_0052a340(param_1,&local_24,local_58,(float)local_38 - (float)local_14);
      FUN_0052a340(param_1,&local_24,&local_68);
      local_48 = local_50 - local_68;
      FUN_004aeba4(param_4);
    }
    else {
      FUN_0052a340(param_1,&local_24,local_34);
      FUN_0052a340(param_1,&local_24,&local_44,
                   SUB42((float)*(int *)(*(int *)(param_1 + 0x10) + 0x38) / _DAT_00529070 +
                         (float)local_34[0],0));
      FUN_0052a340(param_1,&local_24,local_58,
                   ((float)local_38 -
                   (float)*(int *)(*(int *)(param_1 + 0x10) + 0x38) / _DAT_00529070) -
                   (float)local_14);
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      FUN_0052a340(param_1,&local_24,&local_68);
      local_48 = (local_50 - iVar1) - local_68;
      FUN_004aeba4(param_4);
    }
  }
  return;
}

