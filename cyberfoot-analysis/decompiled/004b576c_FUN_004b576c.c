// Address: 004b576c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b576c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int param_6,undefined1 *param_7,undefined1 *param_8,int param_9,int param_10,
                 undefined4 *param_11,undefined1 *param_12,uint *param_13,uint *param_14,
                 uint *param_15,uint *param_16,int *param_17,char param_18,int param_19)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  LPSTR lpchText;
  HDC hdc;
  HDC pHVar6;
  LPRECT lprc;
  LPSIZE lpSize;
  LPINT lpnFit;
  LPCSTR lpszString;
  undefined *puVar7;
  HRGN pHVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  char *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  int *in_FS_OFFSET;
  undefined1 uVar16;
  bool bVar17;
  byte bVar18;
  uint auStackY_1884 [1496];
  float10 fStackY_124;
  int iStackY_118;
  undefined4 local_114;
  undefined4 uStackY_110;
  undefined4 uStackY_10c;
  undefined4 uStackY_108;
  undefined4 uStackY_104;
  undefined4 uStackY_100;
  undefined4 uStackY_fc;
  undefined4 uStackY_f8;
  undefined4 uStackY_f4;
  undefined4 uStackY_f0;
  undefined4 uStackY_ec;
  undefined4 uStackY_e8;
  undefined4 uStackY_e4;
  undefined4 uStackY_e0;
  undefined4 uStackY_dc;
  undefined4 uStackY_d8;
  undefined4 uStackY_d4;
  undefined4 uStackY_d0;
  undefined4 local_cc;
  undefined4 uStackY_c8;
  undefined4 uStackY_c4;
  undefined4 uStackY_c0;
  undefined4 uStackY_bc;
  undefined4 uStackY_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint auStackY_a4 [3];
  tagRECT local_98;
  uint local_88;
  int local_84 [4];
  int iStackY_74;
  int iStackY_70;
  int iStackY_6c;
  char local_66;
  char cStackY_65;
  int local_64;
  HDC local_60;
  HDC pHStackY_5c;
  HDC pHStackY_58;
  undefined4 uStackY_54;
  int local_50;
  undefined4 uStackY_4c;
  undefined *local_48;
  HDC in_stack_ffffffc4;
  HDC in_stack_ffffffc8;
  tagRECT *ptVar19;
  LPINT lpnDx;
  undefined *puVar20;
  undefined *puVar21;
  LPDRAWTEXTPARAMS ptVar22;
  undefined *puVar23;
  int iVar24;
  UINT UVar25;
  int iStack_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  undefined4 uStack_10;
  undefined4 local_c;
  int local_8;
  
  bVar18 = 0;
  uStack_20 = &stack0xfffffffc;
  local_8 = 0x29;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_88 = uRam00000000;
  local_84[0] = iRam00000004;
  local_84[1] = uRam00000008;
  local_84[2] = iRam0000000c;
  local_24 = &LAB_004b9a47;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  FUN_004048d4(param_4);
  FUN_004048d4(&stack0xffffffe4);
  local_64 = 0;
  local_84[2] = local_84[2] - *param_15;
  *param_17 = 0;
  local_24 = (undefined1 *)0x0;
  uStack_20._0_2_ = (ushort)uStack_20 & 0xff;
  uStack_20 = (undefined1 *)(uint)(ushort)uStack_20;
  *param_8 = 0;
  *param_7 = 0;
  FUN_004048d4(param_19 + -0x48);
  local_98.left = local_88;
  piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
  *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2];
  *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
  piVar11[(uint)bVar18 * -2 + 1] =
       (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
  FUN_004048d4(&local_c);
  if (param_18 == '\0') {
    local_98.left = local_98.left + param_6;
  }
  if ((*(char *)(param_19 + -0x49) != '\0') && (param_18 == '\0')) {
    uVar3 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_19 + -0x50) = uVar3;
    uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
    FUN_0042b158(param_1,*(undefined4 *)(param_19 + -0x60),local_84[0]);
  }
  do {
    iVar9 = FUN_00404ba4(*param_2);
    if (((iVar9 < 1) || (uStack_20._3_1_ != '\0')) || (uStack_20._2_1_ != '\0')) {
      *param_17 = *param_17 - (int)local_24;
      if (**(int **)(param_19 + 0x28) < *param_17) {
        **(int **)(param_19 + 0x28) = *param_17 + 2;
      }
      if (((*(int *)(param_19 + 0x74) == **(int **)(param_19 + 0x20) + -1) &&
          (*(char *)(param_19 + -0x69) != '\0')) && (param_18 == '\0')) {
        *(LONG *)(param_19 + -0x3c) = local_98.left;
        *(LONG *)(param_19 + -0x38) = local_98.bottom;
        InflateRect((LPRECT)(param_19 + -0x44),1,0);
        FUN_0042af10(param_1,param_19 + -0x44);
        *(uint *)(param_19 + -0x44) = local_88 + 1;
        *(undefined4 *)(param_19 + -0x40) = *(undefined4 *)(param_19 + -0x38);
      }
      FUN_00404928(param_4,local_c);
      uVar5 = (uint)uStack_20;
      *in_FS_OFFSET = iStack_28;
      uStack_20 = &LAB_004b9a4e;
      local_24 = (undefined1 *)0x4b99fe;
      FUN_004048f8(auStackY_1884 + 0x5cd,10,uVar5);
      local_24 = (undefined1 *)0x4b9a0e;
      FUN_004048f8(&local_114,0x10);
      local_24 = (undefined1 *)0x4b9a1e;
      FUN_004048f8(&local_cc,6);
      local_24 = (undefined1 *)0x4b9a29;
      FUN_004048d4(&local_b4);
      local_24 = (undefined1 *)0x4b9a39;
      FUN_004048f8(&local_b0,2);
      local_24 = (undefined1 *)0x4b9a46;
      FUN_004048f8(&stack0xffffffe4,6);
      return;
    }
    iVar9 = FUN_00404ee8(&DAT_004b9a60,*param_2);
    if (*(char *)(param_19 + 0x50) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00404ee8(&DAT_004b9a6c,*param_2);
    }
    if ((iVar9 < 1) || ((iVar4 <= iVar9 && (iVar4 != 0)))) {
      if (iVar4 < 1) {
        FUN_0040496c(&local_8,*param_2);
      }
      else {
        FUN_00404e04(*param_2,1,iVar4);
      }
    }
    else {
      FUN_00404e04(*param_2,1,iVar9 + -1);
    }
    iVar9 = FUN_00404ba4(local_8);
    while (iVar4 = FUN_00404ee8("&nbsp;",local_8), 0 < iVar4) {
      FUN_004b563c("&nbsp;",&DAT_004b9a6c,&local_8);
    }
    while (iVar4 = FUN_00404ee8(&DAT_004b9a88,local_8), 0 < iVar4) {
      FUN_004b563c(&DAT_004b9a88,&DAT_004b9a60,&local_8);
    }
    while (iVar4 = FUN_00404ee8(&DAT_004b9aa4,local_8), 0 < iVar4) {
      FUN_004b563c(&DAT_004b9aa4,&DAT_004b9a98,&local_8);
    }
    local_60 = (HDC)FUN_00404ba4(local_8);
    if (0 < iVar9) {
      uVar5 = FUN_0042b400(param_1,local_8);
      if ((*(char *)(param_19 + -0x61) != '\0') && ((int)*param_15 < (int)(uVar5 >> 2))) {
        *param_15 = uVar5 >> 2;
      }
      if ((*(char *)(param_19 + -0x62) != '\0') && ((int)*param_14 < (int)(uVar5 >> 2))) {
        *param_14 = uVar5 >> 2;
      }
      if ((int)*param_16 < (int)uVar5) {
        *param_16 = uVar5;
      }
      FUN_00404bac(*(undefined4 *)(param_19 + 0x30),local_8);
      if (*(char *)(param_19 + -99) != '\0') {
        FUN_00404e44(param_2,1,iVar9);
      }
      if (*(char *)(param_19 + -99) == '\0') {
        if (param_18 == '\0') {
          if (*(char *)(param_19 + -0x62) != '\0') {
            local_98.bottom = local_98.bottom - *param_14;
          }
          if (*(char *)(param_19 + -0x61) != '\0') {
            local_98.bottom = local_98.bottom + *param_15;
          }
          local_98.bottom = local_98.bottom - *param_13;
          if (*(char *)(param_19 + -100) != '\0') {
            FUN_0040715c(&local_98,*(undefined4 *)(param_19 + 0x6c),*(undefined4 *)(param_19 + 0x6c)
                        );
            local_50 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + 0x38));
            ptVar22 = (LPDRAWTEXTPARAMS)0x0;
            uVar5 = *(uint *)(param_19 + -0x68) & 0xfffffdff;
            ptVar19 = &local_98;
            pHVar6 = local_60;
            lpchText = (LPSTR)FUN_00404da4(local_8);
            hdc = (HDC)FUN_0042b5a8(param_1);
            DrawTextExA(hdc,lpchText,(int)pHVar6,ptVar19,uVar5,ptVar22);
            FUN_0040715c(&local_98,-*(int *)(param_19 + 0x6c),-*(int *)(param_19 + 0x6c));
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),local_50);
          }
          puVar12 = (undefined4 *)(param_19 + -0x10 + (uint)bVar18 * -8);
          *(LONG *)(param_19 + -0x14) = local_98.left;
          puVar13 = puVar12 + (uint)bVar18 * -2 + 1;
          puVar10 = (undefined4 *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          *puVar12 = *(undefined4 *)((int)&local_98 + (uint)bVar18 * -8 + 4);
          *puVar13 = *puVar10;
          puVar13[(uint)bVar18 * -2 + 1] = puVar10[(uint)bVar18 * -2 + 1];
          uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
          if ((uVar5 & 2) != 0) {
            *(uint *)(param_19 + -0xc) = local_98.right + 2;
          }
          ptVar22 = (LPDRAWTEXTPARAMS)0x0;
          uVar5 = *(uint *)(param_19 + -0x68) | 0x400;
          ptVar19 = &local_98;
          in_stack_ffffffc8 = local_60;
          in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
          pHVar6 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,ptVar19,uVar5,ptVar22);
          if (*(char *)(param_19 + 0x50) == '\0') {
            if (*(char *)(param_19 + 0x50) == '\0') {
              ptVar22 = (LPDRAWTEXTPARAMS)0x4b5b51;
              iVar4 = FUN_0042b3e4(param_1,&DAT_004b9ab4);
              if (local_98.left < local_84[1] - iVar4) goto LAB_004b5b5e;
            }
          }
          else {
LAB_004b5b5e:
            ptVar22 = (LPDRAWTEXTPARAMS)0x0;
            uVar5 = *(uint *)(param_19 + -0x68) & 0xfffffdff;
            lprc = (LPRECT)(param_19 + -0x14);
            in_stack_ffffffc8 = local_60;
            in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
            pHVar6 = (HDC)FUN_0042b5a8(param_1);
            DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,lprc,uVar5,ptVar22);
          }
          if ((*(char *)(param_19 + -0x69) != '\0') &&
             (**(int **)(param_19 + 0x20) + -1 == *(int *)(param_19 + 0x74))) {
            ptVar22 = (LPDRAWTEXTPARAMS)0x4b5bb8;
            FUN_00404928(*(undefined4 *)(param_19 + 0x2c),*(undefined4 *)(param_19 + -0x70));
          }
          if (*(char *)(param_19 + -0x71) != '\0') {
            FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),0xff);
            FUN_0042a998(*(undefined4 *)(param_1 + 0x10),1);
            iVar4 = local_98.left >> 1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((local_98.left & 1U) != 0);
            }
            local_48 = (undefined *)(iVar4 * 2);
            uVar5 = (uint)local_48 & 0x80000003;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
            }
            if (uVar5 == 0) {
              iVar4 = 2;
            }
            else {
              iVar4 = 0;
            }
            ptVar22 = (LPDRAWTEXTPARAMS)0x4b5c23;
            FUN_0042b064(param_1,local_48,local_84[2] + iVar4 + -1);
            for (; (int)local_48 < local_98.right; local_48 = local_48 + 2) {
              if (iVar4 == 2) {
                iVar4 = 0;
              }
              else {
                iVar4 = 2;
              }
              ptVar22 = (LPDRAWTEXTPARAMS)0x4b5c4d;
              FUN_0042b004(param_1,local_48 + 2,local_84[2] + iVar4 + -1);
            }
          }
          if ((*(uint *)(param_19 + -0x68) & 0x20000) == 0x20000) {
            local_98.right = (int)ptVar22 + (local_98.left - local_98.right);
          }
          else {
            local_98.left = local_98.right;
            local_98.right = local_84[1];
          }
          local_98.bottom = local_84[2];
          local_98.top = local_84[0];
        }
        else {
          local_98.left = local_88;
          piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2];
          *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          piVar11[(uint)bVar18 * -2 + 1] =
               (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          ptVar22 = (LPDRAWTEXTPARAMS)0x0;
          uVar5 = *(uint *)(param_19 + -0x68) | 0x400;
          ptVar19 = &local_98;
          in_stack_ffffffc8 = local_60;
          in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
          pHVar6 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,ptVar19,uVar5,ptVar22);
          if (((local_98.top < param_9) && (param_9 < local_98.bottom)) && (*param_17 < param_10)) {
            FUN_0040709c(*param_17,local_98.top,param_10);
            puVar14 = (uint *)(param_19 + -0x7d + (uint)bVar18 * -8);
            *(undefined4 *)(param_19 + -0x81) = local_a8;
            puVar15 = puVar14 + (uint)bVar18 * -2 + 1;
            *puVar14 = auStackY_a4[(uint)bVar18 * -2];
            *puVar15 = auStackY_a4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            puVar15[(uint)bVar18 * -2 + 1] =
                 (auStackY_a4 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            FUN_004032a8(param_19 + -0x28,0x14,0);
            *(undefined4 *)(param_19 + -0x28) = 0x14;
            lpSize = (LPSIZE)(param_19 + -0x34);
            lpnDx = (LPINT)0x0;
            lpnFit = (LPINT)(param_19 + -0x2c);
            in_stack_ffffffc8 = (HDC)(param_10 - *param_17);
            in_stack_ffffffc4 = local_60;
            lpszString = (LPCSTR)FUN_00404da4(local_8);
            pHVar6 = (HDC)FUN_0042b5a8(param_1);
            local_48 = (undefined *)0x4b5da7;
            GetTextExtentExPointA
                      (pHVar6,lpszString,(int)in_stack_ffffffc4,(int)in_stack_ffffffc8,lpnFit,lpnDx,
                       lpSize);
            if (iVar9 == *(int *)(param_19 + -0x2c)) {
              *(int *)(param_19 + -0x88) = *(int *)(param_19 + -0x88) + iVar9;
            }
            else {
              *(int *)(param_19 + -0x88) = *(int *)(param_19 + -0x88) + *(int *)(param_19 + -0x2c);
            }
          }
          local_64 = local_98.right - local_98.left;
          *param_17 = *param_17 + local_64;
          if (((*param_17 - local_64 <= param_10 - local_98.left) &&
              (param_10 - local_98.left <= *param_17)) &&
             ((*(char *)(param_19 + -0x69) != '\0' && (*param_8 = 1, local_98.top < param_9)))) {
            FUN_00404928(*(undefined4 *)(param_19 + 0x34),*(undefined4 *)(param_19 + -0x70));
            FUN_00404928(*(undefined4 *)(param_19 + 0x2c),*(undefined4 *)(param_19 + -0x48));
            *(undefined1 *)(param_19 + -0x89) = 1;
          }
        }
        iVar4 = (local_84[1] - local_88) - *(int *)(param_19 + -0x90);
        if ((*param_17 < iVar4) || (iVar4 <= local_64)) {
          local_66 = '\x01';
        }
        else {
          local_66 = '\0';
        }
        FUN_00404bac(&stack0xffffffe4,local_8);
        if ((local_66 == '\0') && (*(char *)(param_19 + 0x50) != '\0')) {
          uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
          *param_17 = *param_17 - local_64;
        }
        else {
          FUN_00404e04(*param_2,1,iVar9);
          FUN_00404bac(&local_c,local_ac);
          FUN_00404e44(param_2,1,iVar9);
          iVar4 = FUN_00404ba4(local_8);
          uVar16 = iVar9 == iVar4;
          if ((bool)uVar16 || iVar9 < iVar4) {
            FUN_00404e04(local_8,iVar9,1);
            FUN_00404cf0(local_b0,&DAT_004b9a6c);
            if ((bool)uVar16) {
              local_24 = (undefined1 *)FUN_0042b3e4(param_1,&DAT_004b9a6c);
            }
            else {
              local_24 = (undefined1 *)0x0;
            }
          }
          else {
            local_24 = (undefined1 *)0x0;
          }
        }
      }
    }
    puVar7 = (undefined *)FUN_00404ee8(&DAT_004b9a60,*param_2);
    if ((puVar7 == (undefined *)0x1) && (iVar9 = FUN_00404ba4(*param_2), iVar9 < 3)) {
      FUN_004048d4(param_2);
    }
    if (((uStack_20._3_1_ == '\0') && (puVar7 == (undefined *)0x1)) &&
       (iVar9 = FUN_00404ba4(*param_2), 2 < iVar9)) {
      if ((*(char *)(*param_2 + 1) == '/') && (iVar9 = FUN_00404ba4(*param_2), 3 < iVar9)) {
        uVar16 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
        switch(uVar16) {
        case 0x41:
          if (((*(char *)(param_19 + 0x54) == '\0') ||
              (*(int *)(param_19 + 0x70) == **(int **)(param_19 + 0x20))) && (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_004b9ab8);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
            if ((*(int *)(param_19 + 0x40) != 0x1fffffff) &&
               (FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0x94)),
               *(int *)(param_19 + -0x94) == 0x1fffffff)) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
            if (*(int *)(param_19 + 0x3c) != 0x1fffffff) {
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + 0x3c));
            }
          }
          if (*(char *)(param_19 + 0x5c) == '\0') {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(*(int *)(param_19 + -0x98) + 0x18));
          }
          *(undefined1 *)(param_19 + -0x69) = 0;
          if (*(char *)(param_19 + -0x89) != '\0') {
            *(int *)(param_19 + -0x9c) = local_84[2];
            *(uint *)(param_19 + -0xa0) = *param_17 + local_88;
            if (*(int *)(param_19 + -0xa4) != local_84[0]) {
              *(uint *)(param_19 + -0xa8) = local_88;
              *(int *)(param_19 + -0xa4) = local_84[0];
            }
            puVar13 = *(undefined4 **)(param_19 + 0x18) + (uint)bVar18 * -2 + 1;
            puVar10 = (undefined4 *)(param_19 + -0xa4 + (uint)bVar18 * -8);
            **(undefined4 **)(param_19 + 0x18) = *(undefined4 *)(param_19 + -0xa8);
            puVar12 = puVar10 + (uint)bVar18 * -2 + 1;
            *puVar13 = *puVar10;
            puVar13[(uint)bVar18 * -2 + 1] = *puVar12;
            (puVar13 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 puVar12[(uint)bVar18 * -2 + 1];
            **(undefined4 **)(param_19 + 0x1c) = **(undefined4 **)(param_19 + 0x20);
            *(undefined1 *)(param_19 + -0x89) = 0;
          }
          if (*(int *)(param_19 + 0x74) == **(int **)(param_19 + 0x20) + -1) {
            *(LONG *)(param_19 + -0x3c) = local_98.left;
            *(uint *)(param_19 + -0x38) = local_98.bottom - *param_13;
            iVar9 = FUN_0042b400(param_1,&DAT_004b9ac4);
            *(int *)(param_19 + -0x40) = *(int *)(param_19 + -0x38) - iVar9;
            in_stack_ffffffc8 = (HDC)0x4b61d5;
            InflateRect((LPRECT)(param_19 + -0x44),1,0);
            if (param_18 == '\0') {
              FUN_0042af10(param_1,param_19 + -0x44);
            }
          }
          break;
        case 0x42:
          if (*(char *)(*param_2 + 3) == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_00 >> 8),DAT_004b9ac8);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          else {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(*(int *)(param_19 + -0x98) + 0x18));
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)(param_19 + -0x71) = 0;
          }
          break;
        case 0x46:
          FUN_0042a5b0(*(undefined4 *)(param_19 + -0x98),&local_b4);
          FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),local_b4);
          uVar3 = FUN_0042a624(*(undefined4 *)(param_19 + -0x98));
          FUN_0042a640(*(undefined4 *)(param_1 + 0xc),uVar3);
          if ((param_18 == '\0') && (*(char *)(param_19 + 0x5c) == '\0')) {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(*(int *)(param_19 + -0x98) + 0x18));
            FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xac));
            if (*(int *)(param_19 + -0xac) == 0x1fffffff) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
          }
          break;
        case 0x48:
          if (param_18 == '\0') {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + -0xb0));
            FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xb4));
            if (*(int *)(param_19 + -0xb4) == 0x1fffffff) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
          }
          break;
        case 0x49:
          bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
          uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_02 >> 8),DAT_004b9ad0);
          FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                       CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          break;
        case 0x4c:
          uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
          break;
        case 0x4f:
          if ((*(char *)(*param_2 + 3) == '>') || (*(int *)(param_19 + -0xb8) < 1)) {
            *param_5 = 0;
          }
          else {
            *(int *)(param_19 + -0xb8) = *(int *)(param_19 + -0xb8) + -1;
            *(undefined1 *)(param_19 + -0xb9) = 0;
          }
          break;
        case 0x50:
          uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
          if (param_18 == '\0') {
            if ((*(char *)(param_19 + 0x5c) == '\0') &&
               (FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xc0)),
               *(int *)(param_19 + -0xc0) == 0x1fffffff)) {
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
            *(undefined1 *)(param_19 + -0x49) = 0;
          }
          break;
        case 0x52:
          FUN_004b5748(param_1);
          break;
        case 0x53:
          cStackY_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),
                                             *(undefined1 *)(*param_2 + 3)));
          if (cStackY_65 == 'U') {
            *(undefined1 *)(param_19 + -0x62) = 0;
            *(undefined1 *)(param_19 + -0x61) = 0;
          }
          else if (cStackY_65 == 'H') {
            *(undefined1 *)(param_19 + -100) = 0;
          }
          else {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_01 >> 8),DAT_004b9acc);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          break;
        case 0x55:
          if ((*(char *)(*param_2 + 3) == '>') || (*(int *)(param_19 + -0xb8) < 1)) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_03 >> 8),DAT_004b9ab8);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          else {
            *(int *)(param_19 + -0xb8) = *(int *)(param_19 + -0xb8) + -1;
          }
          break;
        case 0x5a:
          *(undefined1 *)(param_19 + -99) = 0;
        }
      }
      else {
        uVar16 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 1)));
        switch(uVar16) {
        case 0x41:
          if ((*(int *)(param_19 + 0x74) == **(int **)(param_19 + 0x20)) && (param_18 == '\0')) {
            *(LONG *)(param_19 + -0x44) = local_98.left;
            *(LONG *)(param_19 + -0x40) = local_98.top;
          }
          **(int **)(param_19 + 0x20) = **(int **)(param_19 + 0x20) + 1;
          if (((*(char *)(param_19 + 0x54) == '\0') ||
              (*(int *)(param_19 + 0x70) == **(int **)(param_19 + 0x20))) && (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_004b9ab8);
            if (*(int *)(param_19 + 0x40) != 0x1fffffff) {
              uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              *(undefined4 *)(param_19 + -0x94) = uVar3;
              cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
              if (cVar2 == '\x01') {
                *(undefined4 *)(param_19 + -0x94) = 0x1fffffff;
              }
              FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + 0x40));
            }
            if (*(int *)(param_19 + 0x3c) != 0x1fffffff) {
              *(undefined4 *)(param_19 + -0xc4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + 0x3c));
            }
          }
          if ((*(char *)(param_19 + 0x5c) == '\0') &&
             (((*(int *)(param_19 + 0x3c) == 0x1fffffff ||
               (*(int *)(param_19 + 0x70) != **(int **)(param_19 + 0x20))) ||
              (*(char *)(param_19 + 0x54) == '\0')))) {
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + 0x44));
          }
          iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
          FUN_00404e04(*param_2,3,iVar9 + -1);
          FUN_004095b0(uStackY_b8,&uStack_10);
          iVar9 = FUN_004b55d4(&UNK_004b9adc,uStack_10,&stack0xffffffc0);
          if (0 < iVar9) {
            iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,3,iVar9 + -1);
            uVar3 = FUN_00404ba4(uStack_10);
            FUN_00404e04(uStack_10,puVar7 + 4,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            iVar9 = iVar9 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar9 + -1);
            FUN_0040496c(param_19 + -0x70,unaff_EBX);
            *(undefined1 *)(param_19 + -0x69) = 1;
          }
          iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
          FUN_00404e04(*param_2,3,iVar9 + -1);
          FUN_004095b0(uStackY_bc,&uStack_10);
          iVar9 = FUN_004b55d4("TITLE",uStack_10,&stack0xffffffc0);
          if (0 < iVar9) {
            iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,3,iVar9 + -1);
            uVar3 = FUN_00404ba4(uStack_10);
            FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            iVar9 = iVar9 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar9 + -1);
            FUN_0040496c(param_19 + -0x48,unaff_EBX);
          }
          *(int *)(param_19 + -0xa8) = *param_17;
          *(int *)(param_19 + -0xa4) = local_84[0];
          break;
        case 0x42:
          cStackY_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),
                                             *(undefined1 *)(*param_2 + 2)));
          if (cStackY_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_004b9ac8);
          }
          else if (cStackY_65 == 'L') {
            if (*(char *)(param_19 + 0x58) == '\0') {
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + -200));
            }
          }
          else if (cStackY_65 == 'O') {
            uVar3 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,1,uVar3);
            FUN_00404bac(&local_c,uStackY_c0);
            if ((param_18 == '\0') && (*(char *)(param_19 + 0x5c) == '\0')) {
              iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
              FUN_00404e04(*param_2,6,iVar9 + -1);
              FUN_004095b0(uStackY_c4,&uStack_10);
              iVar9 = FUN_00404ee8("BACKGROUND",uStack_10);
              if (0 < iVar9) {
                iVar9 = FUN_00404ee8("BACKGROUND",uStack_10);
                iVar9 = iVar9 + 10;
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                FUN_004095b0(unaff_EBX,&uStackY_c8);
                iVar9 = FUN_00404ee8(&UNK_004b9b28,uStackY_c8);
                if ((0 < iVar9) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar9 = FUN_004b53e4(unaff_EBX);
                  iVar4 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar9 < iVar4) {
                    iVar4 = 0x60;
                    iVar9 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar9,iVar4);
                    *(int *)(param_19 + -0xd0) = iVar9;
                    iVar4 = 0x60;
                    iVar9 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    in_stack_ffffffc8 = (HDC)&UNK_004b6a4a;
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar9,iVar4);
                    *(int *)(param_19 + -0xcc) = iVar9;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_004b53e4(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)&UNK_004b6a8a;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar9 = FUN_00402c38();
                      local_98.right = iVar9 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uStackY_4c = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar3 = FUN_004b53e4(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar3,uStackY_4c);
                      func_0x004b455c(param_1,&local_98,uStackY_4c);
                      FUN_00403a84(uStackY_4c);
                      local_98.left = local_88;
                      piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2]
                      ;
                      *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                      piVar11[(uint)bVar18 * -2 + 1] =
                           (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)
                           [(uint)bVar18 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&local_cc);
                iVar9 = FUN_00404ee8(&UNK_004b9b38,local_cc);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b6ba9;
                  func_0x004b4660(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b6c0f;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                FUN_004095b0(unaff_EBX,&uStackY_d8);
                iVar9 = FUN_00404ee8(&UNK_004b9b48,uStackY_d8);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b6c86;
                  func_0x004b4660(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b6cec;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                piVar11 = (int *)0x0;
                iVar9 = FUN_00404ee8(&UNK_004b9b58,unaff_EBX);
                if ((iVar9 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar11 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar9 = FUN_00404ee8(&UNK_004b9b64,unaff_EBX);
                if ((0 < iVar9) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar9 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar9 == 0) {
                    iStackY_6c = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(iStackY_6c + 0x4d) = 0;
                    FUN_004b305c(iStackY_6c,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar11 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar11 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar11 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar9 = (**(code **)(*piVar11 + 0x2c))(), 0 < iVar9)) &&
                   (iVar9 = (**(code **)(*piVar11 + 0x20))(), 0 < iVar9)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)&UNK_004b6de3;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  puVar23 = &UNK_004b6e03;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; (int)puVar23 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      puVar23 = puVar23 + iVar9) {
                    puVar21 = (undefined *)0x0;
                    while ((int)puVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60)) {
                      puVar20 = &UNK_004b6e26;
                      FUN_0042ae64(param_1,puVar21 + *(int *)(param_19 + -0x60),
                                   puVar23 + *(int *)(param_19 + -0x5c));
                      iVar9 = (**(code **)(*piVar11 + 0x2c))();
                      puVar21 = puVar20 + iVar9;
                    }
                    iVar9 = (**(code **)(*piVar11 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar9 = FUN_00404ee8("BGTOPLEFT",uStack_10);
              if (0 < iVar9) {
                iVar9 = FUN_00404ee8("BGTOPLEFT",uStack_10);
                iVar9 = iVar9 + 10;
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                FUN_004095b0(unaff_EBX,&uStackY_dc);
                iVar9 = FUN_00404ee8(&UNK_004b9b28,uStackY_dc);
                if ((0 < iVar9) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar9 = FUN_004b53e4(unaff_EBX);
                  iVar4 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar9 < iVar4) {
                    iVar4 = 0x60;
                    iVar9 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar9,iVar4);
                    *(int *)(param_19 + -0xd0) = iVar9;
                    iVar4 = 0x60;
                    iVar9 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    in_stack_ffffffc8 = (HDC)&UNK_004b6fb7;
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar9,iVar4);
                    *(int *)(param_19 + -0xcc) = iVar9;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_004b53e4(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)&UNK_004b6ff7;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar9 = FUN_00402c38();
                      local_98.right = iVar9 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uStackY_4c = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar3 = FUN_004b53e4(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar3,uStackY_4c);
                      func_0x004b455c(param_1,&local_98,uStackY_4c);
                      FUN_00403a84(uStackY_4c);
                      local_98.left = local_88;
                      piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2]
                      ;
                      *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                      piVar11[(uint)bVar18 * -2 + 1] =
                           (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)
                           [(uint)bVar18 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&uStackY_e0);
                iVar9 = FUN_00404ee8(&UNK_004b9b38,uStackY_e0);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b7116;
                  func_0x004b4660(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b717c;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                FUN_004095b0(unaff_EBX,&uStackY_e4);
                iVar9 = FUN_00404ee8(&UNK_004b9b48,uStackY_e4);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b71f3;
                  func_0x004b4660(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b7259;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                piVar11 = (int *)0x0;
                iVar9 = FUN_00404ee8(&UNK_004b9b58,unaff_EBX);
                if ((iVar9 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar11 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar9 = FUN_00404ee8(&UNK_004b9b64,unaff_EBX);
                if ((0 < iVar9) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar9 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar9 == 0) {
                    iStackY_70 = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(iStackY_70 + 0x4d) = 0;
                    FUN_004b305c(iStackY_70,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar11 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar11 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar11 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar9 = (**(code **)(*piVar11 + 0x2c))(), 0 < iVar9)) &&
                   (iVar9 = (**(code **)(*piVar11 + 0x20))(), 0 < iVar9)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)&UNK_004b7350;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  puVar23 = &UNK_004b7370;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; (int)puVar23 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      puVar23 = puVar23 + iVar9) {
                    puVar21 = (undefined *)0x0;
                    while ((int)puVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60)) {
                      puVar20 = &UNK_004b7393;
                      FUN_0042ae64(param_1,puVar21 + *(int *)(param_19 + -0x60),
                                   puVar23 + *(int *)(param_19 + -0x5c));
                      iVar9 = (**(code **)(*piVar11 + 0x2c))();
                      puVar21 = puVar20 + iVar9;
                    }
                    iVar9 = (**(code **)(*piVar11 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar9 = FUN_00404ee8("BGTOPRIGHT",uStack_10);
              if (0 < iVar9) {
                iVar9 = FUN_00404ee8("BGTOPRIGHT",uStack_10);
                iVar9 = iVar9 + 10;
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                FUN_004095b0(unaff_EBX,&uStackY_e8);
                iVar9 = FUN_00404ee8(&UNK_004b9b28,uStackY_e8);
                if ((0 < iVar9) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar9 = FUN_004b53e4(unaff_EBX);
                  iVar4 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar9 < iVar4) {
                    iVar4 = 0x60;
                    iVar9 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar9,iVar4);
                    *(int *)(param_19 + -0xd0) = iVar9;
                    iVar4 = 0x60;
                    iVar9 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar9 = GetDeviceCaps(pHVar6,iVar9);
                    in_stack_ffffffc8 = (HDC)&UNK_004b7524;
                    iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar9,iVar4);
                    *(int *)(param_19 + -0xcc) = iVar9;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_004b53e4(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)&UNK_004b7570;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,
                                   local_98.right - *(int *)(*(int *)(param_19 + 0x80) + 0x34));
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar9 = FUN_00402c38();
                      local_98.right = iVar9 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uStackY_4c = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar3 = FUN_004b53e4(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar3,uStackY_4c);
                      func_0x004b455c(param_1,&local_98,uStackY_4c);
                      FUN_00403a84(uStackY_4c);
                      local_98.left = local_88;
                      piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2]
                      ;
                      *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                      piVar11[(uint)bVar18 * -2 + 1] =
                           (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)
                           [(uint)bVar18 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&uStackY_ec);
                iVar9 = FUN_00404ee8(&UNK_004b9b38,uStackY_ec);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b769b;
                  func_0x004b4660(param_1,local_98.right -
                                          *(int *)(*(int *)(param_19 + 0x80) + 0x34),local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b7701;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                FUN_004095b0(unaff_EBX,&uStackY_f0);
                iVar9 = FUN_00404ee8(&UNK_004b9b48,uStackY_f0);
                if (0 < iVar9) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  puVar7 = *(undefined **)(param_19 + 0x48);
                  local_48 = &UNK_004b7784;
                  func_0x004b4660(param_1,local_98.right -
                                          *(int *)(*(int *)(param_19 + 0x80) + 0x34),local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
                  *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
                  iVar4 = 0x60;
                  iVar9 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
                  *(int *)(param_19 + -0xd0) = iVar9;
                  iVar4 = 0x60;
                  iVar9 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar9 = GetDeviceCaps(pHVar6,iVar9);
                  in_stack_ffffffc8 = (HDC)&UNK_004b77ea;
                  iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
                  *(int *)(param_19 + -0xcc) = iVar9;
                }
                piVar11 = (int *)0x0;
                iVar9 = FUN_00404ee8(&UNK_004b9b58,unaff_EBX);
                if ((iVar9 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar11 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar9 = FUN_00404ee8(&UNK_004b9b64,unaff_EBX);
                if ((0 < iVar9) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar9 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar9 == 0) {
                    iStackY_74 = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(iStackY_74 + 0x4d) = 0;
                    FUN_004b305c(iStackY_74,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar11 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar11 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar11 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar9 = (**(code **)(*piVar11 + 0x2c))(), 0 < iVar9)) &&
                   (iVar9 = (**(code **)(*piVar11 + 0x20))(), 0 < iVar9)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)&UNK_004b78e1;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  puVar23 = &UNK_004b7901;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; (int)puVar23 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      puVar23 = puVar23 + iVar9) {
                    for (puVar21 = (undefined *)0x0;
                        (int)puVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60);
                        puVar21 = puVar21 + iVar9) {
                      iVar9 = (**(code **)(*piVar11 + 0x2c))();
                      puVar21 = &UNK_004b792a;
                      FUN_0042ae64(param_1,*(int *)(param_19 + -0x58) - iVar9,
                                   puVar23 + *(int *)(param_19 + -0x5c));
                      iVar9 = (**(code **)(*piVar11 + 0x2c))();
                    }
                    iVar9 = (**(code **)(*piVar11 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar9 = FUN_004b55d4("BGCOLOR",uStack_10,&stack0xffffffc0);
              if (0 < iVar9) {
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                local_50 = 0x1fffffff;
                iVar9 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar9) {
                  if (*unaff_EBX == '#') {
                    local_50 = func_0x004b52a8(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,&uStackY_f4);
                    local_50 = func_0x004b4ad0(uStackY_f4);
                  }
                }
                iVar9 = FUN_004b55d4("BGCOLORTO",uStack_10,&stack0xffffffc0);
                if (iVar9 < 1) {
                  uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                  *(undefined4 *)(param_19 + -0xac) = uVar3;
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_50);
                  uVar3 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                  *(undefined4 *)(param_19 + -0x50) = uVar3;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                  FUN_0042b158(param_1,*(int *)(param_19 + -0x60) + -2,
                               *(undefined4 *)(param_19 + -0x5c));
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_19 + -0x50));
                }
                else {
                  uVar3 = FUN_00404ba4(uStack_10);
                  FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
                  iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                  iVar9 = iVar9 + 1;
                  uVar3 = FUN_00404ba4(unaff_EBX);
                  FUN_00404e04(unaff_EBX,iVar9,uVar3);
                  iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                  FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                  uStackY_54 = 0x1fffffff;
                  iVar9 = FUN_00404ba4(unaff_EBX);
                  if (0 < iVar9) {
                    if (*unaff_EBX == '#') {
                      uStackY_54 = func_0x004b52a8(unaff_EBX);
                    }
                    else {
                      FUN_00409724(unaff_EBX,&uStackY_f8);
                      uStackY_54 = func_0x004b4ad0(uStackY_f8);
                    }
                  }
                  FUN_0040496c(&stack0xffffffec,&UNK_004b9bbc);
                  iVar9 = FUN_004b55d4(&UNK_004b9bc8,uStack_10,&stack0xffffffc0);
                  uVar16 = iVar9 == 0;
                  if (0 < iVar9) {
                    uVar3 = FUN_00404ba4(uStack_10);
                    FUN_00404e04(uStack_10,puVar7 + 3,uVar3);
                    iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                    iVar9 = iVar9 + 1;
                    uVar3 = FUN_00404ba4(unaff_EBX);
                    FUN_00404e04(unaff_EBX,iVar9,uVar3);
                    iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                    uVar16 = iVar9 == 1;
                    FUN_00404e04(unaff_EBX,1);
                  }
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                  FUN_0040709c(*(undefined4 *)(param_19 + -0x60),*(undefined4 *)(param_19 + -0x5c),
                               *(undefined4 *)(param_19 + -0x58));
                  uVar3 = FUN_00404cf0(unaff_EBX,&UNK_004b9bbc);
                  in_stack_ffffffc8 = (HDC)CONCAT31((int3)((uint)uVar3 >> 8),uVar16);
                  in_stack_ffffffc4 = (HDC)&UNK_004b7bdc;
                  func_0x004b488c(param_1,local_50,uStackY_54);
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
            }
          }
          else if (cStackY_65 == 'R') {
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            FUN_00404bac(*(undefined4 *)(param_19 + 0x30),&UNK_004b9b08);
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)(param_19 + -0x71) = 1;
          }
          break;
        case 0x46:
          iVar9 = FUN_004b55d4(&DAT_004b9a98,*param_2,&stack0xffffffc0);
          if (0 < iVar9) {
            cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
            if (cVar2 == '\x01') {
              *(undefined4 *)(param_19 + -0xac) = 0x1fffffff;
            }
            else {
              uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              *(undefined4 *)(param_19 + -0xac) = uVar3;
            }
            FUN_00404e04(*param_2,6,puVar7 + -6);
            FUN_004095b0(auStackY_1884[0x5d0],&uStack_10);
            iVar9 = FUN_004b55d4(&UNK_004b9cfc,uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 4,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),unaff_EBX);
            }
            iVar9 = FUN_004b55d4(" COLOR",uStack_10,&stack0xffffffc0);
            if ((0 < iVar9) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 6,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              iVar9 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar9) {
                if (*unaff_EBX == '#') {
                  uVar3 = func_0x004b52a8(unaff_EBX);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar3);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5cf);
                  uVar3 = func_0x004b4ad0(auStackY_1884[0x5cf]);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar3);
                }
              }
            }
            iVar9 = FUN_004b55d4("BGCOLOR",uStack_10,&stack0xffffffc0);
            if (((0 < iVar9) && (param_18 == '\0')) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 7,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              iVar9 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar9) {
                if (*unaff_EBX == '#') {
                  uVar3 = func_0x004b52a8(unaff_EBX);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5ce);
                  uVar3 = func_0x004b4ad0(auStackY_1884[0x5ce]);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                }
              }
            }
            iVar9 = FUN_004b55d4(&UNK_004b9d1c,uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 4,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9d2c,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              uVar3 = FUN_004b53e4(unaff_EBX);
              switch(uVar3) {
              default:
                uVar3 = FUN_004b53e4(unaff_EBX);
                FUN_0042a640(*(undefined4 *)(param_1 + 0xc),uVar3);
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
          cVar2 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar2 == 'I') {
            if (param_18 == '\0') {
              *(undefined4 *)(param_19 + -0xb0) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
              uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              *(undefined4 *)(param_19 + -0xb4) = uVar3;
              cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
              if (cVar2 == '\x01') {
                *(undefined4 *)(param_19 + -0xb4) = 0x1fffffff;
              }
              FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),0xff00000d);
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),0xff00000e);
            }
          }
          else if (cVar2 == 'R') {
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            if (param_18 == '\0') {
              iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
              FUN_00404e04(*param_2,4,iVar9 + -1);
              local_50 = 0;
              FUN_004095b0(uStack_10,&uStackY_fc);
              iVar9 = FUN_004b55d4("COLOR",uStackY_fc,&stack0xffffffc0);
              if (0 < iVar9) {
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                iVar9 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar9) {
                  if (*unaff_EBX == '#') {
                    local_50 = func_0x004b52a8(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,&uStackY_100);
                    local_50 = func_0x004b4ad0(uStackY_100);
                  }
                }
              }
              uVar3 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
              *(undefined4 *)(param_19 + -0x50) = uVar3;
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
              FUN_0042b064(param_1,local_88,local_98.bottom + 1);
              FUN_0042b004(param_1,local_84[1],local_98.bottom + 1);
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_19 + -0x50));
            }
          }
          break;
        case 0x49:
          cStackY_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),
                                             *(undefined1 *)(*param_2 + 2)));
          if (cStackY_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_004b9ad0);
          }
          else if (cStackY_65 == 'N') {
            iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,3,iVar9 + -1);
            iVar9 = FUN_004b5360(&UNK_004b9be4,uStack_10);
            iVar9 = iVar9 + 2;
            uVar3 = FUN_00404ba4(uStack_10);
            FUN_00404e04(uStack_10,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            iVar9 = iVar9 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar9 + -1);
            puVar23 = &UNK_004b7f08;
            iStack_28 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
            if ((puVar23 == (undefined *)0x0) && (*param_17 < iStack_28)) {
              *param_17 = iStack_28;
              local_98.left = *(int *)(param_19 + -0x60) + iStack_28;
            }
          }
          else if (cStackY_65 == 'M') {
            *(int *)(param_19 + -0xd8) = *(int *)(param_19 + -0xd8) + 1;
            iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,3,iVar9 + -1);
            FUN_004095b0(uStack_10,&uStackY_104);
            iVar9 = FUN_00404ee8(&UNK_004b9bf0,uStackY_104);
            iVar9 = iVar9 + 4;
            uVar3 = FUN_00404ba4(uStack_10);
            FUN_00404e04(uStack_10,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            iVar9 = iVar9 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar9 + -1);
            FUN_004095b0(uStack_10,&uStackY_108);
            FUN_0040496c(&uStack_10,uStackY_108);
            iVar9 = FUN_00404ee8(&UNK_004b9bfc,uStack_10);
            if ((0 < iVar9) && (*(int *)(param_19 + -0xdc) == *(int *)(param_19 + -0xd8))) {
              iVar9 = FUN_00404ee8(&UNK_004b9bfc,uStack_10);
              iVar9 = iVar9 + 4;
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar9 + -1);
            }
            pHStackY_58 = (HDC)0x0;
            pHStackY_5c = (HDC)0x0;
            iVar9 = FUN_00404ee8("WIDTH",uStack_10);
            if (0 < iVar9) {
              iVar9 = FUN_00404ee8("WIDTH",uStack_10);
              iVar9 = iVar9 + 6;
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar9 + -1);
              pHStackY_58 = (HDC)FUN_0040343c(unaff_ESI,&stack0xffffffd4);
            }
            iVar9 = FUN_00404ee8("HEIGHT",uStack_10);
            if (0 < iVar9) {
              iVar9 = FUN_004b5360("HEIGHT",uStack_10);
              iVar9 = iVar9 + 7;
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar9 + -1);
              pHStackY_5c = (HDC)FUN_0040343c(unaff_ESI,&stack0xffffffd4);
            }
            *(undefined4 *)(param_19 + -0xd0) = 0;
            *(undefined4 *)(param_19 + -0xcc) = 0;
            FUN_004095b0(unaff_EBX,&uStackY_10c);
            iVar9 = FUN_00404ee8(&UNK_004b9b28,uStackY_10c);
            if ((0 < iVar9) && (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0))
            {
              iVar9 = FUN_004b53e4(unaff_EBX);
              iVar4 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
              if (iVar9 < iVar4) {
                iVar4 = 0x60;
                iVar9 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar9,iVar4);
                *(int *)(param_19 + -0xd0) = iVar9;
                iVar4 = 0x60;
                iVar9 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                in_stack_ffffffc8 = (HDC)&UNK_004b829a;
                iVar9 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar9,iVar4);
                *(int *)(param_19 + -0xcc) = iVar9;
                if ((param_18 == '\0') && (*(char *)(param_19 + 0x60) == '\0')) {
                  FUN_004b53e4(unaff_EBX);
                  in_stack_ffffffc8 = (HDC)&UNK_004b82da;
                  FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                }
                if ((param_18 == '\0') && (*(char *)(param_19 + 0x60) != '\0')) {
                  iVar9 = FUN_00402c38();
                  local_98.right = iVar9 + local_98.left;
                  local_98.bottom = FUN_00402c38();
                  local_98.bottom = local_98.bottom + local_98.top;
                  uStackY_4c = FUN_0042fcb8(PTR_PTR_00429378,1);
                  uVar3 = FUN_004b53e4(unaff_EBX);
                  FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar3,uStackY_4c);
                  func_0x004b455c(param_1,&local_98,uStackY_4c);
                  FUN_00403a84(uStackY_4c);
                  local_98.left = local_88;
                  piVar11 = (int *)((int)&local_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                  *(int *)((int)&local_98 + (uint)bVar18 * -8 + 4) = local_84[(uint)bVar18 * -2];
                  *piVar11 = local_84[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                  piVar11[(uint)bVar18 * -2 + 1] =
                       (local_84 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1]
                  ;
                }
              }
            }
            FUN_004095b0(unaff_EBX,&uStackY_110);
            iVar9 = FUN_00404ee8(&UNK_004b9b38,uStackY_110);
            if (0 < iVar9) {
              FUN_00404e44(&stack0xffffffec,1,5);
              in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
              puVar7 = *(undefined **)(param_19 + 0x48);
              local_48 = &UNK_004b83f9;
              func_0x004b4660(param_1,local_98.left,local_98.top);
              *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
              *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
              iVar4 = 0x60;
              iVar9 = 0x58;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              iVar9 = GetDeviceCaps(pHVar6,iVar9);
              iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
              *(int *)(param_19 + -0xd0) = iVar9;
              iVar4 = 0x60;
              iVar9 = 0x5a;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              iVar9 = GetDeviceCaps(pHVar6,iVar9);
              in_stack_ffffffc8 = (HDC)&UNK_004b845f;
              iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
              *(int *)(param_19 + -0xcc) = iVar9;
            }
            FUN_004095b0(unaff_EBX,&local_114);
            iVar9 = FUN_00404ee8(&UNK_004b9b48,local_114);
            if (0 < iVar9) {
              FUN_00404e44(&stack0xffffffec,1,5);
              in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
              puVar7 = *(undefined **)(param_19 + 0x48);
              local_48 = &UNK_004b84d6;
              func_0x004b4660(param_1,local_98.left,local_98.top);
              *(undefined4 *)(param_19 + -0xd0) = uStackY_d4;
              *(undefined4 *)(param_19 + -0xcc) = uStackY_d0;
              iVar4 = 0x60;
              iVar9 = 0x58;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              iVar9 = GetDeviceCaps(pHVar6,iVar9);
              iVar9 = MulDiv(*(int *)(param_19 + -0xd0),iVar9,iVar4);
              *(int *)(param_19 + -0xd0) = iVar9;
              iVar4 = 0x60;
              iVar9 = 0x5a;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              iVar9 = GetDeviceCaps(pHVar6,iVar9);
              in_stack_ffffffc8 = (HDC)&UNK_004b853c;
              iVar9 = MulDiv(*(int *)(param_19 + -0xcc),iVar9,iVar4);
              *(int *)(param_19 + -0xcc) = iVar9;
            }
            piVar11 = (int *)0x0;
            iVar9 = FUN_00404ee8(&UNK_004b9b58,unaff_EBX);
            if ((iVar9 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
              piVar11 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                         (*(int **)(param_19 + 0x10),unaff_EBX);
            }
            iVar9 = FUN_00404ee8(&UNK_004b9b64,unaff_EBX);
            if ((0 < iVar9) && (*(int *)(param_19 + 0x14) != 0)) {
              iVar9 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
              if (iVar9 == 0) {
                local_84[3] = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                *(undefined1 *)(local_84[3] + 0x4d) = 0;
                FUN_004b305c(local_84[3],unaff_EBX);
              }
              uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
              piVar11 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
            }
            if ((piVar11 != (int *)0x0) && (cVar2 = (**(code **)(*piVar11 + 0x1c))(), cVar2 == '\0')
               ) {
              if ((0 < (int)pHStackY_58) && (0 < (int)pHStackY_5c)) {
                in_stack_ffffffc4 = pHStackY_5c;
                in_stack_ffffffc8 = pHStackY_58;
              }
              if ((0 < (int)pHStackY_58) && (pHStackY_5c == (HDC)0x0)) {
                in_stack_ffffffc8 = pHStackY_58;
                iStackY_118 = (**(code **)(*piVar11 + 0x2c))();
                fStackY_124 = (float10)(int)pHStackY_58 / (float10)iStackY_118;
                auStackY_1884[0x5d7] = (**(code **)(*piVar11 + 0x20))();
                in_stack_ffffffc4 = (HDC)FUN_00402c38();
              }
              if ((pHStackY_58 == (HDC)0x0) && (0 < (int)pHStackY_5c)) {
                iStackY_118 = (**(code **)(*piVar11 + 0x20))();
                fStackY_124 = (float10)(int)pHStackY_5c / (float10)iStackY_118;
                auStackY_1884[0x5d7] = (**(code **)(*piVar11 + 0x2c))();
                in_stack_ffffffc8 = (HDC)FUN_00402c38();
                in_stack_ffffffc4 = pHStackY_5c;
              }
              if ((pHStackY_58 == (HDC)0x0) && (pHStackY_5c == (HDC)0x0)) {
                in_stack_ffffffc8 = (HDC)(**(code **)(*piVar11 + 0x2c))();
                in_stack_ffffffc4 = (HDC)(**(code **)(*piVar11 + 0x20))();
              }
              if (param_18 == '\0') {
                if (((int)pHStackY_58 < 1) && ((int)pHStackY_5c < 1)) {
                  if (((int)pHStackY_58 < 1) || (pHStackY_5c != (HDC)0x0)) {
                    FUN_004b31b4(piVar11);
                    FUN_0042ae64(param_1,(uint)*(ushort *)(piVar11 + 0x18) + local_98.left,
                                 (uint)*(ushort *)((int)piVar11 + 0x62) + local_98.top);
                  }
                  else {
                    FUN_004b33bc(piVar11,1);
                    FUN_0040709c(local_98.left,local_98.top,
                                 (undefined *)((int)&pHStackY_58->unused + local_98.left));
                    FUN_0042b20c(param_1,&local_a8,piVar11);
                  }
                }
                else {
                  FUN_004b33bc(piVar11,1);
                  FUN_0040709c(local_98.left,local_98.top,
                               (undefined *)((int)&in_stack_ffffffc8->unused + local_98.left));
                  FUN_0042b20c(param_1,&local_a8,piVar11);
                }
              }
              if (((int)pHStackY_58 < 1) && ((int)pHStackY_5c < 1)) {
                iVar24 = 0x60;
                iVar9 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                iVar4 = FUN_004b337c(piVar11);
                iVar9 = MulDiv(iVar4,iVar9,iVar24);
                *(int *)(param_19 + -0xd0) = iVar9;
                iVar24 = 0x60;
                iVar9 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                iVar4 = FUN_004b3378(piVar11);
                in_stack_ffffffc8 = (HDC)&UNK_004b883c;
                iVar9 = MulDiv(iVar4,iVar9,iVar24);
                *(int *)(param_19 + -0xcc) = iVar9;
              }
              else {
                iVar4 = 0x60;
                iVar9 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                puVar23 = &UNK_004b87bc;
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                iVar9 = MulDiv((int)puVar23,iVar9,iVar4);
                *(int *)(param_19 + -0xd0) = iVar9;
                iVar4 = 0x60;
                iVar9 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar9 = GetDeviceCaps(pHVar6,iVar9);
                in_stack_ffffffc8 = (HDC)&UNK_004b87ea;
                iVar9 = MulDiv((int)in_stack_ffffffc4,iVar9,iVar4);
                *(int *)(param_19 + -0xcc) = iVar9;
              }
            }
            if ((((*param_17 < (int)(param_10 - local_88)) &&
                 ((int)(param_10 - local_88) < *param_17 + *(int *)(param_19 + -0xd0))) &&
                (local_98.top < param_9)) &&
               ((param_9 < *(int *)(param_19 + -0xcc) + local_98.top &&
                (*(char *)(param_19 + -0x69) != '\0')))) {
              *param_7 = 1;
              FUN_00404928(*(undefined4 *)(param_19 + 0x34),*(undefined4 *)(param_19 + -0x70));
              if (*(int *)(param_19 + -0x48) != 0) {
                FUN_00404928(*(undefined4 *)(param_19 + 0x2c),*(undefined4 *)(param_19 + -0x48));
              }
              *(undefined4 *)(param_19 + -0xdc) = *(undefined4 *)(param_19 + -0xd8);
            }
            if (((int)(local_84[1] - local_88) < *param_17 + *(int *)(param_19 + -0xd0)) &&
               (*(int *)(param_19 + -0xd0) < (int)(local_84[1] - local_88))) {
              uStack_20._0_3_ = CONCAT12(1,(ushort)uStack_20);
            }
            else {
              *param_17 = *param_17 + *(int *)(param_19 + -0xd0);
              local_98.left = local_98.left + *(int *)(param_19 + -0xd0);
              if ((int)*param_16 < *(int *)(param_19 + -0xcc)) {
                *param_16 = *(uint *)(param_19 + -0xcc);
              }
            }
            iVar9 = FUN_00404ee8("ALIGN",uStack_10);
            if (0 < iVar9) {
              iVar9 = FUN_00404ee8(&UNK_004b9c38,uStack_10);
              if (iVar9 < 1) {
                iVar9 = FUN_00404ee8("\"MIDDLE",uStack_10);
                if (0 < iVar9) {
                  iVar9 = FUN_0042b400(param_1,&DAT_004b9ac4);
                  *param_13 = *param_16 - iVar9 >> 1;
                }
              }
              else {
                iVar9 = FUN_0042b400(param_1,&DAT_004b9ac4);
                *param_13 = *param_16 - iVar9;
              }
            }
            iVar9 = FUN_00404ee8(&UNK_004b9c58,uStack_10);
            if (0 < iVar9) {
              uVar5 = FUN_0042b400(param_1,&DAT_004b9ac4);
              *param_16 = uVar5;
              *param_13 = 0;
            }
          }
          break;
        case 0x4c:
          local_50 = 0x1fffffff;
          FUN_004048d4(param_19 + -0xe0);
          iVar9 = FUN_004b55d4(&DAT_004b9a98,*param_2,&stack0xffffffc0);
          if (0 < iVar9) {
            FUN_00404e04(*param_2,3,puVar7 + -1);
            FUN_004095b0(auStackY_1884[0x5d6],&uStack_10);
            iVar9 = FUN_004b55d4(&UNK_004b9c68,uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 4,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              FUN_0040496c(param_19 + -0xe0,unaff_EBX);
            }
            iVar9 = FUN_004b55d4("COLOR",uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              iVar9 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar9) {
                if (*unaff_EBX == '#') {
                  local_50 = func_0x004b52a8(unaff_EBX);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d5);
                  local_50 = func_0x004b4ad0(auStackY_1884[0x5d5]);
                }
              }
            }
          }
          *param_17 = *param_17 + *(int *)(param_19 + -0xb8) * 0xc;
          if (uStack_20._1_1_ == '\0') {
            uStack_20._0_2_ = CONCAT11(1,(undefined1)uStack_20);
          }
          else {
            uStack_20._0_3_ = CONCAT12(1,(ushort)uStack_20);
          }
          local_98.left = local_98.left + (*(int *)(param_19 + -0xb8) + -1) * 0xc;
          if ((param_18 == '\0') && (*(char *)(param_19 + -99) == '\0')) {
            bVar17 = *(int *)(param_19 + -0xe0) == 0;
            if (bVar17) {
              if (local_50 != 0x1fffffff) {
                *(undefined4 *)(param_19 + -0xe4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
                FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),local_50);
              }
              FUN_0042a5b0(*(undefined4 *)(param_1 + 0xc),&stack0xffffffec);
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),"Symbol");
              if (*(char *)(param_19 + -0xb9) == '\0') {
                if ((*(byte *)(param_19 + -0xb8) & 1) == 0) {
                  UVar25 = 0;
                  ptVar19 = &local_98;
                  iVar9 = 1;
                  in_stack_ffffffc8 = (HDC)&UNK_004b9c84;
                  in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                  puVar7 = &UNK_004b8c71;
                  DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar9,ptVar19,UVar25);
                }
                else {
                  UVar25 = 0;
                  ptVar19 = &local_98;
                  iVar9 = 1;
                  in_stack_ffffffc8 = (HDC)&UNK_004b9c80;
                  in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                  puVar7 = &UNK_004b8c4f;
                  DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar9,ptVar19,UVar25);
                }
              }
              else {
                FUN_00409dd8(*(undefined4 *)(param_19 + -0xe8),auStackY_1884 + 0x5d4);
                FUN_00404bf0(param_19 + -0xec,auStackY_1884[0x5d4],&UNK_004b9c90);
                *(int *)(param_19 + -0xe8) = *(int *)(param_19 + -0xe8) + 1;
                UVar25 = 0;
                ptVar19 = &local_98;
                iVar9 = FUN_00404ba4(*(undefined4 *)(param_19 + -0xec));
                in_stack_ffffffc8 = (HDC)FUN_00404da4(*(undefined4 *)(param_19 + -0xec));
                in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                puVar7 = &UNK_004b8cdf;
                DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar9,ptVar19,UVar25);
                iVar9 = FUN_0042b3e4(param_1,*(undefined4 *)(param_19 + -0xec));
                local_98.left = iVar9 + local_98.left + -0xc;
              }
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),unaff_EBX);
              if (local_50 != 0x1fffffff) {
                FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + -0xe4));
              }
            }
            else {
              *(undefined4 *)(param_19 + -0xf0) = 0x1fffffff;
              FUN_00404cf0(*(undefined4 *)(param_19 + -0xe0),"SQUARE");
              uVar16 = 0;
              if (bVar17) {
                uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                *(undefined4 *)(param_19 + -0xf0) = uVar3;
                FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_50);
                FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),0);
                FUN_0042b158(param_1,local_98.left,local_98.top + 2);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xf0));
                uVar16 = *(int *)(param_19 + -0xf0) == 0x1fffffff;
                if ((bool)uVar16) {
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
              FUN_00404cf0(*(undefined4 *)(param_19 + -0xe0),"CIRCLE");
              if ((bool)uVar16) {
                uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                *(undefined4 *)(param_19 + -0xf0) = uVar3;
                FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_50);
                FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),0);
                FUN_0042af44(param_1,local_98.left,local_98.top + 2);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xf0));
                if (*(int *)(param_19 + -0xf0) == 0x1fffffff) {
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
              FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
            }
          }
          local_98.left = local_98.left + 0xc;
          break;
        case 0x4f:
          cStackY_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),
                                             *(undefined1 *)(*param_2 + 2)));
          if (cStackY_65 == 'L') {
            *(int *)(param_19 + -0xb8) = *(int *)(param_19 + -0xb8) + 1;
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            *(undefined1 *)(param_19 + -0xb9) = 1;
            *(undefined4 *)(param_19 + -0xe8) = 1;
          }
          if (cStackY_65 == 'F') {
            iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
            FUN_00404e04(*param_2,3,iVar9 + -1);
            iVar9 = FUN_004b5360(&UNK_004b9be4,uStack_10);
            iVar9 = iVar9 + 2;
            uVar3 = FUN_00404ba4(uStack_10);
            FUN_00404e04(uStack_10,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            iVar9 = iVar9 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar9,uVar3);
            iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar9 + -1);
            iVar9 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
            *param_5 = iVar9;
            local_98.left = *(int *)(param_19 + -0x60) + *param_5;
            *param_17 = *param_5;
          }
          break;
        case 0x50:
          iVar9 = FUN_004b55d4(&DAT_004b9a98,*param_2,&stack0xffffffc0);
          if (0 < iVar9) {
            FUN_00404e04(*param_2,3,puVar7 + -1);
            FUN_004095b0(auStackY_1884[0x5d3],&uStack_10);
            iVar9 = FUN_004b55d4("ALIGN",uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              iVar9 = FUN_00404ee8("RIGHT",unaff_EBX);
              if (0 < iVar9) {
                *param_12 = 1;
              }
              iVar9 = FUN_00404ee8(&UNK_004b9ccc,unaff_EBX);
              if (0 < iVar9) {
                *param_12 = 0;
              }
              iVar9 = FUN_00404ee8("CENTER",unaff_EBX);
              if (0 < iVar9) {
                *param_12 = 2;
              }
            }
            iVar9 = FUN_004b55d4("INDENT",uStack_10,&stack0xffffffc0);
            if (0 < iVar9) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 6,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              uVar3 = FUN_004b53e4(unaff_EBX);
              *param_11 = uVar3;
            }
            iVar9 = FUN_004b55d4("BGCOLOR",uStack_10,&stack0xffffffc0);
            if ((0 < iVar9) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(uStack_10);
              FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              iVar9 = iVar9 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar9,uVar3);
              iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar9 + -1);
              local_50 = 0x1fffffff;
              iVar9 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar9) {
                if (*unaff_EBX == '#') {
                  local_50 = func_0x004b52a8(unaff_EBX);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d2);
                  local_50 = func_0x004b4ad0(auStackY_1884[0x5d2]);
                }
              }
              iVar9 = FUN_004b55d4("BGCOLORTO",uStack_10,&stack0xffffffc0);
              if ((iVar9 < 1) || (*(char *)(param_19 + 0x5c) != '\0')) {
                if (param_18 == '\0') {
                  *(undefined1 *)(param_19 + -0x49) = 1;
                  uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                  *(undefined4 *)(param_19 + -0xc0) = uVar3;
                  cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
                  if (cVar2 == '\x01') {
                    *(undefined4 *)(param_19 + -0xc0) = 0x1fffffff;
                  }
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_50);
                  uVar3 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                  *(undefined4 *)(param_19 + -0x50) = uVar3;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                  FUN_0042b158(param_1,*(undefined4 *)(param_19 + -0x60),local_84[0]);
                }
              }
              else {
                uVar3 = FUN_00404ba4(uStack_10);
                FUN_00404e04(uStack_10,puVar7 + 5,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                iVar9 = iVar9 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar9,uVar3);
                iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar9 + -1);
                uStackY_54 = 0x1fffffff;
                iVar9 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar9) {
                  if (*unaff_EBX == '#') {
                    uStackY_54 = func_0x004b52a8(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d1);
                    uStackY_54 = func_0x004b4ad0(auStackY_1884[0x5d1]);
                  }
                }
                if (param_18 == '\0') {
                  *(undefined1 *)(param_19 + -0x49) = 1;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),local_50);
                  FUN_0040709c(*(undefined4 *)(param_19 + -0x60),local_84[0],
                               *(undefined4 *)(param_19 + -0x58));
                  in_stack_ffffffc8 = (HDC)0x1;
                  in_stack_ffffffc4 = (HDC)&UNK_004b933e;
                  func_0x004b488c(param_1,local_50,uStackY_54);
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
            }
          }
          break;
        case 0x52:
          iVar9 = FUN_00404ee8(&DAT_004b9a98,*param_2);
          FUN_00404e04(*param_2,3,iVar9 + -1);
          iVar9 = FUN_004b5360(&UNK_004b9d58,uStack_10);
          iVar9 = iVar9 + 2;
          uVar3 = FUN_00404ba4(uStack_10);
          FUN_00404e04(uStack_10,iVar9,uVar3);
          iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
          iVar9 = iVar9 + 1;
          uVar3 = FUN_00404ba4(unaff_EBX);
          FUN_00404e04(unaff_EBX,iVar9,uVar3);
          iVar9 = FUN_00404ee8(&UNK_004b9aec,unaff_EBX);
          FUN_00404e04(unaff_EBX,1,iVar9 + -1);
          iStack_28 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
          FUN_004b56f8(param_1,iStack_28);
          break;
        case 0x53:
          cStackY_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),
                                             *(undefined1 *)(*param_2 + 2)));
          if (cStackY_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_004b9acc);
          }
          else if (cStackY_65 == 'H') {
            *(undefined1 *)(param_19 + -100) = 1;
          }
          else {
            iVar9 = FUN_004b5360(&UNK_004b9d38,*param_2);
            if (iVar9 == 1) {
              *(undefined1 *)(param_19 + -0x61) = 1;
            }
            else {
              iVar9 = FUN_004b5360(&UNK_004b9d48,*param_2);
              if (iVar9 == 1) {
                *(undefined1 *)(param_19 + -0x62) = 1;
              }
            }
          }
          break;
        case 0x55:
          if (*(char *)(*param_2 + 2) == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_004b9ab8);
          }
          else {
            *(int *)(param_19 + -0xb8) = *(int *)(param_19 + -0xb8) + 1;
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            *(undefined1 *)(param_19 + -0xb9) = 0;
          }
          break;
        case 0x5a:
          *(undefined1 *)(param_19 + -99) = 1;
        }
      }
      iVar9 = FUN_004b55d4(&DAT_004b9a98,*param_2,&stack0xffffffc0);
      if ((iVar9 < 1) || (uStack_20._2_1_ != '\0')) {
        if (uStack_20._2_1_ == '\0') {
          uVar3 = FUN_00404ba4(*param_2);
          FUN_00404e44(param_2,1,uVar3);
        }
      }
      else {
        FUN_00404e04(*param_2,1,puVar7);
        FUN_00404bac(&local_c,auStackY_1884[0x5cd]);
        FUN_00404e44(param_2,1,puVar7);
      }
    }
  } while( true );
}

