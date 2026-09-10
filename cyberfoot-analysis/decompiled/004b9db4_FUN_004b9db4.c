// Address: 004b9db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b9db4(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  uint3 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int *piVar13;
  HDC hdc;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *in_FS_OFFSET;
  byte bVar17;
  undefined4 *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  int *in_stack_00000020;
  undefined4 *in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  char in_stack_0000004c;
  char in_stack_00000060;
  int in_stack_00000074;
  uint in_stack_00000078;
  int aiStackY_1940 [64];
  char *apcStackY_1840 [445];
  int aiStackY_114c [64];
  char *apcStackY_104c [949];
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int *local_164;
  int local_160 [3];
  int *local_154;
  int local_150 [3];
  char *local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_125;
  undefined4 local_124;
  undefined1 local_11f;
  char local_11e;
  char local_11d;
  int *local_11c;
  int *local_118;
  int *local_114;
  int local_110;
  char local_109;
  int local_108;
  int local_104;
  undefined1 local_100 [7];
  undefined1 local_f9;
  undefined4 local_f8 [2];
  undefined1 local_f0 [12];
  undefined1 local_e4 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b0;
  int *local_9c;
  char *local_94;
  undefined1 local_8d;
  uint local_8c;
  undefined1 local_75;
  undefined4 local_74;
  undefined1 local_6d;
  uint local_6c;
  undefined4 local_68;
  int *local_64;
  char *apcStackY_60 [3];
  int iStackY_54;
  uint uStackY_50;
  int *local_4c;
  char *pcStackY_48;
  int *piStackY_44;
  int *piStackY_40;
  int *piStackY_3c;
  int *piStackY_38;
  int *piStackY_34;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  bVar17 = 0;
  iVar16 = 0x2e;
  do {
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  LOCK();
  UNLOCK();
  local_64 = piRam00000000;
  apcStackY_60[0] = pcRam00000004;
  apcStackY_60[1] = pcRam00000008;
  apcStackY_60[2] = pcRam0000000c;
  puStack_20 = (undefined1 *)0x4b9de6;
  local_f8[0] = param_2;
  FUN_00404d94(param_2);
  puStack_24 = &LAB_004ba597;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_6d = 0;
  local_75 = 0;
  puStack_20 = &stack0xfffffffc;
  local_9c = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_9c + 8))(local_9c,*(undefined4 *)(param_1 + 0xc));
  local_114 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_114 + 8))(local_114,*(undefined4 *)(param_1 + 0xc));
  piVar13 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*piVar13 + 8))(piVar13,*(undefined4 *)(param_1 + 0xc));
  local_11c = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_11c + 8))(local_11c,*(undefined4 *)(param_1 + 0xc));
  local_118 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_118 + 8))(local_118,*(undefined4 *)(param_1 + 0xc));
  local_cc = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),0x1fffffff);
  local_b0 = 0x1fffffff;
  local_c4 = 0x1fffffff;
  uStackY_50 = uStackY_50 & 0xffffff;
  local_68 = (undefined4 *)((uint)local_68._2_2_ << 0x10);
  local_94 = (char *)0x0;
  local_144 = (char *)0x0;
  local_f9 = 0;
  local_154 = local_64;
  local_150[(uint)bVar17 * -2] = (int)apcStackY_60[(uint)bVar17 * -2];
  local_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
       (int)apcStackY_60[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
  (local_150 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
       (int)(apcStackY_60 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
  local_109 = '\0';
  local_110 = 0;
  *in_stack_00000024 = 0;
  *in_stack_00000020 = 0;
  *in_stack_0000001c = 0;
  local_138 = 0;
  local_bc = 0;
  local_13c = 0;
  FUN_004048d4(in_stack_0000002c);
  FUN_004048d4(in_stack_00000028);
  *in_stack_00000018 = 0xffffffff;
  local_8d = 0;
  local_dc = 0;
  local_e0 = 0xffffffff;
  iVar16 = 1;
  hdc = (HDC)FUN_0042b5a8(param_1);
  piStackY_34 = (int *)0x4b9f74;
  SetBkMode(hdc,iVar16);
  local_6c = 0x268;
  local_6c = FUN_004b9d5c(0x268,param_4);
  iVar16 = FUN_00404ee8(&DAT_004ba5b8,local_f8[0]);
  if (0 < iVar16) {
    local_6c = local_6c | 0x800;
  }
  if (in_stack_0000004c == '\0') {
    local_6c = local_6c | 0x8000;
  }
  iVar16 = FUN_00404ee8(&DAT_004ba5c4,local_f8[0]);
  if (0 < iVar16) {
    do {
      cVar4 = FUN_004b563c("&amp;",&DAT_004ba5d0,local_f8);
      cVar5 = FUN_004b563c("&quot;",&DAT_004ba5ec,local_f8);
      cVar6 = FUN_004b563c("&sect;",&DAT_004ba608,local_f8);
      cVar7 = FUN_004b563c("&permil;",&DAT_004ba624,local_f8);
      cVar8 = FUN_004b563c("&reg;",&DAT_004ba644,local_f8);
      cVar9 = FUN_004b563c("&copy;",&DAT_004ba660,local_f8);
      cVar10 = FUN_004b563c("&para;",&DAT_004ba67c,local_f8);
      cVar11 = FUN_004b563c("&trade;",&DAT_004ba698,local_f8);
      cVar12 = FUN_004b563c("&euro;",&DAT_004ba6b4,local_f8);
    } while (cVar12 != '\0' ||
             (cVar11 != '\0' ||
             (cVar10 != '\0' ||
             (cVar9 != '\0' ||
             (cVar8 != '\0' ||
             (cVar7 != '\0' || (cVar6 != '\0' || (cVar5 != '\0' || cVar4 != '\0'))))))));
  }
  FUN_004b5438(local_f8[0],&local_168);
  FUN_0040496c(local_f8,local_168);
  FUN_004b5504(local_f8[0],1,&local_16c);
  FUN_0040496c(local_f8,local_16c);
  local_8c = 0;
  do {
    iVar16 = FUN_00404ba4(local_f8[0]);
    if (iVar16 < 1) {
      if (*in_stack_00000020 == 0) {
        iVar16 = FUN_0042b400(param_1,&LAB_004ba6d0);
        *in_stack_00000020 = iVar16;
      }
      local_8c = local_8c >> 1;
      FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_cc);
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),local_9c);
      FUN_00403a84(local_9c);
      FUN_00403a84(local_114);
      FUN_00403a84(piVar13);
      FUN_00403a84(local_11c);
      FUN_00403a84(local_118);
      puVar3 = puStack_20;
      *in_FS_OFFSET = uStack_28;
      puStack_20 = &LAB_004ba59e;
      puStack_24 = (undefined1 *)0x4ba54f;
      FUN_004048f8(local_178,5,puVar3);
      puStack_24 = (undefined1 *)0x4ba55a;
      FUN_004048d4(&local_124);
      puStack_24 = (undefined1 *)0x4ba565;
      FUN_004048d4(local_100);
      puStack_24 = (undefined1 *)0x4ba570;
      FUN_004048d4(local_f8);
      puStack_24 = (undefined1 *)0x4ba57b;
      FUN_004048d4(local_f0);
      puStack_24 = (undefined1 *)0x4ba586;
      FUN_004048d4(local_e4);
      puStack_24 = (undefined1 *)0x4ba58e;
      FUN_004048d4(&local_74);
      puStack_24 = (undefined1 *)0x4ba596;
      FUN_004048d4(&local_4c);
      return;
    }
    (**(code **)(*local_9c + 8))(local_9c,local_118);
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),piVar13);
    local_11f = local_6d;
    FUN_0040496c(&local_124,local_74);
    local_130 = 0;
    local_12c = 0;
    local_134 = 0;
    uVar1 = (uint3)local_68;
    local_68 = (undefined4 *)(uint)(uVar1 & 0xffff);
    iVar16 = FUN_0042b400(param_1,&LAB_004ba6d0);
    local_140 = local_dc;
    local_108 = iVar16;
    FUN_004099c0(local_f8[0],&local_170);
    FUN_0040496c(local_f8,local_170);
    local_125 = (undefined1)local_68;
    piStackY_34 = &local_104;
    piStackY_38 = &local_108;
    piStackY_3c = &local_12c;
    piStackY_40 = &local_130;
    piStackY_44 = &local_134;
    pcStackY_48 = &local_109;
    local_4c = &local_110;
    uStackY_50 = in_stack_00000078;
    iStackY_54 = in_stack_00000074;
    apcStackY_60[2] = &local_11d;
    apcStackY_60[1] = &local_11e;
    apcStackY_60[0] = local_94;
    local_64 = local_150 + 3;
    local_68 = &local_174;
    local_6c = 0x4ba22c;
    FUN_004b576c(param_1,local_f8,&local_154);
    puVar2 = local_68;
    local_68 = (undefined4 *)0x4ba23e;
    FUN_0040496c(local_100,local_174,puVar2);
    local_6d = local_11f;
    local_68 = (undefined4 *)0x4ba25e;
    FUN_0040496c(&local_74,local_124);
    local_68 = (undefined4 *)0x4ba268;
    (**(code **)(*piVar13 + 8))(piVar13,*(undefined4 *)(param_1 + 0xc));
    local_68 = (undefined4 *)0x4ba279;
    (**(code **)(*local_118 + 8))(local_118,local_9c);
    local_108 = local_108 + param_5;
    local_164 = local_154;
    local_160[(uint)bVar17 * -2] = local_150[(uint)bVar17 * -2];
    local_160[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         local_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    (local_160 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
         (local_150 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
    if (local_109 == '\x01') {
      if ((int)local_154 < local_150[1] - local_104) {
        local_164 = (int *)(local_150[1] - local_104);
      }
    }
    else if ((local_109 == '\x02') &&
            (uVar14 = (local_150[1] - (int)local_154) - local_104, 0 < (int)uVar14)) {
      local_164 = (int *)((uVar14 >> 1) + (int)local_154);
    }
    local_164 = (int *)((int)local_164 + local_110);
    local_160[2] = local_160[0] + local_108 + local_12c + local_130;
    if (in_stack_00000060 == '\0') {
      (**(code **)(*local_9c + 8))(local_9c,local_11c);
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),local_114);
      *in_stack_0000001c = local_138;
      local_bc = local_13c;
      local_dc = local_140;
      piStackY_34 = &local_104;
      piStackY_38 = &local_108;
      piStackY_3c = &local_12c;
      piStackY_40 = &local_130;
      piStackY_44 = &local_134;
      pcStackY_48 = &local_109;
      local_4c = &local_110;
      uStackY_50 = in_stack_00000078;
      iStackY_54 = in_stack_00000074;
      apcStackY_60[2] = &local_11d;
      apcStackY_60[1] = &local_11e;
      apcStackY_60[0] = local_94;
      local_64 = local_150 + 3;
      local_68 = (undefined4 *)local_178;
      local_6c = 0x4ba3cc;
      FUN_004b576c(param_1,local_100,&local_164);
      puVar3 = (undefined1 *)local_68;
      local_138 = *in_stack_0000001c;
      local_13c = local_bc;
      if (local_11d == '\0') {
LAB_004ba41d:
        if (local_11e != '\0') goto LAB_004ba426;
      }
      else {
        local_68 = (undefined4 *)0x4ba3f9;
        iVar15 = FUN_0042b400(param_1,&LAB_004ba6d0,puVar3);
        if ((in_stack_00000074 <= (local_160[2] - local_134) - iVar15) ||
           (local_160[2] - local_134 <= in_stack_00000074)) goto LAB_004ba41d;
LAB_004ba426:
        local_f9 = 1;
      }
      local_94 = local_144;
      local_68 = (undefined4 *)0x4ba447;
      (**(code **)(*local_114 + 8))(local_114,*(undefined4 *)(param_1 + 0xc));
      local_68 = (undefined4 *)0x4ba458;
      (**(code **)(*local_11c + 8))(local_11c,local_9c);
    }
    local_150[0] = local_150[0] + local_108 + local_12c + local_130;
    *in_stack_00000020 = *in_stack_00000020 + local_108 + local_12c + local_130;
    if ((local_150[2] < iVar16 + local_150[0]) && (in_stack_00000060 == '\0')) {
      FUN_004048d4(local_f8);
    }
  } while( true );
}

