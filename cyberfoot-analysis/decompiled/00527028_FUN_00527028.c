// Address: 00527028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00527028(int param_1,undefined4 param_2,undefined4 *param_3,byte param_4,byte param_5,
                 byte param_6,byte param_7,char param_8)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 auStackY_1847 [16];
  undefined4 auStackY_1804 [492];
  undefined4 auStackY_1053 [16];
  undefined4 auStackY_1010 [995];
  undefined4 local_74;
  int local_70;
  char local_6c;
  undefined4 local_6b;
  undefined4 auStack_67 [3];
  undefined4 local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c;
  undefined4 local_28;
  undefined4 auStack_24 [4];
  byte local_12;
  byte local_11;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar5 = 0;
  local_28 = *param_3;
  auStack_24[0] = param_3[1];
  auStack_24[1] = param_3[2];
  auStack_24[2] = param_3[3];
  local_8 = param_2;
  local_70 = 0;
  if (param_8 == '\0') {
    local_c = *(undefined4 *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x1c);
    local_10 = *(int *)(param_1 + 0x44);
    local_11 = param_7;
    local_12 = param_6;
    auStack_24[3] = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x28);
    iVar4 = *(int *)(param_1 + 0x3c);
    local_10 = *(int *)(param_1 + 0x40);
    local_11 = param_5;
    local_12 = param_4;
    auStack_24[3] = *(undefined4 *)(param_1 + 0x50);
  }
  if (iVar4 == 0x1fffffff) {
    local_c = 10;
  }
  if ((local_10 == 0x1fffffff) && (iVar4 != 0x1fffffff)) {
    local_c = 0;
  }
  local_74 = param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    local_70 = 0;
    local_6c = '\0';
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x1fffffff) {
      local_70 = FUN_0052698c(&local_28,iVar1,*(undefined1 *)(param_1 + 0x78),param_8);
    }
    else if (param_8 == '\0') {
      switch(*(undefined1 *)(param_1 + 0x78)) {
      case 0:
        local_70 = FUN_0052698c(&local_28,iVar1,0,0);
        break;
      case 1:
      case 3:
        local_70 = FUN_0052698c(&local_28,iVar1,1,0);
        break;
      case 2:
        local_70 = FUN_0052698c(&local_28,iVar1,0,0);
        break;
      case 4:
        local_70 = FUN_0052698c(&local_28,iVar1,4,0);
        break;
      case 5:
        local_70 = FUN_0052698c(&local_28,iVar1,5,0);
      }
    }
    else {
      switch(*(undefined1 *)(param_1 + 0x78)) {
      case 0:
        local_70 = FUN_0052698c(&local_28,iVar1,0,param_8);
        break;
      case 1:
        local_70 = FUN_0052698c(&local_28,iVar1,0,param_8);
        break;
      case 2:
      case 3:
        local_70 = FUN_0052698c(&local_28,iVar1,2,param_8);
        break;
      case 4:
        local_70 = FUN_0052698c(&local_28,iVar1,4,param_8);
        break;
      case 5:
        local_70 = FUN_0052698c(&local_28,iVar1,5,param_8);
      }
    }
    local_6c = '\x01';
  }
  iVar1 = local_70;
  local_6b = local_28;
  auStack_67[(uint)bVar5 * -2] = auStack_24[(uint)bVar5 * -2];
  auStack_67[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (auStack_67 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_24 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_58 = local_c;
  local_40 = *(undefined4 *)(param_1 + 0x88);
  local_50 = local_10;
  local_4c = (uint)local_11;
  local_48 = (uint)local_12;
  local_44 = auStack_24[3];
  local_38 = 0x1fffffff;
  local_34 = 0;
  local_30 = 0;
  local_2c = param_8;
  if (*(char *)(param_1 + 100) == '\x06') {
    local_3c = *(undefined4 *)(param_1 + 0x68);
  }
  else {
    local_3c = 0;
  }
  local_54 = iVar4;
  uVar3 = FUN_004af5a8(local_8);
  cVar2 = local_6c;
  if (local_6c != '\0') {
    FUN_004af5d4(local_8,4);
  }
  FUN_004ae840(&local_74);
  if (cVar2 != '\0') {
    FUN_004af5d4(local_8,uVar3);
  }
  if (iVar1 != 0) {
    FUN_00403a84(iVar1);
  }
  return;
}

