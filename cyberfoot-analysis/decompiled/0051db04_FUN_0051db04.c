// Address: 0051db04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051db04(int param_1)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  HBITMAP pHVar8;
  byte *pbVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar10;
  UINT nPlanes;
  undefined4 uVar11;
  UINT nBitCount;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  undefined1 local_38 [19];
  byte local_25;
  int local_24;
  byte *local_20;
  byte *local_1c;
  char local_17;
  char local_16;
  char local_15;
  char *local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_3c = 0;
  puStack_50 = &LAB_0051debd;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x51db2e;
  local_8 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_5c = &LAB_0051de90;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  uStack_64 = 0x51db4b;
  puStack_58 = &stack0xfffffffc;
  uVar4 = FUN_0051d4c8(param_1,3);
  uStack_64 = 0x51db5a;
  uVar5 = FUN_0051d4c8(param_1,4);
  if (500000 < (uVar4 & 0xffff) * (uVar5 & 0xffff)) {
    uStack_64 = 0x51db72;
    FUN_00516c18(local_8,1);
  }
  uStack_64 = 0x51db79;
  cVar2 = FUN_0051d25c(param_1);
  if (cVar2 == '\0') {
    uStack_64 = 3;
    uStack_68 = 0x51dbdc;
    uStack_68 = FUN_0051d4c8(param_1,3);
    uStack_68 = uStack_68 & 0xffff;
    uStack_6c = 0x51dbec;
    uStack_6c = FUN_0051d4c8(param_1,4);
    uStack_6c = uStack_6c & 0xffff;
    uStack_70 = 0x51dbf7;
    uStack_70 = FUN_0051d29c(param_1);
    puStack_74 = (undefined1 *)0x51dc07;
    local_10 = (undefined4 *)FUN_00516e04(PTR_PTR_00516cd8,1,local_8);
    puStack_78 = &LAB_0051de7f;
    uStack_7c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_7c;
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x34) == '\0')) {
      local_16 = '\0';
    }
    else {
      local_16 = '\x01';
    }
    local_17 = '\0';
    *(undefined1 *)(param_1 + 0x10) = 0;
    local_15 = '\0';
    puStack_74 = &stack0xfffffffc;
    if ((*(int *)(param_1 + 0xc) == 0) && (puStack_74 = &stack0xfffffffc, local_16 != '\0')) {
      local_16 = '\x01';
      puStack_80 = (undefined1 *)0x51dc51;
      puStack_74 = &stack0xfffffffc;
      local_15 = FUN_00520744(*(undefined4 *)(param_1 + 0x38));
    }
    if (local_16 == '\0') {
      local_1c = (byte *)0x0;
      local_24 = 0;
    }
    else {
      puStack_80 = (undefined1 *)0x51dc66;
      uVar4 = FUN_0051d4c8(param_1,3);
      local_24 = ((uVar4 & 0xffff) + 0xf >> 4) * 2;
      puStack_80 = (undefined1 *)0x51dc80;
      uVar4 = FUN_0051d4c8(param_1,4);
      lVar1 = (longlong)(int)(uVar4 & 0xffff) * (longlong)local_24;
      puStack_80 = (undefined1 *)0x51dc8b;
      local_1c = (byte *)FUN_004027fc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      puStack_80 = (undefined1 *)0x51dc9a;
      uVar4 = FUN_0051d4c8(param_1,4);
      puStack_80 = (undefined1 *)0x51dcab;
      FUN_004032a8(local_1c,(uVar4 & 0xffff) * local_24,0);
      local_16 = local_1c != (byte *)0x0;
    }
    puStack_84 = &LAB_0051de62;
    uStack_88 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_88;
    local_c = 0;
    local_14 = *(char **)(param_1 + 0x18);
    local_20 = local_1c;
    puStack_80 = &stack0xfffffffc;
    while (uVar4 = FUN_0051d4c8(param_1,4), (int)local_c < (int)(uVar4 & 0xffff)) {
      uVar6 = (**(code **)*local_10)(local_10,local_c);
      if ((local_c & 0x1f) == 0) {
        uVar4 = FUN_0051d4c8(param_1,4);
        iVar7 = MulDiv(local_c,100,uVar4 & 0xffff);
        uVar11 = 0;
        FUN_0041c990(0,0,0,local_38,0);
        puVar10 = local_38;
        FUN_00406d44(&PTR_DAT_00516774,&local_3c);
        FUN_00403c80(*(undefined4 *)(param_1 + 4),param_1,1,local_3c,puVar10,uVar11,iVar7);
      }
      uVar3 = FUN_0051d4c8(param_1,3);
      FUN_00402a04(local_14,uVar6,uVar3);
      pbVar9 = local_20;
      local_c = local_c + 1;
      if (local_16 == '\0') {
        uVar4 = FUN_0051d4c8(param_1,3);
        local_14 = local_14 + (uVar4 & 0xffff);
      }
      else {
        uVar5 = 0x80;
        local_25 = 0;
        uVar4 = FUN_0051d4c8(param_1,3);
        uVar4 = uVar4 & 0xffff;
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (*local_14 == local_15) {
              local_25 = local_25 | (byte)uVar5;
            }
            uVar5 = uVar5 >> 1;
            if ((char)uVar5 == '\0') {
              uVar5 = 0x80;
              if ((local_17 == '\0') && (local_25 == 0)) {
                local_17 = '\0';
              }
              else {
                local_17 = '\x01';
              }
              *pbVar9 = local_25;
              pbVar9 = pbVar9 + 1;
              local_25 = 0;
            }
            local_14 = local_14 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_25 != 0) {
          local_17 = '\x01';
          *pbVar9 = local_25;
        }
        local_20 = local_20 + local_24;
      }
    }
    if ((local_16 != '\0') && (local_17 != '\0')) {
      nBitCount = 1;
      nPlanes = 1;
      pbVar9 = local_1c;
      uVar4 = FUN_0051d4c8(param_1,4);
      uVar4 = uVar4 & 0xffff;
      uVar5 = FUN_0051d4c8(param_1,3);
      pHVar8 = CreateBitmap(uVar5 & 0xffff,uVar4,nPlanes,nBitCount,pbVar9);
      *(HBITMAP *)(param_1 + 0xc) = pHVar8;
    }
    puVar10 = puStack_80;
    *in_FS_OFFSET = uStack_88;
    puStack_80 = &LAB_0051de69;
    if (local_1c != (byte *)0x0) {
      puStack_84 = (undefined1 *)0x51de61;
      FUN_0040281c(local_1c,uStack_88,puVar10);
    }
    return;
  }
  uStack_64 = 0x51db89;
  uVar3 = FUN_0051d4c8(param_1,3);
  uStack_64 = 0x51db94;
  (**(code **)(*local_8 + 0x40))(local_8,uVar3);
  uStack_64 = 0x51dba0;
  uVar3 = FUN_0051d4c8(param_1,4);
  uStack_64 = 0x51dbab;
  (**(code **)(*local_8 + 0x34))(local_8,uVar3);
  uStack_64 = 0x51dbb2;
  FUN_0051d29c(param_1);
  uStack_64 = 0x51dbb7;
  uVar6 = FUN_0042fa48();
  uStack_64 = 0x51dbc1;
  (**(code **)(*local_8 + 0x38))(local_8,uVar6);
  puVar10 = puStack_4c;
  *in_FS_OFFSET = uStack_60;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0051dec4;
  puStack_50 = (undefined1 *)0x51debc;
  FUN_004048d4(&local_3c,uStack_54,puVar10);
  return;
}

