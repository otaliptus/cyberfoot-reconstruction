// Address: 00501ad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00501ad0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  uVar3 = FUN_004e4c08(6,CONCAT31((int3)((uint)PTR_DAT_0066aeb0 >> 8),*PTR_DAT_0066aeb0));
  uVar4 = FUN_004e4c08(7,*PTR_DAT_0066aeb0);
  cVar2 = FUN_0050a2ac(param_2);
  if (cVar2 == '\0') {
    FUN_004e697c(*(undefined4 *)(param_1 + 8),&local_40,uVar3,uVar4);
  }
  else {
    FUN_004e697c(*(undefined4 *)(param_1 + 8),&local_40,uVar4,uVar3);
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = FUN_004e4c08(2,*PTR_DAT_0066aeb0);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),uVar3);
  cVar2 = FUN_0050a2e8(param_2);
  if (cVar2 != '\x03') {
    cVar2 = FUN_0050a2e8(param_2);
    if (cVar2 != '\0') {
      uVar3 = FUN_004e4c08(10,*PTR_DAT_0066aeb0);
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),uVar3);
      FUN_0041c968(local_38 + -1,local_3c + 2,&local_20);
      local_30 = local_20;
      local_2c = local_1c;
      FUN_0041c968(local_38 + -1,local_34 + -3,&local_18);
      local_28 = local_18;
      local_24 = local_14;
      FUN_0042b120(iVar1,&local_30,1);
      goto LAB_00501c2d;
    }
  }
  FUN_0041c968(local_38 + -1,local_3c,&local_20);
  local_30 = local_20;
  local_2c = local_1c;
  FUN_0041c968(local_38 + -1,local_34 + -1,&local_18);
  local_28 = local_18;
  local_24 = local_14;
  FUN_0042b120(iVar1,&local_30,1);
LAB_00501c2d:
  uVar3 = FUN_004e4c08(2,*PTR_DAT_0066aeb0);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),uVar3);
  FUN_0041c968(local_40,local_34 + -1,&local_20);
  local_30 = local_20;
  local_2c = local_1c;
  FUN_0041c968(local_38,local_34 + -1,&local_18);
  local_28 = local_18;
  local_24 = local_14;
  FUN_0042b120(iVar1,&local_30,1);
  return;
}

