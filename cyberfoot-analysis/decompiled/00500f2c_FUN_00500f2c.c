// Address: 00500f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00500f2c(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
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
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_4 == '\0') {
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xffffff);
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xffffff);
    FUN_0041c968(param_2,param_3,&local_2c);
    local_24 = local_2c;
    local_20 = local_28;
    FUN_0041c968(param_2 + 3,param_3 + 3,&local_34);
    local_1c = local_34;
    local_18 = local_30;
    FUN_0041c968(param_2 + 6,param_3,&local_3c);
    local_14 = local_3c;
    local_10 = local_38;
    FUN_0041c968(param_2,param_3,&local_44);
    local_c = local_44;
    local_8 = local_40;
    FUN_0042b0e8(iVar1,&local_24,3);
  }
  else {
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xffffff);
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xffffff);
    FUN_0041c968(param_2 + 3,param_3,&local_2c);
    local_24 = local_2c;
    local_20 = local_28;
    FUN_0041c968(param_2 + 6,param_3 + 3,&local_34);
    local_1c = local_34;
    local_18 = local_30;
    FUN_0041c968(param_2,param_3 + 3,&local_3c);
    local_14 = local_3c;
    local_10 = local_38;
    FUN_0041c968(param_2 + 3,param_3,&local_44);
    local_c = local_44;
    local_8 = local_40;
    FUN_0042b0e8(iVar1,&local_24,3);
  }
  return;
}

