// Address: 005272dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005272dc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,char param_6,undefined1 param_7,undefined1 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined4 local_8;
  
  local_48 = *param_2;
  local_44 = param_2[1];
  local_40 = (float)param_2[2];
  local_3c = (float)param_2[3];
  local_14 = (double)local_40;
  local_1c = (double)local_3c;
  local_2c = local_1c / (double)_DAT_005274f8;
  local_24 = local_14 / (double)_DAT_005274f8;
  local_8 = param_3;
  if (param_6 == '\0') {
    uVar1 = FUN_004b1cd0(param_7,param_9);
    uVar1 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar1);
  }
  else {
    uVar1 = FUN_004b1cd0(param_8,param_3);
    uVar1 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar1);
  }
  uVar2 = FUN_0052698c(&local_48,param_5,param_4,0);
  FUN_004b1c30(param_1,uVar1,uVar2);
  local_38 = FUN_004b12c8(PTR_DAT_004add1c,1,uVar2);
  FUN_00403a84(uVar2);
  FUN_004b1c5c(param_1,local_38,0);
  FUN_00403a84(uVar1);
  uVar1 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  if (param_6 == '\0') {
    FUN_004b15cc(uVar1);
  }
  else {
    FUN_004b15cc(uVar1);
  }
  uVar2 = FUN_004b166c(PTR_DAT_004ae160,1,uVar1);
  if (param_6 == '\0') {
    FUN_004aeb90(local_50);
    FUN_004b1780(uVar2,local_50);
    uVar3 = FUN_004b1cd0(param_8,local_8);
    FUN_004b16c4(uVar2,uVar3);
    local_30 = FUN_004b1cd0(param_7,param_9);
  }
  else {
    FUN_004aeb90(local_50);
    FUN_004b1780(uVar2,local_50);
    uVar3 = FUN_004b1cd0(param_7,param_9);
    FUN_004b16c4(uVar2,uVar3);
    local_30 = FUN_004b1cd0(param_8,local_8);
  }
  local_34 = 1;
  FUN_004b170c(uVar2,&local_30,&local_34);
  FUN_004af62c(param_1,uVar2,&local_48);
  FUN_00403a84(uVar2);
  FUN_00403a84(uVar1);
  FUN_00403a84(local_38);
  FUN_004b1c84(param_1);
  return;
}

