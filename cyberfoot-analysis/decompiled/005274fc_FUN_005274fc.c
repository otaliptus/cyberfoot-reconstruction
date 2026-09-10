// Address: 005274fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005274fc(undefined4 param_1,char param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int param_7,int param_8,undefined1 param_9,
                 int *param_10)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 auStackY_1864 [6];
  undefined4 auStackY_184b [502];
  undefined4 auStackY_1070 [6];
  undefined4 auStackY_1057 [996];
  undefined8 uVar8;
  undefined4 local_88;
  undefined4 auStack_84 [5];
  undefined1 local_70;
  undefined4 local_6f;
  undefined4 auStack_6b [3];
  undefined4 local_5c;
  int *local_40;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  double local_1c;
  double local_14;
  undefined1 local_6;
  char local_5;
  
  bVar7 = 0;
  local_2c = *param_6;
  local_28 = param_6[1];
  local_24 = param_6[2];
  local_20 = param_6[3];
  local_6 = param_3;
  local_5 = param_2;
  cVar1 = (**(code **)(*param_10 + 0x1c))();
  if (cVar1 == '\0') {
    switch(param_9) {
    case 0:
      FUN_0040709c(local_2c,local_28,local_2c + param_8,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 1:
      uVar5 = (local_24 - local_2c) - param_8;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_2c = local_2c + iVar6;
      FUN_0040709c(local_2c,local_28,local_2c + param_8,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 2:
      FUN_0040709c(local_24 - param_8,local_28,local_24,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 3:
      FUN_0040709c(local_2c,local_20 - param_7,local_2c + param_8,&local_88,local_20);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 4:
      uVar5 = (local_24 - local_2c) - param_8;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_2c = local_2c + iVar6;
      FUN_0040709c(local_2c,local_20 - param_7,local_2c + param_8,&local_88,local_20);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 5:
      FUN_0040709c(local_24 - param_8,local_20 - param_7,local_24,&local_88,local_20);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 6:
      auStack_84[3] = param_1;
      FUN_004aeba4(&local_88);
      local_6f = local_88;
      auStack_6b[(uint)bVar7 * -2] = auStack_84[(uint)bVar7 * -2];
      auStack_6b[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           auStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      (auStack_6b + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (auStack_84 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      local_5c = 9;
      local_40 = param_10;
      (**(code **)(*param_10 + 0x40))(param_10,param_8);
      (**(code **)(*param_10 + 0x34))(param_10,param_7);
      local_70 = 0;
      FUN_004ae840(auStack_84 + 3);
      break;
    case 7:
      if (local_5 == '\0') {
        local_14 = (double)(local_24 - local_2c);
        local_1c = (double)(local_20 - local_28);
      }
      else {
        FUN_00526028(&local_14,&local_1c,local_6,(double)(local_20 - local_28),
                     (double)(local_24 - local_2c),(double)param_7,(double)param_8);
      }
      uVar2 = FUN_00402c38();
      uVar8 = CONCAT44(uVar2,&local_88);
      uVar2 = FUN_00402c38();
      uVar3 = FUN_00402c38();
      uVar4 = FUN_00402c38();
      FUN_00407174(uVar4,uVar3,uVar2,uVar8);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 8:
      uVar5 = (local_20 - local_28) - param_7;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_28 = local_28 + iVar6;
      FUN_0040709c(local_2c,local_28,local_2c + param_8,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 9:
      uVar5 = (local_24 - local_2c) - param_8;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_2c = local_2c + iVar6;
      uVar5 = (local_20 - local_28) - param_7;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_28 = local_28 + iVar6;
      FUN_0040709c(local_2c,local_28,local_2c + param_8,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 10:
      uVar5 = (local_20 - local_28) - param_7;
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
      }
      local_28 = local_28 + iVar6;
      FUN_0040709c(local_24 - param_8,local_28,local_24,&local_88,local_28 + param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
      break;
    case 0xb:
      FUN_00407174(param_5,param_4,param_8,&local_88,param_7);
      FUN_004b0b90(param_10,param_1,&local_88);
    }
  }
  return;
}

