// Address: 005019f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005019f8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
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
  
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  local_40 = param_2[3];
  uVar2 = FUN_004e4c08(7,CONCAT31((int3)((uint)PTR_DAT_0066aeb0 >> 8),*PTR_DAT_0066aeb0));
  uVar3 = FUN_004e4c08(6,*PTR_DAT_0066aeb0);
  FUN_004e697c(*(undefined4 *)(param_1 + 8),&local_4c,uVar3,uVar2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_004e4c08(2,*PTR_DAT_0066aeb0);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),uVar2);
  FUN_0041c968(local_44 + -1,local_48,&local_24);
  local_3c = local_24;
  local_38 = local_20;
  FUN_0041c968(local_44 + -1,local_40 + -1,&local_1c);
  local_34 = local_1c;
  local_30 = local_18;
  FUN_0041c968(local_4c + -1,local_40 + -1,&local_14);
  local_2c = local_14;
  local_28 = local_10;
  FUN_0042b120(iVar1,&local_3c,2);
  return;
}

