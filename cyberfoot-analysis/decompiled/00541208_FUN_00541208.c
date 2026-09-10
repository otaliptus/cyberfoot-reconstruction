// Address: 00541208
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00541208(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                 int param_6,undefined1 *param_7,undefined1 *param_8,int param_9,int param_10,
                 undefined4 *param_11,undefined1 *param_12,uint *param_13,uint *param_14,
                 uint *param_15,uint *param_16,uint *param_17,char param_18,uint *param_19)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  LPWSTR pWVar9;
  HDC pHVar10;
  uint uVar11;
  LPCWSTR lpchText;
  HRGN pHVar12;
  int iVar13;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 unaff_ESI;
  int unaff_EDI;
  uint *puVar14;
  uint *puVar15;
  uint *in_FS_OFFSET;
  undefined1 uVar16;
  byte bVar17;
  uint auStackY_187c [1497];
  undefined1 auStackY_118 [4];
  undefined4 uStackY_114;
  undefined4 uStackY_110;
  undefined1 auStackY_10c [4];
  uint uStackY_108;
  uint uStackY_104;
  undefined4 local_100;
  undefined4 uStackY_fc;
  undefined4 uStackY_f8;
  undefined4 uStackY_f4;
  undefined4 uStackY_f0;
  undefined4 uStackY_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStackY_e0;
  undefined4 uStackY_dc;
  undefined4 uStackY_d8;
  undefined4 uStackY_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStackY_c8;
  undefined4 uStackY_c4;
  undefined4 uStackY_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStackY_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint auStackY_9c [3];
  tagRECT local_90;
  uint local_80;
  uint local_7c [4];
  int iStackY_6c;
  char local_65;
  uint uStackY_64;
  int local_60;
  int local_5c;
  int iStackY_58;
  int iStackY_54;
  undefined4 local_50;
  undefined *puStackY_4c;
  int *piVar18;
  short *lpszString;
  tagRECT *ptVar19;
  LPINT lpnDx;
  undefined *puVar20;
  undefined *puVar21;
  LPDRAWTEXTPARAMS ptVar22;
  LPSIZE lpSize;
  undefined *puVar23;
  int iVar24;
  UINT UVar25;
  uint uStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  short *psStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  short *local_8;
  
  bVar17 = 0;
  uStack_24 = &stack0xfffffffc;
  psStack_14 = (short *)0x2e;
  do {
    local_c = 0;
    psStack_14 = (short *)((int)psStack_14 + -1);
  } while (psStack_14 != (short *)0x0);
  LOCK();
  UNLOCK();
  local_80 = uRam00000000;
  local_7c[0] = uRam00000004;
  local_7c[1] = uRam00000008;
  local_7c[2] = iRam0000000c;
  local_28 = &LAB_00543e50;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_2c;
  local_8 = psStack_14;
  FUN_00404ff0(param_4);
  FUN_00404ff0(&stack0xffffffe0);
  local_7c[2] = local_7c[2] - *param_15;
  *param_17 = 0;
  local_28 = (undefined1 *)0x0;
  uStack_24._0_2_ = (ushort)uStack_24 & 0xff;
  uStack_24 = (undefined1 *)(uint)(ushort)uStack_24;
  *param_8 = 0;
  *param_7 = 0;
  local_90.left = local_80;
  puVar14 = (uint *)((int)&local_90 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
  *(uint *)((int)&local_90 + (uint)bVar17 * -8 + 4) = local_7c[(uint)bVar17 * -2];
  *puVar14 = local_7c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
  puVar14[(uint)bVar17 * -2 + 1] =
       (local_7c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
  FUN_00404ff0(&local_c);
  if (param_18 == '\0') {
    local_90.left = local_90.left + param_6;
  }
  if ((*(char *)((int)param_19 + -0x35) != '\0') && (param_18 == '\0')) {
    uVar5 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
    param_19[-0xf] = uVar5;
    uVar6 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar6);
    FUN_0042b158(param_1,param_19[-0x13],local_7c[0]);
  }
  while (((iVar13 = FUN_00405260(*param_2), 0 < iVar13 && (uStack_24._3_1_ == '\0')) &&
         (uStack_24._2_1_ == '\0'))) {
    iVar13 = FUN_00405574(&DAT_00543e68,*param_2);
    if ((char)param_19[0x12] == '\0') {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_00405574(&DAT_00543e70,*param_2);
    }
    if ((iVar13 < 1) || ((iVar7 <= iVar13 && (iVar7 != 0)))) {
      if (iVar7 < 1) {
        thunk_FUN_0040502c(&local_8,*param_2);
      }
      else {
        FUN_004053fc(*param_2,1,iVar7);
      }
    }
    else {
      FUN_004053fc(*param_2,1,iVar13 + -1);
    }
    uVar5 = FUN_00405260(local_8);
    while (iVar13 = FUN_00405574(L"&nbsp;",local_8), 0 < iVar13) {
      FUN_00540fd0(L"&nbsp;",&DAT_00543e70,&local_8);
    }
    while (iVar13 = FUN_00405574(L"&lt;",local_8), 0 < iVar13) {
      FUN_00540fd0(L"&lt;",&DAT_00543e68,&local_8);
    }
    while (iVar13 = FUN_00405574(L"&gt;",local_8), 0 < iVar13) {
      FUN_00540fd0(L"&gt;",&DAT_00543e9c,&local_8);
    }
    local_5c = FUN_00405260(local_8);
    if (0 < (int)uVar5) {
      uVar8 = FUN_00541128(param_1,local_8);
      if ((*(char *)((int)param_19 + -0x4d) != '\0') && ((int)*param_15 < (int)(uVar8 >> 2))) {
        *param_15 = uVar8 >> 2;
      }
      if ((*(char *)((int)param_19 + -0x4e) != '\0') && ((int)*param_14 < (int)(uVar8 >> 2))) {
        *param_14 = uVar8 >> 2;
      }
      if ((int)*param_16 < (int)uVar8) {
        *param_16 = uVar8;
      }
      FUN_0040526c(param_19[10],local_8);
      if (*(char *)((int)param_19 + -0x4f) != '\0') {
        FUN_00405448(param_2,1,uVar5);
      }
      if (*(char *)((int)param_19 + -0x4f) == '\0') {
        if (param_18 == '\0') {
          if (*(char *)((int)param_19 + -0x4e) != '\0') {
            local_90.bottom = local_90.bottom - *param_14;
          }
          if (*(char *)((int)param_19 + -0x4d) != '\0') {
            local_90.bottom = local_90.bottom + *param_15;
          }
          local_90.bottom = local_90.bottom - *param_13;
          if ((char)param_19[-0x14] != '\0') {
            OffsetRect(&local_90,param_19[0x19],param_19[0x19]);
            local_50 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[0xc]);
            ptVar22 = (LPDRAWTEXTPARAMS)0x0;
            uVar8 = param_19[-0x15];
            ptVar19 = &local_90;
            iVar13 = local_5c;
            pWVar9 = (LPWSTR)FUN_00405250(local_8);
            pHVar10 = (HDC)FUN_0042b5a8(param_1);
            DrawTextExW(pHVar10,pWVar9,iVar13,ptVar19,uVar8,ptVar22);
            OffsetRect(&local_90,-param_19[0x19],-param_19[0x19]);
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),local_50);
          }
          ptVar22 = (LPDRAWTEXTPARAMS)0x0;
          uVar8 = param_19[-0x15];
          ptVar19 = &local_90;
          iVar13 = local_5c;
          pWVar9 = (LPWSTR)FUN_00405250(local_8);
          pHVar10 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExW(pHVar10,pWVar9,iVar13,ptVar19,uVar8,ptVar22);
          ptVar22 = (LPDRAWTEXTPARAMS)0x0;
          uVar8 = param_19[-0x15] | 0x400;
          ptVar19 = &local_90;
          iVar13 = local_5c;
          pWVar9 = (LPWSTR)FUN_00405250(local_8);
          pHVar10 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExW(pHVar10,pWVar9,iVar13,ptVar19,uVar8,ptVar22);
          if ((*(char *)((int)param_19 + -0x55) != '\0') &&
             (*(int *)param_19[6] - 1U == param_19[0x1b])) {
            FUN_004051d4(param_19[9],param_19[-0x17]);
          }
          if (*(char *)((int)param_19 + -0x5d) != '\0') {
            FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),0xff);
            FUN_0042a998(*(undefined4 *)(param_1 + 0x10),1);
            iVar13 = local_90.left >> 1;
            if (iVar13 < 0) {
              iVar13 = iVar13 + (uint)((local_90.left & 1U) != 0);
            }
            uVar8 = iVar13 * 2;
            uVar11 = uVar8 & 0x80000003;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
            }
            if (uVar11 == 0) {
              iVar13 = 2;
            }
            else {
              iVar13 = 0;
            }
            FUN_0042b064(param_1,uVar8,local_7c[2] + iVar13 + -1);
            for (; (int)uVar8 < local_90.right; uVar8 = uVar8 + 2) {
              if (iVar13 == 2) {
                iVar13 = 0;
              }
              else {
                iVar13 = 2;
              }
              FUN_0042b004(param_1,uVar8 + 2,local_7c[2] + iVar13 + -1);
            }
          }
          local_90.left = local_90.right;
          local_90.right = local_7c[1];
          local_90.bottom = local_7c[2];
          local_90.top = local_7c[0];
        }
        else {
          local_90.left = local_80;
          puVar14 = (uint *)((int)&local_90 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *(uint *)((int)&local_90 + (uint)bVar17 * -8 + 4) = local_7c[(uint)bVar17 * -2];
          *puVar14 = local_7c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          puVar14[(uint)bVar17 * -2 + 1] =
               (local_7c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          ptVar22 = (LPDRAWTEXTPARAMS)0x0;
          uVar8 = param_19[-0x15] | 0x400;
          ptVar19 = &local_90;
          iVar13 = local_5c;
          pWVar9 = (LPWSTR)FUN_00405250(local_8);
          pHVar10 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExW(pHVar10,pWVar9,iVar13,ptVar19,uVar8,ptVar22);
          if (((local_90.top < param_9) && (param_9 < local_90.bottom)) &&
             ((int)*param_17 < param_10)) {
            FUN_0041c990(*param_17,local_90.top,param_10);
            puVar14 = (uint *)((int)param_19 + (uint)bVar17 * -8 + -0x69);
            *(undefined4 *)((int)param_19 + -0x6d) = local_a0;
            puVar15 = puVar14 + (uint)bVar17 * -2 + 1;
            *puVar14 = auStackY_9c[(uint)bVar17 * -2];
            *puVar15 = auStackY_9c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            puVar15[(uint)bVar17 * -2 + 1] =
                 (auStackY_9c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            FUN_004032a8(param_19 + -6,0x14,0);
            param_19[-6] = 0x14;
            lpSize = (LPSIZE)(param_19 + -9);
            lpnDx = (LPINT)0x0;
            puVar14 = param_19 + -7;
            iVar7 = param_10 - *param_17;
            lpszString = local_8;
            iVar13 = local_5c;
            pHVar10 = (HDC)FUN_0042b5a8(param_1);
            puStackY_4c = (undefined *)0x541781;
            GetTextExtentExPointA
                      (pHVar10,(LPCSTR)lpszString,iVar13,iVar7,(LPINT)puVar14,lpnDx,lpSize);
            if (uVar5 == param_19[-7]) {
              param_19[-0x1d] = param_19[-0x1d] + uVar5;
            }
            else {
              param_19[-0x1d] = param_19[-0x1d] + param_19[-7];
            }
          }
          local_60 = local_90.right - local_90.left;
          *param_17 = *param_17 + local_60;
          if ((((int)(*param_17 - local_60) <= param_10 - local_90.left) &&
              (param_10 - local_90.left <= (int)*param_17)) &&
             ((*(char *)((int)param_19 + -0x55) != '\0' && (*param_8 = 1, local_90.top < param_9))))
          {
            FUN_004051d4(param_19[0xb],param_19[-0x17]);
            *(undefined1 *)((int)param_19 + -0x75) = 1;
          }
        }
        iVar13 = (local_7c[1] - local_80) - param_19[-0x1f];
        puVar14 = param_17;
        if (((int)*param_17 < iVar13) || (puVar14 = param_19, iVar13 <= local_60)) {
          local_65 = '\x01';
        }
        else {
          local_65 = '\0';
        }
        if (((local_65 == '\0') && (iVar13 = FUN_00405260(unaff_EDI,puVar14), 0 < iVar13)) &&
           (iVar13 = FUN_00405260(unaff_EDI), *(short *)(unaff_EDI + -2 + iVar13 * 2) != 0x20)) {
          local_65 = '\x01';
        }
        FUN_0040526c(&stack0xffffffe0,local_8);
        if ((local_65 == '\0') && ((char)param_19[0x12] != '\0')) {
          uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
          *param_17 = *param_17 - local_60;
        }
        else {
          FUN_004053fc(*param_2,1,uVar5);
          FUN_0040526c(&local_c,local_a4);
          FUN_00405448(param_2,1,uVar5);
          uVar8 = FUN_00405260(local_8);
          uVar16 = uVar5 == uVar8;
          if ((bool)uVar16 || (int)uVar5 < (int)uVar8) {
            FUN_004053fc(local_8,uVar5,1);
            FUN_00405378(local_a8,&DAT_00543e70);
            if ((bool)uVar16) {
              local_28 = (undefined1 *)FUN_0042b3e4(param_1,&DAT_00543eb8);
            }
            else {
              local_28 = (undefined1 *)0x0;
            }
          }
          else {
            local_28 = (undefined1 *)0x0;
          }
        }
      }
    }
    lpchText = (LPCWSTR)FUN_00405574(&DAT_00543e68,*param_2);
    if ((lpchText == (LPCWSTR)0x1) && (iVar13 = FUN_00405260(*param_2), iVar13 < 3)) {
      FUN_00404ff0(param_2);
    }
    if (((uStack_24._3_1_ == '\0') && (lpchText == (LPCWSTR)0x1)) &&
       (iVar13 = FUN_00405260(*param_2), 2 < iVar13)) {
      if ((*(short *)(*param_2 + 2) == 0x2f) && (iVar13 = FUN_00405260(*param_2), 3 < iVar13)) {
        uVar3 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),*(undefined2 *)(*param_2 + 4))
                            );
        switch(uVar3) {
        case 0x41:
          if ((((char)param_19[0x13] == '\0') || (param_19[0x1a] == *(uint *)param_19[6])) &&
             (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX >> 8),UNK_00543ebc);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
            if ((param_19[0xe] != 0x1fffffff) &&
               (FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[-0x20]),
               param_19[-0x20] == 0x1fffffff)) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
            if (param_19[0xd] != 0x1fffffff) {
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[0xd]);
            }
          }
          if ((char)param_19[0x15] == '\0') {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19[-0x21] + 0x18));
          }
          *(undefined1 *)((int)param_19 + -0x55) = 0;
          if (*(char *)((int)param_19 + -0x75) != '\0') {
            param_19[-0x22] = local_7c[2];
            param_19[-0x23] = *param_17 + local_80;
            if (param_19[-0x24] != local_7c[0]) {
              param_19[-0x25] = local_80;
              param_19[-0x24] = local_7c[0];
            }
            puVar15 = (uint *)param_19[4] + (uint)bVar17 * -2 + 1;
            puVar14 = param_19 + (uint)bVar17 * -2 + -0x24;
            *(uint *)param_19[4] = param_19[-0x25];
            *puVar15 = *puVar14;
            puVar15[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
            (puVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (puVar14 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            *(undefined4 *)param_19[5] = *(undefined4 *)param_19[6];
            *(undefined1 *)((int)param_19 + -0x75) = 0;
          }
          if (param_19[0x1b] == *(int *)param_19[6] - 1U) {
            param_19[-0xb] = local_90.left;
            param_19[-10] = local_90.bottom - *param_13;
            iVar13 = FUN_00541128(param_1,&UNK_00543ec4);
            param_19[-0xc] = param_19[-10] - iVar13;
            lpchText = L"綀@蔏ⁱ";
            InflateRect((LPRECT)(param_19 + -0xd),1,0);
            if (param_18 == '\0') {
              FUN_0042af10(param_1,param_19 + -0xd);
            }
          }
          break;
        case 0x42:
          if (*(short *)(*param_2 + 6) == 0x3e) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_00 >> 8),UNK_00543ecc);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          else {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19[-0x21] + 0x18));
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)((int)param_19 + -0x5d) = 0;
          }
          break;
        case 0x46:
          FUN_0042a5b0(param_19[-0x21],&local_ac);
          FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),local_ac);
          uVar6 = FUN_0042a624(param_19[-0x21]);
          FUN_0042a640(*(undefined4 *)(param_1 + 0xc),uVar6);
          if ((param_18 == '\0') && ((char)param_19[0x15] == '\0')) {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19[-0x21] + 0x18));
            FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[-0x26]);
            if (param_19[-0x26] == 0x1fffffff) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
          }
          break;
        case 0x48:
          if (param_18 == '\0') {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[-0x27]);
            FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[-0x28]);
            if (param_19[-0x28] == 0x1fffffff) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
          }
          break;
        case 0x49:
          bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
          uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_02 >> 8),UNK_00543ed4);
          FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                       CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          break;
        case 0x4c:
          uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
          break;
        case 0x4f:
          *param_5 = 0;
          break;
        case 0x50:
          uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
          if (param_18 == '\0') {
            FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[-0x29]);
            if (param_19[-0x29] == 0x1fffffff) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
            *(undefined1 *)((int)param_19 + -0x35) = 0;
          }
          break;
        case 0x52:
          func_0x005411e4(param_1);
          break;
        case 0x53:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 6)));
          if (sVar4 == 0x55) {
            *(undefined1 *)((int)param_19 + -0x4e) = 0;
            *(undefined1 *)((int)param_19 + -0x4d) = 0;
          }
          else if (sVar4 == 0x48) {
            *(undefined1 *)(param_19 + -0x14) = 0;
          }
          else {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_01 >> 8),UNK_00543ed0);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          break;
        case 0x55:
          if ((*(short *)(*param_2 + 6) == 0x3e) || ((int)param_19[-0x2a] < 1)) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_03 >> 8),UNK_00543ebc);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          else {
            param_19[-0x2a] = param_19[-0x2a] - 1;
          }
          break;
        case 0x5a:
          *(undefined1 *)((int)param_19 + -0x4f) = 0;
        }
      }
      else {
        uVar3 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),*(undefined2 *)(*param_2 + 2))
                            );
        switch(uVar3) {
        case 0x41:
          if ((param_19[0x1b] == *(uint *)param_19[6]) && (param_18 == '\0')) {
            param_19[-0xd] = local_90.left;
            param_19[-0xc] = local_90.top;
          }
          *(int *)param_19[6] = *(int *)param_19[6] + 1;
          if ((((char)param_19[0x13] == '\0') || (param_19[0x1a] == *(uint *)param_19[6])) &&
             (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | UNK_00543ebc);
            if (param_19[0xe] != 0x1fffffff) {
              uVar5 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              param_19[-0x20] = uVar5;
              cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
              if (cVar2 == '\x01') {
                param_19[-0x20] = 0x1fffffff;
              }
              FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[0xe]);
            }
            if (param_19[0xd] != 0x1fffffff) {
              param_19[-0x2b] = *(uint *)(*(int *)(param_1 + 0xc) + 0x18);
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[0xd]);
            }
          }
          if (((char)param_19[0x15] == '\0') &&
             (((param_19[0xd] == 0x1fffffff || (param_19[0x1a] != *(uint *)param_19[6])) ||
              ((char)param_19[0x13] == '\0')))) {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[0xf]);
          }
          iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
          FUN_004053fc(*param_2,3,iVar13 + -1);
          iVar13 = FUN_00405574(&UNK_00543edc,uStack_10);
          iVar13 = iVar13 + 1;
          uVar6 = FUN_00405260(uStack_10);
          FUN_004053fc(uStack_10,iVar13,uVar6);
          iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
          FUN_004053fc(psStack_14,1,iVar13 + -1);
          FUN_00404b6c(param_19 + -0x17,psStack_14);
          *(undefined1 *)((int)param_19 + -0x55) = 1;
          param_19[-0x25] = *param_17;
          param_19[-0x24] = local_7c[0];
          break;
        case 0x42:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 4)));
          if (sVar4 == 0x3e) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | UNK_00543ecc);
          }
          else if (sVar4 == 0x52) {
            uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
            FUN_0040526c(param_19[10],&UNK_00543ee4);
          }
          else if (sVar4 == 0x4c) {
            if ((char)param_19[0x14] == '\0') {
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),param_19[-0x2c]);
            }
          }
          else if (sVar4 == 0x4f) {
            uVar6 = FUN_00405574(&DAT_00543e9c,*param_2);
            FUN_004053fc(*param_2,1,uVar6);
            FUN_0040526c(&local_c,local_b0);
            iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
            FUN_004053fc(*param_2,6,iVar13 + -1);
            FUN_00404b6c(&local_b8,local_bc);
            FUN_004095b0(local_b8,&uStackY_b4);
            FUN_004051d4(&uStack_10,uStackY_b4);
            iVar13 = FUN_00405574(L"BACKGROUND",uStack_10);
            if ((0 < iVar13) && (param_18 == '\0')) {
              iVar13 = FUN_00405574(L"BACKGROUND",uStack_10);
              iVar13 = iVar13 + 10;
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              piVar18 = (int *)0x0;
              iVar13 = FUN_00405574(&UNK_00543f08,psStack_14);
              if ((iVar13 == 0) && (param_19[2] != 0)) {
                FUN_00404b6c(&uStackY_c0,psStack_14);
                piVar18 = (int *)(**(code **)(*(int *)param_19[2] + 0x34))
                                           ((int *)param_19[2],uStackY_c0);
              }
              iVar13 = FUN_00405574(&UNK_00543f10,psStack_14);
              if ((0 < iVar13) && (param_19[3] != 0)) {
                FUN_00404b6c(&uStackY_c4,psStack_14);
                iVar13 = FUN_004b3494(param_19[3],uStackY_c4);
                if (iVar13 == 0) {
                  iStackY_6c = FUN_004b343c(param_19[3]);
                  *(undefined1 *)(iStackY_6c + 0x4d) = 0;
                  FUN_00404b6c(&uStackY_c8,psStack_14);
                  FUN_004b305c(iStackY_6c,uStackY_c8);
                }
                FUN_00404b6c(&local_cc,psStack_14);
                uVar6 = FUN_004b3494(param_19[3],local_cc);
                piVar18 = (int *)FUN_00403c34(uVar6,PTR_LAB_004b21a4);
              }
              if ((((piVar18 != (int *)0x0) &&
                   (cVar2 = (**(code **)(*piVar18 + 0x1c))(), cVar2 == '\0')) &&
                  (iVar13 = (**(code **)(*piVar18 + 0x2c))(), 0 < iVar13)) &&
                 (iVar13 = (**(code **)(*piVar18 + 0x20))(), 0 < iVar13)) {
                lpchText = (LPCWSTR)param_19[-0x13];
                pHVar12 = CreateRectRgn((int)lpchText,param_19[-0x12],param_19[-0x11],
                                        param_19[-0x10]);
                param_19[-0x2d] = (uint)pHVar12;
                pHVar12 = (HRGN)param_19[-0x2d];
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                puVar23 = &UNK_0054232a;
                SelectClipRgn(pHVar10,pHVar12);
                for (; (int)puVar23 < (int)(param_19[-0x10] - param_19[-0x12]);
                    puVar23 = puVar23 + iVar13) {
                  puVar20 = (undefined *)0x0;
                  while ((int)puVar20 < (int)(param_19[-0x11] - param_19[-0x13])) {
                    puVar21 = &UNK_00542350;
                    FUN_0042ae64(param_1,puVar20 + param_19[-0x13],puVar23 + param_19[-0x12]);
                    iVar13 = (**(code **)(*piVar18 + 0x2c))();
                    puVar20 = puVar21 + iVar13;
                  }
                  iVar13 = (**(code **)(*piVar18 + 0x20))();
                }
                pHVar12 = (HRGN)0x0;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                SelectClipRgn(pHVar10,pHVar12);
                DeleteObject((HGDIOBJ)param_19[-0x2d]);
              }
            }
            iVar13 = FUN_00405574(L"BGCOLOR",uStack_10);
            if (0 < iVar13) {
              iVar13 = FUN_00405574(L"BGCOLOR",uStack_10);
              iVar13 = iVar13 + 7;
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              if (param_18 != '\x01') {
                iVar13 = FUN_00405574(&UNK_00543f30,psStack_14);
                if (0 < iVar13) {
                  FUN_00404b6c(&uStackY_d8,psStack_14);
                  FUN_00409724(uStackY_d8,&uStackY_d4);
                  FUN_004051d4(&local_d0,uStackY_d4);
                  uVar6 = func_0x00540334(local_d0);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar6);
                }
                iVar13 = FUN_00405574(&UNK_00543f3c,psStack_14);
                if (0 < iVar13) {
                  uVar6 = func_0x00540c0c(psStack_14);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar6);
                }
                if (param_18 != '\x01') {
                  uVar5 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                  param_19[-0x26] = uVar5;
                  uVar5 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                  param_19[-0xf] = uVar5;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_19[-0x26]);
                  FUN_0042b158(param_1,param_19[-0x13],param_19[-0x12]);
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_19[-0xf]);
                }
              }
            }
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)((int)param_19 + -0x5d) = 1;
          }
          break;
        case 0x46:
          iVar13 = FUN_00540f68(&DAT_00543e9c,*param_2,&stack0xffffffc4);
          if (0 < iVar13) {
            FUN_004053fc(*param_2,6,lpchText + -3);
            FUN_00404b6c(auStackY_187c + 0x5ca,auStackY_187c[0x5c9]);
            FUN_004095b0(auStackY_187c[0x5ca],auStackY_187c + 0x5cb);
            FUN_004051d4(&uStack_10,auStackY_187c[0x5cb]);
            iVar13 = FUN_00540f68(&UNK_0054404c,uStack_10,&stack0xffffffc4);
            if (0 < iVar13) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,lpchText + 2,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              FUN_00404b6c(auStackY_187c + 0x5c8,psStack_14);
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),auStackY_187c[0x5c8]);
            }
            iVar13 = FUN_00540f68(L" COLOR",uStack_10,&stack0xffffffc4);
            if ((0 < iVar13) && ((char)param_19[0x15] == '\0')) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,lpchText + 3,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              iVar13 = FUN_00405260(psStack_14);
              if (0 < iVar13) {
                if (*psStack_14 == 0x23) {
                  uVar6 = func_0x00540c0c(psStack_14);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar6);
                }
                else {
                  FUN_00404b6c(auStackY_187c + 0x5c5,psStack_14);
                  FUN_00409724(auStackY_187c[0x5c5],auStackY_187c + 0x5c6);
                  FUN_004051d4(auStackY_187c + 0x5c7,auStackY_187c[0x5c6]);
                  uVar6 = func_0x00540334(auStackY_187c[0x5c7]);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar6);
                }
              }
            }
            iVar13 = FUN_00540f68(L"BGCOLOR",uStack_10,&stack0xffffffc4);
            if (((0 < iVar13) && (param_18 == '\0')) && ((char)param_19[0x15] == '\0')) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,(undefined *)((int)lpchText + 7),uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              uVar5 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              param_19[-0x26] = uVar5;
              cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
              if (cVar2 == '\x01') {
                param_19[-0x26] = 0x1fffffff;
              }
              iVar13 = FUN_00405260(psStack_14);
              if (0 < iVar13) {
                if (*psStack_14 == 0x23) {
                  uVar6 = func_0x00540c0c(psStack_14);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar6);
                }
                else {
                  FUN_00404b6c(auStackY_187c + 0x5c2,psStack_14);
                  FUN_00409724(auStackY_187c[0x5c2],auStackY_187c + 0x5c3);
                  FUN_004051d4(auStackY_187c + 0x5c4,auStackY_187c[0x5c3]);
                  uVar6 = func_0x00540334(auStackY_187c[0x5c4]);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar6);
                }
              }
            }
            iVar13 = FUN_00540f68(&UNK_00544070,uStack_10,&stack0xffffffc4);
            if (0 < iVar13) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,lpchText + 2,uVar6);
              iVar13 = FUN_00405574(&UNK_00544080,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              uVar6 = func_0x00540d68(psStack_14);
              switch(uVar6) {
              default:
                uVar6 = func_0x00540d68(psStack_14);
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),uVar6);
                break;
              case 1:
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),8);
                break;
              case 2:
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),10);
                break;
              case 3:
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),0xc);
                break;
              case 4:
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),0xe);
                break;
              case 5:
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),0x10);
              }
            }
          }
          break;
        case 0x48:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 4)));
          if (sVar4 == 0x49) {
            if (param_18 == '\0') {
              param_19[-0x27] = *(uint *)(*(int *)(param_1 + 0xc) + 0x18);
              uVar5 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              param_19[-0x28] = uVar5;
              cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
              if (cVar2 == '\x01') {
                param_19[-0x28] = 0x1fffffff;
              }
              FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),0xff00000d);
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),0xff00000e);
            }
          }
          else if (sVar4 == 0x52) {
            uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
            if (param_18 == '\0') {
              uVar5 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
              param_19[-0xf] = uVar5;
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),0);
              FUN_0042b064(param_1,local_80,local_90.bottom + 1);
              FUN_0042b004(param_1,local_7c[1],local_90.bottom + 1);
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_19[-0xf]);
            }
          }
          break;
        case 0x49:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 4)));
          if (sVar4 == 0x3e) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | UNK_00543ed4);
          }
          else if (sVar4 == 0x4e) {
            iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
            FUN_004053fc(*param_2,3,iVar13 + -1);
            iVar13 = FUN_00540cc4(&UNK_00543f44,uStack_10);
            iVar13 = iVar13 + 2;
            uVar6 = FUN_00405260(uStack_10);
            FUN_004053fc(uStack_10,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            iVar13 = iVar13 + 1;
            uVar6 = FUN_00405260(psStack_14);
            FUN_004053fc(psStack_14,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            FUN_004053fc(psStack_14,1,iVar13 + -1);
            FUN_00404b6c(&uStackY_dc,psStack_14);
            puVar23 = &UNK_005426eb;
            uStack_2c = FUN_0040343c(uStackY_dc,&stack0xffffffd0);
            if ((puVar23 == (undefined *)0x0) && ((int)*param_17 < (int)uStack_2c)) {
              *param_17 = uStack_2c;
              local_90.left = param_19[-0x13] + uStack_2c;
            }
          }
          else if (sVar4 == 0x4d) {
            param_19[-0x2e] = param_19[-0x2e] + 1;
            iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
            FUN_004053fc(*param_2,3,iVar13 + -1);
            FUN_00404b6c(&local_e4,local_e8);
            FUN_004095b0(local_e4,&uStackY_e0);
            FUN_004051d4(&uStack_10,uStackY_e0);
            iVar13 = FUN_00405574(&UNK_00543f4c,uStack_10);
            iVar13 = iVar13 + 4;
            uVar6 = FUN_00405260(uStack_10);
            FUN_004053fc(uStack_10,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            iVar13 = iVar13 + 1;
            uVar6 = FUN_00405260(psStack_14);
            FUN_004053fc(psStack_14,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            FUN_004053fc(psStack_14,1,iVar13 + -1);
            iVar13 = FUN_00405574(&UNK_00543f58,uStack_10);
            if ((0 < iVar13) && (param_19[-0x2f] == param_19[-0x2e])) {
              iVar13 = FUN_00405574(&UNK_00543f58,uStack_10);
              iVar13 = iVar13 + 4;
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
            }
            iStackY_54 = 0;
            iStackY_58 = 0;
            iVar13 = FUN_00405574(L"WIDTH",uStack_10);
            if (0 < iVar13) {
              iVar13 = FUN_00405574(L"WIDTH",uStack_10);
              iVar13 = iVar13 + 6;
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,unaff_ESI);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(unaff_ESI);
              FUN_004053fc(unaff_ESI,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,unaff_ESI);
              FUN_004053fc(unaff_ESI,1,iVar13 + -1);
              FUN_00404b6c(&uStackY_ec,unaff_ESI);
              iStackY_54 = FUN_0040343c(uStackY_ec,&stack0xffffffd0);
            }
            iVar13 = FUN_00405574(L"HEIGHT",uStack_10);
            if (0 < iVar13) {
              iVar13 = FUN_00540cc4(L"HEIGHT",uStack_10);
              iVar13 = iVar13 + 7;
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,unaff_ESI);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(unaff_ESI);
              FUN_004053fc(unaff_ESI,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,unaff_ESI);
              FUN_004053fc(unaff_ESI,1,iVar13 + -1);
              FUN_00404b6c(&uStackY_f0,unaff_ESI);
              iStackY_58 = FUN_0040343c(uStackY_f0,&stack0xffffffd0);
            }
            param_19[-0x31] = 0;
            param_19[-0x30] = 0;
            FUN_00404b6c(&uStackY_f8,psStack_14);
            FUN_004095b0(uStackY_f8,&uStackY_f4);
            iVar13 = FUN_00404ee8(&UNK_00543f8c,uStackY_f4);
            if ((0 < iVar13) && (FUN_00405448(&psStack_14,1,4), param_19[0x1e] != 0)) {
              iVar13 = func_0x00540d68(psStack_14);
              iVar7 = FUN_00473f5c(param_19[0x1e]);
              if (iVar13 < iVar7) {
                iVar7 = 0x60;
                iVar13 = 0x58;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                uVar5 = MulDiv(*(int *)(param_19[0x1e] + 0x34),iVar13,iVar7);
                param_19[-0x31] = uVar5;
                iVar7 = 0x60;
                iVar13 = 0x5a;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                lpchText = 
                L"喋襄䂂\xffff胿䁽甀謮䑅碀X╵薋ｸ\xffff譐\xf045迨￢僿Ū䖋譄础趋ｴ\xffff힋藨\xf319胿䁽ༀ颅"
                ;
                uVar5 = MulDiv(*(int *)(param_19[0x1e] + 0x30),iVar13,iVar7);
                param_19[-0x30] = uVar5;
                if ((param_18 == '\0') && ((char)param_19[0x16] == '\0')) {
                  func_0x00540d68(psStack_14);
                  lpchText = L"綀@蔏\x98";
                  FUN_00474474(param_19[0x1e],param_1,local_90.left);
                }
                if ((param_18 == '\0') && ((char)param_19[0x16] != '\0')) {
                  iVar13 = FUN_00402c38();
                  local_90.right = iVar13 + local_90.left;
                  iVar13 = FUN_00402c38();
                  local_90.bottom = iVar13 + local_90.top;
                  puStackY_4c = (undefined *)FUN_0042fcb8(PTR_PTR_00429378,1);
                  uVar6 = func_0x00540d68(psStack_14);
                  FUN_00473ef4(param_19[0x1e],uVar6,puStackY_4c);
                  func_0x0054001c(param_1,&local_90,puStackY_4c);
                  FUN_00403a84(puStackY_4c);
                  local_90.left = local_80;
                  puVar14 = (uint *)((int)&local_90 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                  *(uint *)((int)&local_90 + (uint)bVar17 * -8 + 4) = local_7c[(uint)bVar17 * -2];
                  *puVar14 = local_7c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                  puVar14[(uint)bVar17 * -2 + 1] =
                       (local_7c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1]
                  ;
                }
              }
            }
            FUN_00404b6c(&local_100,psStack_14);
            FUN_004095b0(local_100,&uStackY_fc);
            iVar13 = FUN_00404ee8(&UNK_00543f9c,uStackY_fc);
            if (0 < iVar13) {
              FUN_00405448(&psStack_14,1,5);
              FUN_00404b6c(auStackY_10c,psStack_14);
              puStackY_4c = &UNK_00542c21;
              func_0x0054011c(param_1,local_90.left,local_90.top);
              param_19[-0x31] = uStackY_108;
              param_19[-0x30] = uStackY_104;
              iVar7 = 0x60;
              iVar13 = 0x58;
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              iVar13 = GetDeviceCaps(pHVar10,iVar13);
              uVar5 = MulDiv(param_19[-0x31],iVar13,iVar7);
              param_19[-0x31] = uVar5;
              iVar7 = 0x60;
              iVar13 = 0x5a;
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              iVar13 = GetDeviceCaps(pHVar10,iVar13);
              lpchText = 
              L"喋襄䂂\xffff跿\xf085\xfffe诿\xf055컨\xec1e诿\xf085\xfffe跿\xf495\xfffe\xe8ff椁￬開ﻴ\xffff겸吿\xe800∩￬삅踏È"
              ;
              uVar5 = MulDiv(param_19[-0x30],iVar13,iVar7);
              param_19[-0x30] = uVar5;
            }
            FUN_00404b6c(&uStackY_114,psStack_14);
            FUN_004095b0(uStackY_114,&uStackY_110);
            iVar13 = FUN_00404ee8(&UNK_00543fac,uStackY_110);
            if (0 < iVar13) {
              FUN_00405448(&psStack_14,1,5);
              FUN_00404b6c(auStackY_118,psStack_14);
              puStackY_4c = &UNK_00542d20;
              func_0x0054011c(param_1,local_90.left,local_90.top);
              param_19[-0x31] = uStackY_108;
              param_19[-0x30] = uStackY_104;
              iVar7 = 0x60;
              iVar13 = 0x58;
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              iVar13 = GetDeviceCaps(pHVar10,iVar13);
              uVar5 = MulDiv(param_19[-0x31],iVar13,iVar7);
              param_19[-0x31] = uVar5;
              iVar7 = 0x60;
              iVar13 = 0x5a;
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              iVar13 = GetDeviceCaps(pHVar10,iVar13);
              lpchText = 
              L"喋襄䂂\xffff㏿觀뱅喋룰㼈T폨\xec27藿痀謫䑅碃\b≴薍ﻨ\xffff喋\xe8f0ᶰ￬開ﻨ\xffff䖋譄ࡀࢋ凿褴뱅喋룰㼐T韨\xec27藿࿀躎"
              ;
              uVar5 = MulDiv(param_19[-0x30],iVar13,iVar7);
              param_19[-0x30] = uVar5;
            }
            piVar18 = (int *)0x0;
            iVar13 = FUN_00405574(&UNK_00543f08,psStack_14);
            if ((iVar13 == 0) && (param_19[2] != 0)) {
              FUN_00404b6c(auStackY_187c + 0x5d8,psStack_14);
              piVar18 = (int *)(**(code **)(*(int *)param_19[2] + 0x34))
                                         ((int *)param_19[2],auStackY_187c[0x5d8]);
            }
            iVar13 = FUN_00405574(&UNK_00543f10,psStack_14);
            if ((0 < iVar13) && (param_19[3] != 0)) {
              FUN_00404b6c(auStackY_187c + 0x5d7,psStack_14);
              iVar13 = FUN_004b3494(param_19[3],auStackY_187c[0x5d7]);
              if (iVar13 == 0) {
                local_7c[3] = FUN_004b343c(param_19[3]);
                *(undefined1 *)(local_7c[3] + 0x4d) = 0;
                FUN_00404b6c(auStackY_187c + 0x5d6,psStack_14);
                FUN_004b305c(local_7c[3],auStackY_187c[0x5d6]);
              }
              FUN_00404b6c(auStackY_187c + 0x5d5,psStack_14);
              uVar6 = FUN_004b3494(param_19[3],auStackY_187c[0x5d5]);
              piVar18 = (int *)FUN_00403c34(uVar6,PTR_LAB_004b21a4);
            }
            if ((piVar18 != (int *)0x0) && (cVar2 = (**(code **)(*piVar18 + 0x1c))(), cVar2 == '\0')
               ) {
              if (param_18 == '\0') {
                if ((iStackY_54 < 1) || (iStackY_58 < 1)) {
                  iVar13 = FUN_004b31b4(piVar18);
                  if (1 < iVar13) {
                    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_19[-0x2c]);
                    FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),param_19[-0x2c]);
                    FUN_004b337c(piVar18);
                    FUN_004b3378(piVar18);
                    FUN_0042b158(param_1,local_90.left,local_90.top);
                  }
                  FUN_0042ae64(param_1,(uint)*(ushort *)(piVar18 + 0x18) + local_90.left,
                               (uint)*(ushort *)((int)piVar18 + 0x62) + local_90.top);
                }
                else {
                  FUN_0041c990(local_90.left,local_90.top,local_90.left + iStackY_54);
                  FUN_0042b20c(param_1,&local_a0,piVar18);
                }
              }
              if ((iStackY_54 < 1) || (iStackY_58 < 1)) {
                iVar24 = 0x60;
                iVar13 = 0x58;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                iVar7 = FUN_004b337c(piVar18);
                uVar5 = MulDiv(iVar7,iVar13,iVar24);
                param_19[-0x31] = uVar5;
                iVar24 = 0x60;
                iVar13 = 0x5a;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                iVar7 = FUN_004b3378(piVar18);
                lpchText = (LPCWSTR)&UNK_00543005;
                uVar5 = MulDiv(iVar7,iVar13,iVar24);
                param_19[-0x30] = uVar5;
              }
              else {
                iVar7 = 0x60;
                iVar13 = 0x58;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                uVar5 = MulDiv(iStackY_54,iVar13,iVar7);
                param_19[-0x31] = uVar5;
                iVar7 = 0x60;
                iVar13 = 0x5a;
                pHVar10 = (HDC)FUN_0042b5a8(param_1);
                iVar13 = GetDeviceCaps(pHVar10,iVar13);
                lpchText = (LPCWSTR)&UNK_00542fb1;
                uVar5 = MulDiv(iStackY_58,iVar13,iVar7);
                param_19[-0x30] = uVar5;
              }
            }
            if (((((int)*param_17 < (int)(param_10 - local_80)) &&
                 ((int)(param_10 - local_80) < (int)(*param_17 + param_19[-0x31]))) &&
                (local_90.top < param_9)) &&
               ((param_9 < (int)(param_19[-0x30] + local_90.top) &&
                (*(char *)((int)param_19 + -0x55) != '\0')))) {
              *param_7 = 1;
              FUN_004051d4(param_19[0xb],param_19[-0x17]);
              param_19[-0x2f] = param_19[-0x2e];
            }
            uStackY_64 = *param_16;
            if (((int)(local_7c[1] - local_80) < (int)(*param_17 + param_19[-0x31])) &&
               ((int)param_19[-0x31] < (int)(local_7c[1] - local_80))) {
              uStack_24._0_3_ = CONCAT12(1,(ushort)uStack_24);
            }
            else {
              *param_17 = *param_17 + param_19[-0x31];
              local_90.left = local_90.left + param_19[-0x31];
              if ((int)*param_16 < (int)param_19[-0x30]) {
                *param_16 = param_19[-0x30];
              }
            }
            iVar13 = FUN_00405574(L"ALIGN",uStack_10);
            if (0 < iVar13) {
              iVar13 = FUN_00405574(&UNK_00543fc8,uStack_10);
              if (iVar13 < 1) {
                iVar13 = FUN_00405574(L"\"MIDDLE",uStack_10);
                if (0 < iVar13) {
                  iVar13 = FUN_00541128(param_1,&UNK_00543ec4);
                  *param_13 = *param_16 - iVar13 >> 1;
                }
              }
              else {
                iVar13 = FUN_00541128(param_1,&UNK_00543ec4);
                *param_13 = *param_16 - iVar13;
              }
            }
          }
          break;
        case 0x4c:
          *param_17 = *param_17 + param_19[-0x2a] * 0xc;
          if (uStack_24._1_1_ == '\0') {
            uStack_24._0_2_ = CONCAT11(1,(undefined1)uStack_24);
          }
          else {
            uStack_24._0_3_ = CONCAT12(1,(ushort)uStack_24);
          }
          local_90.left = local_90.left + (param_19[-0x2a] - 1) * 0xc;
          if ((param_18 == '\0') && (*(char *)((int)param_19 + -0x4f) == '\0')) {
            FUN_0042a5b0(*(undefined4 *)(param_1 + 0xc),auStackY_187c + 0x5d4);
            FUN_004051d4(&psStack_14,auStackY_187c[0x5d4]);
            FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),"Symbol");
            if ((param_19[-0x2a] & 1) == 0) {
              UVar25 = 0;
              ptVar19 = &local_90;
              iVar13 = 1;
              lpchText = L"o";
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              DrawTextW(pHVar10,lpchText,iVar13,ptVar19,UVar25);
            }
            else {
              UVar25 = 0;
              ptVar19 = &local_90;
              iVar13 = 1;
              lpchText = L"·";
              pHVar10 = (HDC)FUN_0042b5a8(param_1);
              DrawTextW(pHVar10,lpchText,iVar13,ptVar19,UVar25);
            }
            FUN_00404b6c(auStackY_187c + 0x5d3,psStack_14);
            FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),auStackY_187c[0x5d3]);
          }
          local_90.left = local_90.left + 0xc;
          break;
        case 0x4f:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 4)));
          if (sVar4 == 0x46) {
            iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
            FUN_004053fc(*param_2,3,iVar13 + -1);
            iVar13 = FUN_00540cc4(&UNK_00543f44,uStack_10);
            iVar13 = iVar13 + 2;
            uVar6 = FUN_00405260(uStack_10);
            FUN_004053fc(uStack_10,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            iVar13 = iVar13 + 1;
            uVar6 = FUN_00405260(psStack_14);
            FUN_004053fc(psStack_14,iVar13,uVar6);
            iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
            FUN_004053fc(psStack_14,1,iVar13 + -1);
            FUN_00404b6c(auStackY_187c + 0x5d2,psStack_14);
            uVar5 = FUN_0040343c(auStackY_187c[0x5d2],&stack0xffffffd0);
            *param_5 = uVar5;
            local_90.left = *param_5;
            *param_17 = *param_5;
          }
          break;
        case 0x50:
          iVar13 = FUN_00540f68(&DAT_00543e9c,*param_2,&stack0xffffffc4);
          if (0 < iVar13) {
            FUN_004053fc(*param_2,3,(undefined *)((int)lpchText + -1));
            FUN_00404b6c(auStackY_187c + 0x5d0,auStackY_187c[0x5cf]);
            FUN_004095b0(auStackY_187c[0x5d0],auStackY_187c + 0x5d1);
            FUN_004051d4(&uStack_10,auStackY_187c[0x5d1]);
            iVar13 = FUN_00540f68(L"ALIGN",uStack_10,&stack0xffffffc4);
            if (0 < iVar13) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,(undefined *)((int)lpchText + 5),uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              iVar13 = FUN_00405574(L"RIGHT",psStack_14);
              if (0 < iVar13) {
                *param_12 = 1;
              }
              iVar13 = FUN_00405574(&UNK_00544014,psStack_14);
              if (0 < iVar13) {
                *param_12 = 0;
              }
              iVar13 = FUN_00405574(L"CENTER",psStack_14);
              if (0 < iVar13) {
                *param_12 = 2;
              }
            }
            iVar13 = FUN_00540f68(L"INDENT",uStack_10,&stack0xffffffc4);
            if (0 < iVar13) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,lpchText + 3,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              uVar6 = func_0x00540d68(psStack_14);
              *param_11 = uVar6;
            }
            iVar13 = FUN_00540f68(L"BGCOLOR",uStack_10,&stack0xffffffc4);
            if (0 < iVar13) {
              uVar6 = FUN_00405260(uStack_10);
              FUN_004053fc(uStack_10,(undefined *)((int)lpchText + 5),uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              iVar13 = iVar13 + 1;
              uVar6 = FUN_00405260(psStack_14);
              FUN_004053fc(psStack_14,iVar13,uVar6);
              iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
              FUN_004053fc(psStack_14,1,iVar13 + -1);
              local_50 = 0x1fffffff;
              iVar13 = FUN_00405260(psStack_14);
              if (0 < iVar13) {
                if (*psStack_14 == 0x23) {
                  local_50 = func_0x00540c0c(psStack_14);
                }
                else {
                  FUN_00404b6c(auStackY_187c + 0x5cc,psStack_14);
                  FUN_00409724(auStackY_187c[0x5cc],auStackY_187c + 0x5cd);
                  FUN_004051d4(auStackY_187c + 0x5ce,auStackY_187c[0x5cd]);
                  local_50 = func_0x00540334(auStackY_187c[0x5ce]);
                }
              }
              if (param_18 == '\0') {
                *(undefined1 *)((int)param_19 + -0x35) = 1;
                uVar5 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                param_19[-0x29] = uVar5;
                cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
                if (cVar2 == '\x01') {
                  param_19[-0x29] = 0x1fffffff;
                }
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_50);
                uVar5 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                param_19[-0xf] = uVar5;
                FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                FUN_0042b158(param_1,param_19[-0x13],local_7c[0]);
              }
            }
          }
          break;
        case 0x52:
          iVar13 = FUN_00405574(&DAT_00543e9c,*param_2);
          FUN_004053fc(*param_2,3,iVar13 + -1);
          iVar13 = FUN_00540cc4(&UNK_005440a8,uStack_10);
          iVar13 = iVar13 + 2;
          uVar6 = FUN_00405260(uStack_10);
          FUN_004053fc(uStack_10,iVar13,uVar6);
          iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
          iVar13 = iVar13 + 1;
          uVar6 = FUN_00405260(psStack_14);
          FUN_004053fc(psStack_14,iVar13,uVar6);
          iVar13 = FUN_00405574(&UNK_00543edc,psStack_14);
          FUN_004053fc(psStack_14,1,iVar13 + -1);
          FUN_00404b6c(auStackY_187c + 0x5c1,psStack_14);
          uStack_2c = FUN_0040343c(auStackY_187c[0x5c1],&stack0xffffffd0);
          func_0x00541194(param_1,uStack_2c);
          break;
        case 0x53:
          sVar4 = FUN_005410c0(CONCAT22((short)((uint)*param_2 >> 0x10),
                                        *(undefined2 *)(*param_2 + 4)));
          if (sVar4 == 0x3e) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | UNK_00543ed0);
          }
          else if (sVar4 == 0x48) {
            *(undefined1 *)(param_19 + -0x14) = 1;
          }
          else {
            iVar13 = FUN_00540cc4(&UNK_00544088,*param_2);
            if (iVar13 == 1) {
              *(undefined1 *)((int)param_19 + -0x4d) = 1;
            }
            else {
              iVar13 = FUN_00540cc4(&UNK_00544098,*param_2);
              if (iVar13 == 1) {
                *(undefined1 *)((int)param_19 + -0x4e) = 1;
              }
            }
          }
          break;
        case 0x55:
          if (*(short *)(*param_2 + 4) == 0x3e) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | UNK_00543ebc);
          }
          else {
            param_19[-0x2a] = param_19[-0x2a] + 1;
            uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
          }
          break;
        case 0x5a:
          *(undefined1 *)((int)param_19 + -0x4f) = 1;
        }
      }
      iVar13 = FUN_00540f68(&DAT_00543e9c,*param_2,&stack0xffffffc4);
      if ((iVar13 < 1) || (uStack_24._2_1_ != '\0')) {
        if (uStack_24._2_1_ == '\0') {
          uVar6 = FUN_00405260(*param_2);
          FUN_00405448(param_2,1,uVar6);
        }
      }
      else {
        FUN_004053fc(*param_2,1,lpchText);
        FUN_0040526c(&local_c,auStackY_187c[0x5c0]);
        FUN_00405448(param_2,1,lpchText);
      }
    }
  }
  *param_17 = *param_17 - (int)local_28;
  if (*(int *)param_19[8] < (int)*param_17) {
    *(uint *)param_19[8] = *param_17 + 2;
  }
  if (((param_19[0x1b] == *(int *)param_19[6] - 1U) && (*(char *)((int)param_19 + -0x55) != '\0'))
     && (param_18 == '\0')) {
    param_19[-0xb] = local_90.left;
    param_19[-10] = local_90.bottom;
    InflateRect((LPRECT)(param_19 + -0xd),1,0);
    FUN_0042af10(param_1,param_19 + -0xd);
    param_19[-0xd] = local_80 + 1;
    param_19[-0xc] = param_19[-10];
  }
  FUN_0040502c(param_4,local_c);
  uVar5 = (uint)uStack_24;
  *in_FS_OFFSET = uStack_2c;
  uStack_24 = &LAB_00543e5a;
  local_28 = (undefined1 *)0x543d24;
  FUN_00404ff0(auStackY_187c + 0x5c0,uStack_2c,uVar5);
  local_28 = (undefined1 *)0x543d34;
  FUN_004048f8(auStackY_187c + 0x5c1,3);
  local_28 = (undefined1 *)0x543d3f;
  FUN_00404ff0(auStackY_187c + 0x5c4);
  local_28 = (undefined1 *)0x543d4f;
  FUN_004048f8(auStackY_187c + 0x5c5,2);
  local_28 = (undefined1 *)0x543d5a;
  FUN_00404ff0(auStackY_187c + 0x5c7);
  local_28 = (undefined1 *)0x543d65;
  FUN_004048d4(auStackY_187c + 0x5c8);
  local_28 = (undefined1 *)0x543d70;
  FUN_00404ff0(auStackY_187c + 0x5c9);
  local_28 = (undefined1 *)0x543d80;
  FUN_004048f8(auStackY_187c + 0x5ca,4);
  local_28 = (undefined1 *)0x543d90;
  FUN_00405008(auStackY_187c + 0x5ce,2);
  local_28 = (undefined1 *)0x543da0;
  FUN_004048f8(auStackY_187c + 0x5d0,4);
  local_28 = (undefined1 *)0x543dab;
  FUN_004048d4(auStackY_187c + 0x5d4);
  local_28 = (undefined1 *)0x543dbb;
  FUN_004048f8(auStackY_187c + 0x5d5,8);
  local_28 = (undefined1 *)0x543dcb;
  FUN_004048f8(&local_100,6);
  local_28 = (undefined1 *)0x543dd6;
  FUN_00404ff0(&local_e8);
  local_28 = (undefined1 *)0x543de6;
  FUN_004048f8(&local_e4,5);
  local_28 = (undefined1 *)0x543df1;
  FUN_00404ff0(&local_d0);
  local_28 = (undefined1 *)0x543e01;
  FUN_004048f8(&local_cc,4);
  local_28 = (undefined1 *)0x543e0c;
  FUN_00404ff0(&local_bc);
  local_28 = (undefined1 *)0x543e1c;
  FUN_004048f8(&local_b8,2);
  local_28 = (undefined1 *)0x543e27;
  FUN_00404ff0(&local_b0);
  local_28 = (undefined1 *)0x543e32;
  FUN_004048d4(&local_ac);
  local_28 = (undefined1 *)0x543e42;
  FUN_00405008(&local_a8,2);
  local_28 = (undefined1 *)0x543e4f;
  FUN_00405008(&stack0xffffffe0,7);
  return;
}

