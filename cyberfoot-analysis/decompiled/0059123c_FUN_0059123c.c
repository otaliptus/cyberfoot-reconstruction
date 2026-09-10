// Address: 0059123c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059123c(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  float10 fVar9;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined4 local_bc;
  undefined1 local_b8 [4];
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [28];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined1 **ppuStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  iVar7 = 0x1b;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_20 = &LAB_00591785;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_28 = (undefined1 *)0x59126d;
  local_8 = param_2;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154);
  local_28 = (undefined1 *)0x591279;
  iVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b128);
  if (-1 < iVar7) {
    iVar7 = iVar7 + 1;
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b128 + 4 + iVar8 * 0x20) == local_8) {
        local_28 = (undefined1 *)0x5912a8;
        iVar5 = FUN_00405eec(local_c);
        local_28 = (undefined1 *)(iVar5 + 1);
        ppuStack_2c = (undefined1 **)0x5912bd;
        FUN_004060a8(&local_c,PTR_DAT_005911fc,1);
        local_28 = (undefined1 *)0x5912c8;
        iVar5 = FUN_00405eec(unaff_EBX);
        local_28 = (undefined1 *)(iVar5 + 1);
        ppuStack_2c = (undefined1 **)0x5912dd;
        FUN_004060a8(&stack0xfffffff0,PTR_DAT_0059121c,1);
        local_28 = (undefined1 *)0x5912e8;
        iVar5 = FUN_00405ef4(local_c);
        *(undefined4 *)(local_c + iVar5 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b128 + iVar8 * 0x20);
        local_28 = (undefined1 *)0x59130a;
        iVar5 = FUN_00405ef4(unaff_EBX);
        *(undefined4 *)(unaff_EBX + iVar5 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b128 + 0xc + iVar8 * 0x20);
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_28 = (undefined1 *)0x591339;
  iVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae14);
  if (-1 < iVar7) {
    iVar7 = iVar7 + 1;
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066ae14 + iVar8 * 0x20) == local_8) {
        local_28 = (undefined1 *)0x591367;
        iVar5 = FUN_00405eec(local_c);
        local_28 = (undefined1 *)(iVar5 + 1);
        ppuStack_2c = (undefined1 **)0x59137c;
        FUN_004060a8(&local_c,PTR_DAT_005911fc,1);
        local_28 = (undefined1 *)0x591387;
        iVar5 = FUN_00405eec(unaff_EBX);
        local_28 = (undefined1 *)(iVar5 + 1);
        ppuStack_2c = (undefined1 **)0x59139c;
        FUN_004060a8(&stack0xfffffff0,PTR_DAT_0059121c,1);
        local_28 = (undefined1 *)0x5913a7;
        iVar5 = FUN_00405ef4(local_c);
        *(undefined4 *)(local_c + iVar5 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 0x10 + iVar8 * 0x20);
        local_28 = (undefined1 *)0x5913ca;
        iVar5 = FUN_00405ef4(unaff_EBX);
        *(undefined4 *)(unaff_EBX + iVar5 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 0xc + iVar8 * 0x20);
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_28 = (undefined1 *)0x5913f5;
  iVar7 = FUN_00405eec(local_c);
  if (0 < iVar7) {
    local_28 = (undefined1 *)0x591405;
    iVar7 = FUN_00405ef4(local_c);
    if (-1 < iVar7) {
      do {
        local_28 = (undefined1 *)0x591423;
        (**(code **)(**(int **)(param_1 + 0x308) + 0x1d0))(*(int **)(param_1 + 0x308),1);
        local_28 = (undefined1 *)0x591431;
        FUN_00409dd8(*(undefined4 *)(local_c + iVar7 * 4),&stack0xffffffe8);
        local_28 = (undefined1 *)0x59143c;
        FUN_004051d4(&stack0xffffffec,unaff_EDI);
        piVar1 = *(int **)(param_1 + 0x308);
        ppuStack_2c = (undefined1 **)0x591450;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        ppuStack_2c = (undefined1 **)0x59145d;
        FUN_00416244(&local_28,iVar8 + -1,0xfc);
        ppuStack_2c = &local_28;
        puStack_30 = (undefined4 *)0x59146e;
        FUN_00416478(&local_38,&DAT_005917a0);
        ppuVar4 = ppuStack_2c;
        ppuStack_2c = (undefined1 **)0x591479;
        FUN_0050e9b8(piVar1,&local_38,ppuVar4);
        iVar8 = *(int *)(local_c + iVar7 * 4);
        ppuStack_2c = *(undefined1 ***)(*(int *)PTR_DAT_0066b154 + 0x44 + iVar8 * 600);
        puStack_30 = *(undefined4 **)(*(int *)PTR_DAT_0066b154 + 0x40 + iVar8 * 600);
        uStack_34 = 0x591498;
        FUN_0040d11c(&local_40);
        ppuStack_2c = (undefined1 **)0x5914a3;
        FUN_004051d4(&local_3c,local_40);
        ppuStack_2c = (undefined1 **)local_3c;
        piVar1 = *(int **)(param_1 + 0x308);
        puStack_30 = (undefined4 *)0x5914b7;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        puStack_30 = (undefined4 *)0x5914c4;
        FUN_00416244(&local_50,iVar8 + -1,0xfc);
        puStack_30 = &local_50;
        uStack_34 = 0x5914d5;
        FUN_00416478(local_60,"nxdata");
        puVar3 = puStack_30;
        puStack_30 = (undefined4 *)0x5914e0;
        FUN_0050e9b8(piVar1,local_60,puVar3);
        puStack_30 = (undefined4 *)0x591509;
        FUN_004030d4(local_88,*(int *)PTR_DAT_0066af70 +
                              *(int *)(*(int *)PTR_DAT_0066b154 +
                                      *(int *)(local_c + iVar7 * 4) * 600) * 0x2f8);
        puStack_30 = (undefined4 *)0x59151b;
        FUN_004030a4(local_88,&DAT_005917b8,0x1a);
        puStack_30 = (undefined4 *)0x591529;
        FUN_00404b48(&local_6c,local_88);
        puStack_30 = (undefined4 *)local_6c;
        uStack_34 = 0x59154a;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b154 + 8 + *(int *)(local_c + iVar7 * 4) * 600),&local_8c
                    );
        uStack_34 = local_8c;
        local_38 = &DAT_005917c4;
        local_3c = 0x591573;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b154 + 0xc + *(int *)(local_c + iVar7 * 4) * 600),
                     &local_90);
        local_3c = local_90;
        local_40 = &DAT_005917d0;
        uStack_44 = 0x5915a8;
        FUN_00404b48(&local_94,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066b154 + 4 + *(int *)(local_c + iVar7 * 4) * 600) *
                     0x2f8);
        uStack_44 = local_94;
        uStack_48 = 0x5915bb;
        FUN_00404c64(&local_68,6);
        uStack_48 = 0x5915c6;
        FUN_004051d4(&local_64,local_68);
        uStack_48 = local_64;
        piVar1 = *(int **)(param_1 + 0x308);
        uStack_4c._0_2_ = 0x15da;
        uStack_4c._2_2_ = 0x59;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        uStack_4c._0_2_ = 0x15ea;
        uStack_4c._2_2_ = 0x59;
        FUN_00416244(local_a4,iVar8 + -1,0xfc);
        uStack_4c = local_a4;
        local_50 = 0x591601;
        FUN_00416478(local_b4,"nxjogo");
        puVar2 = uStack_4c;
        uStack_4c._0_2_ = 0x160f;
        uStack_4c._2_2_ = 0x59;
        FUN_0050e9b8(piVar1,local_b4,puVar2);
        fVar9 = (float10)*(float *)(unaff_EBX + iVar7 * 4);
        uStack_54 = SUB104(fVar9,0);
        local_50 = (undefined4)((unkuint10)fVar9 >> 0x20);
        uStack_4c._0_2_ = (undefined2)((unkuint10)fVar9 >> 0x40);
        uStack_58 = 0x591627;
        FUN_0040bdc0(&local_bc);
        uStack_4c._0_2_ = 0x1638;
        uStack_4c._2_2_ = 0x59;
        FUN_004051d4(local_b8,local_bc);
        uStack_4c._0_2_ = local_b8._0_2_;
        uStack_4c._2_2_ = local_b8._2_2_;
        piVar1 = *(int **)(param_1 + 0x308);
        local_50 = 0x59164f;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_28 = (undefined1 *)0x59165f;
        FUN_00416244(local_cc,iVar8 + -1,0xfc);
        local_28 = local_cc;
        ppuStack_2c = (undefined1 **)0x591676;
        FUN_00416478(local_dc,"nxnota");
        puVar2 = local_28;
        local_28 = (undefined1 *)0x591684;
        FUN_0050e9b8(piVar1,local_dc,puVar2);
        iVar7 = iVar7 + -1;
      } while (iVar7 != -1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x308);
  local_28 = (undefined1 *)0x5916a0;
  uVar6 = FUN_0050e4dc(piVar1,"nxdata");
  local_28 = (undefined1 *)0x5916ae;
  (**(code **)(*piVar1 + 0x1b4))(piVar1,uVar6,0);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0059178f;
  puStack_20 = (undefined1 *)0x5916d1;
  FUN_00405744(local_dc,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5916dc;
  FUN_004048d4(&local_bc);
  puStack_20 = (undefined1 *)0x5916e7;
  FUN_00404ff0(local_b8);
  puStack_20 = (undefined1 *)0x5916fd;
  FUN_00405744(local_b4,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x59170d;
  FUN_004048f8(&local_94,3);
  puStack_20 = (undefined1 *)0x59171a;
  FUN_004048f8(&local_6c,2);
  puStack_20 = (undefined1 *)0x591722;
  FUN_00404ff0(&local_64);
  puStack_20 = (undefined1 *)0x591735;
  FUN_00405744(local_60,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x59173d;
  FUN_004048d4(&local_40);
  puStack_20 = (undefined1 *)0x591745;
  FUN_00404ff0(&local_3c);
  puStack_20 = (undefined1 *)0x591758;
  FUN_00405744(&local_38,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x591760;
  FUN_004048d4(&stack0xffffffe8);
  puStack_20 = (undefined1 *)0x591768;
  FUN_00404ff0(&stack0xffffffec);
  puStack_20 = (undefined1 *)0x591776;
  FUN_004061c8(&stack0xfffffff0,PTR_DAT_0059121c);
  puStack_20 = (undefined1 *)0x591784;
  FUN_004061c8(&local_c,PTR_DAT_005911fc);
  return;
}

