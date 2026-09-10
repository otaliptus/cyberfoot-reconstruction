// Address: 004ff81c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff81c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_50;
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
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  
  local_44 = *(int *)(param_1 + 0x28);
  local_40 = *(int *)(param_1 + 0x30) - local_44;
  iVar1 = FUN_00402c38();
  local_48 = *(int *)(param_1 + 0x20);
  FUN_0042a88c(*(undefined4 *)(local_48 + 0x10),0xff000011);
  local_50 = *(undefined4 *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = *(int *)(param_1 + 0x54) * 0x13 + *(int *)(param_1 + 0x24) + 6;
    if (*(int *)(param_1 + 0x40) < 1) {
      if (*(char *)(param_1 + 0x65) == '\0') {
        FUN_0041c968(iVar2,*(undefined4 *)(param_1 + 0x28),&local_2c);
        local_3c = local_2c;
        local_38 = local_28;
        FUN_0041c968(iVar2,iVar1,&local_24);
        local_34 = local_24;
        local_30 = local_20;
        FUN_0042b120(local_48,&local_3c,1);
      }
    }
    else if (*(char *)(param_1 + 0x65) == '\0') {
      FUN_0041c968(iVar2,*(undefined4 *)(param_1 + 0x28),&local_2c);
      local_3c = local_2c;
      local_38 = local_28;
      FUN_0041c968(iVar2,iVar1 + -4,&local_24);
      local_34 = local_24;
      local_30 = local_20;
      FUN_0042b120(local_48,&local_3c,1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (-1 < iVar2) {
    do {
      iVar3 = iVar2 * 0x13 + *(int *)(param_1 + 0x24) + 6;
      (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),&local_50,&local_4c);
      if (local_4c != -1) {
        if ((iVar2 == *(int *)(param_1 + 0x54)) && (0 < *(int *)(param_1 + 0x40))) {
          if (*(char *)(param_1 + 0x65) == '\0') {
            FUN_0041c968(iVar3,*(undefined4 *)(param_1 + 0x28),&local_2c);
            local_3c = local_2c;
            local_38 = local_28;
            FUN_0041c968(iVar3,iVar1 + -4,&local_24);
            local_34 = local_24;
            local_30 = local_20;
            FUN_0042b120(local_48,&local_3c,1);
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            FUN_0041c968(iVar3,iVar1 + 4,&local_2c);
            local_3c = local_2c;
            local_38 = local_28;
            FUN_0041c968(iVar3,*(undefined4 *)(param_1 + 0x30),&local_24);
            local_34 = local_24;
            local_30 = local_20;
            FUN_0042b120(local_48,&local_3c,1);
          }
        }
        else if (*(char *)(param_1 + 0x65) == '\0') {
          FUN_0041c968(iVar3,*(undefined4 *)(param_1 + 0x28),&local_2c);
          local_3c = local_2c;
          local_38 = local_28;
          FUN_0041c968(iVar3,*(undefined4 *)(param_1 + 0x30),&local_24);
          local_34 = local_24;
          local_30 = local_20;
          FUN_0042b120(local_48,&local_3c,1);
        }
        else {
          FUN_0041c968(iVar3,iVar1,&local_2c);
          local_3c = local_2c;
          local_38 = local_28;
          FUN_0042b584(local_48,auStack_1c);
          FUN_0041c968(iVar3,uStack_10,&local_24);
          local_34 = local_24;
          local_30 = local_20;
          FUN_0042b120(local_48,&local_3c,1);
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar3 = *(int *)(param_1 + 0x54) * 0x13 + *(int *)(param_1 + 0x24);
  iVar2 = iVar3 + 6;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = iVar3 + 10;
  }
  FUN_0041c968(iVar2,iVar1 + -1,&local_2c);
  local_3c = local_2c;
  local_38 = local_28;
  FUN_0041c968(iVar3 + 0xf,iVar1 + -1,&local_24);
  local_34 = local_24;
  local_30 = local_20;
  FUN_0042b120(local_48,&local_3c,1);
  return;
}

