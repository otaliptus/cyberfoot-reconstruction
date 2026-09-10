// Address: 005440ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_005440ac(int param_1,undefined4 param_2,int *param_3)

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
  int *piVar11;
  HDC hdc;
  uint uVar12;
  int iVar13;
  undefined4 *in_FS_OFFSET;
  byte bVar14;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  int *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  char in_stack_00000044;
  char in_stack_00000058;
  undefined1 in_stack_0000005c;
  int in_stack_0000006c;
  undefined4 in_stack_00000070;
  int aiStackY_1920 [1501];
  undefined4 *puVar15;
  int iVar16;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  int local_140 [4];
  int local_130;
  int local_12c;
  int local_128;
  int local_124 [3];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  int local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined1 local_f3;
  char local_f2;
  char local_f1;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  char local_dd;
  int local_dc;
  int local_d8 [2];
  undefined1 local_cd;
  undefined4 local_cc [3];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  int *local_88;
  undefined4 local_80;
  undefined1 local_79;
  uint local_78;
  undefined1 local_61;
  undefined4 local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  int aiStack_4c [4];
  undefined1 local_39;
  
  bVar14 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_d8[1] = 0;
  local_60 = 0;
  local_f8 = 0;
  local_50 = *param_3;
  aiStack_4c[0] = param_3[1];
  aiStack_4c[1] = param_3[2];
  aiStack_4c[2] = param_3[3];
  puStack_164 = (undefined1 *)0x5440fd;
  local_cc[0] = param_2;
  FUN_00405608(local_cc);
  puStack_168 = &LAB_0054481c;
  uStack_16c = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe94;
  local_59 = 0;
  local_61 = 0;
  puStack_164 = &stack0xfffffffc;
  local_88 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_88 + 8))(local_88,*(undefined4 *)(param_1 + 0xc));
  local_e8 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_e8 + 8))(local_e8,*(undefined4 *)(param_1 + 0xc));
  piVar11 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*piVar11 + 8))(piVar11,*(undefined4 *)(param_1 + 0xc));
  local_f0 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_f0 + 8))(local_f0,*(undefined4 *)(param_1 + 0xc));
  local_ec = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
  (**(code **)(*local_ec + 8))(local_ec,*(undefined4 *)(param_1 + 0xc));
  local_b4 = FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),0x1fffffff);
  local_9c = 0x1fffffff;
  local_a8 = 0x1fffffff;
  local_39 = 0;
  local_54 = 0;
  local_53 = 0;
  local_80 = 0;
  local_124[0] = 0;
  local_cd = 0;
  local_140[3] = local_50;
  local_140[(uint)bVar14 * -2 + 4] = aiStack_4c[(uint)bVar14 * -2];
  local_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5] =
       aiStack_4c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  (local_140 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1] =
       (aiStack_4c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
  local_140[3] = local_140[3] + 1;
  local_dd = '\0';
  local_e4 = 0;
  *in_stack_0000001c = 0;
  *in_stack_00000018 = 0;
  *in_stack_00000014 = 0;
  local_10c = 0;
  local_ac = 0;
  local_110 = 0;
  FUN_00404ff0(in_stack_00000024);
  FUN_00404ff0(in_stack_00000020);
  *in_stack_00000010 = 0xffffffff;
  local_79 = 0;
  local_bc = 0;
  local_c0 = 0xffffffff;
  iVar16 = 1;
  hdc = (HDC)FUN_0042b5a8(param_1);
  SetBkMode(hdc,iVar16);
  local_58 = 0x268;
  if (in_stack_00000044 == '\0') {
    local_58 = 0x8268;
  }
  iVar16 = FUN_00405574(&DAT_00544838,local_cc[0]);
  if (0 < iVar16) {
    do {
      cVar2 = FUN_00540fd0(L"&amp;",&DAT_00544840,local_cc);
      cVar3 = FUN_00540fd0(L"&quot;",&DAT_0054485c,local_cc);
      cVar4 = FUN_00540fd0(L"&sect;",&DAT_00544878,local_cc);
      cVar5 = FUN_00540fd0(L"&permil;",&DAT_00544894,local_cc);
      cVar6 = FUN_00540fd0(L"&reg;",&DAT_005448b8,local_cc);
      cVar7 = FUN_00540fd0(L"&copy;",&DAT_005448d0,local_cc);
      cVar8 = FUN_00540fd0(L"&para;",&DAT_005448ec,local_cc);
      cVar9 = FUN_00540fd0(L"&trade;",&DAT_00544908,local_cc);
      cVar10 = FUN_00540fd0(L"&euro;",&DAT_00544924,local_cc);
    } while (cVar10 != '\0' ||
             (cVar9 != '\0' ||
             (cVar8 != '\0' ||
             (cVar7 != '\0' ||
             (cVar6 != '\0' ||
             (cVar5 != '\0' || (cVar4 != '\0' || (cVar3 != '\0' || cVar2 != '\0'))))))));
  }
  FUN_00540dd4(local_cc[0],&local_148);
  thunk_FUN_0040502c(local_cc,local_148);
  FUN_00540e94(local_cc[0],1,&local_14c);
  thunk_FUN_0040502c(local_cc,local_14c);
  local_78 = 0;
  while (iVar16 = FUN_00405260(local_cc[0]), 0 < iVar16) {
    (**(code **)(*local_88 + 8))(local_88,local_ec);
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),piVar11);
    local_f3 = local_59;
    FUN_0040496c(&local_f8,local_60);
    local_100 = 0;
    local_fc = 0;
    local_104 = 0;
    local_52 = 0;
    local_51 = 0;
    iVar16 = FUN_00541128(param_1,local_cc[0]);
    local_118 = local_bc;
    puVar15 = &local_150;
    local_dc = iVar16;
    FUN_00541208(param_1,local_cc,local_140 + 3,puVar15,local_140 + 7,local_80,&local_f2,&local_f1,
                 in_stack_0000006c,in_stack_00000070,&local_e4,&local_dd,&local_104,&local_100,
                 &local_fc,&local_dc,local_d8,1,&stack0xfffffffc);
    thunk_FUN_0040502c(local_d8 + 1,local_150,puVar15);
    local_59 = local_f3;
    FUN_0040496c(&local_60,local_f8);
    (**(code **)(*piVar11 + 8))(piVar11,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*local_ec + 8))(local_ec,local_88);
    local_144 = local_140[3];
    local_140[(uint)bVar14 * -2] = local_140[(uint)bVar14 * -2 + 4];
    local_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
    (local_140 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
         (local_140 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
    if (local_dd == '\x01') {
      if (local_140[3] < local_12c - local_d8[0]) {
        local_144 = local_12c - local_d8[0];
      }
    }
    else if ((local_dd == '\x02') &&
            (uVar12 = (local_12c - local_140[3]) - local_d8[0], 0 < (int)uVar12)) {
      local_144 = (uVar12 >> 1) + local_140[3];
    }
    local_144 = local_144 + local_e4;
    local_140[2] = local_140[0] + local_dc + local_fc + local_100;
    if (in_stack_00000058 == '\0') {
      (**(code **)(*local_88 + 8))(local_88,local_f0);
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),local_e8);
      *in_stack_00000014 = local_10c;
      local_ac = local_110;
      local_bc = local_118;
      puVar15 = &local_154;
      FUN_00541208(param_1,local_d8 + 1,&local_144,puVar15,local_140 + 7,local_80,&local_f2,
                   &local_f1,in_stack_0000006c,in_stack_00000070,&local_e4,&local_dd,&local_104,
                   &local_100,&local_fc,&local_dc,local_d8,in_stack_0000005c,&stack0xfffffffc);
      local_10c = *in_stack_00000014;
      local_110 = local_ac;
      if ((((local_f1 != '\0') &&
           (iVar13 = FUN_00541128(param_1,&LAB_00544940,puVar15),
           (local_140[2] - local_104) - iVar13 < in_stack_0000006c)) &&
          (in_stack_0000006c < local_140[2] - local_104)) || (local_f2 != '\0')) {
        local_cd = 1;
      }
      local_80 = local_124[0];
      (**(code **)(*local_e8 + 8))(local_e8,*(undefined4 *)(param_1 + 0xc));
      (**(code **)(*local_f0 + 8))(local_f0,local_88);
    }
    local_130 = local_130 + local_dc + local_fc + local_100;
    *in_stack_00000018 = *in_stack_00000018 + local_dc + local_fc + local_100;
    if ((local_128 < iVar16 + local_130) && (in_stack_00000058 == '\0')) {
      FUN_00404ff0(local_cc);
    }
  }
  if (*in_stack_00000018 == 0) {
    iVar16 = FUN_00541128(param_1,&LAB_00544940);
    *in_stack_00000018 = iVar16;
  }
  local_78 = local_78 >> 1;
  FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),local_b4);
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),local_88);
  FUN_00403a84(local_88);
  FUN_00403a84(local_e8);
  FUN_00403a84(piVar11);
  FUN_00403a84(local_f0);
  FUN_00403a84(local_ec);
  puVar1 = puStack_164;
  *in_FS_OFFSET = uStack_16c;
  puStack_164 = &LAB_00544823;
  puStack_168 = (undefined1 *)0x5447f2;
  FUN_00405008(&local_154,4,puVar1);
  puStack_168 = (undefined1 *)0x5447fd;
  FUN_004048d4(&local_f8);
  puStack_168 = (undefined1 *)0x544808;
  FUN_00404ff0(local_d8 + 1);
  puStack_168 = (undefined1 *)0x544813;
  FUN_00404ff0(local_cc);
  puStack_168 = (undefined1 *)0x54481b;
  FUN_004048d4(&local_60);
  return;
}

