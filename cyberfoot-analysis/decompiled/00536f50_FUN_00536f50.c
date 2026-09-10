// Address: 00536f50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00536f50(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
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
  uint uVar7;
  LPSIZE lpSize;
  LPINT lpnFit;
  LPCSTR lpszString;
  undefined3 uVar11;
  HRGN pHVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  char *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  int *in_FS_OFFSET;
  undefined1 uVar18;
  bool bVar19;
  byte bVar20;
  uint auStackY_1884 [1496];
  float10 local_124;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint auStackY_a4 [3];
  tagRECT local_98;
  uint local_88;
  int local_84 [4];
  int local_74;
  int local_70;
  int local_6c;
  char local_66;
  char local_65;
  int local_64;
  HDC local_60;
  HDC local_5c;
  HDC local_58;
  undefined4 local_54;
  int iVar21;
  HDC in_stack_ffffffc4;
  HDC in_stack_ffffffc8;
  tagRECT *ptVar22;
  LPINT lpnDx;
  LPDRAWTEXTPARAMS ptVar23;
  int iVar24;
  UINT UVar25;
  int local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar20 = 0;
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
  local_24 = &LAB_0053b22b;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
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
  piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
  *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2];
  *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
  piVar13[(uint)bVar20 * -2 + 1] =
       (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
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
    iVar10 = FUN_00404ba4(*param_2);
    if (((iVar10 < 1) || (uStack_20._3_1_ != '\0')) || (uStack_20._2_1_ != '\0')) {
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
      *in_FS_OFFSET = local_28;
      uStack_20 = &LAB_0053b232;
      local_24 = (undefined1 *)0x53b1e2;
      FUN_004048f8(auStackY_1884 + 0x5cd,10,uVar5);
      local_24 = (undefined1 *)0x53b1f2;
      FUN_004048f8(&local_114,0x10);
      local_24 = (undefined1 *)0x53b202;
      FUN_004048f8(&local_cc,6);
      local_24 = (undefined1 *)0x53b20d;
      FUN_004048d4(&local_b4);
      local_24 = (undefined1 *)0x53b21d;
      FUN_004048f8(&local_b0,2);
      local_24 = (undefined1 *)0x53b22a;
      FUN_004048f8(&stack0xffffffe4,6);
      return;
    }
    iVar10 = FUN_00404ee8(&DAT_0053b244,*param_2);
    if (*(char *)(param_19 + 0x50) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00404ee8(&DAT_0053b250,*param_2);
    }
    if ((iVar10 < 1) || ((iVar4 <= iVar10 && (iVar4 != 0)))) {
      if (iVar4 < 1) {
        FUN_0040496c(&local_8,*param_2);
      }
      else {
        FUN_00404e04(*param_2,1,iVar4);
      }
    }
    else {
      FUN_00404e04(*param_2,1,iVar10 + -1);
    }
    iVar10 = FUN_00404ba4(local_8);
    while (iVar4 = FUN_00404ee8("&nbsp;",local_8), 0 < iVar4) {
      FUN_00536e20("&nbsp;",&DAT_0053b250,&local_8);
    }
    while (iVar4 = FUN_00404ee8(&DAT_0053b26c,local_8), 0 < iVar4) {
      FUN_00536e20(&DAT_0053b26c,&DAT_0053b244,&local_8);
    }
    while (iVar4 = FUN_00404ee8(&DAT_0053b288,local_8), 0 < iVar4) {
      FUN_00536e20(&DAT_0053b288,&DAT_0053b27c,&local_8);
    }
    local_60 = (HDC)FUN_00404ba4(local_8);
    if (0 < iVar10) {
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
        FUN_00404e44(param_2,1,iVar10);
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
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + 0x38));
            ptVar23 = (LPDRAWTEXTPARAMS)0x0;
            uVar5 = *(uint *)(param_19 + -0x68) & 0xfffffdff;
            ptVar22 = &local_98;
            pHVar6 = local_60;
            lpchText = (LPSTR)FUN_00404da4(local_8);
            hdc = (HDC)FUN_0042b5a8(param_1);
            DrawTextExA(hdc,lpchText,(int)pHVar6,ptVar22,uVar5,ptVar23);
            FUN_0040715c(&local_98,-*(int *)(param_19 + 0x6c),-*(int *)(param_19 + 0x6c));
            FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar3);
          }
          puVar14 = (undefined4 *)(param_19 + -0x10 + (uint)bVar20 * -8);
          *(LONG *)(param_19 + -0x14) = local_98.left;
          puVar15 = puVar14 + (uint)bVar20 * -2 + 1;
          puVar12 = (undefined4 *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *puVar14 = *(undefined4 *)((int)&local_98 + (uint)bVar20 * -8 + 4);
          *puVar15 = *puVar12;
          puVar15[(uint)bVar20 * -2 + 1] = puVar12[(uint)bVar20 * -2 + 1];
          uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
          if ((uVar5 & 2) != 0) {
            *(uint *)(param_19 + -0xc) = local_98.right + 2;
          }
          ptVar23 = (LPDRAWTEXTPARAMS)0x0;
          uVar5 = *(uint *)(param_19 + -0x68) | 0x400;
          ptVar22 = &local_98;
          in_stack_ffffffc8 = local_60;
          in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
          pHVar6 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,ptVar22,uVar5,ptVar23);
          if (*(char *)(param_19 + 0x50) == '\0') {
            if (*(char *)(param_19 + 0x50) == '\0') {
              ptVar23 = (LPDRAWTEXTPARAMS)0x537335;
              iVar4 = FUN_0042b3e4(param_1,&DAT_0053b298);
              if (local_98.left < local_84[1] - iVar4) goto LAB_00537342;
            }
          }
          else {
LAB_00537342:
            ptVar23 = (LPDRAWTEXTPARAMS)0x0;
            uVar5 = *(uint *)(param_19 + -0x68) & 0xfffffdff;
            lprc = (LPRECT)(param_19 + -0x14);
            in_stack_ffffffc8 = local_60;
            in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
            pHVar6 = (HDC)FUN_0042b5a8(param_1);
            DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,lprc,uVar5,ptVar23);
          }
          if ((*(char *)(param_19 + -0x69) != '\0') &&
             (**(int **)(param_19 + 0x20) + -1 == *(int *)(param_19 + 0x74))) {
            ptVar23 = (LPDRAWTEXTPARAMS)0x53739c;
            FUN_00404928(*(undefined4 *)(param_19 + 0x2c),*(undefined4 *)(param_19 + -0x70));
          }
          if (*(char *)(param_19 + -0x71) != '\0') {
            FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),0xff);
            FUN_0042a998(*(undefined4 *)(param_1 + 0x10),1);
            iVar4 = local_98.left >> 1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((local_98.left & 1U) != 0);
            }
            uVar5 = iVar4 * 2;
            uVar7 = uVar5 & 0x80000003;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
            }
            if (uVar7 == 0) {
              iVar4 = 2;
            }
            else {
              iVar4 = 0;
            }
            ptVar23 = (LPDRAWTEXTPARAMS)0x537407;
            FUN_0042b064(param_1,uVar5,local_84[2] + iVar4 + -1);
            for (; (int)uVar5 < local_98.right; uVar5 = uVar5 + 2) {
              if (iVar4 == 2) {
                iVar4 = 0;
              }
              else {
                iVar4 = 2;
              }
              ptVar23 = (LPDRAWTEXTPARAMS)0x537431;
              FUN_0042b004(param_1,uVar5 + 2,local_84[2] + iVar4 + -1);
            }
          }
          if ((*(uint *)(param_19 + -0x68) & 0x20000) == 0x20000) {
            local_98.right = (int)ptVar23 + (local_98.left - local_98.right);
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
          piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2];
          *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          piVar13[(uint)bVar20 * -2 + 1] =
               (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
          ptVar23 = (LPDRAWTEXTPARAMS)0x0;
          uVar5 = *(uint *)(param_19 + -0x68) | 0x400;
          ptVar22 = &local_98;
          in_stack_ffffffc8 = local_60;
          in_stack_ffffffc4 = (HDC)FUN_00404da4(local_8);
          pHVar6 = (HDC)FUN_0042b5a8(param_1);
          DrawTextExA(pHVar6,(LPSTR)in_stack_ffffffc4,(int)in_stack_ffffffc8,ptVar22,uVar5,ptVar23);
          if (((local_98.top < param_9) && (param_9 < local_98.bottom)) && (*param_17 < param_10)) {
            FUN_0040709c(*param_17,local_98.top,param_10);
            puVar16 = (uint *)(param_19 + -0x7d + (uint)bVar20 * -8);
            *(undefined4 *)(param_19 + -0x81) = local_a8;
            puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
            *puVar16 = auStackY_a4[(uint)bVar20 * -2];
            *puVar17 = auStackY_a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            puVar17[(uint)bVar20 * -2 + 1] =
                 (auStackY_a4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            FUN_004032a8(param_19 + -0x28,0x14,0);
            *(undefined4 *)(param_19 + -0x28) = 0x14;
            lpSize = (LPSIZE)(param_19 + -0x34);
            lpnDx = (LPINT)0x0;
            lpnFit = (LPINT)(param_19 + -0x2c);
            in_stack_ffffffc8 = (HDC)(param_10 - *param_17);
            in_stack_ffffffc4 = local_60;
            lpszString = (LPCSTR)FUN_00404da4(local_8);
            pHVar6 = (HDC)FUN_0042b5a8(param_1);
            GetTextExtentExPointA
                      (pHVar6,lpszString,(int)in_stack_ffffffc4,(int)in_stack_ffffffc8,lpnFit,lpnDx,
                       lpSize);
            if (iVar10 == *(int *)(param_19 + -0x2c)) {
              *(int *)(param_19 + -0x88) = *(int *)(param_19 + -0x88) + iVar10;
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
          FUN_00404e04(*param_2,1,iVar10);
          FUN_00404bac(&local_c,local_ac);
          FUN_00404e44(param_2,1,iVar10);
          iVar4 = FUN_00404ba4(local_8);
          uVar18 = iVar10 == iVar4;
          if ((bool)uVar18 || iVar10 < iVar4) {
            FUN_00404e04(local_8,iVar10,1);
            FUN_00404cf0(local_b0,&DAT_0053b250);
            if ((bool)uVar18) {
              local_24 = (undefined1 *)FUN_0042b3e4(param_1,&DAT_0053b250);
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
    iVar10 = FUN_00404ee8(&DAT_0053b244,*param_2);
    if ((iVar10 == 1) && (iVar4 = FUN_00404ba4(*param_2), iVar4 < 3)) {
      FUN_004048d4(param_2);
    }
    if (((uStack_20._3_1_ == '\0') && (iVar10 == 1)) && (iVar4 = FUN_00404ba4(*param_2), 2 < iVar4))
    {
      if ((*(char *)(*param_2 + 1) == '/') && (iVar4 = FUN_00404ba4(*param_2), 3 < iVar4)) {
        uVar18 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
        switch(uVar18) {
        case 0x41:
          if (((*(char *)(param_19 + 0x54) == '\0') ||
              (*(int *)(param_19 + 0x70) == **(int **)(param_19 + 0x20))) && (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_0053b29c);
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
            puVar15 = *(undefined4 **)(param_19 + 0x18) + (uint)bVar20 * -2 + 1;
            puVar12 = (undefined4 *)(param_19 + -0xa4 + (uint)bVar20 * -8);
            **(undefined4 **)(param_19 + 0x18) = *(undefined4 *)(param_19 + -0xa8);
            puVar14 = puVar12 + (uint)bVar20 * -2 + 1;
            *puVar15 = *puVar12;
            puVar15[(uint)bVar20 * -2 + 1] = *puVar14;
            (puVar15 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 puVar14[(uint)bVar20 * -2 + 1];
            **(undefined4 **)(param_19 + 0x1c) = **(undefined4 **)(param_19 + 0x20);
            *(undefined1 *)(param_19 + -0x89) = 0;
          }
          if (*(int *)(param_19 + 0x74) == **(int **)(param_19 + 0x20) + -1) {
            *(LONG *)(param_19 + -0x3c) = local_98.left;
            *(uint *)(param_19 + -0x38) = local_98.bottom - *param_13;
            iVar4 = FUN_0042b400(param_1,&DAT_0053b2a8);
            *(int *)(param_19 + -0x40) = *(int *)(param_19 + -0x38) - iVar4;
            in_stack_ffffffc8 = (HDC)0x5379b9;
            InflateRect((LPRECT)(param_19 + -0x44),1,0);
            if (param_18 == '\0') {
              FUN_0042af10(param_1,param_19 + -0x44);
            }
          }
          break;
        case 0x42:
          if (*(char *)(*param_2 + 3) == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_00 >> 8),DAT_0053b2ac);
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
          uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_02 >> 8),DAT_0053b2b4);
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
          FUN_00536f2c(param_1);
          break;
        case 0x53:
          local_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 3)
                                          ));
          if (local_65 == 'U') {
            *(undefined1 *)(param_19 + -0x62) = 0;
            *(undefined1 *)(param_19 + -0x61) = 0;
          }
          else if (local_65 == 'H') {
            *(undefined1 *)(param_19 + -100) = 0;
          }
          else {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_01 >> 8),DAT_0053b2b0);
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),
                         CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar1));
          }
          break;
        case 0x55:
          if ((*(char *)(*param_2 + 3) == '>') || (*(int *)(param_19 + -0xb8) < 1)) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            uVar5 = ~CONCAT31((int3)((uint)extraout_EDX_03 >> 8),DAT_0053b29c);
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
        uVar18 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 1)));
        uVar11 = (undefined3)((uint)param_19 >> 8);
        switch(uVar18) {
        case 0x41:
          if ((*(int *)(param_19 + 0x74) == **(int **)(param_19 + 0x20)) && (param_18 == '\0')) {
            *(LONG *)(param_19 + -0x44) = local_98.left;
            *(LONG *)(param_19 + -0x40) = local_98.top;
          }
          **(int **)(param_19 + 0x20) = **(int **)(param_19 + 0x20) + 1;
          if (((*(char *)(param_19 + 0x54) == '\0') ||
              (*(int *)(param_19 + 0x70) == **(int **)(param_19 + 0x20))) && (param_18 == '\0')) {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_0053b29c);
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
          iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
          FUN_00404e04(*param_2,3,iVar4 + -1);
          FUN_004095b0(local_b8,&local_10);
          iVar4 = FUN_00536db8(&DAT_0053b2c0,local_10,&stack0xffffffc0);
          if (0 < iVar4) {
            iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,3,iVar4 + -1);
            uVar3 = FUN_00404ba4(local_10);
            FUN_00404e04(local_10,iVar10 + 4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            iVar4 = iVar4 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar4 + -1);
            FUN_0040496c(param_19 + -0x70,unaff_EBX);
            *(undefined1 *)(param_19 + -0x69) = 1;
          }
          iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
          FUN_00404e04(*param_2,3,iVar4 + -1);
          FUN_004095b0(local_bc,&local_10);
          iVar4 = FUN_00536db8("TITLE",local_10,&stack0xffffffc0);
          if (0 < iVar4) {
            iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,3,iVar4 + -1);
            uVar3 = FUN_00404ba4(local_10);
            FUN_00404e04(local_10,iVar10 + 5,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            iVar4 = iVar4 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar4 + -1);
            FUN_0040496c(param_19 + -0x48,unaff_EBX);
          }
          *(int *)(param_19 + -0xa8) = *param_17;
          *(int *)(param_19 + -0xa4) = local_84[0];
          break;
        case 0x42:
          local_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)
                                          ));
          if (local_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_0053b2ac);
          }
          else if (local_65 == 'L') {
            if (*(char *)(param_19 + 0x58) == '\0') {
              FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + -200));
            }
          }
          else if (local_65 == 'O') {
            uVar3 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,1,uVar3);
            FUN_00404bac(&local_c,local_c0);
            if ((param_18 == '\0') && (*(char *)(param_19 + 0x5c) == '\0')) {
              iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
              FUN_00404e04(*param_2,6,iVar4 + -1);
              FUN_004095b0(local_c4,&local_10);
              iVar4 = FUN_00404ee8("BACKGROUND",local_10);
              if (0 < iVar4) {
                iVar4 = FUN_00404ee8("BACKGROUND",local_10);
                iVar4 = iVar4 + 10;
                uVar3 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                FUN_004095b0(unaff_EBX,&local_c8);
                iVar4 = FUN_00404ee8(&DAT_0053b30c,local_c8);
                if ((0 < iVar4) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar4 = FUN_00536bc8(unaff_EBX);
                  iVar21 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar4 < iVar21) {
                    iVar21 = 0x60;
                    iVar4 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar4,iVar21);
                    *(int *)(param_19 + -0xd0) = iVar4;
                    iVar21 = 0x60;
                    iVar4 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    in_stack_ffffffc8 = (HDC)0x53822e;
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar4,iVar21);
                    *(int *)(param_19 + -0xcc) = iVar4;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_00536bc8(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)0x53826e;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar4 = FUN_00402c38();
                      local_98.right = iVar4 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar9 = FUN_00536bc8(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar9,uVar3);
                      FUN_00535d40(param_1,&local_98,uVar3);
                      FUN_00403a84(uVar3);
                      local_98.left = local_88;
                      piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2]
                      ;
                      *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                      piVar13[(uint)bVar20 * -2 + 1] =
                           (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)
                           [(uint)bVar20 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&local_cc);
                iVar4 = FUN_00404ee8("SSYS:",local_cc);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x5383b9;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x5383c9;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x5383e3;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x5383f3;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                FUN_004095b0(unaff_EBX,&local_d8);
                iVar4 = FUN_00404ee8("LSYS:",local_d8);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538496;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x5384a6;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x5384c0;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x5384d0;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                piVar13 = (int *)0x0;
                iVar4 = FUN_00404ee8(&DAT_0053b33c,unaff_EBX);
                if ((iVar4 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar13 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar4 = FUN_00404ee8(&DAT_0053b348,unaff_EBX);
                if ((0 < iVar4) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar4 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar4 == 0) {
                    local_6c = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(local_6c + 0x4d) = 0;
                    FUN_004b305c(local_6c,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar13 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar13 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar13 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar4 = (**(code **)(*piVar13 + 0x2c))(), 0 < iVar4)) &&
                   (iVar4 = (**(code **)(*piVar13 + 0x20))(), 0 < iVar4)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)0x5385c7;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar4 = 0x5385e7;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; iVar4 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      iVar4 = iVar4 + iVar21) {
                    for (iVar21 = 0;
                        iVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60);
                        iVar21 = iVar24 + iVar21) {
                      iVar24 = 0x53860a;
                      FUN_0042ae64(param_1,*(int *)(param_19 + -0x60) + iVar21,
                                   *(int *)(param_19 + -0x5c) + iVar4);
                      iVar21 = (**(code **)(*piVar13 + 0x2c))();
                    }
                    iVar21 = (**(code **)(*piVar13 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar4 = FUN_00404ee8("BGTOPLEFT",local_10);
              if (0 < iVar4) {
                iVar4 = FUN_00404ee8("BGTOPLEFT",local_10);
                iVar4 = iVar4 + 10;
                uVar3 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                FUN_004095b0(unaff_EBX,&local_dc);
                iVar4 = FUN_00404ee8(&DAT_0053b30c,local_dc);
                if ((0 < iVar4) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar4 = FUN_00536bc8(unaff_EBX);
                  iVar21 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar4 < iVar21) {
                    iVar21 = 0x60;
                    iVar4 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar4,iVar21);
                    *(int *)(param_19 + -0xd0) = iVar4;
                    iVar21 = 0x60;
                    iVar4 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    in_stack_ffffffc8 = (HDC)0x53879b;
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar4,iVar21);
                    *(int *)(param_19 + -0xcc) = iVar4;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_00536bc8(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)0x5387db;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar4 = FUN_00402c38();
                      local_98.right = iVar4 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar9 = FUN_00536bc8(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar9,uVar3);
                      FUN_00535d40(param_1,&local_98,uVar3);
                      FUN_00403a84(uVar3);
                      local_98.left = local_88;
                      piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2]
                      ;
                      *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                      piVar13[(uint)bVar20 * -2 + 1] =
                           (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)
                           [(uint)bVar20 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&local_e0);
                iVar4 = FUN_00404ee8("SSYS:",local_e0);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538926;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538936;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538950;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538960;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                FUN_004095b0(unaff_EBX,&local_e4);
                iVar4 = FUN_00404ee8("LSYS:",local_e4);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.left,local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538a03;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538a13;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538a2d;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538a3d;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                piVar13 = (int *)0x0;
                iVar4 = FUN_00404ee8(&DAT_0053b33c,unaff_EBX);
                if ((iVar4 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar13 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar4 = FUN_00404ee8(&DAT_0053b348,unaff_EBX);
                if ((0 < iVar4) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar4 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar4 == 0) {
                    local_70 = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(local_70 + 0x4d) = 0;
                    FUN_004b305c(local_70,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar13 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar13 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar13 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar4 = (**(code **)(*piVar13 + 0x2c))(), 0 < iVar4)) &&
                   (iVar4 = (**(code **)(*piVar13 + 0x20))(), 0 < iVar4)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)0x538b34;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar4 = 0x538b54;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; iVar4 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      iVar4 = iVar4 + iVar21) {
                    for (iVar21 = 0;
                        iVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60);
                        iVar21 = iVar24 + iVar21) {
                      iVar24 = 0x538b77;
                      FUN_0042ae64(param_1,*(int *)(param_19 + -0x60) + iVar21,
                                   *(int *)(param_19 + -0x5c) + iVar4);
                      iVar21 = (**(code **)(*piVar13 + 0x2c))();
                    }
                    iVar21 = (**(code **)(*piVar13 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar4 = FUN_00404ee8("BGTOPRIGHT",local_10);
              if (0 < iVar4) {
                iVar4 = FUN_00404ee8("BGTOPRIGHT",local_10);
                iVar4 = iVar4 + 10;
                uVar3 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                FUN_004095b0(unaff_EBX,&local_e8);
                iVar4 = FUN_00404ee8(&DAT_0053b30c,local_e8);
                if ((0 < iVar4) &&
                   (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0)) {
                  iVar4 = FUN_00536bc8(unaff_EBX);
                  iVar21 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
                  if (iVar4 < iVar21) {
                    iVar21 = 0x60;
                    iVar4 = 0x58;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar4,iVar21);
                    *(int *)(param_19 + -0xd0) = iVar4;
                    iVar21 = 0x60;
                    iVar4 = 0x5a;
                    pHVar6 = (HDC)FUN_0042b5a8(param_1);
                    iVar4 = GetDeviceCaps(pHVar6,iVar4);
                    in_stack_ffffffc8 = (HDC)0x538d08;
                    iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar4,iVar21);
                    *(int *)(param_19 + -0xcc) = iVar4;
                    if (*(char *)(param_19 + 0x60) == '\0') {
                      FUN_00536bc8(unaff_EBX);
                      in_stack_ffffffc8 = (HDC)0x538d54;
                      FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,
                                   local_98.right - *(int *)(*(int *)(param_19 + 0x80) + 0x34));
                    }
                    if (*(char *)(param_19 + 0x60) != '\0') {
                      iVar4 = FUN_00402c38();
                      local_98.right = iVar4 + local_98.left;
                      local_98.bottom = FUN_00402c38();
                      local_98.bottom = local_98.bottom + local_98.top;
                      uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
                      uVar9 = FUN_00536bc8(unaff_EBX);
                      FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar9,uVar3);
                      FUN_00535d40(param_1,&local_98,uVar3);
                      FUN_00403a84(uVar3);
                      local_98.left = local_88;
                      piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                      *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2]
                      ;
                      *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                      piVar13[(uint)bVar20 * -2 + 1] =
                           (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)
                           [(uint)bVar20 * -2 + 1];
                    }
                  }
                }
                FUN_004095b0(unaff_EBX,&local_ec);
                iVar4 = FUN_00404ee8("SSYS:",local_ec);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.right - *(int *)(*(int *)(param_19 + 0x80) + 0x34),
                               local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538eab;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538ebb;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538ed5;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538ee5;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                FUN_004095b0(unaff_EBX,&local_f0);
                iVar4 = FUN_00404ee8("LSYS:",local_f0);
                if (0 < iVar4) {
                  FUN_00404e44(&stack0xffffffec,1,5);
                  in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
                  in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
                  iVar10 = *(int *)(param_19 + 0x48);
                  FUN_00535e44(param_1,local_98.right - *(int *)(*(int *)(param_19 + 0x80) + 0x34),
                               local_98.top);
                  *(undefined4 *)(param_19 + -0xd0) = local_d4;
                  *(undefined4 *)(param_19 + -0xcc) = local_d0;
                  iVar21 = 0x60;
                  iVar4 = 0x58;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538f94;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538fa4;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
                  *(int *)(param_19 + -0xd0) = iVar4;
                  iVar21 = 0x60;
                  iVar4 = 0x5a;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  local_54 = 0x538fbe;
                  iVar4 = GetDeviceCaps(pHVar6,iVar4);
                  local_54 = 0x538fce;
                  iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
                  *(int *)(param_19 + -0xcc) = iVar4;
                }
                piVar13 = (int *)0x0;
                iVar4 = FUN_00404ee8(&DAT_0053b33c,unaff_EBX);
                if ((iVar4 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
                  piVar13 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                             (*(int **)(param_19 + 0x10),unaff_EBX);
                }
                iVar4 = FUN_00404ee8(&DAT_0053b348,unaff_EBX);
                if ((0 < iVar4) && (*(int *)(param_19 + 0x14) != 0)) {
                  iVar4 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  if (iVar4 == 0) {
                    local_74 = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                    *(undefined1 *)(local_74 + 0x4d) = 0;
                    FUN_004b305c(local_74,unaff_EBX);
                  }
                  uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
                  piVar13 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
                }
                if ((((piVar13 != (int *)0x0) &&
                     (cVar2 = (**(code **)(*piVar13 + 0x1c))(), cVar2 == '\0')) &&
                    (iVar4 = (**(code **)(*piVar13 + 0x2c))(), 0 < iVar4)) &&
                   (iVar4 = (**(code **)(*piVar13 + 0x20))(), 0 < iVar4)) {
                  in_stack_ffffffc8 = *(HDC *)(param_19 + -0x60);
                  in_stack_ffffffc4 = (HDC)0x5390c5;
                  pHVar8 = CreateRectRgn((int)in_stack_ffffffc8,*(int *)(param_19 + -0x5c),
                                         *(int *)(param_19 + -0x58),*(int *)(param_19 + -0x54));
                  *(HRGN *)(param_19 + -0xd4) = pHVar8;
                  pHVar8 = *(HRGN *)(param_19 + -0xd4);
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  iVar4 = 0x5390e5;
                  SelectClipRgn(pHVar6,pHVar8);
                  for (; iVar4 < *(int *)(param_19 + -0x54) - *(int *)(param_19 + -0x5c);
                      iVar4 = iVar4 + iVar21) {
                    for (iVar21 = 0;
                        iVar21 < *(int *)(param_19 + -0x58) - *(int *)(param_19 + -0x60);
                        iVar21 = iVar21 + iVar24) {
                      iVar24 = (**(code **)(*piVar13 + 0x2c))();
                      iVar21 = 0x53910e;
                      FUN_0042ae64(param_1,*(int *)(param_19 + -0x58) - iVar24,
                                   *(int *)(param_19 + -0x5c) + iVar4);
                      iVar24 = (**(code **)(*piVar13 + 0x2c))();
                    }
                    iVar21 = (**(code **)(*piVar13 + 0x20))();
                  }
                  pHVar8 = (HRGN)0x0;
                  pHVar6 = (HDC)FUN_0042b5a8(param_1);
                  SelectClipRgn(pHVar6,pHVar8);
                  DeleteObject(*(HGDIOBJ *)(param_19 + -0xd4));
                }
              }
              iVar4 = FUN_00536db8("BGCOLOR",local_10,&stack0xffffffc0);
              if (0 < iVar4) {
                uVar3 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar10 + 5,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar3 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar3);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                uVar3 = 0x1fffffff;
                iVar4 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar4) {
                  if (*unaff_EBX == '#') {
                    uVar3 = FUN_00536a8c(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,&local_f4);
                    uVar3 = FUN_005362b4(local_f4);
                  }
                }
                iVar4 = FUN_00536db8("BGCOLORTO",local_10,&stack0xffffffc0);
                if (iVar4 < 1) {
                  uVar9 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                  *(undefined4 *)(param_19 + -0xac) = uVar9;
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                  uVar9 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                  *(undefined4 *)(param_19 + -0x50) = uVar9;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
                  FUN_0042b158(param_1,*(int *)(param_19 + -0x60) + -2,
                               *(undefined4 *)(param_19 + -0x5c));
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_19 + -0x50));
                }
                else {
                  uVar9 = FUN_00404ba4(local_10);
                  FUN_00404e04(local_10,iVar10 + 5,uVar9);
                  iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                  iVar4 = iVar4 + 1;
                  uVar9 = FUN_00404ba4(unaff_EBX);
                  FUN_00404e04(unaff_EBX,iVar4,uVar9);
                  iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                  FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                  local_54 = 0x1fffffff;
                  iVar4 = FUN_00404ba4(unaff_EBX);
                  if (0 < iVar4) {
                    if (*unaff_EBX == '#') {
                      local_54 = FUN_00536a8c(unaff_EBX);
                    }
                    else {
                      FUN_00409724(unaff_EBX,&local_f8);
                      local_54 = FUN_005362b4(local_f8);
                    }
                  }
                  FUN_0040496c(&stack0xffffffec,&DAT_0053b3a0);
                  iVar4 = FUN_00536db8(&DAT_0053b3ac,local_10,&stack0xffffffc0);
                  uVar18 = iVar4 == 0;
                  if (0 < iVar4) {
                    uVar9 = FUN_00404ba4(local_10);
                    FUN_00404e04(local_10,iVar10 + 3,uVar9);
                    iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                    iVar4 = iVar4 + 1;
                    uVar9 = FUN_00404ba4(unaff_EBX);
                    FUN_00404e04(unaff_EBX,iVar4,uVar9);
                    iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                    uVar18 = iVar4 == 1;
                    FUN_00404e04(unaff_EBX,1);
                  }
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
                  FUN_0040709c(*(undefined4 *)(param_19 + -0x60),*(undefined4 *)(param_19 + -0x5c),
                               *(undefined4 *)(param_19 + -0x58));
                  uVar9 = FUN_00404cf0(unaff_EBX,&DAT_0053b3a0);
                  in_stack_ffffffc8 = (HDC)CONCAT31((int3)((uint)uVar9 >> 8),uVar18);
                  in_stack_ffffffc4 = (HDC)0x5393c0;
                  FUN_00536070(param_1,uVar3,local_54);
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
            }
          }
          else if (local_65 == 'R') {
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            FUN_00404bac(*(undefined4 *)(param_19 + 0x30),&DAT_0053b2ec);
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)(param_19 + -0x71) = 1;
          }
          break;
        case 0x46:
          iVar4 = FUN_00536db8(&DAT_0053b27c,*param_2,&stack0xffffffc0);
          if (0 < iVar4) {
            cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
            if (cVar2 == '\x01') {
              *(undefined4 *)(param_19 + -0xac) = 0x1fffffff;
            }
            else {
              uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
              *(undefined4 *)(param_19 + -0xac) = uVar3;
            }
            FUN_00404e04(*param_2,6,iVar10 + -6);
            FUN_004095b0(auStackY_1884[0x5d0],&local_10);
            iVar4 = FUN_00536db8(&DAT_0053b4e0,local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),unaff_EBX);
            }
            iVar4 = FUN_00536db8(" COLOR",local_10,&stack0xffffffc0);
            if ((0 < iVar4) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 6,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              iVar4 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar4) {
                if (*unaff_EBX == '#') {
                  uVar3 = FUN_00536a8c(unaff_EBX);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar3);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5cf);
                  uVar3 = FUN_005362b4(auStackY_1884[0x5cf]);
                  FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),uVar3);
                }
              }
            }
            iVar4 = FUN_00536db8("BGCOLOR",local_10,&stack0xffffffc0);
            if (((0 < iVar4) && (param_18 == '\0')) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 7,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              iVar4 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar4) {
                if (*unaff_EBX == '#') {
                  uVar3 = FUN_00536a8c(unaff_EBX);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5ce);
                  uVar3 = FUN_005362b4(auStackY_1884[0x5ce]);
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                }
              }
            }
            iVar4 = FUN_00536db8(&DAT_0053b500,local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b510,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              uVar3 = FUN_00536bc8(unaff_EBX);
              switch(uVar3) {
              default:
                uVar3 = FUN_00536bc8(unaff_EBX);
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
              iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
              FUN_00404e04(*param_2,4,iVar4 + -1);
              uVar3 = 0;
              FUN_004095b0(local_10,&local_fc);
              iVar4 = FUN_00536db8("COLOR",local_fc,&stack0xffffffc0);
              if (0 < iVar4) {
                uVar9 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar10 + 5,uVar9);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar9 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar9);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                iVar4 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar4) {
                  if (*unaff_EBX == '#') {
                    uVar3 = FUN_00536a8c(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,&local_100);
                    uVar3 = FUN_005362b4(local_100);
                  }
                }
              }
              uVar9 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
              *(undefined4 *)(param_19 + -0x50) = uVar9;
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
              FUN_0042b064(param_1,local_88,local_98.bottom + 1);
              FUN_0042b004(param_1,local_84[1],local_98.bottom + 1);
              FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_19 + -0x50));
            }
          }
          break;
        case 0x49:
          local_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)
                                          ));
          if (local_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_0053b2b4);
          }
          else if (local_65 == 'N') {
            iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,3,iVar4 + -1);
            iVar4 = FUN_00536b44(&DAT_0053b3c8,local_10);
            iVar4 = iVar4 + 2;
            uVar3 = FUN_00404ba4(local_10);
            FUN_00404e04(local_10,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            iVar4 = iVar4 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar4 + -1);
            iVar4 = 0x5396ec;
            local_28 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
            if ((iVar4 == 0) && (*param_17 < local_28)) {
              *param_17 = local_28;
              local_98.left = *(int *)(param_19 + -0x60) + local_28;
            }
          }
          else if (local_65 == 'M') {
            *(int *)(param_19 + -0xd8) = *(int *)(param_19 + -0xd8) + 1;
            iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,3,iVar4 + -1);
            FUN_004095b0(local_10,&local_104);
            iVar4 = FUN_00404ee8(&DAT_0053b3d4,local_104);
            iVar4 = iVar4 + 4;
            uVar3 = FUN_00404ba4(local_10);
            FUN_00404e04(local_10,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            iVar4 = iVar4 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar4 + -1);
            FUN_004095b0(local_10,&local_108);
            FUN_0040496c(&local_10,local_108);
            iVar4 = FUN_00404ee8(&DAT_0053b3e0,local_10);
            if ((0 < iVar4) && (*(int *)(param_19 + -0xdc) == *(int *)(param_19 + -0xd8))) {
              iVar4 = FUN_00404ee8(&DAT_0053b3e0,local_10);
              iVar4 = iVar4 + 4;
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar4 + -1);
            }
            local_58 = (HDC)0x0;
            local_5c = (HDC)0x0;
            iVar4 = FUN_00404ee8("WIDTH",local_10);
            if (0 < iVar4) {
              iVar4 = FUN_00404ee8("WIDTH",local_10);
              iVar4 = iVar4 + 6;
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar4 + -1);
              local_58 = (HDC)FUN_0040343c(unaff_ESI,&stack0xffffffd4);
            }
            iVar4 = FUN_00404ee8("HEIGHT",local_10);
            if (0 < iVar4) {
              iVar4 = FUN_00536b44("HEIGHT",local_10);
              iVar4 = iVar4 + 7;
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar4 + -1);
              local_5c = (HDC)FUN_0040343c(unaff_ESI,&stack0xffffffd4);
            }
            *(undefined4 *)(param_19 + -0xd0) = 0;
            *(undefined4 *)(param_19 + -0xcc) = 0;
            FUN_004095b0(unaff_EBX,&local_10c);
            iVar4 = FUN_00404ee8(&DAT_0053b30c,local_10c);
            if ((0 < iVar4) && (FUN_00404e44(&stack0xffffffec,1,4), *(int *)(param_19 + 0x80) != 0))
            {
              iVar4 = FUN_00536bc8(unaff_EBX);
              iVar21 = FUN_00473f5c(*(undefined4 *)(param_19 + 0x80));
              if (iVar4 < iVar21) {
                iVar21 = 0x60;
                iVar4 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x34),iVar4,iVar21);
                *(int *)(param_19 + -0xd0) = iVar4;
                iVar21 = 0x60;
                iVar4 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                in_stack_ffffffc8 = (HDC)0x539a7e;
                iVar4 = MulDiv(*(int *)(*(int *)(param_19 + 0x80) + 0x30),iVar4,iVar21);
                *(int *)(param_19 + -0xcc) = iVar4;
                if ((param_18 == '\0') && (*(char *)(param_19 + 0x60) == '\0')) {
                  FUN_00536bc8(unaff_EBX);
                  in_stack_ffffffc8 = (HDC)0x539abe;
                  FUN_00474474(*(undefined4 *)(param_19 + 0x80),param_1,local_98.left);
                }
                if ((param_18 == '\0') && (*(char *)(param_19 + 0x60) != '\0')) {
                  iVar4 = FUN_00402c38();
                  local_98.right = iVar4 + local_98.left;
                  local_98.bottom = FUN_00402c38();
                  local_98.bottom = local_98.bottom + local_98.top;
                  uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
                  uVar9 = FUN_00536bc8(unaff_EBX);
                  FUN_00473ef4(*(undefined4 *)(param_19 + 0x80),uVar9,uVar3);
                  FUN_00535d40(param_1,&local_98,uVar3);
                  FUN_00403a84(uVar3);
                  local_98.left = local_88;
                  piVar13 = (int *)((int)&local_98 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                  *(int *)((int)&local_98 + (uint)bVar20 * -8 + 4) = local_84[(uint)bVar20 * -2];
                  *piVar13 = local_84[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  piVar13[(uint)bVar20 * -2 + 1] =
                       (local_84 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1]
                  ;
                }
              }
            }
            FUN_004095b0(unaff_EBX,&local_110);
            iVar4 = FUN_00404ee8("SSYS:",local_110);
            if (0 < iVar4) {
              FUN_00404e44(&stack0xffffffec,1,5);
              in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
              in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
              iVar10 = *(int *)(param_19 + 0x48);
              FUN_00535e44(param_1,local_98.left,local_98.top);
              *(undefined4 *)(param_19 + -0xd0) = local_d4;
              *(undefined4 *)(param_19 + -0xcc) = local_d0;
              iVar21 = 0x60;
              iVar4 = 0x58;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              local_54 = 0x539c09;
              iVar4 = GetDeviceCaps(pHVar6,iVar4);
              local_54 = 0x539c19;
              iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
              *(int *)(param_19 + -0xd0) = iVar4;
              iVar21 = 0x60;
              iVar4 = 0x5a;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              local_54 = 0x539c33;
              iVar4 = GetDeviceCaps(pHVar6,iVar4);
              local_54 = 0x539c43;
              iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
              *(int *)(param_19 + -0xcc) = iVar4;
            }
            FUN_004095b0(unaff_EBX,&local_114);
            iVar4 = FUN_00404ee8("LSYS:",local_114);
            if (0 < iVar4) {
              FUN_00404e44(&stack0xffffffec,1,5);
              in_stack_ffffffc8 = (HDC)CONCAT31(uVar11,*(undefined1 *)(param_19 + 0x60));
              in_stack_ffffffc4 = *(HDC *)(param_19 + 0x4c);
              iVar10 = *(int *)(param_19 + 0x48);
              FUN_00535e44(param_1,local_98.left,local_98.top);
              *(undefined4 *)(param_19 + -0xd0) = local_d4;
              *(undefined4 *)(param_19 + -0xcc) = local_d0;
              iVar21 = 0x60;
              iVar4 = 0x58;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              local_54 = 0x539ce6;
              iVar4 = GetDeviceCaps(pHVar6,iVar4);
              local_54 = 0x539cf6;
              iVar4 = MulDiv(*(int *)(param_19 + -0xd0),iVar4,iVar21);
              *(int *)(param_19 + -0xd0) = iVar4;
              iVar21 = 0x60;
              iVar4 = 0x5a;
              pHVar6 = (HDC)FUN_0042b5a8(param_1);
              local_54 = 0x539d10;
              iVar4 = GetDeviceCaps(pHVar6,iVar4);
              local_54 = 0x539d20;
              iVar4 = MulDiv(*(int *)(param_19 + -0xcc),iVar4,iVar21);
              *(int *)(param_19 + -0xcc) = iVar4;
            }
            piVar13 = (int *)0x0;
            iVar4 = FUN_00404ee8(&DAT_0053b33c,unaff_EBX);
            if ((iVar4 == 0) && (*(int *)(param_19 + 0x10) != 0)) {
              piVar13 = (int *)(**(code **)(**(int **)(param_19 + 0x10) + 0x34))
                                         (*(int **)(param_19 + 0x10),unaff_EBX);
            }
            iVar4 = FUN_00404ee8(&DAT_0053b348,unaff_EBX);
            if ((0 < iVar4) && (*(int *)(param_19 + 0x14) != 0)) {
              iVar4 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
              if (iVar4 == 0) {
                local_84[3] = FUN_004b343c(*(undefined4 *)(param_19 + 0x14));
                *(undefined1 *)(local_84[3] + 0x4d) = 0;
                FUN_004b305c(local_84[3],unaff_EBX);
              }
              uVar3 = FUN_004b3494(*(undefined4 *)(param_19 + 0x14),unaff_EBX);
              piVar13 = (int *)FUN_00403c34(uVar3,PTR_LAB_004b21a4);
            }
            if ((piVar13 != (int *)0x0) && (cVar2 = (**(code **)(*piVar13 + 0x1c))(), cVar2 == '\0')
               ) {
              if ((0 < (int)local_58) && (0 < (int)local_5c)) {
                in_stack_ffffffc4 = local_5c;
                in_stack_ffffffc8 = local_58;
              }
              if ((0 < (int)local_58) && (local_5c == (HDC)0x0)) {
                in_stack_ffffffc8 = local_58;
                local_118 = (**(code **)(*piVar13 + 0x2c))();
                local_124 = (float10)(int)local_58 / (float10)local_118;
                auStackY_1884[0x5d7] = (**(code **)(*piVar13 + 0x20))();
                in_stack_ffffffc4 = (HDC)FUN_00402c38();
              }
              if ((local_58 == (HDC)0x0) && (0 < (int)local_5c)) {
                local_118 = (**(code **)(*piVar13 + 0x20))();
                local_124 = (float10)(int)local_5c / (float10)local_118;
                auStackY_1884[0x5d7] = (**(code **)(*piVar13 + 0x2c))();
                in_stack_ffffffc8 = (HDC)FUN_00402c38();
                in_stack_ffffffc4 = local_5c;
              }
              if ((local_58 == (HDC)0x0) && (local_5c == (HDC)0x0)) {
                in_stack_ffffffc8 = (HDC)(**(code **)(*piVar13 + 0x2c))();
                in_stack_ffffffc4 = (HDC)(**(code **)(*piVar13 + 0x20))();
              }
              if (param_18 == '\0') {
                if (((int)local_58 < 1) && ((int)local_5c < 1)) {
                  if (((int)local_58 < 1) || (local_5c != (HDC)0x0)) {
                    FUN_004b31b4(piVar13);
                    FUN_0042ae64(param_1,(uint)*(ushort *)(piVar13 + 0x18) + local_98.left,
                                 (uint)*(ushort *)((int)piVar13 + 0x62) + local_98.top);
                  }
                  else {
                    FUN_004b33bc(piVar13,1);
                    FUN_0040709c(local_98.left,local_98.top,(int)&local_58->unused + local_98.left);
                    FUN_0042b20c(param_1,&local_a8,piVar13);
                  }
                }
                else {
                  FUN_004b33bc(piVar13,1);
                  FUN_0040709c(local_98.left,local_98.top,
                               (int)&in_stack_ffffffc8->unused + local_98.left);
                  FUN_0042b20c(param_1,&local_a8,piVar13);
                }
              }
              if (((int)local_58 < 1) && ((int)local_5c < 1)) {
                iVar24 = 0x60;
                iVar4 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                iVar21 = FUN_004b337c(piVar13);
                iVar4 = MulDiv(iVar21,iVar4,iVar24);
                *(int *)(param_19 + -0xd0) = iVar4;
                iVar24 = 0x60;
                iVar4 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                iVar21 = FUN_004b3378(piVar13);
                in_stack_ffffffc8 = (HDC)0x53a020;
                iVar4 = MulDiv(iVar21,iVar4,iVar24);
                *(int *)(param_19 + -0xcc) = iVar4;
              }
              else {
                iVar24 = 0x60;
                iVar4 = 0x58;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar21 = 0x539fa0;
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                iVar4 = MulDiv(iVar21,iVar4,iVar24);
                *(int *)(param_19 + -0xd0) = iVar4;
                iVar21 = 0x60;
                iVar4 = 0x5a;
                pHVar6 = (HDC)FUN_0042b5a8(param_1);
                iVar4 = GetDeviceCaps(pHVar6,iVar4);
                in_stack_ffffffc8 = (HDC)0x539fce;
                iVar4 = MulDiv((int)in_stack_ffffffc4,iVar4,iVar21);
                *(int *)(param_19 + -0xcc) = iVar4;
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
            iVar4 = FUN_00404ee8("ALIGN",local_10);
            if (0 < iVar4) {
              iVar4 = FUN_00404ee8(&DAT_0053b41c,local_10);
              if (iVar4 < 1) {
                iVar4 = FUN_00404ee8("\"MIDDLE",local_10);
                if (0 < iVar4) {
                  iVar4 = FUN_0042b400(param_1,&DAT_0053b2a8);
                  *param_13 = *param_16 - iVar4 >> 1;
                }
              }
              else {
                iVar4 = FUN_0042b400(param_1,&DAT_0053b2a8);
                *param_13 = *param_16 - iVar4;
              }
            }
            iVar4 = FUN_00404ee8(&DAT_0053b43c,local_10);
            if (0 < iVar4) {
              uVar5 = FUN_0042b400(param_1,&DAT_0053b2a8);
              *param_16 = uVar5;
              *param_13 = 0;
            }
          }
          break;
        case 0x4c:
          iVar21 = 0x1fffffff;
          FUN_004048d4(param_19 + -0xe0);
          iVar4 = FUN_00536db8(&DAT_0053b27c,*param_2,&stack0xffffffc0);
          if (0 < iVar4) {
            FUN_00404e04(*param_2,3,iVar10 + -1);
            FUN_004095b0(auStackY_1884[0x5d6],&local_10);
            iVar4 = FUN_00536db8(&DAT_0053b44c,local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              FUN_0040496c(param_19 + -0xe0,unaff_EBX);
            }
            iVar4 = FUN_00536db8("COLOR",local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 5,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              iVar4 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar4) {
                if (*unaff_EBX == '#') {
                  iVar21 = FUN_00536a8c(unaff_EBX);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d5);
                  iVar21 = FUN_005362b4(auStackY_1884[0x5d5]);
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
            bVar19 = *(int *)(param_19 + -0xe0) == 0;
            if (bVar19) {
              if (iVar21 != 0x1fffffff) {
                *(undefined4 *)(param_19 + -0xe4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
                FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),iVar21);
              }
              FUN_0042a5b0(*(undefined4 *)(param_1 + 0xc),&stack0xffffffec);
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),"Symbol");
              if (*(char *)(param_19 + -0xb9) == '\0') {
                if ((*(byte *)(param_19 + -0xb8) & 1) == 0) {
                  UVar25 = 0;
                  ptVar22 = &local_98;
                  iVar4 = 1;
                  in_stack_ffffffc8 = (HDC)&DAT_0053b468;
                  in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                  iVar10 = 0x53a455;
                  DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar4,ptVar22,UVar25);
                }
                else {
                  UVar25 = 0;
                  ptVar22 = &local_98;
                  iVar4 = 1;
                  in_stack_ffffffc8 = (HDC)&DAT_0053b464;
                  in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                  iVar10 = 0x53a433;
                  DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar4,ptVar22,UVar25);
                }
              }
              else {
                FUN_00409dd8(*(undefined4 *)(param_19 + -0xe8),auStackY_1884 + 0x5d4);
                FUN_00404bf0(param_19 + -0xec,auStackY_1884[0x5d4],&DAT_0053b474);
                *(int *)(param_19 + -0xe8) = *(int *)(param_19 + -0xe8) + 1;
                UVar25 = 0;
                ptVar22 = &local_98;
                iVar4 = FUN_00404ba4(*(undefined4 *)(param_19 + -0xec));
                in_stack_ffffffc8 = (HDC)FUN_00404da4(*(undefined4 *)(param_19 + -0xec));
                in_stack_ffffffc4 = (HDC)FUN_0042b5a8(param_1);
                iVar10 = 0x53a4c3;
                DrawTextA(in_stack_ffffffc4,(LPCSTR)in_stack_ffffffc8,iVar4,ptVar22,UVar25);
                iVar4 = FUN_0042b3e4(param_1,*(undefined4 *)(param_19 + -0xec));
                local_98.left = iVar4 + local_98.left + -0xc;
              }
              FUN_0042a5c8(*(undefined4 *)(param_1 + 0xc),unaff_EBX);
              if (iVar21 != 0x1fffffff) {
                FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_19 + -0xe4));
              }
            }
            else {
              *(undefined4 *)(param_19 + -0xf0) = 0x1fffffff;
              FUN_00404cf0(*(undefined4 *)(param_19 + -0xe0),"SQUARE");
              uVar18 = 0;
              if (bVar19) {
                uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                *(undefined4 *)(param_19 + -0xf0) = uVar3;
                FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),iVar21);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),iVar21);
                FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),0);
                FUN_0042b158(param_1,local_98.left,local_98.top + 2);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_19 + -0xf0));
                uVar18 = *(int *)(param_19 + -0xf0) == 0x1fffffff;
                if ((bool)uVar18) {
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
              FUN_00404cf0(*(undefined4 *)(param_19 + -0xe0),"CIRCLE");
              if ((bool)uVar18) {
                uVar3 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                *(undefined4 *)(param_19 + -0xf0) = uVar3;
                FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),iVar21);
                FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),iVar21);
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
          local_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)
                                          ));
          if (local_65 == 'L') {
            *(int *)(param_19 + -0xb8) = *(int *)(param_19 + -0xb8) + 1;
            uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
            *(undefined1 *)(param_19 + -0xb9) = 1;
            *(undefined4 *)(param_19 + -0xe8) = 1;
          }
          if (local_65 == 'F') {
            iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
            FUN_00404e04(*param_2,3,iVar4 + -1);
            iVar4 = FUN_00536b44(&DAT_0053b3c8,local_10);
            iVar4 = iVar4 + 2;
            uVar3 = FUN_00404ba4(local_10);
            FUN_00404e04(local_10,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            iVar4 = iVar4 + 1;
            uVar3 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar4,uVar3);
            iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
            FUN_00404e04(unaff_EBX,1,iVar4 + -1);
            iVar4 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
            *param_5 = iVar4;
            local_98.left = *(int *)(param_19 + -0x60) + *param_5;
            *param_17 = *param_5;
          }
          break;
        case 0x50:
          iVar4 = FUN_00536db8(&DAT_0053b27c,*param_2,&stack0xffffffc0);
          if (0 < iVar4) {
            FUN_00404e04(*param_2,3,iVar10 + -1);
            FUN_004095b0(auStackY_1884[0x5d3],&local_10);
            iVar4 = FUN_00536db8("ALIGN",local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 5,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              iVar4 = FUN_00404ee8("RIGHT",unaff_EBX);
              if (0 < iVar4) {
                *param_12 = 1;
              }
              iVar4 = FUN_00404ee8(&DAT_0053b4b0,unaff_EBX);
              if (0 < iVar4) {
                *param_12 = 0;
              }
              iVar4 = FUN_00404ee8("CENTER",unaff_EBX);
              if (0 < iVar4) {
                *param_12 = 2;
              }
            }
            iVar4 = FUN_00536db8("INDENT",local_10,&stack0xffffffc0);
            if (0 < iVar4) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 6,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              uVar3 = FUN_00536bc8(unaff_EBX);
              *param_11 = uVar3;
            }
            iVar4 = FUN_00536db8("BGCOLOR",local_10,&stack0xffffffc0);
            if ((0 < iVar4) && (*(char *)(param_19 + 0x5c) == '\0')) {
              uVar3 = FUN_00404ba4(local_10);
              FUN_00404e04(local_10,iVar10 + 5,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              iVar4 = iVar4 + 1;
              uVar3 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar4,uVar3);
              iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
              FUN_00404e04(unaff_EBX,1,iVar4 + -1);
              uVar3 = 0x1fffffff;
              iVar4 = FUN_00404ba4(unaff_EBX);
              if (0 < iVar4) {
                if (*unaff_EBX == '#') {
                  uVar3 = FUN_00536a8c(unaff_EBX);
                }
                else {
                  FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d2);
                  uVar3 = FUN_005362b4(auStackY_1884[0x5d2]);
                }
              }
              iVar4 = FUN_00536db8("BGCOLORTO",local_10,&stack0xffffffc0);
              if ((iVar4 < 1) || (*(char *)(param_19 + 0x5c) != '\0')) {
                if (param_18 == '\0') {
                  *(undefined1 *)(param_19 + -0x49) = 1;
                  uVar9 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
                  *(undefined4 *)(param_19 + -0xc0) = uVar9;
                  cVar2 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
                  if (cVar2 == '\x01') {
                    *(undefined4 *)(param_19 + -0xc0) = 0x1fffffff;
                  }
                  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar3);
                  uVar9 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
                  *(undefined4 *)(param_19 + -0x50) = uVar9;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
                  FUN_0042b158(param_1,*(undefined4 *)(param_19 + -0x60),local_84[0]);
                }
              }
              else {
                uVar9 = FUN_00404ba4(local_10);
                FUN_00404e04(local_10,iVar10 + 5,uVar9);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                iVar4 = iVar4 + 1;
                uVar9 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,iVar4,uVar9);
                iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
                FUN_00404e04(unaff_EBX,1,iVar4 + -1);
                local_54 = 0x1fffffff;
                iVar4 = FUN_00404ba4(unaff_EBX);
                if (0 < iVar4) {
                  if (*unaff_EBX == '#') {
                    local_54 = FUN_00536a8c(unaff_EBX);
                  }
                  else {
                    FUN_00409724(unaff_EBX,auStackY_1884 + 0x5d1);
                    local_54 = FUN_005362b4(auStackY_1884[0x5d1]);
                  }
                }
                if (param_18 == '\0') {
                  *(undefined1 *)(param_19 + -0x49) = 1;
                  FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar3);
                  FUN_0040709c(*(undefined4 *)(param_19 + -0x60),local_84[0],
                               *(undefined4 *)(param_19 + -0x58));
                  in_stack_ffffffc8 = (HDC)0x1;
                  in_stack_ffffffc4 = (HDC)0x53ab22;
                  FUN_00536070(param_1,uVar3,local_54);
                  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
                }
              }
            }
          }
          break;
        case 0x52:
          iVar4 = FUN_00404ee8(&DAT_0053b27c,*param_2);
          FUN_00404e04(*param_2,3,iVar4 + -1);
          iVar4 = FUN_00536b44(&DAT_0053b53c,local_10);
          iVar4 = iVar4 + 2;
          uVar3 = FUN_00404ba4(local_10);
          FUN_00404e04(local_10,iVar4,uVar3);
          iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
          iVar4 = iVar4 + 1;
          uVar3 = FUN_00404ba4(unaff_EBX);
          FUN_00404e04(unaff_EBX,iVar4,uVar3);
          iVar4 = FUN_00404ee8(&DAT_0053b2d0,unaff_EBX);
          FUN_00404e04(unaff_EBX,1,iVar4 + -1);
          local_28 = FUN_0040343c(unaff_EBX,&stack0xffffffd4);
          FUN_00536edc(param_1,local_28);
          break;
        case 0x53:
          local_65 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)
                                          ));
          if (local_65 == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_0053b2b0);
          }
          else if (local_65 == 'H') {
            *(undefined1 *)(param_19 + -100) = 1;
          }
          else {
            iVar4 = FUN_00536b44("<SUB>",*param_2);
            if (iVar4 == 1) {
              *(undefined1 *)(param_19 + -0x61) = 1;
            }
            else {
              iVar4 = FUN_00536b44("<SUP>",*param_2);
              if (iVar4 == 1) {
                *(undefined1 *)(param_19 + -0x62) = 1;
              }
            }
          }
          break;
        case 0x55:
          if (*(char *)(*param_2 + 2) == '>') {
            bVar1 = FUN_0042a660(*(undefined4 *)(param_1 + 0xc));
            FUN_0042a66c(*(undefined4 *)(param_1 + 0xc),bVar1 | DAT_0053b29c);
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
      iVar4 = FUN_00536db8(&DAT_0053b27c,*param_2,&stack0xffffffc0);
      if ((iVar4 < 1) || (uStack_20._2_1_ != '\0')) {
        if (uStack_20._2_1_ == '\0') {
          uVar3 = FUN_00404ba4(*param_2);
          FUN_00404e44(param_2,1,uVar3);
        }
      }
      else {
        FUN_00404e04(*param_2,1,iVar10);
        FUN_00404bac(&local_c,auStackY_1884[0x5cd]);
        FUN_00404e44(param_2,1,iVar10);
      }
    }
  } while( true );
}

