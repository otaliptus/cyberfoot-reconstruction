// Address: 00501904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00501904(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  local_8 = param_1;
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xb5aca5);
  if (param_4 == '\0') {
    FUN_0041c968(param_2,param_3,&local_28);
    local_20 = local_28;
    local_1c = local_24;
    FUN_0041c968(param_2 + 4,param_3 + 4,&local_30);
    local_18 = local_30;
    local_14 = local_2c;
    FUN_0041c968(param_2 + 8,param_3,&local_38);
    local_10 = local_38;
    local_c = local_34;
    FUN_0042b0e8(iVar1,&local_20,2);
  }
  else {
    FUN_0041c968(param_2,param_3 + 4,&local_28);
    local_20 = local_28;
    local_1c = local_24;
    FUN_0041c968(param_2 + 4,param_3,&local_30);
    local_18 = local_30;
    local_14 = local_2c;
    FUN_0041c968(param_2 + 8,param_3 + 4,&local_38);
    local_10 = local_38;
    local_c = local_34;
    FUN_0042b0e8(iVar1,&local_20,2);
  }
  return;
}

