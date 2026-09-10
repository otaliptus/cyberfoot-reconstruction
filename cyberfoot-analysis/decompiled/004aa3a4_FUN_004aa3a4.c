// Address: 004aa3a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa3a4(int param_1,HDC param_2,int *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  DWORD *pDVar11;
  BITMAPINFO *pBVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  BITMAPINFO local_c0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  byte *local_80;
  byte *local_7c;
  uint local_78;
  double local_74;
  double local_6c;
  char local_5d;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  void *local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  byte *local_34;
  int local_30;
  byte local_29;
  undefined4 local_28;
  int local_24;
  int local_20;
  HBITMAP local_1c;
  HGDIOBJ local_18;
  void *local_14;
  HDC local_10;
  HDC local_c;
  int local_8;
  
  bVar13 = 0;
  puStack_e8 = &stack0xfffffffc;
  local_d8 = 0;
  local_d4 = 0;
  local_94 = *param_3;
  local_90 = param_3[1];
  local_8c = param_3[2];
  local_88 = param_3[3];
  puStack_ec = &LAB_004aabba;
  uStack_f0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_f0;
  puVar6 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((local_8c != local_94) && (puVar6 = &stack0xfffffffc, local_88 != local_90)) {
    FUN_004aa384(&local_94);
    local_58 = local_8c - local_94;
    local_5c = local_88 - local_90;
    local_20 = FUN_004aa2e8(local_8);
    if ((*(uint *)(local_20 + 0x458) == local_58) && (*(uint *)(local_20 + 0x45c) == local_5c)) {
      local_5d = '\0';
    }
    else {
      local_5d = '\x01';
    }
    if (local_5d == '\0') {
      local_6c = 1.0;
      local_74 = 1.0;
    }
    else {
      local_6c = (double)local_58 / (double)*(uint *)(local_20 + 0x458);
      local_c8 = local_5c;
      uStack_c4 = 0;
      local_d0 = *(uint *)(local_20 + 0x45c);
      uStack_cc = 0;
      local_74 = (double)local_5c / (double)local_d0;
    }
    FUN_004032a8(&local_c0,0x2c,0);
    DAT_00669460 = local_58;
    _DAT_00669464 = -local_5c;
    pDVar11 = &DAT_0066945c;
    pBVar12 = &local_c0;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      (pBVar12->bmiHeader).biSize = *pDVar11;
      pDVar11 = pDVar11 + (uint)bVar13 * -2 + 1;
      pBVar12 = (BITMAPINFO *)((int)pBVar12 + ((uint)bVar13 * -2 + 1) * 4);
    }
    local_10 = CreateCompatibleDC((HDC)0x0);
    if (local_10 == (HDC)0x0) {
      FUN_00406d44(PTR_PTR_0066ada4,&local_d4);
      FUN_004aa278(local_8,PTR_DAT_004a4ca0,local_d4);
    }
    local_1c = CreateDIBSection(local_10,&local_c0,0,&local_14,(HANDLE)0x0,0);
    if ((local_1c == (HBITMAP)0x0) || (local_14 == (void *)0x0)) {
      if (local_1c != (HBITMAP)0x0) {
        DeleteObject(local_1c);
      }
      DeleteDC(local_10);
      FUN_00406d44(PTR_PTR_0066ada4,&local_d8);
      FUN_004aa278(local_8,PTR_DAT_004a4ca0,local_d8);
    }
    local_18 = SelectObject(local_10,local_1c);
    BitBlt(local_10,0,0,local_58,local_5c,local_c,local_94,local_90,0xcc0020);
    local_40 = *(int *)(local_20 + 0x458);
    local_38 = (local_c0.bmiHeader.biBitCount * local_58 + 0x1f & 0xffffffe0) >> 3;
    lVar5 = (longlong)(int)(uint)*(ushort *)(local_20 + 0x2f) * (longlong)*(int *)(local_20 + 0x458)
    ;
    uVar9 = (uint)((ulonglong)lVar5 >> 0x20);
    local_3c = ((int)lVar5 + 0x1fU & 0xffffffe0) >> 3;
    local_4c = local_14;
    iVar8 = *(int *)(local_20 + 0x454);
    local_48 = *(int *)(local_20 + 0x468) * (*(int *)(local_20 + 0x45c) + -1) +
               *(int *)(local_20 + 0x450);
    sVar4 = *(short *)(local_20 + 0x2f);
    local_44 = local_48;
    if (((sVar4 == 1) || (sVar4 == 4)) || (sVar4 == 8)) {
      if (*(char *)(local_20 + 0x461) == '\x04') {
        if (0 < (int)local_5c) {
          local_78 = local_5c;
          local_54 = 1;
          do {
            if (-1 < (int)(local_58 - 1)) {
              local_50 = 0;
              uVar7 = local_58;
              do {
                local_80 = (byte *)((int)local_4c + local_50 * 4);
                local_84 = local_20 + 0x21;
                uVar9 = local_50;
                if (local_5d != '\0') {
                  uVar9 = FUN_00402c44();
                }
                local_80[2] = (byte)((uint)*(byte *)(local_44 + uVar9) *
                                     (uint)*(byte *)(iVar8 + uVar9) + 0xff +
                                     (0xff - (uint)*(byte *)(iVar8 + uVar9)) * (uint)local_80[2] >>
                                    8);
                local_80[1] = (byte)((uint)*(byte *)(local_44 + uVar9) *
                                     (uint)*(byte *)(iVar8 + uVar9) + 0xff +
                                     (0xff - (uint)*(byte *)(iVar8 + uVar9)) * (uint)local_80[1] >>
                                    8);
                uVar10 = (uint)*(byte *)(local_44 + uVar9) * (uint)*(byte *)(iVar8 + uVar9) + 0xff +
                         (0xff - (uint)*(byte *)(iVar8 + uVar9)) * (uint)*local_80;
                uVar9 = uVar10 >> 8;
                *local_80 = (byte)(uVar10 >> 8);
                local_50 = local_50 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            local_4c = (void *)((int)local_4c + local_38);
            iVar8 = local_54;
            if (local_5d != '\0') {
              iVar8 = FUN_00402c44(local_38,uVar9);
            }
            local_44 = local_48 - local_3c * iVar8;
            uVar9 = local_40 * iVar8;
            iVar8 = *(int *)(local_20 + 0x454) + uVar9;
            local_54 = local_54 + 1;
            local_78 = local_78 - 1;
          } while (local_78 != 0);
          local_78 = 0;
        }
      }
      else {
        local_24 = FUN_004a63c4(*(undefined4 *)(local_8 + 0x138),PTR_PTR_004a5790);
        local_28 = FUN_004a63c4(*(undefined4 *)(local_8 + 0x138),PTR_PTR_004a5724);
        if (0 < (int)local_5c) {
          local_78 = local_5c;
          local_54 = 1;
          do {
            local_50 = 0;
            do {
              local_30 = 0;
              uVar9 = local_50;
              if (local_5d != '\0') {
                uVar9 = FUN_00402c44();
              }
              local_34 = (byte *)(local_44 + uVar9);
              do {
                cVar2 = *(char *)(local_20 + 0x460);
                if (cVar2 == '\x01') {
                  uVar9 = local_50 & 0x80000007;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
                  }
                  local_29 = *local_34 >> (7U - (char)uVar9 & 0x1f) & 1;
                }
                else if ((cVar2 == '\x02') || (cVar2 == '\x04')) {
                  uVar9 = local_50 & 0x80000001;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                  }
                  local_29 = *local_34 >> (('\x01' - (char)uVar9) * '\x04' & 0x1fU) & 0xf;
                }
                else {
                  local_29 = *local_34;
                }
                pbVar1 = (byte *)((int)local_4c + local_50 * 4);
                bVar13 = *(byte *)(local_24 + 0x15 + (uint)local_29);
                uVar9 = FUN_004a9980(local_28,local_29);
                iVar8 = 0xff - (uint)bVar13;
                bVar3 = pbVar1[2];
                pbVar1[2] = (byte)((uVar9 >> 0x10 & 0xff) * (uint)bVar13 + 0xff +
                                   iVar8 * (uint)bVar3 >> 8);
                uVar9 = FUN_004a9980(local_28,CONCAT31((int3)(iVar8 * (uint)bVar3 >> 8),local_29));
                bVar3 = pbVar1[1];
                pbVar1[1] = (byte)((uVar9 >> 8 & 0xff) * (uint)bVar13 + 0xff + iVar8 * (uint)bVar3
                                  >> 8);
                uVar9 = FUN_004a9980(local_28,CONCAT31((int3)(iVar8 * (uint)bVar3 >> 8),local_29));
                *pbVar1 = (byte)((uVar9 & 0xff) * (uint)bVar13 + 0xff + iVar8 * (uint)*pbVar1 >> 8);
                local_50 = local_50 + 1;
                local_30 = local_30 + (uint)*(ushort *)(local_20 + 0x2f);
              } while (local_30 < 8);
            } while ((int)local_50 < (int)local_58);
            local_4c = (void *)((int)local_4c + local_38);
            iVar8 = local_54;
            if (local_5d != '\0') {
              iVar8 = FUN_00402c44();
            }
            local_44 = local_48 - local_3c * iVar8;
            local_54 = local_54 + 1;
            local_78 = local_78 - 1;
          } while (local_78 != 0);
        }
      }
    }
    else if ((sVar4 == 0x18) && (0 < (int)local_5c)) {
      local_78 = local_5c;
      local_54 = 1;
      do {
        if (-1 < (int)(local_58 - 1)) {
          local_50 = 0;
          uVar9 = local_58;
          do {
            uVar7 = local_50;
            if (local_5d != '\0') {
              uVar7 = FUN_00402c44();
            }
            if (*(char *)(iVar8 + uVar7) != '\0') {
              if (*(char *)(iVar8 + uVar7) == -1) {
                *(undefined4 *)((int)local_4c + local_50 * 4) =
                     *(undefined4 *)(local_44 + uVar7 * 3);
              }
              else {
                local_7c = (byte *)((int)local_4c + local_50 * 4);
                local_7c[2] = (byte)((uint)*(byte *)(local_44 + uVar7 * 3 + 2) *
                                     (uint)*(byte *)(iVar8 + uVar7) + 0xff +
                                     (uint)(byte)~*(byte *)(iVar8 + uVar7) * (uint)local_7c[2] >> 8)
                ;
                local_7c[1] = (byte)((uint)*(byte *)(local_44 + uVar7 * 3 + 1) *
                                     (uint)*(byte *)(iVar8 + uVar7) + 0xff +
                                     (uint)(byte)~*(byte *)(iVar8 + uVar7) * (uint)local_7c[1] >> 8)
                ;
                *local_7c = (byte)((uint)*(byte *)(local_44 + uVar7 * 3) *
                                   (uint)*(byte *)(iVar8 + uVar7) + 0xff +
                                   (uint)(byte)~*(byte *)(iVar8 + uVar7) * (uint)*local_7c >> 8);
              }
            }
            local_50 = local_50 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        local_4c = (void *)((int)local_4c + local_38);
        iVar8 = local_54;
        if (local_5d != '\0') {
          iVar8 = FUN_00402c44();
        }
        local_44 = local_48 - local_3c * iVar8;
        iVar8 = *(int *)(local_20 + 0x454) + local_40 * iVar8;
        local_54 = local_54 + 1;
        local_78 = local_78 - 1;
      } while (local_78 != 0);
      local_78 = 0;
    }
    BitBlt(local_c,local_94,local_90,local_58,local_5c,local_10,0,0,0xcc0020);
    SelectObject(local_10,local_18);
    DeleteObject(local_1c);
    DeleteDC(local_10);
    puVar6 = puStack_e8;
  }
  puStack_e8 = puVar6;
  puVar6 = puStack_e8;
  *in_FS_OFFSET = uStack_f0;
  puStack_e8 = &LAB_004aabc1;
  puStack_ec = (undefined1 *)0x4aabb9;
  FUN_004048f8(&local_d8,2,puVar6);
  return;
}

