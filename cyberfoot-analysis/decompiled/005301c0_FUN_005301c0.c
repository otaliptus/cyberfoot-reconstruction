// Address: 005301c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_005301c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *in_FS_OFFSET;
  byte bVar14;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  int *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  char in_stack_00000048;
  char in_stack_0000005c;
  undefined1 in_stack_00000060;
  int in_stack_00000070;
  undefined4 in_stack_00000074;
  int *in_stack_0000007c;
  int aiStackY_1930 [1492];
  undefined4 *puVar15;
  undefined4 uStack_1a0;
  undefined1 *puStack_19c;
  undefined1 *puStack_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c [10];
  int local_154;
  int local_150 [4];
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_12c [3];
  undefined4 local_120;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8 [2];
  undefined1 local_df;
  char local_de;
  char local_dd;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int local_cc;
  char local_c5;
  int local_c4;
  int local_c0 [2];
  undefined1 local_b5;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int aiStack_88 [5];
  undefined4 local_74;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined4 local_60;
  int *local_4c;
  undefined4 local_44;
  undefined1 local_3d;
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_2e;
  uint local_2c;
  undefined1 local_25;
  undefined4 local_24;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  int *local_1c;
  undefined4 local_8;
  
  bVar14 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c[0] = 0;
  local_c0[1] = 0;
  local_8 = 0;
  local_34 = 0;
  local_e8[0] = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_8c = *in_stack_0000007c;
  aiStack_88[0] = in_stack_0000007c[1];
  aiStack_88[1] = in_stack_0000007c[2];
  aiStack_88[2] = in_stack_0000007c[3];
  puStack_198 = (undefined1 *)0x53022c;
  local_b4[0] = param_3;
  FUN_00404d94(param_3);
  puStack_19c = &LAB_0053099d;
  uStack_1a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe60;
  local_2e = 0;
  local_35 = 0;
  puStack_198 = &stack0xfffffffc;
  local_1c = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_1c + 8))(local_1c,param_2);
  local_24 = FUN_0042a9c4(PTR_PTR_00428bb8,1);
  local_4c = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_4c + 8))(local_4c,local_1c);
  local_d4 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_d4 + 8))(local_d4,local_1c);
  local_d0 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_d0 + 8))(local_d0,local_1c);
  local_dc = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_dc + 8))(local_dc,local_1c);
  local_d8 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_d8 + 8))(local_d8,local_1c);
  aiStack_88[3] = FUN_0042ab64(local_24);
  FUN_0042ab6c(local_24,0x1fffffff);
  local_60 = 0x1fffffff;
  local_6c = 0x1fffffff;
  local_6d = 0;
  local_25 = 0;
  local_1f = 0;
  local_44 = 0;
  local_12c[0] = 0;
  local_b5 = 0;
  local_150[3] = local_8c;
  local_150[(uint)bVar14 * -2 + 4] = aiStack_88[(uint)bVar14 * -2];
  local_150[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5] =
       aiStack_88[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  (local_150 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1] =
       (aiStack_88 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
  local_150[3] = local_150[3] + 1;
  local_c5 = '\0';
  local_cc = 0;
  *in_stack_00000020 = 0;
  *in_stack_0000001c = 0;
  *in_stack_00000018 = 0;
  local_fc = 0;
  local_74 = 0;
  local_100 = 0;
  FUN_004048d4(in_stack_00000028);
  FUN_004048d4(in_stack_00000024);
  *in_stack_00000014 = 0xffffffff;
  local_3d = 0;
  local_90 = 0;
  local_94 = 0xffffffff;
  local_2c = 0x268;
  iVar11 = FUN_00404ee8(&DAT_005309bc,local_b4[0]);
  if (0 < iVar11) {
    local_2c = local_2c | 0x800;
  }
  if (in_stack_00000048 == '\0') {
    local_2c = local_2c | 0x8000;
  }
  iVar11 = FUN_00404ee8(&DAT_005309c8,local_b4[0]);
  if (0 < iVar11) {
    do {
      cVar2 = FUN_0052d114("&amp;",&DAT_005309d4,local_b4);
      cVar3 = FUN_0052d114("&quot;",&DAT_005309f0,local_b4);
      cVar4 = FUN_0052d114("&sect;",&DAT_00530a0c,local_b4);
      cVar5 = FUN_0052d114("&permil;",&DAT_00530a28,local_b4);
      cVar6 = FUN_0052d114("&reg;",&DAT_00530a48,local_b4);
      cVar7 = FUN_0052d114("&copy;",&DAT_00530a64,local_b4);
      cVar8 = FUN_0052d114("&para;",&DAT_00530a80,local_b4);
      cVar9 = FUN_0052d114("&trade;",&DAT_00530a9c,local_b4);
      cVar10 = FUN_0052d114("&euro;",&DAT_00530ab8,local_b4);
    } while (cVar10 != '\0' ||
             (cVar9 != '\0' ||
             (cVar8 != '\0' ||
             (cVar7 != '\0' ||
             (cVar6 != '\0' ||
             (cVar5 != '\0' || (cVar4 != '\0' || (cVar3 != '\0' || cVar2 != '\0'))))))));
  }
  FUN_0052cf1c(local_b4[0],local_17c);
  FUN_0040496c(local_b4,local_17c[0]);
  FUN_0052cfe0(local_b4[0],1,&local_180);
  FUN_0040496c(local_b4,local_180);
  while (iVar11 = FUN_00404ba4(local_b4[0]), 0 < iVar11) {
    (**(code **)(*local_4c + 8))(local_4c,local_d8);
    (**(code **)(*local_1c + 8))(local_1c,local_d0);
    local_df = local_2e;
    FUN_0040496c(local_e8,local_34);
    local_f0 = 0;
    local_ec = 0;
    local_f4 = 0;
    local_1e = 0;
    local_1d = 0;
    iVar11 = FUN_004af3c4(param_1,&LAB_00530ad4,local_1c);
    local_120 = local_90;
    puVar15 = &local_184;
    local_c4 = iVar11;
    FUN_0052d1d0(param_1,local_b4,local_150 + 3,puVar15,local_12c,local_44,&local_de,&local_dd,
                 in_stack_00000070,in_stack_00000074,&local_cc,&local_c5,&local_f4,&local_f0,
                 &local_ec,&local_c4,local_c0,1,&stack0xfffffffc);
    FUN_0040496c(local_c0 + 1,local_184,puVar15);
    local_2e = local_df;
    FUN_0040496c(&local_34,local_e8[0]);
    (**(code **)(*local_d0 + 8))(local_d0,local_1c);
    (**(code **)(*local_d8 + 8))(local_d8,local_4c);
    iVar12 = FUN_00404ba4(local_b4[0]);
    if (0 < iVar12) {
      local_c4 = local_c4 + param_4;
    }
    local_154 = local_150[3];
    local_150[(uint)bVar14 * -2] = local_150[(uint)bVar14 * -2 + 4];
    local_150[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_150[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
    (local_150 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
         (local_150 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
    if (local_c5 == '\x01') {
      if (local_150[3] < local_13c - local_c0[0]) {
        local_154 = local_13c - local_c0[0];
      }
    }
    else if ((local_c5 == '\x02') &&
            (uVar13 = (local_13c - local_150[3]) - local_c0[0], 0 < (int)uVar13)) {
      local_154 = (uVar13 >> 1) + local_150[3];
    }
    local_154 = local_154 + local_cc;
    local_150[2] = local_150[0] + local_c4 + local_ec + local_f0;
    if (in_stack_0000005c == '\0') {
      (**(code **)(*local_4c + 8))(local_4c,local_dc);
      (**(code **)(*local_1c + 8))(local_1c,local_d4);
      *in_stack_00000018 = local_fc;
      local_74 = local_100;
      local_90 = local_120;
      FUN_0052d1d0(param_1,local_c0 + 1,&local_154,&local_188,local_12c,local_44,&local_de,&local_dd
                   ,in_stack_00000070,in_stack_00000074,&local_cc,&local_c5,&local_f4,&local_f0,
                   &local_ec,&local_c4,local_c0,in_stack_00000060,&stack0xfffffffc);
      local_fc = *in_stack_00000018;
      local_100 = local_74;
      if ((((local_dd != '\0') &&
           (iVar12 = FUN_004af3c4(param_1,&LAB_00530ad4,local_1c),
           (local_150[2] - local_f4) - iVar12 < in_stack_00000070)) &&
          (in_stack_00000070 < local_150[2] - local_f4)) || (local_de != '\0')) {
        local_b5 = 1;
      }
      local_44 = local_12c[0];
      (**(code **)(*local_d4 + 8))(local_d4,local_1c);
      (**(code **)(*local_dc + 8))(local_dc,local_4c);
    }
    local_140 = local_140 + local_c4 + local_ec + local_f0;
    *in_stack_0000001c = *in_stack_0000001c + local_c4 + local_ec + local_f0;
    if ((local_138 < iVar11 + local_140) && (in_stack_0000005c == '\0')) {
      FUN_004048d4(local_b4);
    }
  }
  if (*in_stack_0000001c == 0) {
    iVar11 = FUN_004af3c4(param_1,&LAB_00530ad4,local_1c);
    *in_stack_0000001c = iVar11;
  }
  *in_stack_0000001c = *in_stack_0000001c + 2;
  FUN_0042ab6c(local_24,aiStack_88[3]);
  (**(code **)(*local_1c + 8))(local_1c,local_4c);
  FUN_00403a84(local_4c);
  FUN_00403a84(local_d4);
  FUN_00403a84(local_d0);
  FUN_00403a84(local_dc);
  FUN_00403a84(local_d8);
  FUN_00403a84(local_1c);
  FUN_00403a84(local_24);
  puVar1 = puStack_198;
  *in_FS_OFFSET = uStack_1a0;
  puStack_198 = &LAB_005309a4;
  puStack_19c = (undefined1 *)0x53095b;
  FUN_004048f8(&local_188,4,puVar1);
  puStack_19c = (undefined1 *)0x530966;
  FUN_004048d4(local_e8);
  puStack_19c = (undefined1 *)0x530971;
  FUN_004048d4(local_c0 + 1);
  puStack_19c = (undefined1 *)0x53097c;
  FUN_004048d4(local_b4);
  puStack_19c = (undefined1 *)0x53098c;
  FUN_004048f8(&local_a8,2);
  puStack_19c = (undefined1 *)0x530994;
  FUN_004048d4(&local_34);
  puStack_19c = (undefined1 *)0x53099c;
  FUN_004048d4(&local_8);
  return;
}

