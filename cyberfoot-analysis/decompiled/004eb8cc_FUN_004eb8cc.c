// Address: 004eb8cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_004eb8cc(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  uint uVar6;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar7;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 uVar8;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 uVar9;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  float10 in_ST1;
  float10 in_ST2;
  float10 fVar14;
  float10 in_ST3;
  float10 fVar15;
  float10 in_ST4;
  float10 fVar16;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar17;
  float10 in_ST7;
  undefined1 *apuStackY_181c [1513];
  undefined4 uVar18;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar13 = 0;
  puStack_5c = &stack0xfffffffc;
  local_44 = 0;
  puStack_60 = &LAB_004ebc82;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff9c;
  FUN_004e9644(param_1);
  iVar10 = 0xf;
  local_c = 0x26;
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x208);
  (**(code **)(**(int **)(iVar1 + 0xc) + 8))(*(int **)(iVar1 + 0xc),*(undefined4 *)(param_1 + 0x68))
  ;
  FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000008);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000011);
  uVar3 = FUN_00465c0c(param_1);
  uVar4 = FUN_00465c50(param_1);
  FUN_0042b158(iVar1,0,0,uVar4,uVar3);
  FUN_004eb098(param_1,&stack0xffffffc0);
  FUN_004ebd38(param_1,&stack0xffffffc0);
  local_8 = 1;
  do {
    uVar3 = 1;
    uVar4 = FUN_004eb0c0(param_1,local_8);
    FUN_00405118(&stack0xffffffbc,uVar4);
    uVar18 = 0;
    uVar4 = local_44;
    FUN_0040709c(iVar10,0x16,iVar10 + 0xf,&stack0xffffffc0,0x24);
    FUN_004e5798(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 0x208),&stack0xffffffc0,uVar18,uVar4);
    iVar10 = iVar10 + 0x11;
    local_8 = local_8 + 1;
  } while (local_8 != 8);
  iVar10 = 0xf;
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000011);
  FUN_0042b064(iVar1,0xf,0x24);
  iVar5 = FUN_00465c0c(param_1);
  FUN_0042b004(iVar1,iVar5 + -0x11,0x24);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000011);
  FUN_0042b064(iVar1,0xf,0x80);
  iVar5 = FUN_00465c0c(param_1);
  FUN_0042b004(iVar1,iVar5 + -0x11,0x80);
  local_14 = (uint)*(ushort *)(param_1 + 0x2a8);
  local_18 = (uint)*(ushort *)(param_1 + 0x27a);
  local_20 = 1;
  FUN_004bc4dc(*(undefined2 *)(param_1 + 0x2a8),
               CONCAT22(extraout_var_09,*(undefined2 *)(param_1 + 0x27a)));
  fVar17 = in_ST7;
  iVar5 = FUN_004ebf64(param_1);
  if (iVar5 < 2) {
    local_1c = 1;
  }
  else {
    FUN_004eb4e8(param_1,&local_14,&local_18);
    FUN_004bc4dc(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x2a8)),
                 CONCAT22(extraout_var_10,*(undefined2 *)(param_1 + 0x27a)));
    fVar14 = fVar17;
    iVar5 = FUN_004ebf64(param_1);
    uVar6 = FUN_004bc3f4(local_14 & 0xffff,CONCAT22(extraout_var_11,(undefined2)local_18));
    local_1c = ((uVar6 & 0xffff) - iVar5) + 2;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = fVar17;
    fVar17 = fVar14;
  }
  while (fVar16 = fVar17, fVar15 = in_ST7, fVar14 = in_ST6, local_10 < 0x2a) {
    FUN_0040709c(iVar10,local_c,iVar10 + 0xf,local_30,local_c + 0xf);
    if (*(ushort *)(param_1 + 0x27a) == local_18) {
      FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000008);
      uVar8 = extraout_var_05;
      uVar9 = extraout_var_12;
      uVar7 = extraout_var_00;
    }
    else {
      FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000011);
      uVar8 = extraout_var_06;
      uVar9 = extraout_var_13;
      uVar7 = extraout_var_01;
    }
    FUN_0040c20c(CONCAT22(uVar7,(undefined2)local_14),CONCAT22(uVar9,(undefined2)local_18),
                 CONCAT22(uVar8,(undefined2)local_1c));
    in_ST6 = fVar16;
    uVar8 = extraout_var_07;
    uVar9 = extraout_var_14;
    uVar7 = extraout_var_02;
    if (in_ST1 == (float10)*(double *)(param_1 + 0x298)) {
      cVar2 = FUN_004e4b0c();
      if (cVar2 == '\0') {
        FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xc0c0c0);
      }
      else {
        uVar4 = FUN_004080a4(0xfb,0xe6,0x94);
        FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),uVar4);
      }
      FUN_0040709c(iVar10,local_c,iVar10 + 0x11,&stack0xffffffc0,local_c + 0xf);
      FUN_0042af8c(iVar1,&stack0xffffffc0);
      FUN_0040709c(iVar10,local_c,iVar10 + 0x11,&stack0xffffffc0,local_c + 0xf);
      puVar11 = (undefined4 *)(param_1 + 0x288 + (uint)bVar13 * -8);
      *(undefined4 *)(param_1 + 0x284) = local_40;
      puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
      *puVar11 = *(undefined4 *)((int)&stack0xffffffc4 + (uint)bVar13 * 0xfffffffe * 4);
      *puVar12 = *(undefined4 *)(&stack0xffffffc8 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      puVar12[(uint)bVar13 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffc8 + (uint)bVar13 * -8 + (uint)bVar13 * -8) +
            ((uint)bVar13 * -2 + 1) * 4);
      uVar8 = extraout_var_08;
      uVar9 = extraout_var_15;
      uVar7 = extraout_var_03;
    }
    FUN_0040c20c(CONCAT22(uVar7,(undefined2)local_14),CONCAT22(uVar9,(undefined2)local_18),
                 CONCAT22(uVar8,(undefined2)local_1c));
    in_ST7 = in_ST6;
    FUN_004bc42c();
    fVar17 = in_ST7;
    if (in_ST3 == (float10)(double)in_ST2) {
      cVar2 = FUN_004e4b0c();
      if (cVar2 == '\0') {
        FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000d);
      }
      else {
        FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0x80);
      }
      FUN_0040709c(iVar10,local_c,iVar10 + 0x11,&stack0xffffffc0,local_c + 0xf);
      FUN_0042afc8(iVar1,&stack0xffffffc0);
    }
    FUN_004ebc90(param_1,local_1c,local_30);
    local_10 = local_10 + 1;
    local_1c = local_1c + 1;
    uVar6 = FUN_004bc3f4(CONCAT22(extraout_var_04,(undefined2)local_14),
                         CONCAT22(extraout_var_16,(undefined2)local_18));
    if ((int)(uVar6 & 0xffff) < local_1c) {
      FUN_004eb4e8(param_1,&local_14,&local_18);
      local_1c = 1;
    }
    iVar10 = iVar10 + 0x11;
    local_20 = local_20 + 1;
    in_ST1 = in_ST4;
    in_ST2 = in_ST5;
    in_ST3 = fVar14;
    in_ST4 = fVar15;
    in_ST5 = fVar16;
    if (7 < local_20) {
      iVar10 = 0xf;
      local_c = local_c + 0xf;
      local_20 = 1;
    }
  }
  *in_FS_OFFSET = uStack_64;
  FUN_00404ff0(&stack0xffffffbc,uStack_64,uVar3,&LAB_004ebc89);
  return;
}

