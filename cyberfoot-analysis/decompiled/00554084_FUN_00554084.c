// Address: 00554084
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00554084(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5,int param_6,undefined1 *param_7,undefined1 *param_8,int param_9,
                 int param_10,undefined4 *param_11,undefined1 *param_12,int *param_13,uint *param_14
                 ,uint *param_15,uint *param_16,uint *param_17,char param_18,uint *param_19)

{
  bool bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined3 uVar12;
  undefined4 unaff_EBX;
  char *unaff_ESI;
  uint *puVar13;
  uint *in_FS_OFFSET;
  bool bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  uint auStackY_1870 [1504];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
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
  int local_ac;
  int local_a8;
  char *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  char *local_74;
  char local_6d;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int *local_50;
  uint local_4c;
  char *local_48;
  uint local_44;
  uint local_40;
  uint *puStackY_3c;
  char *pcStackY_38;
  int iVar18;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar17 = 0;
  local_20 = &stack0xfffffffc;
  iVar8 = 0x21;
  do {
    local_c = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  LOCK();
  UNLOCK();
  local_90[3] = uRam00000000;
  local_80 = uRam00000004;
  local_7c = uRam00000008;
  local_78 = iRam0000000c;
  local_24 = &LAB_00556da4;
  uStack_28 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  local_8 = param_1;
  FUN_004048d4(param_4);
  FUN_004048d4(&local_24);
  local_6c = 0;
  local_78 = local_78 - *param_15;
  *param_17 = 0;
  bVar1 = false;
  uStack_28 = (uint *)((uint)uStack_28 & 0xffff);
  *param_8 = 0;
  *param_7 = 0;
  local_94 = local_90[3];
  local_90[(uint)bVar17 * -2] = local_90[(uint)bVar17 * -2 + 4];
  local_90[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
       local_90[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
  (local_90 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
       (local_90 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
  FUN_004048d4(&local_10);
  if (param_18 == '\0') {
    local_94 = local_94 + param_6;
  }
  do {
    iVar18 = 0x556c94;
    iVar8 = FUN_00404ba4(*param_2);
    if (((iVar8 < 1) || (bVar1)) || (uStack_28._3_1_ != '\0')) {
      *param_17 = *param_17 - iVar18;
      if (*(int *)param_19[9] < (int)*param_17) {
        *(uint *)param_19[9] = *param_17 + 2;
      }
      if (((param_19[0x1c] == *(int *)param_19[7] - 1U) &&
          (*(char *)((int)param_19 + -0x2a) != '\0')) && (param_18 == '\0')) {
        param_19[-3] = local_94;
        param_19[-2] = local_90[2];
        pcStackY_38 = (char *)0x556d17;
        InflateRect((LPRECT)(param_19 + -5),1,0);
        param_19[-5] = local_90[3] + 1;
        param_19[-4] = param_19[-2];
      }
      FUN_00404928(param_4,local_10);
      puVar3 = local_20;
      *in_FS_OFFSET = (uint)uStack_28;
      local_20 = &LAB_00556dab;
      local_24 = (undefined1 *)0x556d55;
      FUN_004048f8(auStackY_1870 + 0x5d8,8,puVar3);
      local_24 = (undefined1 *)0x556d60;
      FUN_004048d4(&local_e0);
      local_24 = (undefined1 *)0x556d70;
      FUN_004048f8(&local_d4,8);
      local_24 = (undefined1 *)0x556d7b;
      FUN_004048d4(&local_b4);
      local_24 = (undefined1 *)0x556d86;
      FUN_004048d4(&local_b0);
      local_24 = (undefined1 *)0x556d96;
      FUN_004048f8(&local_a0,3);
      local_24 = (undefined1 *)0x556da3;
      FUN_004048f8(&local_24,7);
      return;
    }
    local_44 = FUN_00404ee8(&DAT_00556dbc,*param_2);
    if ((char)param_19[0x13] == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00404ee8(&DAT_00556dc8,*param_2);
    }
    if (((int)local_44 < 1) || ((iVar8 <= (int)local_44 && (iVar8 != 0)))) {
      if (iVar8 < 1) {
        FUN_0040496c(&local_c,*param_2);
      }
      else {
        FUN_00404e04(*param_2,1,iVar8);
      }
    }
    else {
      FUN_00404e04(*param_2,1,local_44 - 1);
    }
    iVar8 = FUN_00404ba4(local_c);
    while (iVar18 = FUN_00404ee8("&nbsp;",local_c), 0 < iVar18) {
      FUN_00553fc8("&nbsp;",&DAT_00556dc8,&local_c);
    }
    while (iVar18 = FUN_00404ee8(&DAT_00556de4,local_c), 0 < iVar18) {
      FUN_00553fc8(&DAT_00556de4,&DAT_00556dbc,&local_c);
    }
    while (iVar18 = FUN_00404ee8(&DAT_00556e00,local_c), 0 < iVar18) {
      FUN_00553fc8(&DAT_00556e00,&DAT_00556df4,&local_c);
    }
    local_68 = FUN_00404ba4(local_c);
    if (0 < iVar8) {
      uVar6 = FUN_004af3c4(local_8,local_c,param_19[-6]);
      uVar10 = (int)uVar6 >> 1;
      if ((*(char *)((int)param_19 + -0x19) != '\0') && ((int)*param_15 < (int)(uVar6 >> 2))) {
        uVar9 = uVar10;
        if ((int)uVar10 < 0) {
          uVar9 = uVar10 + ((uVar6 & 1) != 0);
        }
        *param_15 = uVar9;
      }
      if ((*(char *)((int)param_19 + -0x1a) != '\0') && ((int)*param_14 < (int)(uVar6 >> 2))) {
        if ((int)uVar10 < 0) {
          uVar10 = uVar10 + ((uVar6 & 1) != 0);
        }
        *param_14 = uVar10;
      }
      if ((int)*param_16 < (int)uVar6) {
        *param_16 = uVar6;
      }
      FUN_00404bac(param_19[0xb],local_c);
      if (*(char *)((int)param_19 + -0x1b) != '\0') {
        FUN_00404e44(param_2,1,iVar8);
      }
      local_74 = (char *)FUN_0042ab64(param_19[-8]);
      cVar4 = FUN_0042ac80(param_19[-8]);
      if (cVar4 == '\x01') {
        local_74 = (char *)0x1fffffff;
      }
      if (*(char *)((int)param_19 + -0x1b) == '\0') {
        bVar14 = param_18 == '\0';
        if (bVar14) {
          if (*(char *)((int)param_19 + -0x1a) != '\0') {
            local_90[2] = local_90[2] - *param_14;
            iVar18 = (int)*param_14 >> 1;
            if (iVar18 < 0) {
              iVar18 = iVar18 + (uint)((*param_14 & 1) != 0);
            }
            local_90[0] = local_90[0] - iVar18;
          }
          if (*(char *)((int)param_19 + -0x19) != '\0') {
            local_90[2] = local_90[2] + *param_15;
            iVar18 = (int)*param_15 >> 1;
            if (iVar18 < 0) {
              iVar18 = iVar18 + (uint)((*param_15 & 1) != 0);
            }
            local_90[0] = local_90[0] + iVar18;
          }
          local_90[2] = local_90[2] - *param_13;
          uVar15 = *(char *)((int)param_19 + -0x21) == '\0';
          if (!(bool)uVar15) {
            FUN_0040715c(&local_94,param_19[0x1a],param_19[0x1a]);
            local_58 = *(int *)(param_19[-6] + 0x18);
            FUN_0042a3a0(param_19[-6],param_19[0xd]);
            pcStackY_38 = local_74;
            puStackY_3c = (uint *)0x5543b2;
            FUN_004af154(local_8,local_c,local_68);
            uVar15 = -param_19[0x1a] == 0;
            puStackY_3c = (uint *)0x5543cd;
            FUN_0040715c(&local_94,-param_19[0x1a],-param_19[0x1a]);
            puStackY_3c = (uint *)0x5543db;
            FUN_0042a3a0(param_19[-6],local_58);
          }
          FUN_00404cf0(local_c,&DAT_00556dc8);
          if ((bool)uVar15) {
            uStack_28 = (uint *)0x1fffffff;
            puStackY_3c = (uint *)0x554417;
            FUN_004af154(local_8,local_c,local_68);
          }
          else {
            param_19[-10] = param_19[-10] & 0xfffffbff;
            *(undefined1 *)((int)param_19 + -0x29) = 0;
            uVar6 = FUN_0042a660(param_19[-6]);
            if ((uVar6 & 4) != 0) {
              FUN_0040496c(param_19 + -1,*param_2);
              uVar7 = FUN_00404ba4(local_c);
              FUN_00404e44(param_19 + -1,1,uVar7);
              iVar18 = FUN_00404ee8(&DAT_00556dc8,param_19[-1]);
              if (0 < iVar18) {
                uVar7 = FUN_00404ee8(&DAT_00556dc8,param_19[-1]);
                FUN_00404e04(param_19[-1],1,uVar7);
                iVar18 = FUN_00404ee8(&DAT_00556dbc,param_19[-1]);
                if (0 < iVar18) {
                  iVar18 = FUN_00404ee8(&DAT_00556dbc,param_19[-1]);
                  FUN_00404e04(param_19[-1],1,iVar18 + -1);
                }
              }
              unaff_ESI = (char *)0x1fffffff;
              puStackY_3c = (uint *)0x55450c;
              iVar18 = FUN_00404ba4(param_19[-1]);
              puStackY_3c = (uint *)(iVar18 + local_68);
              local_40 = 0x554524;
              FUN_00404bf0(&local_98,local_c,param_19[-1]);
              puVar11 = puStackY_3c;
              puStackY_3c = (uint *)0x554533;
              FUN_004af154(local_8,local_98,puVar11);
              if (param_19[-1] != 0) {
                puStackY_3c = (uint *)0x55454c;
                iVar18 = FUN_00404ee8(&DAT_00556dc8,*param_2);
                if (iVar18 < 1) {
LAB_005545c4:
                  puStackY_3c = &local_94;
                  local_40 = param_19[-6];
                  local_44 = param_19[-10] & 0xfffffdff;
                  local_48 = local_74;
                  local_4c = 0x5545f0;
                  FUN_004af154(local_8,local_c,local_68);
                }
                else {
                  puStackY_3c = (uint *)0x55455c;
                  puStackY_3c = (uint *)FUN_00404ee8(&DAT_00556dc8,*param_2);
                  local_40 = 0x55456a;
                  FUN_004095b0(*param_2,&local_9c);
                  local_40 = 0x55457a;
                  iVar18 = FUN_00404ee8(&DAT_00556e10,local_9c);
                  if (iVar18 <= (int)puStackY_3c) goto LAB_005545c4;
                  puStackY_3c = &local_94;
                  local_40 = param_19[-6];
                  local_44 = param_19[-10] & 0xfffffdff;
                  local_48 = local_74;
                  local_4c = 0x5545b0;
                  FUN_00404bf0(&local_a0,local_c,&DAT_00556e1c);
                  local_4c = 0x5545c2;
                  FUN_004af154(local_8,local_a0,local_68 + 1);
                }
                *(undefined1 *)((int)param_19 + -0x29) = 1;
              }
            }
            pcVar2 = local_74;
            if (*(char *)((int)param_19 + -0x29) == '\0') {
              local_20 = (undefined1 *)param_19[-6];
              local_24 = (undefined1 *)(param_19[-10] & 0xfffffdff);
              FUN_004af154(local_8,local_c,local_68);
              unaff_ESI = pcVar2;
            }
            local_20 = (undefined1 *)param_19[-6];
            local_24 = (undefined1 *)(param_19[-10] | 0x400);
            uStack_28 = (uint *)0x1fffffff;
            FUN_004af154(local_8,local_c,local_68);
          }
          if ((*(char *)((int)param_19 + -0x2a) != '\0') &&
             (*(int *)param_19[7] - 1U == param_19[0x1c])) {
            FUN_00404928(param_19[10],param_19[-0xc]);
          }
          if (*(char *)((int)param_19 + -0x31) != '\0') {
            iVar18 = (int)local_94 >> 1;
            if (iVar18 < 0) {
              iVar18 = iVar18 + (uint)((local_94 & 1) != 0);
            }
            local_4c = iVar18 * 2;
            uVar6 = local_4c & 0x80000003;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
            }
            if (uVar6 == 0) {
              local_48 = (char *)0x2;
            }
            else {
              local_48 = (char *)0x0;
            }
            uVar7 = FUN_004b1cd0(0xff,0xff);
            uVar6 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar7);
            param_19[-0xe] = uVar6;
            for (; (int)local_4c < (int)local_90[1]; local_4c = local_4c + 2) {
              if (local_48 == (char *)0x2) {
                local_48 = (char *)0x0;
              }
              else {
                local_48 = (char *)0x2;
              }
              local_a4 = (char *)((local_78 - 3) + (int)local_48 + -1);
              local_a8 = local_4c + 2;
              local_ac = ((local_78 - 3) - (int)local_48) + 1;
              pcStackY_38 = (char *)(float)local_ac;
              puStackY_3c = (uint *)0x554766;
              FUN_004b18c0(local_8,param_19[-0xe]);
            }
            if (local_48 == (char *)0x2) {
              local_48 = (char *)0x0;
            }
            else {
              local_48 = (char *)0x2;
            }
            local_a4 = local_48 + (local_78 - 4);
            local_a8 = local_4c + 2;
            local_ac = (local_78 - (int)local_48) + -2;
            pcStackY_38 = (char *)(float)local_ac;
            puStackY_3c = (uint *)0x5547f8;
            FUN_004b18c0(local_8,param_19[-0xe]);
            FUN_00403a84(param_19[-0xe]);
          }
          local_94 = local_90[1];
          local_90[1] = local_7c;
          local_90[2] = local_78;
          local_90[0] = local_80;
        }
        else {
          local_94 = local_90[3];
          local_90[(uint)bVar17 * -2] = local_90[(uint)bVar17 * -2 + 4];
          local_90[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               local_90[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
          (local_90 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
               (local_90 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
          FUN_00404cf0(local_c,&DAT_00556dc8);
          if (bVar14) {
            local_90[1] = local_94;
          }
          else {
            pcStackY_38 = (char *)0x1fffffff;
            puStackY_3c = (uint *)0x55488a;
            FUN_004af154(local_8,local_c,local_68);
          }
          local_6c = local_90[1] - local_94;
          *param_17 = *param_17 + local_6c;
          if (((((int)(*param_17 - local_6c) <= (int)(param_10 - local_94)) &&
               ((int)(param_10 - local_94) <= (int)*param_17)) &&
              (*(char *)((int)param_19 + -0x2a) != '\0')) &&
             ((*param_8 = 1, (int)local_90[0] < param_9 &&
              (iVar18 = FUN_004af3c4(local_8,&DAT_00556e28,param_19[-6]),
              param_9 < (int)(iVar18 + local_90[0]))))) {
            FUN_00404928(param_19[0xc],param_19[-0xc]);
            *(undefined1 *)((int)param_19 + -0x39) = 1;
          }
        }
        iVar18 = (local_7c - local_90[3]) - param_19[-0x10];
        puVar11 = param_17;
        if ((iVar18 < (int)*param_17) && (puVar11 = param_19, local_6c < iVar18)) {
          local_6d = '\0';
        }
        else {
          local_6d = '\x01';
        }
        if (((local_6d == '\0') && (iVar18 = FUN_00404ba4(local_24,puVar11), 0 < iVar18)) &&
           (iVar18 = FUN_00404ba4(local_24), local_24[iVar18 + -1] != ' ')) {
          local_6d = '\x01';
        }
        FUN_00404bac(&local_24,local_c);
        if ((local_6d == '\0') && ((char)param_19[0x13] != '\0')) {
          bVar1 = true;
          *param_17 = *param_17 - local_6c;
        }
        else {
          FUN_00404e04(*param_2,1,iVar8);
          FUN_00404bac(&local_10,local_b0);
          FUN_00404e44(param_2,1,iVar8);
          FUN_00404ba4(local_c);
        }
      }
    }
    local_44 = FUN_00404ee8(&DAT_00556dbc,*param_2);
    if ((local_44 == 1) && (iVar8 = FUN_00404ba4(*param_2), iVar8 < 3)) {
      FUN_004048d4(param_2);
    }
    if (((!bVar1) && (local_44 == 1)) && (iVar8 = FUN_00404ba4(*param_2), 2 < iVar8)) {
      if ((*(char *)(*param_2 + 1) == '/') && (iVar8 = FUN_00404ba4(*param_2), 3 < iVar8)) {
        uVar15 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
        switch(uVar15) {
        case 0x41:
          if ((((char)param_19[0x14] == '\0') || (param_19[0x1b] == *(uint *)param_19[7])) &&
             (param_18 == '\0')) {
            bVar5 = FUN_0042a660(param_19[-6]);
            uVar6 = ~CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_00556e2c);
            FUN_0042a66c(param_19[-6],CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & bVar5));
            if ((param_19[0xf] != 0x1fffffff) &&
               (FUN_0042ab6c(param_19[-8],param_19[-0x11]), param_19[-0x11] == 0x1fffffff)) {
              FUN_0042ac88(param_19[-8],1);
            }
            if (param_19[0xe] != 0x1fffffff) {
              FUN_0042a3a0(param_19[-6],param_19[0xe]);
            }
          }
          if ((char)param_19[0x16] == '\0') {
            FUN_0042a3a0(param_19[-6],*(undefined4 *)(param_19[-0x12] + 0x18));
          }
          *(undefined1 *)((int)param_19 + -0x2a) = 0;
          if (*(char *)((int)param_19 + -0x39) != '\0') {
            param_19[-0x13] = local_78;
            param_19[-0x14] = *param_17 + local_90[3];
            if (param_19[-0x15] != local_80) {
              param_19[-0x16] = local_90[3];
              param_19[-0x15] = local_80;
            }
            puVar13 = (uint *)param_19[5] + (uint)bVar17 * -2 + 1;
            puVar11 = param_19 + (uint)bVar17 * -2 + -0x15;
            *(uint *)param_19[5] = param_19[-0x16];
            *puVar13 = *puVar11;
            puVar13[(uint)bVar17 * -2 + 1] = puVar11[(uint)bVar17 * -2 + 1];
            (puVar13 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (puVar11 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            *(undefined4 *)param_19[6] = *(undefined4 *)param_19[7];
            *(undefined1 *)((int)param_19 + -0x39) = 0;
          }
          if (param_19[0x1c] == *(int *)param_19[7] - 1U) {
            param_19[-3] = local_94;
            param_19[-2] = local_90[2] - *param_13;
            iVar8 = FUN_004af3c4(local_8,&DAT_00556e28,param_19[-6]);
            param_19[-4] = param_19[-2] - iVar8;
            pcStackY_38 = (char *)0x554c20;
            InflateRect((LPRECT)(param_19 + -5),1,0);
          }
          break;
        case 0x42:
          if (*(char *)(*param_2 + 3) == '>') {
            bVar5 = FUN_0042a660(param_19[-6]);
            uVar6 = ~CONCAT31((int3)((uint)extraout_EDX_00 >> 8),DAT_00556e30);
            FUN_0042a66c(param_19[-6],CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & bVar5));
          }
          else {
            FUN_0042a3a0(param_19[-6],*(undefined4 *)(param_19[-0x12] + 0x18));
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)((int)param_19 + -0x31) = 0;
          }
          break;
        case 0x46:
          FUN_0042a5b0(param_19[-0x12],&local_b4);
          FUN_0042a5c8(param_19[-6],local_b4);
          uVar7 = FUN_0042a624(param_19[-0x12]);
          FUN_0042a640(param_19[-6],uVar7);
          if ((param_18 == '\0') && ((char)param_19[0x16] == '\0')) {
            FUN_0042a3a0(param_19[-6],*(undefined4 *)(param_19[-0x12] + 0x18));
            FUN_0042ab6c(param_19[-8],param_19[-0x17]);
            if (param_19[-0x17] == 0x1fffffff) {
              FUN_0042ac88(param_19[-8],1);
            }
          }
          break;
        case 0x48:
          if (param_18 == '\0') {
            FUN_0042a3a0(param_19[-6],param_19[-0x18]);
            FUN_0042ab6c(param_19[-8],param_19[-0x19]);
            if (param_19[-0x19] == 0x1fffffff) {
              FUN_0042ac88(param_19[-8],1);
            }
          }
          break;
        case 0x49:
          bVar5 = FUN_0042a660(param_19[-6]);
          uVar6 = ~CONCAT31((int3)((uint)extraout_EDX_02 >> 8),DAT_00556e38);
          FUN_0042a66c(param_19[-6],CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & bVar5));
          break;
        case 0x4c:
          bVar1 = true;
          break;
        case 0x4f:
          *param_5 = 0;
          break;
        case 0x50:
          bVar1 = true;
          if (param_18 == '\0') {
            FUN_0042ab6c(param_19[-8],param_19[-0x1a]);
            if (param_19[-0x1a] == 0x1fffffff) {
              FUN_0042ac88(param_19[-8],1);
            }
            *(undefined1 *)((int)param_19 + -0x69) = 0;
          }
          break;
        case 0x53:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 3)));
          if (cVar4 == 'U') {
            *(undefined1 *)((int)param_19 + -0x1a) = 0;
            *(undefined1 *)((int)param_19 + -0x19) = 0;
          }
          else if (cVar4 == 'H') {
            *(undefined1 *)((int)param_19 + -0x21) = 0;
          }
          else {
            bVar5 = FUN_0042a660(param_19[-6]);
            uVar6 = ~CONCAT31((int3)((uint)extraout_EDX_01 >> 8),DAT_00556e34);
            FUN_0042a66c(param_19[-6],CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & bVar5));
          }
          break;
        case 0x55:
          if ((*(char *)(*param_2 + 3) == '>') || ((int)param_19[-0x1c] < 1)) {
            bVar5 = FUN_0042a660(param_19[-6]);
            uVar6 = ~CONCAT31((int3)((uint)extraout_EDX_03 >> 8),DAT_00556e2c);
            FUN_0042a66c(param_19[-6],CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & bVar5));
          }
          else {
            param_19[-0x1c] = param_19[-0x1c] - 1;
          }
          break;
        case 0x5a:
          *(undefined1 *)((int)param_19 + -0x1b) = 0;
        }
      }
      else {
        uVar15 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 1)));
        switch(uVar15) {
        case 0x41:
          if ((param_19[0x1c] == *(uint *)param_19[7]) && (param_18 == '\0')) {
            param_19[-5] = local_94;
            param_19[-4] = local_90[0];
          }
          *(int *)param_19[7] = *(int *)param_19[7] + 1;
          if ((((char)param_19[0x14] == '\0') || (param_19[0x1b] == *(uint *)param_19[7])) &&
             (param_18 == '\0')) {
            bVar5 = FUN_0042a660(param_19[-6]);
            FUN_0042a66c(param_19[-6],bVar5 | DAT_00556e2c);
            if (param_19[0xf] != 0x1fffffff) {
              uVar6 = FUN_0042ab64(param_19[-8]);
              param_19[-0x11] = uVar6;
              cVar4 = FUN_0042ac80(param_19[-8]);
              if (cVar4 == '\x01') {
                param_19[-0x11] = 0x1fffffff;
              }
              FUN_0042ab6c(param_19[-8],param_19[0xf]);
            }
            if (param_19[0xe] != 0x1fffffff) {
              param_19[-0x1d] = *(uint *)(param_19[-6] + 0x18);
              FUN_0042a3a0(param_19[-6],param_19[0xe]);
            }
          }
          if (((char)param_19[0x16] == '\0') &&
             (((param_19[0xe] == 0x1fffffff || (param_19[0x1b] != *(uint *)param_19[7])) ||
              ((char)param_19[0x14] == '\0')))) {
            FUN_0042a3a0(param_19[-6],param_19[0x10]);
          }
          iVar8 = FUN_00404ee8(&DAT_00556df4,*param_2);
          FUN_00404e04(*param_2,3,iVar8 + -1);
          iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_EBX);
          iVar8 = iVar8 + 1;
          uVar7 = FUN_00404ba4(unaff_EBX);
          FUN_00404e04(unaff_EBX,iVar8,uVar7);
          iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
          FUN_00404e04(unaff_ESI,1,iVar8 + -1);
          FUN_0040496c(param_19 + -0xc,unaff_ESI);
          *(undefined1 *)((int)param_19 + -0x2a) = 1;
          param_19[-0x16] = *param_17;
          param_19[-0x15] = local_80;
          break;
        case 0x42:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar4 == '>') {
            bVar5 = FUN_0042a660(param_19[-6]);
            FUN_0042a66c(param_19[-6],bVar5 | DAT_00556e30);
          }
          else if (cVar4 == 'L') {
            if ((char)param_19[0x15] == '\0') {
              FUN_0042a3a0(param_19[-6],param_19[-0x1e]);
            }
          }
          else if (cVar4 == 'O') {
            uVar7 = FUN_00404ee8(&DAT_00556df4,*param_2);
            FUN_00404e04(*param_2,1,uVar7);
            FUN_00404bac(&local_10,local_b8);
            if ((param_18 == '\0') && ((char)param_19[0x16] == '\0')) {
              iVar8 = FUN_00404ee8(&DAT_00556df4,*param_2);
              FUN_00404e04(*param_2,6,iVar8 + -1);
              FUN_004095b0(local_bc,&stack0xffffffec);
              iVar8 = FUN_00553f60("BGCOLOR",unaff_EBX,&local_44);
              if (0 < iVar8) {
                uVar7 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
                iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                iVar8 = iVar8 + 1;
                uVar7 = FUN_00404ba4(unaff_ESI);
                FUN_00404e04(unaff_ESI,iVar8,uVar7);
                iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                FUN_00404e04(unaff_ESI,1,iVar8 + -1);
                local_58 = 0x1fffffff;
                iVar8 = FUN_00404ba4(unaff_ESI);
                if (0 < iVar8) {
                  if (*unaff_ESI == '#') {
                    local_58 = FUN_00553c40(unaff_ESI);
                  }
                  else {
                    FUN_00409724(unaff_ESI,&local_c0);
                    local_58 = FUN_00553468(local_c0);
                  }
                }
                iVar8 = FUN_00553f60("BGCOLORTO",unaff_EBX,&local_44);
                if (iVar8 < 1) {
                  uVar6 = FUN_0042ab64(param_19[-8]);
                  param_19[-0x17] = uVar6;
                  FUN_0042ab6c(param_19[-8],local_58);
                }
                else {
                  uVar7 = FUN_00404ba4(unaff_EBX);
                  FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
                  iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                  iVar8 = iVar8 + 1;
                  uVar7 = FUN_00404ba4(unaff_ESI);
                  FUN_00404e04(unaff_ESI,iVar8,uVar7);
                  iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                  FUN_00404e04(unaff_ESI,1,iVar8 + -1);
                  local_5c = 0x1fffffff;
                  iVar8 = FUN_00404ba4(unaff_ESI);
                  if (0 < iVar8) {
                    if (*unaff_ESI == '#') {
                      local_5c = FUN_00553c40(unaff_ESI);
                    }
                    else {
                      FUN_00409724(unaff_ESI,&local_c4);
                      local_5c = FUN_00553468(local_c4);
                    }
                  }
                  FUN_0040496c(&stack0xffffffe8,&DAT_00556e80);
                  iVar8 = FUN_00553f60(&DAT_00556e8c,unaff_EBX,&local_44);
                  if (0 < iVar8) {
                    uVar7 = FUN_00404ba4(unaff_EBX);
                    FUN_00404e04(unaff_EBX,local_44 + 3,uVar7);
                    iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                    iVar8 = iVar8 + 1;
                    uVar7 = FUN_00404ba4(unaff_ESI);
                    FUN_00404e04(unaff_ESI,iVar8,uVar7);
                    iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                    FUN_00404e04(unaff_ESI,1,iVar8 + -1);
                  }
                  FUN_0042ac88(param_19[-8],1);
                }
              }
            }
          }
          else if (cVar4 == 'R') {
            bVar1 = true;
            FUN_00404bac(param_19[0xb],&DAT_00556e50);
          }
          break;
        case 0x45:
          if (param_18 == '\0') {
            *(undefined1 *)((int)param_19 + -0x31) = 1;
          }
          break;
        case 0x46:
          iVar8 = FUN_00553f60(&DAT_00556df4,*param_2,&local_44);
          if (0 < iVar8) {
            FUN_00404e04(*param_2,6,local_44 - 6);
            FUN_004095b0(auStackY_1870[0x5db],&stack0xffffffec);
            iVar8 = FUN_00553f60(&DAT_00557020,unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 4,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              FUN_0042a5c8(param_19[-6],unaff_ESI);
            }
            iVar8 = FUN_00553f60(" COLOR",unaff_EBX,&local_44);
            if ((0 < iVar8) && ((char)param_19[0x16] == '\0')) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 6,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              iVar8 = FUN_00404ba4(unaff_ESI);
              if (0 < iVar8) {
                if (*unaff_ESI == '#') {
                  uVar7 = FUN_00553c40(unaff_ESI);
                  FUN_0042a3a0(param_19[-6],uVar7);
                }
                else {
                  FUN_00409724(unaff_ESI,auStackY_1870 + 0x5da);
                  uVar7 = FUN_00553468(auStackY_1870[0x5da]);
                  FUN_0042a3a0(param_19[-6],uVar7);
                }
              }
            }
            iVar8 = FUN_00553f60("BGCOLOR",unaff_EBX,&local_44);
            if (((0 < iVar8) && (param_18 == '\0')) && ((char)param_19[0x16] == '\0')) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 7,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              uVar6 = FUN_0042ab64(param_19[-8]);
              param_19[-0x17] = uVar6;
              cVar4 = FUN_0042ac80(param_19[-8]);
              if (cVar4 == '\x01') {
                param_19[-0x17] = 0x1fffffff;
              }
              iVar8 = FUN_00404ba4(unaff_ESI);
              if (0 < iVar8) {
                if (*unaff_ESI == '#') {
                  uVar7 = FUN_00553c40(unaff_ESI);
                  FUN_0042ab6c(param_19[-8],uVar7);
                }
                else {
                  FUN_00409724(unaff_ESI,auStackY_1870 + 0x5d9);
                  uVar7 = FUN_00553468(auStackY_1870[0x5d9]);
                  FUN_0042ab6c(param_19[-8],uVar7);
                }
              }
            }
            iVar8 = FUN_00553f60(&DAT_00557040,unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 4,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00557050,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              uVar7 = FUN_00553d7c(unaff_ESI);
              switch(uVar7) {
              default:
                uVar7 = FUN_00553d7c(unaff_ESI);
                FUN_0042a640(param_19[-6],uVar7);
                break;
              case 1:
                FUN_0042a640(param_19[-6],8);
                break;
              case 2:
                FUN_0042a640(param_19[-6],10);
                break;
              case 3:
                FUN_0042a640(param_19[-6],0xc);
                break;
              case 4:
                FUN_0042a640(param_19[-6],0xe);
                break;
              case 5:
                FUN_0042a640(param_19[-6],0x10);
              }
            }
          }
          break;
        case 0x48:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar4 == 'I') {
            if (param_18 == '\0') {
              param_19[-0x18] = *(uint *)(param_19[-6] + 0x18);
              uVar6 = FUN_0042ab64(param_19[-8]);
              param_19[-0x19] = uVar6;
              cVar4 = FUN_0042ac80(param_19[-8]);
              if (cVar4 == '\x01') {
                param_19[-0x19] = 0x1fffffff;
              }
              FUN_0042ab6c(param_19[-8],0xff00000d);
              FUN_0042a3a0(param_19[-6],0xff00000e);
            }
          }
          else if ((cVar4 == 'R') && (bVar1 = true, param_18 == '\0')) {
            uVar7 = FUN_004b1cd0(0xff,0);
            uVar6 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar7);
            param_19[-0xe] = uVar6;
            local_a4 = (char *)(local_90[2] + 1);
            local_a8 = local_90[2] + 1;
            pcStackY_38 = (char *)(float)local_a8;
            puStackY_3c = (uint *)0x5554a5;
            FUN_004b18c0(local_8,param_19[-0xe]);
            FUN_00403a84(param_19[-0xe]);
          }
          break;
        case 0x49:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar4 == '>') {
            bVar5 = FUN_0042a660(param_19[-6]);
            FUN_0042a66c(param_19[-6],bVar5 | DAT_00556e38);
          }
          else if (cVar4 == 'N') {
            iVar8 = FUN_00404ee8(&DAT_00556df4,*param_2);
            FUN_00404e04(*param_2,3,iVar8 + -1);
            iVar8 = FUN_00553cf8(&DAT_00556e98,unaff_EBX);
            iVar8 = iVar8 + 2;
            uVar7 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            iVar8 = iVar8 + 1;
            iVar18 = 0x5555b8;
            uVar7 = FUN_00404ba4(unaff_ESI);
            FUN_00404e04(unaff_ESI,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            FUN_00404e04(unaff_ESI,1,iVar8 + -1);
            uVar6 = FUN_0040343c(unaff_ESI,&stack0xffffffcc);
            if ((iVar18 == 0) && ((int)*param_17 < (int)uVar6)) {
              *param_17 = uVar6;
              local_94 = param_19[-0x22] + uVar6;
            }
          }
          else if (cVar4 == 'M') {
            param_19[-0x23] = param_19[-0x23] + 1;
            iVar8 = FUN_00404ee8(&DAT_00556df4,*param_2);
            FUN_00404e04(*param_2,3,iVar8 + -1);
            FUN_004095b0(unaff_EBX,&local_c8);
            iVar8 = FUN_00404ee8(&DAT_00556ea4,local_c8);
            iVar8 = iVar8 + 4;
            uVar7 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            iVar8 = iVar8 + 1;
            uVar7 = FUN_00404ba4(unaff_ESI);
            FUN_00404e04(unaff_ESI,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            FUN_00404e04(unaff_ESI,1,iVar8 + -1);
            FUN_004095b0(unaff_EBX,&local_cc);
            FUN_0040496c(&stack0xffffffec,local_cc);
            iVar8 = FUN_00404ee8(&DAT_00556eb0,unaff_EBX);
            if ((0 < iVar8) && (param_19[-0x24] == param_19[-0x23])) {
              iVar8 = FUN_00404ee8(&DAT_00556eb0,unaff_EBX);
              iVar8 = iVar8 + 4;
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
            }
            local_60 = 0;
            local_64 = 0;
            iVar8 = FUN_00404ee8("WIDTH",unaff_EBX);
            if (0 < iVar8) {
              iVar8 = FUN_00404ee8("WIDTH",unaff_EBX);
              iVar8 = iVar8 + 6;
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,local_20);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(local_20);
              FUN_00404e04(local_20,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,local_20);
              FUN_00404e04(local_20,1,iVar8 + -1);
              local_60 = FUN_0040343c(local_20,&stack0xffffffcc);
            }
            iVar8 = FUN_00404ee8("HEIGHT",unaff_EBX);
            if (0 < iVar8) {
              iVar8 = FUN_00553cf8("HEIGHT",unaff_EBX);
              iVar8 = iVar8 + 7;
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,local_20);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(local_20);
              FUN_00404e04(local_20,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,local_20);
              FUN_00404e04(local_20,1,iVar8 + -1);
              local_64 = FUN_0040343c(local_20,&stack0xffffffcc);
            }
            param_19[-0x26] = 0;
            param_19[-0x25] = 0;
            FUN_004095b0(unaff_ESI,&local_d0);
            iVar8 = FUN_00404ee8(&DAT_00556edc,local_d0);
            uVar12 = (undefined3)((uint)param_19 >> 8);
            if ((0 < iVar8) && (FUN_00404e44(&stack0xffffffe8,1,4), param_19[0x1f] != 0)) {
              iVar8 = FUN_00553d7c(unaff_ESI);
              iVar18 = FUN_00473f5c(param_19[0x1f]);
              if (iVar8 < iVar18) {
                param_19[-0x26] = *(uint *)(param_19[0x1f] + 0x34);
                param_19[-0x25] = *(uint *)(param_19[0x1f] + 0x30);
                if ((param_18 == '\0') && ((char)param_19[0x17] == '\0')) {
                  uVar6 = FUN_0042acbc(PTR_PTR_00428c7c,CONCAT31(uVar12,1));
                  param_19[-0x27] = uVar6;
                  uVar7 = FUN_004af110(local_8);
                  FUN_0042b628(param_19[-0x27],uVar7);
                  FUN_00553d7c(unaff_ESI);
                  pcStackY_38 = (char *)0x5559bb;
                  FUN_00474474(param_19[0x1f],param_19[-0x27],local_94);
                  uVar7 = FUN_0042b5a8(param_19[-0x27]);
                  FUN_004af134(local_8,uVar7);
                  FUN_00403a84(param_19[-0x27]);
                }
              }
            }
            FUN_004095b0(unaff_ESI,&local_d4);
            iVar8 = FUN_00404ee8("SSYS:",local_d4);
            if (0 < iVar8) {
              FUN_00404e44(&stack0xffffffe8,1,5);
              uVar6 = FUN_0042acbc(PTR_PTR_00428c7c,1);
              param_19[-0x27] = uVar6;
              uVar7 = FUN_004af110(local_8);
              FUN_0042b628(param_19[-0x27],uVar7);
              pcStackY_38 = (char *)CONCAT31(uVar12,(char)param_19[0x17]);
              puStackY_3c = (uint *)param_19[0x12];
              local_40 = param_19[0x11];
              uStack_28 = &local_dc;
              local_48 = (char *)0x555a83;
              FUN_00553264(param_19[-0x27],local_94,local_90[0]);
              param_19[-0x26] = local_dc;
              param_19[-0x25] = local_d8;
              local_48 = (char *)0x555aac;
              uVar7 = FUN_0042b5a8(param_19[-0x27]);
              local_48 = (char *)0x555ab6;
              FUN_004af134(local_8,uVar7);
              local_48 = (char *)0x555ac4;
              FUN_00403a84(param_19[-0x27]);
              param_19[-0x26] = param_19[-0x26];
              param_19[-0x25] = param_19[-0x25];
            }
            FUN_004095b0(unaff_ESI,&local_e0);
            iVar8 = FUN_00404ee8("LSYS:",local_e0);
            if (0 < iVar8) {
              FUN_00404e44(&stack0xffffffe8,1,5);
              uVar6 = FUN_0042acbc(PTR_PTR_00428c7c,1);
              param_19[-0x27] = uVar6;
              uVar7 = FUN_004af110(local_8);
              FUN_0042b628(param_19[-0x27],uVar7);
              pcStackY_38 = (char *)CONCAT31(uVar12,(char)param_19[0x17]);
              puStackY_3c = (uint *)param_19[0x12];
              local_40 = param_19[0x11];
              uStack_28 = &local_dc;
              local_48 = (char *)0x555b8a;
              FUN_00553264(param_19[-0x27],local_94,local_90[0]);
              param_19[-0x26] = local_dc;
              param_19[-0x25] = local_d8;
              local_48 = (char *)0x555bb3;
              uVar7 = FUN_0042b5a8(param_19[-0x27]);
              local_48 = (char *)0x555bbd;
              FUN_004af134(local_8,uVar7);
              local_48 = (char *)0x555bcb;
              FUN_00403a84(param_19[-0x27]);
              param_19[-0x26] = param_19[-0x26];
              param_19[-0x25] = param_19[-0x25];
            }
            local_50 = (int *)0x0;
            iVar8 = FUN_00404ee8(&DAT_00556f0c,unaff_ESI);
            if ((iVar8 == 0) && (param_19[3] != 0)) {
              local_50 = (int *)(**(code **)(*(int *)param_19[3] + 0x30))
                                          ((int *)param_19[3],unaff_ESI);
            }
            if ((local_50 != (int *)0x0) &&
               (cVar4 = (**(code **)(*local_50 + 0x1c))(), cVar4 == '\0')) {
              if (param_18 == '\0') {
                if (((int)local_60 < 1) || ((int)local_64 < 1)) {
                  FUN_004b0854(local_50);
                  (**(code **)(*local_50 + 0x20))();
                  iVar8 = (**(code **)(*local_50 + 0x2c))();
                  FUN_0040709c(local_94,local_90[0],iVar8 + local_94);
                  FUN_004b0b90(local_50,local_8,local_f0);
                }
                else {
                  FUN_0040709c(local_94,local_90[0],local_94 + local_60);
                  FUN_004b0b90(local_50,local_8,local_f0);
                }
              }
              if (((int)local_60 < 1) || ((int)local_64 < 1)) {
                FUN_004b0854(local_50);
                uVar6 = (**(code **)(*local_50 + 0x2c))();
                param_19[-0x26] = uVar6;
                uVar6 = (**(code **)(*local_50 + 0x20))();
                param_19[-0x25] = uVar6;
              }
              else {
                param_19[-0x26] = local_60;
                param_19[-0x25] = local_64;
              }
            }
            if (((((int)*param_17 < (int)(param_10 - local_90[3])) &&
                 ((int)(param_10 - local_90[3]) < (int)(*param_17 + param_19[-0x26]))) &&
                ((int)local_90[0] < param_9)) &&
               ((param_9 < (int)(param_19[-0x25] + local_90[0]) &&
                (*(char *)((int)param_19 + -0x2a) != '\0')))) {
              *param_7 = 1;
              FUN_00404928(param_19[0xc],param_19[-0xc]);
              param_19[-0x24] = param_19[-0x23];
            }
            local_40 = *param_16;
            if (((int)(local_7c - local_90[3]) < (int)(*param_17 + param_19[-0x26])) &&
               ((int)param_19[-0x26] < (int)(local_7c - local_90[3]))) {
              uStack_28 = (uint *)CONCAT13(1,(undefined3)uStack_28);
            }
            else {
              *param_17 = *param_17 + param_19[-0x26];
              local_94 = local_94 + param_19[-0x26];
              if ((int)*param_16 < (int)param_19[-0x25]) {
                *param_16 = param_19[-0x25];
              }
            }
            iVar8 = FUN_00404ee8("ALIGN",unaff_EBX);
            if (0 < iVar8) {
              iVar8 = FUN_00404ee8(&DAT_00556f28,unaff_EBX);
              if (iVar8 < 1) {
                iVar8 = FUN_00404ee8("\"MIDDLE",unaff_EBX);
                if (0 < iVar8) {
                  iVar8 = FUN_004af3c4(local_8,&DAT_00556e28,param_19[-6]);
                  iVar18 = (int)(*param_16 - iVar8) >> 1;
                  if (iVar18 < 0) {
                    iVar18 = iVar18 + (uint)((*param_16 - iVar8 & 1) != 0);
                  }
                  *param_13 = iVar18;
                }
              }
              else {
                iVar8 = FUN_004af3c4(local_8,&DAT_00556e28,param_19[-6]);
                *param_13 = *param_16 - iVar8;
              }
            }
            iVar8 = FUN_00404ee8(&DAT_00556f48,unaff_EBX);
            if (0 < iVar8) {
              uVar6 = FUN_004af3c4(local_8,&DAT_00556e28,param_19[-6]);
              *param_16 = uVar6;
              *param_13 = 0;
            }
          }
          break;
        case 0x4c:
          local_58 = 0x1fffffff;
          FUN_004048d4(param_19 + -0x28);
          iVar8 = FUN_00553f60(&DAT_00556df4,*param_2,&local_44);
          if (0 < iVar8) {
            FUN_00404e04(*param_2,3,local_44 - 1);
            FUN_004095b0(auStackY_1870[0x5df],&stack0xffffffec);
            iVar8 = FUN_00553f60(&DAT_00556f58,unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 4,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              FUN_0040496c(param_19 + -0x28,unaff_ESI);
            }
            iVar8 = FUN_00553f60("COLOR",unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              iVar8 = FUN_00404ba4(unaff_ESI);
              if (0 < iVar8) {
                if (*unaff_ESI == '#') {
                  local_58 = FUN_00553c40(unaff_ESI);
                }
                else {
                  FUN_00409724(unaff_ESI,auStackY_1870 + 0x5de);
                  local_58 = FUN_00553468(auStackY_1870[0x5de]);
                }
              }
            }
            iVar8 = FUN_00553f60(&DAT_00556f78,unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 4,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              FUN_0040496c(param_19 + -0x29,unaff_ESI);
            }
          }
          *param_17 = *param_17 + param_19[-0x1c] * 0xc;
          if (uStack_28._2_1_ == '\0') {
            uStack_28._0_3_ = CONCAT12(1,(undefined2)uStack_28);
          }
          else {
            uStack_28 = (uint *)CONCAT13(1,(undefined3)uStack_28);
          }
          local_94 = local_94 + (param_19[-0x1c] - 1) * 0xc;
          if ((param_18 == '\0') && (*(char *)((int)param_19 + -0x1b) == '\0')) {
            bVar14 = param_19[-0x28] == 0;
            if (bVar14) {
              if (local_58 != 0x1fffffff) {
                param_19[-0x2a] = *(uint *)(param_19[-6] + 0x18);
                FUN_0042a3a0(param_19[-6],local_58);
              }
              FUN_0042a5b0(param_19[-6],&stack0xffffffe8);
              FUN_0042a5c8(param_19[-6],"Symbol");
              if ((param_19[-0x1c] & 1) == 0) {
                pcStackY_38 = (char *)0x1fffffff;
                puStackY_3c = (uint *)0x5561d9;
                FUN_004af154(local_8,&DAT_00556fa4,1);
              }
              else {
                pcStackY_38 = (char *)0x1fffffff;
                puStackY_3c = (uint *)0x5561b0;
                FUN_004af154(local_8,&DAT_00556f98,1);
              }
              puStackY_3c = (uint *)0x5561e7;
              FUN_0042a5c8(param_19[-6],unaff_ESI);
              if (local_58 != 0x1fffffff) {
                puStackY_3c = (uint *)0x556208;
                FUN_0042a3a0(param_19[-6],param_19[-0x2a]);
              }
            }
            else {
              FUN_00404cf0(param_19[-0x28],"SQUARE");
              uVar15 = 0;
              if (bVar14) {
                uVar7 = FUN_004b1cd0(0xff,local_58);
                uVar6 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar7);
                param_19[-0x2b] = uVar6;
                local_a4 = (char *)(local_90[0] + 2);
                uVar15 = &stack0x00000000 == (undefined1 *)0x30;
                pcStackY_38 = (char *)0x41000000;
                puStackY_3c = (uint *)0x556287;
                FUN_004af648(local_8,param_19[-0x2b]);
                FUN_00403a84(param_19[-0x2b]);
              }
              FUN_00404cf0(param_19[-0x28],"CIRCLE");
              uVar16 = 0;
              if ((bool)uVar15) {
                uVar7 = FUN_004b1cd0(0xff,local_58);
                uVar6 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar7);
                param_19[-0x2b] = uVar6;
                uVar16 = local_90[0] == 0xfffffffe;
                pcStackY_38 = (char *)0x5562f0;
                FUN_004b1bf8(local_8,param_19[-0x2b],local_94);
                FUN_00403a84(param_19[-0x2b]);
              }
              FUN_00404cf0(param_19[-0x28],"IMAGE");
              if (((bool)uVar16) && (param_19[-0x29] != 0)) {
                local_50 = (int *)0x0;
                if (param_19[3] != 0) {
                  local_50 = (int *)(**(code **)(*(int *)param_19[3] + 0x30))
                                              ((int *)param_19[3],param_19[-0x29]);
                }
                if ((local_50 != (int *)0x0) &&
                   (cVar4 = (**(code **)(*local_50 + 0x1c))(), cVar4 == '\0')) {
                  FUN_004b0854(local_50);
                  (**(code **)(*local_50 + 0x20))();
                  iVar8 = (**(code **)(*local_50 + 0x2c))();
                  FUN_0040709c(local_94,local_90[0] + 2,iVar8 + local_94);
                  FUN_004b0b90(local_50,local_8,local_f0);
                  iVar8 = (**(code **)(*local_50 + 0x2c))();
                  if (0xc < iVar8) {
                    iVar8 = (**(code **)(*local_50 + 0x2c))();
                    local_94 = local_94 + iVar8 + -0xc;
                  }
                }
              }
            }
          }
          local_94 = local_94 + 0xc;
          break;
        case 0x4f:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar4 == 'F') {
            iVar8 = FUN_00404ee8(&DAT_00556df4,*param_2);
            FUN_00404e04(*param_2,3,iVar8 + -1);
            iVar8 = FUN_00553cf8(&DAT_00556e98,unaff_EBX);
            iVar8 = iVar8 + 2;
            uVar7 = FUN_00404ba4(unaff_EBX);
            FUN_00404e04(unaff_EBX,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            iVar8 = iVar8 + 1;
            uVar7 = FUN_00404ba4(unaff_ESI);
            FUN_00404e04(unaff_ESI,iVar8,uVar7);
            iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
            FUN_00404e04(unaff_ESI,1,iVar8 + -1);
            uVar6 = FUN_0040343c(unaff_ESI,&stack0xffffffcc);
            *param_5 = uVar6;
            local_94 = *param_5;
            *param_17 = *param_5;
          }
          break;
        case 0x50:
          iVar8 = FUN_00553f60(&DAT_00556df4,*param_2,&local_44);
          if (0 < iVar8) {
            FUN_00404e04(*param_2,3,local_44 - 1);
            FUN_004095b0(auStackY_1870[0x5dd],&stack0xffffffec);
            iVar8 = FUN_00553f60("ALIGN",unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              iVar8 = FUN_00404ee8("RIGHT",unaff_ESI);
              if (0 < iVar8) {
                *param_12 = 1;
              }
              iVar8 = FUN_00404ee8(&DAT_00556ff0,unaff_ESI);
              if (0 < iVar8) {
                *param_12 = 0;
              }
              iVar8 = FUN_00404ee8("CENTER",unaff_ESI);
              if (0 < iVar8) {
                *param_12 = 2;
              }
            }
            iVar8 = FUN_00553f60("INDENT",unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 6,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              uVar7 = FUN_00553d7c(unaff_ESI);
              *param_11 = uVar7;
            }
            iVar8 = FUN_00553f60("BGCOLOR",unaff_EBX,&local_44);
            if (0 < iVar8) {
              uVar7 = FUN_00404ba4(unaff_EBX);
              FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              iVar8 = iVar8 + 1;
              uVar7 = FUN_00404ba4(unaff_ESI);
              FUN_00404e04(unaff_ESI,iVar8,uVar7);
              iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
              FUN_00404e04(unaff_ESI,1,iVar8 + -1);
              iVar8 = FUN_00553f60("BGCOLORTO",unaff_EBX,&local_44);
              if (iVar8 < 1) {
                if (param_18 == '\0') {
                  *(undefined1 *)((int)param_19 + -0x69) = 1;
                }
              }
              else {
                uVar7 = FUN_00404ba4(unaff_EBX);
                FUN_00404e04(unaff_EBX,local_44 + 5,uVar7);
                iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                iVar8 = iVar8 + 1;
                uVar7 = FUN_00404ba4(unaff_ESI);
                FUN_00404e04(unaff_ESI,iVar8,uVar7);
                iVar8 = FUN_00404ee8(&DAT_00556e44,unaff_ESI);
                FUN_00404e04(unaff_ESI,1,iVar8 + -1);
                local_5c = 0x1fffffff;
                iVar8 = FUN_00404ba4(unaff_ESI);
                if (0 < iVar8) {
                  if (*unaff_ESI == '#') {
                    local_5c = FUN_00553c40(unaff_ESI);
                  }
                  else {
                    FUN_00409724(unaff_ESI,auStackY_1870 + 0x5dc);
                    local_5c = FUN_00553468(auStackY_1870[0x5dc]);
                  }
                }
                if (param_18 == '\0') {
                  *(undefined1 *)((int)param_19 + -0x69) = 1;
                  FUN_0042ac88(param_19[-8],1);
                }
              }
            }
          }
          break;
        case 0x53:
          cVar4 = FUN_00402bb8(CONCAT31((int3)((uint)*param_2 >> 8),*(undefined1 *)(*param_2 + 2)));
          if (cVar4 == '>') {
            bVar5 = FUN_0042a660(param_19[-6]);
            FUN_0042a66c(param_19[-6],bVar5 | DAT_00556e34);
          }
          else if (cVar4 == 'H') {
            *(undefined1 *)((int)param_19 + -0x21) = 1;
          }
          else {
            iVar8 = FUN_00553cf8("<SUB>",*param_2);
            if (iVar8 == 1) {
              *(undefined1 *)((int)param_19 + -0x19) = 1;
            }
            else {
              iVar8 = FUN_00553cf8("<SUP>",*param_2);
              if (iVar8 == 1) {
                *(undefined1 *)((int)param_19 + -0x1a) = 1;
              }
            }
          }
          break;
        case 0x55:
          if (*(char *)(*param_2 + 2) == '>') {
            bVar5 = FUN_0042a660(param_19[-6]);
            FUN_0042a66c(param_19[-6],bVar5 | DAT_00556e2c);
          }
          else {
            param_19[-0x1c] = param_19[-0x1c] + 1;
            bVar1 = true;
          }
          break;
        case 0x5a:
          *(undefined1 *)((int)param_19 + -0x1b) = 1;
        }
      }
      iVar8 = FUN_00553f60(&DAT_00556df4,*param_2,&local_44);
      if ((iVar8 < 1) || (uStack_28._3_1_ != '\0')) {
        if (uStack_28._3_1_ == '\0') {
          uVar7 = FUN_00404ba4(*param_2);
          FUN_00404e44(param_2,1,uVar7);
        }
      }
      else {
        FUN_00404e04(*param_2,1,local_44);
        FUN_00404bac(&local_10,auStackY_1870[0x5d8]);
        FUN_00404e44(param_2,1,local_44);
      }
    }
  } while( true );
}

