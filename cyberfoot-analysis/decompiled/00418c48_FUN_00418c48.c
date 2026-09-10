// Address: 00418c48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418c48(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_40 = 0;
  local_3c = 0;
  local_8 = 0;
  local_c = 0;
  local_28 = 0;
  puStack_50 = &LAB_00418ee4;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_24 = (uint)(byte)param_5[1];
  puStack_58 = (undefined4 *)0x418c94;
  local_20 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  FUN_00404adc(&local_3c,param_5 + local_24 + 3);
  puStack_58 = (undefined4 *)0x418ca2;
  (**(code **)(*local_18 + 0x3c))(local_18,local_3c,&local_28);
  local_14 = param_4;
  puStack_58 = (undefined4 *)local_24;
  puStack_5c = (undefined1 *)0x418cbf;
  FUN_004060a8(&local_8,PTR_DAT_00410e14,1);
  local_10 = 0;
  puStack_58 = (undefined4 *)local_24;
  puStack_5c = (undefined1 *)0x418cde;
  FUN_004060a8(&local_c,PTR_DAT_0041896c,1);
  if (-1 < (int)(local_24 - 1)) {
    iVar5 = 0;
    uVar7 = local_24;
    do {
      puStack_5c = (undefined1 *)0x418cf4;
      puStack_58 = (undefined4 *)&stack0xfffffffc;
      FUN_00418990(iVar5);
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar5 = local_1c;
  cVar4 = *param_5;
  if (cVar4 == '\x01') {
    if (local_1c == 0) {
      puStack_58 = (undefined4 *)local_8;
      puStack_5c = (undefined1 *)0x418d2f;
      cVar4 = (**(code **)(*local_18 + 0x44))(local_18,local_20,local_28);
      puVar2 = puStack_4c;
      iVar6 = local_10;
      if (cVar4 == '\0') {
        puStack_58 = (undefined4 *)0x418d42;
        FUN_00418878(local_18,local_38);
        puStack_5c = &LAB_00418d93;
        uStack_60 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_60;
        puStack_58 = (undefined4 *)&stack0xfffffffc;
        FUN_004175d8(local_38);
        uVar8 = local_8;
        cVar4 = (**(code **)(*local_18 + 0x40))(local_18,local_38,local_20,local_8,local_28);
        if (cVar4 == '\0') {
          FUN_00418854(local_18);
        }
        uVar3 = uStack_60;
        *in_FS_OFFSET = uVar8;
        uStack_60 = 0x418e6a;
        FUN_00418880(local_18,local_38,uVar3);
        return;
      }
    }
    else if (local_24 == 0) {
      puStack_58 = (undefined4 *)local_28;
      puStack_5c = (undefined1 *)0x418db4;
      cVar4 = (**(code **)(*local_18 + 0x48))(local_18,local_1c,local_20);
      puVar2 = puStack_4c;
      iVar6 = local_10;
      if (cVar4 == '\0') {
        puStack_58 = (undefined4 *)local_28;
        puStack_5c = (undefined1 *)local_8;
        uStack_60 = 0x418dd1;
        cVar4 = (**(code **)(*local_18 + 0x40))(local_18,iVar5,local_20);
        puVar2 = puStack_4c;
        iVar6 = local_10;
        if (cVar4 == '\0') {
          puStack_58 = (undefined4 *)0x418de1;
          FUN_00418854(local_18);
          puVar2 = puStack_4c;
          iVar6 = local_10;
        }
      }
    }
    else {
      puStack_58 = (undefined4 *)local_28;
      puStack_5c = (undefined1 *)local_8;
      uStack_60 = 0x418dfc;
      cVar4 = (**(code **)(*local_18 + 0x40))(local_18,local_1c,local_20);
      puVar2 = puStack_4c;
      iVar6 = local_10;
      if (cVar4 == '\0') {
        puStack_58 = (undefined4 *)0x418e08;
        FUN_00418854(local_18);
        puVar2 = puStack_4c;
        iVar6 = local_10;
      }
    }
  }
  else if (cVar4 == '\x02') {
    if ((local_1c != 0) && (local_24 == 0)) {
      puStack_58 = (undefined4 *)local_28;
      puStack_5c = (undefined1 *)0x418e28;
      cVar4 = (**(code **)(*local_18 + 0x48))(local_18,local_1c,local_20);
      puVar2 = puStack_4c;
      iVar6 = local_10;
      if (cVar4 != '\0') goto joined_r0x00418e6f;
    }
    puStack_58 = (undefined4 *)0x418e34;
    FUN_00418854(local_18);
    puVar2 = puStack_4c;
    iVar6 = local_10;
  }
  else if (cVar4 == '\x04') {
    if ((local_1c == 0) && (local_24 == 1)) {
      puStack_58 = (undefined4 *)local_8;
      puStack_5c = (undefined1 *)0x418e54;
      cVar4 = (**(code **)(*local_18 + 0x4c))(local_18,local_20,local_28);
      puVar2 = puStack_4c;
      iVar6 = local_10;
      if (cVar4 != '\0') goto joined_r0x00418e6f;
    }
    puStack_58 = (undefined4 *)0x418e60;
    FUN_00418854(local_18);
    puVar2 = puStack_4c;
    iVar6 = local_10;
  }
  else {
    puStack_58 = (undefined4 *)0x418e6a;
    FUN_00418854(local_18);
    puVar2 = puStack_4c;
    iVar6 = local_10;
  }
joined_r0x00418e6f:
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    puVar1 = (undefined4 *)(local_c + iVar6 * 8);
    if (puVar1[1] != 0) {
      puStack_58 = &local_40;
      puStack_5c = (undefined1 *)0x418e93;
      puStack_4c = puVar2;
      FUN_004053fc(*puVar1,1,0x7fffffff);
      puStack_58 = (undefined4 *)0x418e9e;
      FUN_00404b6c(puVar1[1],local_40);
      puVar2 = puStack_4c;
    }
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_00418eeb;
  puStack_50 = (undefined1 *)0x418eb7;
  FUN_00404ff0(&local_40,uStack_54,puVar2);
  puStack_50 = (undefined1 *)0x418ebf;
  FUN_004048d4(&local_3c);
  puStack_50 = (undefined1 *)0x418ec7;
  FUN_004048d4(&local_28);
  puStack_50 = (undefined1 *)0x418ed5;
  FUN_004061c8(&local_c,PTR_DAT_0041896c);
  puStack_50 = (undefined1 *)0x418ee3;
  FUN_004061c8(&local_8,PTR_DAT_00410e14);
  return;
}

