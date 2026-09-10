// Address: 0051d564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051d564(int param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  HBITMAP pHVar11;
  undefined2 *puVar12;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar13;
  UINT nPlanes;
  undefined4 uVar14;
  UINT nBitCount;
  byte *lpBits;
  undefined1 *puVar15;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5c;
  undefined1 local_58 [18];
  byte local_46;
  byte local_45;
  uint local_44;
  int local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  char local_2f;
  char local_2e;
  byte local_2d;
  int local_2c;
  undefined2 local_27;
  byte local_25;
  uint local_24;
  undefined1 *local_20;
  byte *local_1c;
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_6c = &stack0xfffffffc;
  puVar15 = &stack0xfffffffc;
  local_5c = 0;
  puStack_70 = &LAB_0051daf0;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_78 = (undefined1 *)0x51d58f;
  local_8 = param_1;
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_7c = &LAB_0051dac3;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  puStack_84 = (undefined1 *)0x51d5ad;
  puStack_78 = &stack0xfffffffc;
  uVar7 = FUN_0051d4c8(local_8,3);
  puStack_84 = (undefined1 *)0x51d5bd;
  uVar8 = FUN_0051d4c8(local_8,4);
  if (500000 < (uVar7 & 0xffff) * (uVar8 & 0xffff)) {
    puStack_84 = (undefined1 *)0x51d5d5;
    FUN_00516c18(local_c,1);
  }
  puStack_84 = (undefined1 *)0x51d5dd;
  cVar3 = FUN_0051d25c(local_8);
  if (cVar3 != '\0') {
    puStack_84 = (undefined1 *)0x51d5ee;
    uVar6 = FUN_0051d4c8(local_8,3);
    puStack_84 = (undefined1 *)0x51d5f9;
    (**(code **)(*local_c + 0x40))(local_c,uVar6);
    puStack_84 = (undefined1 *)0x51d606;
    uVar6 = FUN_0051d4c8(local_8,4);
    puStack_84 = (undefined1 *)0x51d611;
    (**(code **)(*local_c + 0x34))(local_c,uVar6);
    puStack_84 = (undefined1 *)0x51d619;
    FUN_0051d29c(local_8);
    puStack_84 = (undefined1 *)0x51d61e;
    uVar9 = FUN_0042fa48();
    puStack_84 = (undefined1 *)0x51d628;
    (**(code **)(*local_c + 0x38))(local_c,uVar9);
    puVar15 = puStack_6c;
    *in_FS_OFFSET = uStack_80;
    *in_FS_OFFSET = uStack_74;
    puStack_6c = &LAB_0051daf7;
    puStack_70 = (undefined1 *)0x51daef;
    FUN_004048d4(&local_5c,uStack_74,puVar15);
    return;
  }
  local_10 = 0;
  local_14 = (int *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_88 = &LAB_0051dab2;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  uVar9 = FUN_0051d29c(local_8);
  local_10 = FUN_00517698(PTR_PTR_00517408,1,uVar9);
  uVar6 = FUN_0051d4c8(local_8,3);
  local_14 = (int *)FUN_00517c80(PTR_PTR_005178d8,1,uVar6);
  FUN_0051d4c8(local_8,3);
  FUN_0051d4c8(local_8,4);
  FUN_0051d29c(local_8);
  local_18 = (undefined4 *)FUN_00516e04(PTR_PTR_00516cd8,1,local_c);
  iVar10 = FUN_0051e070(local_8);
  local_2c = *(int *)(iVar10 + 4);
  if ((*(char *)(local_8 + 0x10) == '\0') || (*(char *)(local_8 + 0x34) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_2e = '\0';
  *(undefined1 *)(local_8 + 0x10) = 0;
  local_2d = 0;
  local_2f = '\0';
  if ((*(int *)(local_8 + 0xc) == 0) && (bVar2)) {
    bVar2 = true;
    local_2d = FUN_00520744(*(undefined4 *)(local_8 + 0x38));
    uVar6 = *(undefined2 *)(local_2c + (uint)local_2d * 3);
    local_25 = *(byte *)(local_2c + 2 + (uint)local_2d * 3);
    local_27._1_1_ = (byte)((ushort)uVar6 >> 8);
    uVar7 = (uint)local_27._1_1_;
    local_27 = uVar6;
    iVar10 = MulDiv(6,uVar7,0x33);
    cVar3 = (char)iVar10 + local_25 / 0x33;
    iVar10 = MulDiv(0x24,(uint)(byte)local_27,0x33);
    local_2f = cVar3 + (char)iVar10 + '\x01';
  }
  local_38 = (byte *)0x0;
  local_45 = 0;
  if (bVar2) {
    uVar7 = FUN_0051d4c8(local_8,3);
    local_40 = ((uVar7 & 0xffff) + 0xf >> 4) * 2;
    uVar7 = FUN_0051d4c8(local_8,3);
    local_44 = (uVar7 & 0xffff) + 7 >> 3;
    bVar4 = FUN_0051d4c8(local_8,3);
    local_46 = '\x01' << (8 - (bVar4 & 7) & 7);
    uVar7 = FUN_0051d4c8(local_8,4);
    lVar1 = (longlong)(int)(uVar7 & 0xffff) * (longlong)local_40;
    local_34 = (byte *)FUN_004027fc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    uVar7 = FUN_0051d4c8(local_8,4);
    FUN_004032a8(local_34,(uVar7 & 0xffff) * local_40,0);
  }
  else {
    local_34 = (byte *)0x0;
    local_40 = 0;
    local_44 = 0;
    local_46 = 0;
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff58;
  local_24 = 0;
  local_3c = local_34;
  local_1c = *(byte **)(local_8 + 0x18);
  while( true ) {
    uVar7 = FUN_0051d4c8(local_8,4);
    if ((int)(uVar7 & 0xffff) <= (int)local_24) break;
    if ((local_24 & 0x1f) == 0) {
      uVar7 = FUN_0051d4c8(local_8,4);
      iVar10 = MulDiv(local_24,100,uVar7 & 0xffff);
      uVar14 = 0;
      FUN_0041c990(0,0,0,local_58,0);
      puVar13 = local_58;
      FUN_00406d44(&PTR_DAT_00516774,&local_5c);
      FUN_00403c80(*(undefined4 *)(local_8 + 4),local_8,1,local_5c,puVar13,uVar14,iVar10);
    }
    local_20 = (undefined1 *)(**(code **)*local_18)(local_18,local_24);
    if (bVar2) {
      uVar6 = FUN_0051d4c8(local_8,3);
      FUN_004032a8(local_20,uVar6,local_2f);
      if (local_14[1] == 1) {
        local_38 = local_3c;
        local_45 = 0x80;
      }
      else {
        local_38 = local_3c + (local_44 - 1);
        local_45 = local_46;
      }
    }
    local_20 = (undefined1 *)((int)local_20 + local_14[2]);
    while ((local_14[2] < local_14[4] && (-1 < local_14[2]))) {
      puVar12 = (undefined2 *)(local_2c + (uint)*local_1c * 3);
      uVar6 = *puVar12;
      local_25 = *(byte *)(puVar12 + 1);
      local_27 = uVar6;
      if ((bVar2) && (*local_1c == local_2d)) {
        *local_38 = *local_38 | local_45;
        local_2e = '\x01';
        FUN_00517c78(local_14);
      }
      else {
        local_27._1_1_ = (byte)((ushort)uVar6 >> 8);
        uVar14 = CONCAT31((int3)((uint)puVar12 >> 8),local_27._1_1_);
        uVar5 = (**(code **)(*local_14 + 4))
                          (local_14,uVar6,uVar14,&local_25,(int)&local_27 + 1,&local_27,local_25);
        *local_20 = uVar5;
      }
      if (bVar2) {
        if (local_14[1] == 1) {
          local_45 = local_45 >> 1;
          if (local_45 == 0) {
            local_45 = 0x80;
            local_38 = local_38 + 1;
          }
        }
        else {
          local_45 = local_45 << 1;
          if (local_45 == 0) {
            local_45 = 1;
            local_38 = local_38 + -1;
          }
        }
      }
      local_1c = local_1c + local_14[1];
      local_20 = local_20 + local_14[1];
    }
    if (bVar2) {
      local_3c = local_3c + local_40;
    }
    local_24 = local_24 + 1;
    uVar7 = FUN_0051d4c8(local_8,3);
    local_1c = local_1c + ((uVar7 & 0xffff) - local_14[1]);
    (**(code **)(*local_14 + 8))();
  }
  if ((bVar2) && (local_2e != '\0')) {
    nBitCount = 1;
    nPlanes = 1;
    lpBits = local_34;
    uVar7 = FUN_0051d4c8(local_8,4);
    uVar7 = uVar7 & 0xffff;
    uVar8 = FUN_0051d4c8(local_8,3);
    pHVar11 = CreateBitmap(uVar8 & 0xffff,uVar7,nPlanes,nBitCount,lpBits);
    *(HBITMAP *)(local_8 + 0xc) = pHVar11;
  }
  *in_FS_OFFSET = uVar9;
  if (local_34 != (byte *)0x0) {
    FUN_0040281c(local_34,uVar9,puVar15);
  }
  return;
}

