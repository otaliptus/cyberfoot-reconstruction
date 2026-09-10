// Address: 00510d0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00510d0c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5
                 )

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_18 = *param_5;
  local_14 = param_5[1];
  local_10 = param_5[2];
  local_c = param_5[3];
  iVar1 = param_1[0x82];
  local_8 = param_2;
  iVar3 = FUN_0050f404(param_1,3);
  if (0 < iVar3) {
    iVar3 = (**(code **)(*param_1 + 0x11c))();
    if ((param_3 == iVar3 + -1) && ((char)param_1[0xa9] == '\x03')) {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0);
    }
    else {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),param_4);
    }
    FUN_004070b8(local_18,local_c,&local_30);
    local_28 = local_30;
    local_24 = local_2c;
    FUN_004070b8(local_10 + 1,local_c,&local_38);
    local_20 = local_38;
    local_1c = local_34;
    FUN_0042b120(iVar1,&local_28,1);
  }
  iVar3 = FUN_0050f404(param_1,1);
  if (0 < iVar3) {
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000014);
    FUN_004070b8(local_18,local_14 + -1,&local_30);
    local_28 = local_30;
    local_24 = local_2c;
    FUN_004070b8(local_10 + 1,local_14 + -1,&local_38);
    local_20 = local_38;
    local_1c = local_34;
    FUN_0042b120(iVar1,&local_28,1);
  }
  iVar3 = FUN_0050f404(param_1,0);
  if (0 < iVar3) {
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000014);
    FUN_004070b8(local_18,local_14 + -1,&local_30);
    local_28 = local_30;
    local_24 = local_2c;
    FUN_004070b8(local_18,local_c + 1,&local_38);
    local_20 = local_38;
    local_1c = local_34;
    FUN_0042b120(iVar1,&local_28,1);
  }
  iVar3 = FUN_0050f404(param_1,2);
  if (0 < iVar3) {
    (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],local_8);
    cVar2 = FUN_0050a2e8();
    if (((cVar2 == '\x03') && (iVar3 = (**(code **)(*param_1 + 0x11c))(), param_3 < iVar3)) &&
       ((char)param_1[0xa9] == '\x03')) {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0);
    }
    else {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),param_4);
    }
    FUN_004070b8(local_10 + -1,local_14 + -1,&local_30);
    local_28 = local_30;
    local_24 = local_2c;
    FUN_004070b8(local_10 + -1,local_c + 1,&local_38);
    local_20 = local_38;
    local_1c = local_34;
    FUN_0042b120(iVar1,&local_28,1);
    return;
  }
  return;
}

