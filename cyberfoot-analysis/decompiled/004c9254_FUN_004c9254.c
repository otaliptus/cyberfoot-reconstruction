// Address: 004c9254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c9254(undefined4 param_1,undefined4 param_2,int *param_3,char param_4,char param_5,
                 int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_54 [8];
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_24 = param_3[3];
  uVar4 = local_28 - local_30;
  uVar5 = local_24 - local_2c;
  local_18 = (int)uVar5 >> 1;
  if (local_18 < 0) {
    local_18 = local_18 + (uint)((uVar5 & 1) != 0);
  }
  local_14 = (int)uVar4 >> 1;
  if (local_14 < 0) {
    local_14 = local_14 + (uint)((uVar4 & 1) != 0);
  }
  if (param_6 == 0x1fffffff) {
    param_6 = param_7;
  }
  else if (param_7 == 0x1fffffff) {
    param_7 = param_6;
  }
  local_8 = param_2;
  if (param_4 == '\0') {
    uVar1 = FUN_004ae808(param_6);
    uVar1 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar1);
  }
  else {
    uVar1 = FUN_004ae808(param_7);
    uVar1 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar1);
  }
  local_48 = uVar5;
  local_44 = uVar4;
  FUN_004aeba4(local_40);
  FUN_004af62c(local_8,uVar1,local_40);
  FUN_00403a84(uVar1);
  local_c = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  if (param_4 == '\0') {
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004b15cc(local_c);
  }
  else {
    local_44 = (local_2c - local_18) + 2;
    local_4c = uVar5;
    local_48 = uVar4;
    FUN_004b15cc(local_c);
  }
  uVar1 = 0;
  local_10 = 0;
  if (param_5 == '\0') {
    uVar1 = FUN_004b166c(PTR_DAT_004ae160,1,local_c);
  }
  else if (param_5 == '\x01') {
    uVar3 = FUN_004ae808(param_7);
    uVar2 = FUN_004ae808(param_6);
    uVar6 = 1;
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004aeba4(local_40);
    local_10 = FUN_004aef34(PTR_DAT_004adf94,1,local_40,uVar6,uVar2,uVar3);
  }
  else if (param_5 == '\x02') {
    uVar3 = FUN_004ae808(param_7);
    uVar2 = FUN_004ae808(param_6);
    uVar6 = 2;
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004aeba4(local_40);
    local_10 = FUN_004aef34(PTR_DAT_004adf94,1,local_40,uVar6,uVar2,uVar3);
  }
  else if (param_5 == '\x03') {
    uVar3 = FUN_004ae808(param_7);
    uVar2 = FUN_004ae808(param_6);
    uVar6 = 3;
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004aeba4(local_40);
    local_10 = FUN_004aef34(PTR_DAT_004adf94,1,local_40,uVar6,uVar2,uVar3);
  }
  if (param_5 == '\0') {
    if (param_4 == '\0') {
      FUN_004aeb88(local_30 + local_14,local_24,local_54);
      FUN_004b17b0(uVar1,local_54);
      uVar3 = FUN_004ae808(param_7);
      FUN_004b16c4(uVar1,uVar3);
      local_1c = FUN_004ae808(param_6);
    }
    else {
      FUN_004aeb88(local_30 + local_14,local_2c,local_54);
      FUN_004b17b0(uVar1,local_54);
      uVar3 = FUN_004ae808(param_6);
      FUN_004b16c4(uVar1,uVar3);
      local_1c = FUN_004ae808(param_7);
    }
    local_20 = 1;
    FUN_004b170c(uVar1,&local_1c,&local_20);
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004af648(local_8,uVar1);
    FUN_00403a84(uVar1);
  }
  else {
    local_48 = uVar5;
    local_44 = uVar4;
    FUN_004af648(local_8,local_10);
    FUN_00403a84(local_10);
  }
  FUN_00403a84(local_c);
  return;
}

