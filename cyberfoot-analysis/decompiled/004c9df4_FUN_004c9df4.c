// Address: 004c9df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9df4(int param_1,int param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
                 int param_6,char param_7,char param_8,char param_9,char param_10,int param_11,
                 int *param_12,undefined4 param_13,int param_14,undefined4 param_15,char param_16,
                 char param_17,char param_18,byte param_19,char param_20,byte param_21,char param_22
                 ,undefined4 param_23,char param_24,char param_25,int *param_26,byte param_27,
                 int param_28,uint *param_29,int param_30,int *param_31,char param_32,char param_33,
                 char param_34,byte param_35,char param_36,byte param_37,char param_38,int param_39,
                 int param_40,int param_41,int param_42,char param_43,undefined4 param_44,
                 int param_45,undefined1 param_46,undefined1 param_47,undefined4 param_48,
                 int param_49,int param_50,undefined4 param_51,int param_52)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  HDC pHVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LPCSTR pCVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  LPCWSTR pWVar14;
  HICON hIcon;
  uint uVar15;
  int iVar16;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *puVar17;
  int *in_FS_OFFSET;
  bool bVar18;
  byte bVar19;
  int aiStackY_196c [1422];
  byte local_334 [256];
  undefined4 local_234;
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  float10 local_220;
  undefined4 local_214 [2];
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [4];
  int local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4 [16];
  int local_1a4;
  tagRECT local_1a0;
  tagRECT local_190;
  tagTEXTMETRICA local_180;
  tagRECT local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4 [3];
  undefined1 local_d8 [8];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4 [4];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  char local_6d;
  int local_6c;
  int local_68;
  uint local_64;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  tagRECT *ptVar24;
  HBRUSH hbrFlickerFreeDraw;
  tagTEXTMETRICA *lptm;
  UINT UVar25;
  undefined4 uVar26;
  UINT diFlags;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar22 = param_50;
  bVar19 = 0;
  iVar16 = 0x65;
  do {
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  LOCK();
  UNLOCK();
  uVar15 = *param_29;
  uVar23 = param_29[1];
  local_a8 = iRam00000000;
  local_a4[0] = iRam00000004;
  local_a4[1] = iRam00000008;
  local_a4[2] = iRam0000000c;
  local_24 = (undefined1 *)0x4c9e39;
  FUN_00404d94(param_45);
  local_24 = (undefined1 *)0x4c9e44;
  FUN_00405608(&param_44);
  local_24 = &stack0xfffffffc;
  local_28 = &LAB_004cca3e;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_e8 = local_a8;
  local_e4[(uint)bVar19 * -2] = local_a4[(uint)bVar19 * -2];
  local_e4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
       local_a4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
  (local_e4 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
       (local_a4 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
  if (param_16 == '\0') {
    local_74 = 0;
  }
  else {
    local_74 = 3;
  }
  if (param_32 == '\0') {
    FUN_0040709c(local_e4[1] + -0xe,local_e4[0],local_e4[1]);
    if (param_36 != '\0') {
      local_e4[1] = local_f8;
    }
  }
  else {
    FUN_0040709c(local_e8,local_e4[2] + -0xe,local_e4[1]);
    if (param_36 != '\0') {
      local_e4[2] = local_f4;
    }
  }
  (**(code **)(*param_12 + 0x1c))(param_12,&local_1a4);
  if (local_1a4 != 0) {
    param_37 = 4;
  }
  iVar16 = local_a4[1] - local_a8;
  uVar2 = local_a4[2] - local_a4[0];
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  local_90 = 0;
  if ((param_49 == 0x1fffffff) && (iVar22 == 0x1fffffff)) {
    param_49 = param_52;
  }
  if (iVar22 == 0x1fffffff) {
    iVar22 = param_52;
  }
  uVar4 = FUN_0042b5a8(param_2);
  uVar4 = FUN_004af018(PTR_DAT_004ae274,1,uVar4);
  if (((param_24 == '\0') || (param_9 != '\0')) || (param_10 != '\0')) {
    if (((param_36 == '\0') || (param_35 == 0)) || (param_21 == 0)) {
      FUN_0040709c(local_a8,local_a4[0] + iVar3 + -1,local_a4[1]);
      FUN_004c9254(param_2,uVar4,local_1b4);
      FUN_0040709c(local_a8,local_a4[0],local_a4[1]);
      FUN_004c9254(param_2,uVar4,local_1b4);
    }
    else {
      if (param_32 == '\0') {
        FUN_0040709c(local_a4[1] + -0xc,local_a4[0] + iVar3 + -1,local_a4[1]);
        FUN_0040709c(local_a4[1] + -0xc,local_a4[0],local_a4[1]);
        FUN_0040709c(local_a8,local_a4[0] + iVar3 + -1,local_a4[1] + -0xc);
        FUN_0040709c(local_a8,local_a4[0],local_a4[1] + -0xc);
      }
      else {
        FUN_0040709c(local_a8,local_a4[2] + -6,local_a4[1]);
        FUN_0040709c(local_a8,local_a4[2] + -0xc,local_a4[1]);
        FUN_0040709c(local_a8,local_a4[2] + -0xc,local_a4[1]);
        uVar20 = (local_a4[2] - local_a4[0]) - 0xc;
        local_24 = (undefined1 *)((int)uVar20 >> 1);
        if ((int)local_24 < 0) {
          local_24 = local_24 + ((uVar20 & 1) != 0);
        }
        FUN_0040709c(local_a8,local_24 + local_a4[0] + -1,local_a4[1]);
        FUN_0040709c(local_a8,local_a4[0],local_a4[1]);
      }
      if (param_25 == '\x02') {
        FUN_004c9254(param_2,uVar4,local_108);
        FUN_004c9254(param_2,uVar4,local_118);
        if (param_8 == '\0') {
          FUN_004c7bcc(param_52,0xfffffff6);
          FUN_004c7bcc(param_51,0xfffffff6);
          FUN_004c9254(param_2,uVar4,local_138);
          if (param_32 == '\0') {
            FUN_004c7bcc(param_49,0xfffffff6);
            FUN_004c7bcc(iVar22,0xfffffff6);
            FUN_004c9254(param_2,uVar4,local_128);
          }
        }
      }
      else {
        if (param_8 == '\0') {
          FUN_004c7bcc(param_49,0xfffffff6);
          FUN_004c7bcc(iVar22,0xfffffff6);
          FUN_004c9254(param_2,uVar4,local_108);
          FUN_004c7bcc(param_52,0xfffffff6);
          FUN_004c7bcc(param_51,0xfffffff6);
          FUN_004c9254(param_2,uVar4,local_118);
        }
        FUN_004c9254(param_2,uVar4,local_138);
        if (param_32 == '\0') {
          FUN_004c9254(param_2,uVar4,local_128);
        }
      }
    }
  }
  FUN_004af5d4(uVar4,4);
  if ((((param_24 == '\0') || (param_9 != '\0')) || (param_10 != '\0')) && (param_20 != '\0')) {
    if (param_22 == '\0') {
      FUN_004c8c14(uVar4,param_48,local_a8);
    }
    else if (param_22 == '\x01') {
      FUN_004c82cc(uVar4,param_48,local_a8);
    }
    else if (param_22 == '\x02') {
      FUN_004c7f88(uVar4,param_48,local_a8);
    }
    else if (param_22 == '\x03') {
      FUN_004c85ac(uVar4,param_48,local_a8);
    }
  }
  if (param_33 != '\0') {
    FUN_004af5d4(uVar4,4);
    FUN_004c8c14(uVar4,0xe4ad89,local_a8 + 1);
    FUN_004af5d4(uVar4,4);
    FUN_004c88f4(uVar4,0x808080,local_a8 + 2);
  }
  if ((param_37 == 4) && (param_17 == '\0')) {
    local_a8 = local_a8 + param_6;
  }
  iVar22 = 0;
  uVar21 = 0;
  local_64 = 0;
  uVar20 = 0;
  FUN_0042a5b0(param_42,&local_1bc);
  FUN_004051d4(&local_1b8,local_1bc);
  local_34 = 0x4ca5b8;
  local_28 = (undefined1 *)FUN_004b134c(PTR_DAT_004addd4,1,local_1b8);
  if (*(int *)((int)local_28 + 8) - 0xeU < 2) {
    FUN_00403a84(local_28);
    local_34 = 0;
    local_28 = (undefined1 *)FUN_004b134c(PTR_DAT_004addd4,1,L"Arial");
  }
  FUN_0042a5b0(param_11,&local_1c4);
  FUN_004051d4(&local_1c0,local_1c4);
  local_3c = 0x4ca61a;
  local_2c = FUN_004b134c(PTR_DAT_004addd4,1,local_1c0);
  if (*(int *)(local_2c + 8) - 0xeU < 2) {
    FUN_00403a84(local_2c);
    local_3c = 0;
    local_2c = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial");
  }
  FUN_0042a660(param_42);
  FUN_0042a660(param_42);
  FUN_0042a660(param_42);
  FUN_0042a660(param_11);
  FUN_0042a660(param_11);
  FUN_0042a660(param_11);
  if ((((param_26 == (int *)0x0) || (cVar1 = (**(code **)(*param_26 + 0x1c))(), cVar1 != '\0')) ||
      (iVar3 = (**(code **)(*param_26 + 0x2c))(), iVar3 < 2)) ||
     (iVar3 = (**(code **)(*param_26 + 0x20))(), iVar3 < 2)) {
    if ((param_31 == (int *)0x0) || (cVar1 = (**(code **)(*param_31 + 0x1c))(), cVar1 != '\0')) {
      if ((-1 < param_39) && (param_41 != 0)) {
        uVar20 = *(uint *)(param_41 + 0x34);
        local_64 = *(uint *)(param_41 + 0x30);
      }
    }
    else {
      FUN_004c0340(param_31);
      uVar20 = (**(code **)(*param_31 + 0x2c))();
      local_64 = (**(code **)(*param_31 + 0x20))();
      if ((0 < (int)uVar15) && (0 < (int)uVar23)) {
        local_64 = uVar23;
        uVar20 = uVar15;
      }
    }
  }
  else {
    uVar20 = (**(code **)(*param_26 + 0x2c))();
    local_64 = (**(code **)(*param_26 + 0x20))();
    if ((0 < (int)uVar15) && (0 < (int)uVar23)) {
      local_64 = uVar23;
      uVar20 = uVar15;
    }
  }
  if (param_43 != '\0') {
    if (param_45 == 0) {
      bVar18 = true;
      FUN_00405378(param_44);
      if (bVar18) goto LAB_004ca7db;
    }
    if ((0 < (int)uVar20) && (((param_37 == 0 || (param_37 == 2)) || ((byte)(param_37 - 4) < 2)))) {
      uVar20 = uVar20 + param_14;
    }
    if ((0 < (int)local_64) && ((param_37 == 1 || (param_37 == 6)))) {
      local_64 = local_64 + param_14;
    }
  }
LAB_004ca7db:
  *param_4 = uVar20;
  param_4[1] = local_64;
  if (param_45 == 0) {
    bVar18 = true;
    FUN_00405378(param_44);
    if (!bVar18) goto LAB_004ca808;
  }
  else {
LAB_004ca808:
    iVar16 = FUN_00404ee8(&DAT_004cca6c,param_45);
    if (0 < iVar16) {
      if (((int)uVar15 < 1) || ((int)uVar23 < 1)) {
        FUN_0040f7c8(param_45,&DAT_004cca6c,&DAT_004cca88);
        FUN_0040496c(&param_45,local_1cc);
      }
      else {
        FUN_0040f7c8(param_45,&DAT_004cca6c,&DAT_004cca7c);
        FUN_0040496c(&param_45,local_1c8);
      }
    }
    FUN_0042a5b0(param_42,&local_1d0);
    FUN_0042a5c8(*(undefined4 *)(param_2 + 0xc),local_1d0);
    lptm = &local_180;
    pHVar5 = (HDC)FUN_0042b5a8(param_2);
    GetTextMetricsA(pHVar5,lptm);
    local_6d = (local_180.tmPitchAndFamily & 4) == 4;
    FUN_0042a5b0(param_42,&local_1d4);
    piVar6 = (int *)FUN_00485aec(*(undefined4 *)PTR_DAT_0066b760);
    iVar16 = (**(code **)(*piVar6 + 0x54))(piVar6,local_1d4);
    if (iVar16 == -1) {
      local_6d = '\0';
    }
    local_1d8 = FUN_0042a624(param_42);
    uVar7 = FUN_004b140c(PTR_DAT_004ade30,1,local_28);
    iVar16 = local_e4[1] - local_e8;
    uVar2 = local_e4[2] - local_e4[0];
    FUN_004aeba4(&local_b8);
    if (param_18 == '\0') {
      local_38 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0x1000);
    }
    else {
      local_38 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0);
    }
    if (param_34 == '\0') {
      uVar8 = FUN_004ae808(0x808080);
      local_3c = FUN_004aeda8(PTR_DAT_004adedc,1,uVar8);
    }
    else {
      uVar8 = FUN_004ae808(*(undefined4 *)(param_42 + 0x18));
      local_3c = FUN_004aeda8(PTR_DAT_004adedc,1,uVar8);
    }
    if (param_37 == 4) {
      FUN_004aec3c(local_38,0);
    }
    else if (param_37 == 5) {
      FUN_004aec3c(local_38,2);
    }
    else {
      FUN_004aec3c(local_38,1);
    }
    if (param_37 == 6) {
      FUN_004aec5c(local_38,0);
    }
    else if (param_37 == 7) {
      FUN_004aec5c(local_38,2);
    }
    else {
      FUN_004aec5c(local_38,1);
    }
    iVar3 = FUN_004c7b94(param_1);
    if (iVar3 == 0x100000) {
      FUN_004aec9c(local_38,2);
    }
    else {
      FUN_004aec9c(local_38,1);
    }
    FUN_004aec7c(local_38,param_13);
    if (param_28 == 1) {
      if (param_7 == '\0') {
        FUN_004af588(uVar4,5);
      }
      else {
        FUN_004af588(uVar4,4);
      }
    }
    else if (param_28 == 2) {
      FUN_004af588(uVar4,4);
    }
    if ((param_28 == 0) || (local_6d == '\0')) {
      (**(code **)(**(int **)(param_2 + 0xc) + 8))(*(int **)(param_2 + 0xc),param_42);
      local_148.left = FUN_00402c38();
      local_148.top = FUN_00402c38();
      local_148.right = local_148.left + 2;
      local_78 = FUN_004c7b94(param_1);
      local_78 = local_78 | 0x400;
      if (param_18 == '\0') {
        local_78 = local_78 + 0x20;
      }
      else {
        local_148.right = FUN_00402c38();
        local_148.right = local_148.right + local_148.left;
        local_78 = local_78 + 0x10;
      }
      if (param_45 == 0) {
        ptVar24 = &local_148;
        uVar10 = local_78;
        iVar3 = FUN_00405260(param_44);
        pWVar14 = (LPCWSTR)FUN_00405250(param_44);
        pHVar5 = (HDC)FUN_0042b5a8(param_2);
        local_148.bottom = DrawTextW(pHVar5,pWVar14,iVar3,ptVar24,uVar10);
      }
      else {
        ptVar24 = &local_148;
        uVar10 = local_78;
        iVar3 = FUN_00404ba4(param_45);
        pCVar9 = (LPCSTR)FUN_00404da4(param_45);
        pHVar5 = (HDC)FUN_0042b5a8(param_2);
        local_148.bottom = DrawTextA(pHVar5,pCVar9,iVar3,ptVar24,uVar10);
      }
      uVar10 = FUN_00402c38();
      local_90 = FUN_00405c40(local_148.bottom + uVar10,
                              (local_148.bottom >> 0x1f) + extraout_EDX +
                              (uint)CARRY4(local_148.bottom,uVar10));
      local_c0 = (float)(local_148.right - local_148.left);
      local_1d8 = local_148.bottom - local_148.top;
      local_bc = (float)local_1d8;
      FUN_0040709c(0,0,0);
      (**(code **)(*param_12 + 0x1c))(param_12,&local_1dc);
      if (local_1dc != 0) {
        (**(code **)(**(int **)(param_2 + 0xc) + 8))(*(int **)(param_2 + 0xc),param_11);
        local_1a0.left = FUN_00402c38();
        local_1a0.top = FUN_00402c38();
        local_1a0.right = FUN_00402c38();
        local_1a0.right = local_1a0.right + local_1a0.left;
        FUN_004048d4(local_a4 + 4);
        iVar3 = (**(code **)(*param_12 + 0x14))();
        if (0 < iVar3) {
          iVar3 = (**(code **)(*param_12 + 0x14))();
          if (-1 < iVar3 + -2) {
            local_a4[3] = iVar3 + -1;
            local_8c = 0;
            do {
              (**(code **)(*param_12 + 0xc))(param_12,local_8c,local_1e0);
              FUN_00404c64(local_a4 + 4,3);
              local_8c = local_8c + 1;
              local_a4[3] = local_a4[3] + -1;
            } while (local_a4[3] != 0);
          }
          iVar3 = (**(code **)(*param_12 + 0x14))();
          (**(code **)(*param_12 + 0xc))(param_12,iVar3 + -1,&local_1e4);
          FUN_00404bac(local_a4 + 4,local_1e4);
        }
        local_1a0.bottom = 0xffff;
        UVar25 = 0x410;
        ptVar24 = &local_1a0;
        iVar3 = FUN_00404ba4(local_94);
        pCVar9 = (LPCSTR)FUN_00404da4(local_94);
        pHVar5 = (HDC)FUN_0042b5a8(param_2);
        local_1a0.bottom = DrawTextA(pHVar5,pCVar9,iVar3,ptVar24,UVar25);
        local_1d8 = local_1a0.right - local_1a0.left;
        local_d0 = (float)local_1d8;
        local_cc = (float)local_1a0.bottom;
      }
      switch(param_37) {
      case 0:
        uVar10 = (iVar16 - (local_148.right - local_148.left)) - uVar20;
        local_1d8 = (int)uVar10 >> 1;
        if (local_1d8 < 0) {
          local_1d8 = local_1d8 + (uint)((uVar10 & 1) != 0);
        }
        local_c8 = (float)local_1d8;
        local_c4 = (float)local_148.top;
        iVar3 = FUN_00402c38();
        *param_4 = iVar3 + uVar20 + param_14;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        param_4[1] = uVar10;
        break;
      case 1:
        local_c8 = (float)local_148.left;
        uVar10 = ((uVar2 - (local_148.bottom - local_148.top)) - local_64) - 2;
        local_1d8 = (int)uVar10 >> 1;
        if (local_1d8 < 0) {
          local_1d8 = local_1d8 + (uint)((uVar10 & 1) != 0);
        }
        local_c4 = (float)local_1d8;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        *param_4 = uVar10;
        iVar3 = FUN_00402c38();
        param_4[1] = iVar3 + local_64 + param_14;
        break;
      case 2:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        iVar3 = FUN_00402c38();
        *param_4 = iVar3 + uVar20 + param_14;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        param_4[1] = uVar10;
        break;
      case 3:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        *param_4 = uVar10;
        iVar3 = FUN_00402c38();
        param_4[1] = iVar3 + local_64 + param_14;
        break;
      case 4:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        FUN_00402c38();
        FUN_00402c38();
        iVar3 = FUN_004323c0();
        *param_4 = iVar3 + uVar20 + param_14;
        FUN_00402c38();
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        param_4[1] = uVar10;
        break;
      case 5:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        iVar3 = FUN_00402c38();
        *param_4 = iVar3 + uVar20 + param_14;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        param_4[1] = uVar10;
        break;
      case 6:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        *param_4 = uVar10;
        iVar3 = FUN_00402c38();
        param_4[1] = iVar3 + local_64 + param_14;
        break;
      case 7:
        local_c8 = (float)local_148.left;
        local_c4 = (float)local_148.top;
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        *param_4 = uVar10;
        iVar3 = FUN_00402c38();
        param_4[1] = iVar3 + local_64 + param_14;
      }
    }
    else {
      if (param_45 == 0) {
        uVar8 = FUN_00405260(param_44);
        FUN_004af67c(uVar4,param_44,uVar8);
      }
      else {
        uVar8 = FUN_00404ba4(param_45);
        FUN_004051d4(&local_1e8,param_45);
        FUN_004af67c(uVar4,local_1e8,uVar8);
      }
      local_90 = FUN_00402c38();
      uVar21 = 0;
      uVar20 = 0;
      local_64 = 0;
      local_68 = 0x4cb288;
      FUN_004aeba4(local_d8);
      if (0 < (int)uVar20) {
        local_b0 = (local_b0 - (float)(int)uVar20) - (float)param_14;
      }
      iVar22 = 0x4cb2b1;
      (**(code **)(*param_12 + 0x1c))(param_12,&local_1ec);
      if (local_1ec != 0) {
        local_1d8 = FUN_0042a624(param_11);
        local_34 = FUN_004b140c(PTR_DAT_004ade30,1,local_2c);
        uVar8 = local_34;
        (**(code **)(*param_12 + 0x1c))(param_12,&local_1f0);
        iVar22 = FUN_00404ba4(local_1f0);
        uVar21 = 0x4cb333;
        (**(code **)(*param_12 + 0x1c))(param_12,&local_1f8);
        FUN_004051d4(&local_1f4,local_1f8);
        FUN_004af67c(uVar4,local_1f4,uVar8);
        FUN_00403a84(local_34);
      }
      switch(param_37) {
      case 0:
      case 2:
      case 4:
      case 5:
        FUN_00402c38();
        FUN_00402c38();
        iVar3 = FUN_004323c0();
        *param_4 = iVar3 + uVar20 + param_14;
        FUN_00402c38();
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        param_4[1] = uVar10;
        break;
      case 1:
      case 3:
      case 6:
      case 7:
        FUN_00402c38();
        uVar10 = FUN_004323c0();
        *param_4 = uVar10;
        iVar3 = FUN_00402c38();
        param_4[1] = iVar3 + local_64;
      }
    }
    if (param_17 == '\0') {
      if (param_18 == '\0') {
        FUN_004aeba4(&local_b8);
      }
      if (param_37 < 8) {
        local_1d8 = (int)uVar20 >> 1;
        switch(param_37) {
        case 0:
          if ((param_28 == 0) || (local_6d == '\0')) {
            local_1d8 = (iVar16 + -2) - uVar20;
            iVar22 = FUN_00402c38();
          }
          else {
            if (local_1d8 < 0) {
              local_1d8 = local_1d8 + (uint)((uVar20 & 1) != 0);
            }
            iVar22 = FUN_00402c38();
          }
          if (iVar22 < 2) {
            iVar22 = 2;
          }
          iVar3 = (int)(uVar2 - local_64) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((uVar2 - local_64 & 1) != 0);
          }
          iVar3 = FUN_004323b8(0,iVar3);
          uVar21 = iVar3 + local_a4[0];
          break;
        case 1:
          if ((param_28 == 0) || (local_6d == '\0')) {
            local_1d8 = (uVar2 - 2) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            uVar21 = FUN_00402c38();
            iVar3 = (int)uVar21 >> 1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
            }
            iVar3 = FUN_004323b8(0,iVar3);
            iVar11 = FUN_00402c38();
            uVar21 = ((iVar11 - local_64) + iVar3) - 4;
          }
          else {
            local_1d8 = (uVar2 - 2) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            uVar21 = FUN_00402c38();
            iVar3 = (int)uVar21 >> 1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
            }
            iVar3 = FUN_004323b8(0,iVar3);
            iVar11 = FUN_00402c38();
            uVar21 = iVar3 + (iVar11 - local_64);
          }
          if ((int)uVar21 < 2) {
            uVar21 = 2;
          }
          break;
        default:
          local_1d8 = (iVar16 + -4) - uVar20;
          if (param_37 == 5) {
            iVar22 = (iVar16 - uVar20) + -2;
          }
          else {
            uVar21 = FUN_00402c38();
            iVar22 = (int)uVar21 >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((uVar21 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar3 = FUN_00402c38();
            iVar22 = iVar3 + iVar22 + 4;
            if ((int)(iVar16 - uVar20) < iVar22) {
              iVar22 = (iVar16 - uVar20) + -2;
            }
          }
          iVar3 = (int)(uVar2 - local_64) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((uVar2 - local_64 & 1) != 0);
          }
          iVar3 = FUN_004323b8(0,iVar3);
          uVar21 = iVar3 + local_a4[0];
          iVar22 = iVar22 + param_14;
          break;
        case 3:
          if ((param_28 == 0) || (local_6d == '\0')) {
            local_1d8 = (uVar2 - 2) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            uVar21 = FUN_00402c38();
            iVar3 = (int)uVar21 >> 1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
            }
            iVar3 = FUN_004323b8(0,iVar3);
            iVar11 = FUN_00402c38();
            uVar21 = iVar3 + iVar11;
            if ((int)(uVar2 - local_64) < (int)uVar21) {
              uVar21 = (uVar2 - local_64) - 2;
            }
          }
          else {
            local_1d8 = (uVar2 - 2) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            uVar21 = FUN_00402c38();
            iVar3 = (int)uVar21 >> 1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
            }
            iVar3 = FUN_004323b8(0,iVar3);
            iVar11 = FUN_00402c38();
            uVar21 = iVar3 + iVar11;
            if ((int)(uVar2 - local_64) < (int)uVar21) {
              uVar21 = (uVar2 - local_64) - 2;
            }
          }
          break;
        case 4:
          if (local_1d8 < 0) {
            local_1d8 = local_1d8 + (uint)((uVar20 & 1) != 0);
          }
          iVar22 = FUN_00402c38();
          if (iVar22 < 2) {
            iVar22 = 2;
          }
          iVar3 = (int)(uVar2 - local_64) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((uVar2 - local_64 & 1) != 0);
          }
          iVar3 = FUN_004323b8(0,iVar3);
          uVar21 = iVar3 + local_a4[0];
          break;
        case 6:
          local_1d8 = (uVar2 - 2) - local_64;
          iVar22 = (int)(iVar16 - uVar20) >> 1;
          if (iVar22 < 0) {
            iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
          }
          iVar22 = FUN_004323b8(0,iVar22);
          iVar22 = iVar22 + local_a8;
          if (param_37 == 6) {
            uVar21 = 0;
          }
          else {
            uVar21 = FUN_00402c38();
          }
          iVar3 = (int)uVar21 >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
          }
          iVar3 = FUN_004323b8(0,iVar3);
          iVar11 = FUN_00402c38();
          uVar21 = iVar3 + (iVar11 - local_64);
          if ((int)uVar21 < 2) {
            uVar21 = 2;
          }
          break;
        case 7:
          if ((param_28 == 0) || (local_6d == '\0')) {
            local_1d8 = (uVar2 - 4) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            uVar21 = (uVar2 - local_64) - 2;
          }
          else {
            local_1d8 = (uVar2 - 2) - local_64;
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            iVar22 = FUN_004323b8(0,iVar22);
            iVar22 = iVar22 + local_a8;
            if (param_37 == 7) {
              uVar21 = uVar2;
            }
            iVar3 = (int)uVar21 >> 1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + (uint)((uVar21 & 1) != 0);
            }
            iVar3 = FUN_004323b8(0,iVar3);
            iVar11 = FUN_00402c38();
            uVar21 = iVar3 + iVar11;
            if ((int)(uVar2 - local_64) < (int)uVar21) {
              uVar21 = (uVar2 - local_64) - 2;
            }
          }
        }
      }
      if (param_19 == 0) {
        FUN_004aeba4(&local_b8);
      }
      else {
        FUN_004aeba4(&local_b8);
      }
      if (((((param_27 & param_19) != 0) && (param_26 != (int *)0x0)) &&
          (cVar1 = (**(code **)(*param_26 + 0x1c))(), cVar1 == '\0')) &&
         ((iVar3 = (**(code **)(*param_26 + 0x2c))(), 1 < iVar3 &&
          (iVar3 = (**(code **)(*param_26 + 0x20))(), 1 < iVar3)))) {
        FUN_0042ae64(param_2,iVar22,uVar21);
      }
      if (param_43 != '\0') {
        if ((param_28 == 0) || (local_6d == '\0')) {
          local_148.left = FUN_00402c38();
          local_148.top = FUN_00402c38();
          local_148.right = FUN_00402c38();
          local_148.right = local_148.right + local_148.left;
          iVar3 = FUN_00402c38();
          local_148.bottom = iVar3 + local_148.top;
          FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),1);
          if (param_18 == '\0') {
            local_7c = 0x20;
          }
          else {
            local_7c = 0x10;
          }
          local_78 = local_7c | 4;
          switch(param_37) {
          case 0:
            local_78 = local_7c | 5;
            break;
          case 1:
            local_78 = local_7c | 1;
            break;
          case 2:
            local_78 = local_7c | 5;
            break;
          case 3:
            local_78 = local_7c | 5;
            break;
          case 4:
            local_78 = local_7c | 4;
            local_148.left = local_148.left + 2;
            (**(code **)(*param_12 + 0x1c))(param_12,&local_1fc);
            if (local_1fc != 0) {
              local_78 = local_78 & 0xfffffffb;
              uVar12 = local_148.bottom - local_148.top;
              iVar3 = (int)uVar12 >> 0x1f;
              uVar13 = FUN_00402c38();
              uVar10 = uVar12 - uVar13;
              iVar3 = (iVar3 - extraout_EDX_00) - (uint)(uVar12 < uVar13);
              uVar12 = FUN_00402c38();
              local_148.top =
                   FUN_00405c40(uVar10 - uVar12,(iVar3 - extraout_EDX_01) - (uint)(uVar10 < uVar12))
              ;
            }
            break;
          case 5:
            local_78 = local_7c | 6;
            break;
          case 6:
            local_78 = local_7c | 1;
            break;
          case 7:
            local_78 = local_7c | 9;
          }
          local_190.left = local_148.left;
          puVar17 = (undefined4 *)((int)&local_190 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          *(undefined4 *)((int)&local_190 + (uint)bVar19 * -8 + 4) =
               *(undefined4 *)(local_138 + (uint)bVar19 * -8 + -0xc);
          *puVar17 = *(undefined4 *)(local_138 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -8);
          puVar17[(uint)bVar19 * -2 + 1] =
               *(undefined4 *)
                ((int)(local_138 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -8) +
                ((uint)bVar19 * -2 + 1) * 4);
          (**(code **)(**(int **)(param_2 + 0xc) + 8))(*(int **)(param_2 + 0xc),param_42);
          if (param_34 == '\0') {
            FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0x808080);
          }
          if (param_18 != '\0') {
            if (param_45 == 0) {
              uVar10 = local_78 | 0x400;
              ptVar24 = &local_148;
              iVar3 = FUN_00405260(param_44);
              pWVar14 = (LPCWSTR)FUN_00405250(param_44);
              pHVar5 = (HDC)FUN_0042b5a8(param_2);
              local_80 = DrawTextW(pHVar5,pWVar14,iVar3,ptVar24,uVar10);
            }
            else {
              uVar10 = local_78 | 0x400;
              ptVar24 = &local_148;
              iVar3 = FUN_00404ba4(param_45);
              pCVar9 = (LPCSTR)FUN_00404da4(param_45);
              pHVar5 = (HDC)FUN_0042b5a8(param_2);
              local_80 = DrawTextA(pHVar5,pCVar9,iVar3,ptVar24,uVar10);
            }
            if (param_37 == 1) {
              local_190.top = uVar21 + local_64;
            }
            else if (param_37 != 6) {
              if (param_37 == 7) {
                local_190.top = local_190.bottom - local_80;
              }
              else {
                uVar10 = (local_190.bottom - local_190.top) - local_80;
                local_190.top = (int)uVar10 >> 1;
                if (local_190.top < 0) {
                  local_190.top = local_190.top + (uint)((uVar10 & 1) != 0);
                }
              }
            }
          }
          if (param_45 == 0) {
            uVar10 = FUN_004c7b94(param_1);
            uVar10 = uVar10 | local_78;
            ptVar24 = &local_190;
            iVar3 = FUN_00405260(param_44);
            pWVar14 = (LPCWSTR)FUN_00405250(param_44);
            pHVar5 = (HDC)FUN_0042b5a8(param_2);
            DrawTextW(pHVar5,pWVar14,iVar3,ptVar24,uVar10);
          }
          else {
            uVar10 = FUN_004c7b94(param_1);
            uVar10 = uVar10 | local_78;
            ptVar24 = &local_190;
            iVar3 = FUN_00404ba4(param_45);
            pCVar9 = (LPCSTR)FUN_00404da4(param_45);
            pHVar5 = (HDC)FUN_0042b5a8(param_2);
            DrawTextA(pHVar5,pCVar9,iVar3,ptVar24,uVar10);
          }
          (**(code **)(*param_12 + 0x1c))(param_12,&local_200);
          if (local_200 != 0) {
            iVar3 = FUN_00402c38();
            local_190.top = local_190.top + iVar3;
            local_190.bottom = FUN_00402c38();
            local_190.bottom = local_190.bottom + local_190.top;
            (**(code **)(**(int **)(param_2 + 0xc) + 8))(*(int **)(param_2 + 0xc),param_11);
            ptVar24 = &local_190;
            uVar10 = local_78;
            (**(code **)(*param_12 + 0x1c))(param_12,&local_204);
            iVar3 = FUN_00404ba4(local_204);
            (**(code **)(*param_12 + 0x1c))(param_12,&local_208);
            pCVar9 = (LPCSTR)FUN_00404da4(local_208);
            pHVar5 = (HDC)FUN_0042b5a8(param_2);
            DrawTextA(pHVar5,pCVar9,iVar3,ptVar24,uVar10);
          }
        }
        else {
          (**(code **)(*param_12 + 0x1c))(param_12,&local_20c);
          if (local_20c != 0) {
            FUN_004aec5c(local_38,0);
            local_214[0] = FUN_00402c38();
            local_220 = (float10)local_ac - (float10)CONCAT44(extraout_EDX_02,local_214[0]);
            local_228 = FUN_00402c38();
            local_b4 = (float)((local_220 - (float10)CONCAT44(extraout_EDX_03,local_228)) /
                               (float10)_DAT_004cca9c + (float10)local_b4);
          }
          local_b8 = local_b8 - _DAT_004ccaa0;
          if (param_45 == 0) {
            uVar8 = FUN_00405260(param_44);
            FUN_004afac4(uVar4,param_44,uVar8);
          }
          else {
            uVar8 = FUN_00404ba4(param_45);
            FUN_004af9d4(uVar4,param_45,uVar8);
          }
          (**(code **)(*param_12 + 0x1c))(param_12,&local_22c);
          if (local_22c != 0) {
            local_214[0] = FUN_00402c38();
            local_b4 = (float)CONCAT44(extraout_EDX_04,local_214[0]) + local_b4;
            local_1d8 = FUN_0042a624(param_11);
            local_34 = FUN_004b140c(PTR_DAT_004ade30,1,local_2c);
            uVar8 = FUN_004ae808(*(undefined4 *)(param_11 + 0x18));
            FUN_004aeda8(PTR_DAT_004adedc,1,uVar8);
            uVar8 = local_34;
            (**(code **)(*param_12 + 0x1c))(param_12,&local_230);
            FUN_00404ba4(local_230);
            (**(code **)(*param_12 + 0x1c))(param_12,&local_234);
            uVar26 = 0x4cc11f;
            FUN_004af9d4(uVar4,local_234,uVar8);
            FUN_00403a84(uVar26);
            FUN_00403a84(local_34);
          }
        }
      }
    }
    FUN_00403a84(local_38);
    FUN_00403a84(local_3c);
    FUN_00403a84(uVar7);
  }
  if ((param_37 == 4) && (param_17 == '\0')) {
    iVar22 = iVar22 + param_6;
  }
  FUN_00403a84(local_28);
  FUN_00403a84(local_2c);
  if (param_17 != '\0') goto LAB_004cc95b;
  if (param_36 != '\0') {
    if (param_32 == '\0') {
      iVar16 = iVar16 + -8;
    }
    else {
      uVar2 = uVar2 - 8;
    }
  }
  if ((param_27 != 0) && (param_19 == 0)) {
    if ((param_26 == (int *)0x0) ||
       (((cVar1 = (**(code **)(*param_26 + 0x1c))(), cVar1 != '\0' ||
         (iVar3 = (**(code **)(*param_26 + 0x2c))(), iVar3 < 2)) ||
        (iVar3 = (**(code **)(*param_26 + 0x20))(), iVar3 < 2)))) {
      if ((param_31 == (int *)0x0) || (cVar1 = (**(code **)(*param_31 + 0x1c))(), cVar1 != '\0')) {
        if ((param_39 != -1) && (param_41 != 0)) {
          if (param_45 == 0) {
            bVar18 = true;
            FUN_00405378(param_44);
            if (bVar18) {
              if ((param_1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
                FUN_004039d4(**(undefined4 **)(param_1 + 0x30),local_334);
                bVar18 = local_334[0] == 0xffffffff;
                FUN_00403180(local_334,&DAT_004ccaa4);
                if ((bVar18) &&
                   ((param_7 != '\0' ||
                    ((cVar1 = FUN_004ae800(), cVar1 != '\0' &&
                     (cVar1 = FUN_004ae7f8(), cVar1 != '\0')))))) {
                  local_3c = CONCAT31((int3)((uint)param_39 >> 8),param_38);
                  uVar2 = uVar2 - *(int *)(param_41 + 0x30);
                  iVar22 = (int)uVar2 >> 1;
                  if (iVar22 < 0) {
                    iVar22 = iVar22 + (uint)((uVar2 & 1) != 0);
                  }
                  iVar22 = FUN_004323b8(0,iVar22);
                  iVar22 = iVar22 + local_a4[0];
                  uVar15 = iVar16 - *(int *)(param_41 + 0x34);
                  iVar16 = (int)uVar15 >> 1;
                  if (iVar16 < 0) {
                    iVar16 = iVar16 + (uint)((uVar15 & 1) != 0);
                  }
                  iVar16 = FUN_004323b8(0,iVar16);
                  FUN_004070b8(iVar16 + local_a8,iVar22,local_214);
                  FUN_004c9844(uVar4,local_214,param_41);
                  goto LAB_004cc7df;
                }
              }
              if ((param_38 == '\0') && (param_40 != 0)) {
                uVar2 = uVar2 - *(int *)(param_41 + 0x30);
                iVar22 = (int)uVar2 >> 1;
                if (iVar22 < 0) {
                  iVar22 = iVar22 + (uint)((uVar2 & 1) != 0);
                }
                FUN_004323b8(0,iVar22);
                uVar15 = iVar16 - *(int *)(param_41 + 0x34);
                iVar22 = (int)uVar15 >> 1;
                if (iVar22 < 0) {
                  iVar22 = iVar22 + (uint)((uVar15 & 1) != 0);
                }
                iVar22 = FUN_004323b8(0,iVar22);
                FUN_00474474(param_40,param_2,iVar22 + local_a8);
              }
              else {
                uVar2 = uVar2 - *(int *)(param_41 + 0x30);
                iVar22 = (int)uVar2 >> 1;
                if (iVar22 < 0) {
                  iVar22 = iVar22 + (uint)((uVar2 & 1) != 0);
                }
                FUN_004323b8(0,iVar22);
                uVar15 = iVar16 - *(int *)(param_41 + 0x34);
                iVar22 = (int)uVar15 >> 1;
                if (iVar22 < 0) {
                  iVar22 = iVar22 + (uint)((uVar15 & 1) != 0);
                }
                iVar22 = FUN_004323b8(0,iVar22);
                FUN_00474474(param_41,param_2,iVar22 + local_a8);
              }
              goto LAB_004cc7df;
            }
          }
          if ((param_1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
            FUN_004039d4(**(undefined4 **)(param_1 + 0x30),local_334);
            bVar18 = local_334[0] == 0xffffffff;
            FUN_00403180(local_334,&DAT_004ccaa4);
            if ((bVar18) &&
               ((param_7 != '\0' ||
                ((cVar1 = FUN_004ae800(), cVar1 != '\0' && (cVar1 = FUN_004ae7f8(), cVar1 != '\0')))
                ))) {
              local_3c = 1;
              FUN_004070b8(iVar22,uVar21,local_214);
              FUN_004c9844(uVar4,local_214,param_41);
              goto LAB_004cc7df;
            }
          }
          if ((param_38 == '\0') && (param_40 != 0)) {
            FUN_00474474(param_40,param_2,iVar22);
          }
          else {
            FUN_00474474(param_41,param_2,iVar22);
          }
        }
      }
      else if (((int)uVar15 < 1) || ((int)uVar23 < 1)) {
        if (param_45 == 0) {
          bVar18 = true;
          FUN_00405378(param_44);
          if (bVar18) {
            if (param_30 == 0) {
              iVar22 = (int)(uVar2 - local_64) >> 1;
              if (iVar22 < 0) {
                iVar22 = iVar22 + (uint)((uVar2 - local_64 & 1) != 0);
              }
              iVar22 = FUN_004323b8(0,iVar22);
              iVar22 = iVar22 + local_a4[0];
              iVar3 = (int)(iVar16 - uVar20) >> 1;
              if (iVar3 < 0) {
                iVar3 = iVar3 + (uint)((iVar16 - uVar20 & 1) != 0);
              }
              iVar16 = FUN_004323b8(0,iVar3);
              FUN_004070b8(iVar16 + local_a8,iVar22,local_214);
              FUN_004c9b4c(uVar4,local_214,param_31);
            }
            else {
              diFlags = 3;
              hbrFlickerFreeDraw = (HBRUSH)0x0;
              UVar25 = 0;
              uVar15 = uVar20;
              uVar23 = local_64;
              hIcon = (HICON)FUN_00431a0c(param_30);
              iVar22 = (int)(uVar2 - local_64) >> 1;
              if (iVar22 < 0) {
                iVar22 = iVar22 + (uint)((uVar2 - local_64 & 1) != 0);
              }
              iVar22 = FUN_004323b8(0,iVar22);
              iVar22 = iVar22 + local_a4[0];
              iVar3 = (int)(iVar16 - uVar20) >> 1;
              if (iVar3 < 0) {
                iVar3 = iVar3 + (uint)((iVar16 - uVar20 & 1) != 0);
              }
              iVar16 = FUN_004323b8(0,iVar3);
              iVar16 = iVar16 + local_a8;
              pHVar5 = (HDC)FUN_0042b5a8(param_2);
              local_64 = 0x4cc500;
              DrawIconEx(pHVar5,iVar16,iVar22,hIcon,uVar15,uVar23,UVar25,hbrFlickerFreeDraw,diFlags)
              ;
            }
            goto LAB_004cc7df;
          }
        }
        FUN_004070b8(iVar22,uVar21,local_214);
        FUN_004c9b4c(uVar4,local_214,param_31);
      }
      else {
        if (param_45 == 0) {
          bVar18 = true;
          FUN_00405378(param_44);
          if (bVar18) {
            iVar22 = (int)(iVar16 - uVar20) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
            }
            local_84 = FUN_004323b8(0,iVar22);
            local_84 = local_84 + local_a8;
            iVar22 = (int)(uVar2 - local_64) >> 1;
            if (iVar22 < 0) {
              iVar22 = iVar22 + (uint)((uVar2 - local_64 & 1) != 0);
            }
            local_88 = FUN_004323b8(0,iVar22);
            local_88 = local_88 + local_a4[0];
            FUN_0040709c(local_84,local_88,local_84 + uVar15);
            FUN_004c9648(uVar4,param_2,local_1b4);
            goto LAB_004cc7df;
          }
        }
        FUN_0040709c(iVar22,uVar21,iVar22 + uVar15);
        FUN_004c9648(uVar4,param_2,local_1b4);
      }
    }
    else if (((int)uVar15 < 1) || ((int)uVar23 < 1)) {
      if (param_45 == 0) {
        bVar18 = true;
        FUN_00405378(param_44);
        if (bVar18) {
          iVar22 = (int)(uVar2 - local_64) >> 1;
          if (iVar22 < 0) {
            iVar22 = iVar22 + (uint)((uVar2 - local_64 & 1) != 0);
          }
          iVar22 = FUN_004323b8(0,iVar22);
          iVar22 = iVar22 + local_a4[0];
          iVar3 = (int)(iVar16 - uVar20) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((iVar16 - uVar20 & 1) != 0);
          }
          iVar16 = FUN_004323b8(0,iVar3);
          FUN_0042ae64(param_2,iVar16 + local_a8,iVar22);
          goto LAB_004cc7df;
        }
      }
      FUN_0042ae64(param_2,iVar22,uVar21);
    }
    else {
      (**(code **)(*param_26 + 0x3c))(param_26,1);
      if (param_45 == 0) {
        bVar18 = true;
        FUN_00405378(param_44);
        if (bVar18) {
          iVar22 = (int)(iVar16 - uVar20) >> 1;
          if (iVar22 < 0) {
            iVar22 = iVar22 + (uint)((iVar16 - uVar20 & 1) != 0);
          }
          local_84 = FUN_004323b8(0,iVar22);
          local_84 = local_84 + local_a8;
          iVar22 = (int)(uVar2 - local_64) >> 1;
          if (iVar22 < 0) {
            iVar22 = iVar22 + (uint)((uVar2 - local_64 & 1) != 0);
          }
          local_88 = FUN_004323b8(0,iVar22);
          local_88 = local_88 + local_a4[0];
          FUN_0040709c(local_84,local_88,local_84 + uVar15);
          FUN_0042b20c(param_2,local_1b4,param_26);
          goto LAB_004cc7df;
        }
      }
      FUN_0040709c(iVar22,uVar21,iVar22 + uVar15);
      FUN_0042b20c(param_2,local_1b4,param_26);
    }
  }
LAB_004cc7df:
  FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),1);
  if (param_36 == '\0') goto LAB_004cc95b;
  if ((param_35 & param_21) != 0) {
    uVar7 = FUN_00429e64(param_48);
    FUN_0042a88c(*(undefined4 *)(param_2 + 0x10),uVar7);
    if (param_32 == '\0') {
      FUN_0042b064(param_2,local_f8,local_f4);
      FUN_0042b004(param_2,local_f8,local_ec);
    }
    else {
      FUN_0042b064(param_2,local_f8,local_f4);
      FUN_0042b004(param_2,local_f0,local_f4);
    }
  }
  uVar15 = (local_f0 - local_f8) - 5;
  local_6c = (int)uVar15 >> 1;
  if (local_6c < 0) {
    local_6c = local_6c + (uint)((uVar15 & 1) != 0);
  }
  local_6c = local_6c + local_f8;
  if (param_32 == '\x01') {
LAB_004cc8b1:
    uVar15 = (local_ec - local_f4) - 3;
    iVar22 = (int)uVar15 >> 1;
    if (iVar22 < 0) {
      iVar22 = iVar22 + (uint)((uVar15 & 1) != 0);
    }
    local_68 = iVar22 + local_f4 + 1;
  }
  else {
    if (param_45 == 0) {
      bVar18 = true;
      FUN_00405378(param_44);
      if (bVar18) goto LAB_004cc8b1;
    }
    local_68 = local_90 + -8;
  }
  if ((param_7 == '\0') &&
     ((cVar1 = FUN_004ae800(), cVar1 == '\0' || (cVar1 = FUN_004ae7f8(), cVar1 == '\0')))) {
    if (param_34 == '\0') {
      FUN_004c8f34(param_2,&local_6c,0x808080);
    }
    else {
      FUN_004c8f34(param_2,&local_6c,0);
    }
  }
  else if (param_34 == '\0') {
    FUN_004c90cc(param_2,&local_6c,0x808080);
  }
  else {
    FUN_004c90cc(param_2,&local_6c,0);
  }
LAB_004cc95b:
  FUN_00403a84(uVar4);
  *in_FS_OFFSET = local_3c;
  FUN_004048f8(&local_234,3,local_34);
  FUN_004048f8(&local_20c,6);
  FUN_00404ff0(&local_1f4);
  FUN_004048f8(&local_1f0,2);
  FUN_00404ff0(&local_1e8);
  FUN_004048f8(&local_1e4,3);
  FUN_004048f8(&local_1d4,2);
  FUN_004048f8(&local_1cc,2);
  FUN_004048d4(&local_1c4);
  FUN_00404ff0(&local_1c0);
  FUN_004048d4(&local_1bc);
  FUN_00404ff0(&local_1b8);
  FUN_004048d4(&local_1a4);
  FUN_004048d4(local_a4 + 4);
  FUN_00404ff0(&param_44);
  FUN_004048d4(&param_45);
  return;
}

