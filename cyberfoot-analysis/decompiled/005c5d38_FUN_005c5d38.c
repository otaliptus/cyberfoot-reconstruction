// Address: 005c5d38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c5d38(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined *local_104;
  undefined *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined *local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined *local_40;
  int *local_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  iVar7 = 0x31;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_005c6d30;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x5c5d73;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1dc))();
  local_28 = (undefined1 *)0x0;
  puStack_30 = (undefined1 *)0x5c5d83;
  iVar7 = FUN_00473f5c(*(undefined4 *)(param_1 + 0x32c));
  if (1 < iVar7) {
    puStack_30 = (undefined1 *)0x5c5d91;
    iVar7 = FUN_00473f5c(*(undefined4 *)(param_1 + 0x32c));
    puVar4 = (undefined *)(iVar7 + -2);
    if (0 < iVar7 + -2) {
      do {
        local_40 = puVar4;
        puStack_30 = (undefined1 *)0x5c5dab;
        FUN_004741a8(*(undefined4 *)(param_1 + 0x32c),2);
        local_40 = local_40 + -1;
        puVar4 = local_40;
      } while (local_40 != (undefined *)0x0);
    }
  }
  if (param_2 == 1) {
    puStack_30 = (undefined1 *)0x5c5dc3;
    FUN_00642c50(0xd1,&local_48);
    puStack_30 = (undefined1 *)local_48;
    puStack_34 = &DAT_005c6d48;
    puStack_38 = (undefined *)0x5c5dd6;
    uVar3 = FUN_0064d61c(0,param_4);
    puStack_38 = (undefined *)0x5c5dde;
    FUN_00409dd8(uVar3,&local_50);
    puStack_38 = (undefined *)0x5c5de9;
    FUN_004051d4(&local_4c,local_50);
    puStack_38 = local_4c;
    local_3c = (int *)0x5c5df9;
    FUN_00405330(&local_44,3);
    local_3c = (int *)0x5c5e07;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_44);
  }
  else {
    puStack_30 = (undefined1 *)0x5c5e16;
    FUN_00642c50(0xd1,&local_58);
    puStack_30 = (undefined1 *)local_58;
    puStack_34 = &DAT_005c6d48;
    puStack_38 = (undefined *)0x5c5e29;
    uVar3 = FUN_0064d63c(0,param_4);
    puStack_38 = (undefined *)0x5c5e31;
    FUN_00409dd8(uVar3,&local_60);
    puStack_38 = (undefined *)0x5c5e3c;
    FUN_004051d4(&local_5c,local_60);
    puStack_38 = local_5c;
    local_3c = (int *)0x5c5e4c;
    FUN_00405330(&local_54,3);
    local_3c = (int *)0x5c5e5a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_54);
  }
  local_3c = (int *)0x5c5e6b;
  puVar4 = (undefined *)FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  iVar9 = DAT_006d2c20;
  iVar7 = DAT_006d2c14;
  if ((param_2 != 3) && (iVar7 = iVar9, -1 < (int)(puVar4 + -1))) {
    iVar8 = 0;
    local_40 = puVar4;
    do {
      if ((((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar8 * 0x48) == iVar9) &&
           (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar8 * 0x48) == param_2)) &&
          (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar8 * 0x48) == 0)) &&
         (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x20 + iVar8 * 0x48) == param_4)) {
        local_3c = (int *)0x5c5f15;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
        local_3c = (int *)0x5c5f20;
        FUN_00511cbc(*(undefined4 *)(param_1 + 0x2f8));
        local_3c = (int *)0x5c5f42;
        FUN_00405194(&local_64,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066afa0 + iVar8 * 0x48) * 0x2f8);
        local_3c = (int *)local_64;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_40 = (undefined *)0x5c5f56;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_40 = (undefined *)0x5c5f68;
        (**(code **)(*piVar1 + 0x194))(piVar1,2,iVar5 + -1);
        if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar8 * 0x48) == '\0') {
          local_40 = &DAT_005c6d5c;
          local_44 = (undefined *)0x5c6008;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_44 = (undefined *)0x5c601e;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),3,iVar5 + -1);
        }
        else {
          local_40 = (undefined *)0x5c5f91;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar8 * 0x48),&local_70);
          local_40 = local_70;
          local_44 = &DAT_005c6d54;
          local_48 = 0x5c5fb0;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar8 * 0x48),&local_74);
          local_48 = local_74;
          local_4c = (undefined *)0x5c5fc0;
          FUN_00404c64(&local_6c,3);
          local_4c = (undefined *)0x5c5fcb;
          FUN_004051d4(&local_68,local_6c);
          local_4c = local_68;
          local_50 = 0x5c5fdd;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_50 = 0x5c5ff3;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),3,iVar5 + -1);
        }
        local_50 = 0x5c6041;
        FUN_00405194(&local_78,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar8 * 0x48) * 0x2f8);
        local_50 = local_78;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_54 = (undefined *)0x5c6055;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_54 = (undefined *)0x5c6067;
        (**(code **)(*piVar1 + 0x194))(piVar1,4,iVar5 + -1);
        local_54 = &DAT_005c6d64;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_58 = 0x5c607c;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_58 = 0x5c608e;
        (**(code **)(*piVar1 + 0x194))(piVar1,9,iVar5 + -1);
        local_58 = 0x5c60a4;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar8 * 0x48),&local_80);
        local_58 = 0x5c60af;
        FUN_004051d4(&local_7c,local_80);
        local_58 = local_7c;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_5c = (undefined *)0x5c60c3;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_5c = (undefined *)0x5c60d2;
        (**(code **)(*piVar1 + 0x194))(piVar1,0,iVar5 + -1);
        local_5c = &DAT_005c6d70;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_60 = (undefined *)0x5c60e7;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_60 = (undefined *)0x5c60f9;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,iVar5 + -1);
        local_60 = &DAT_005c6d70;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_64 = 0x5c610e;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_64 = 0x5c6120;
        (**(code **)(*piVar1 + 0x194))(piVar1,5,iVar5 + -1);
        if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar8 * 0x48) != '\0') {
          local_3c = (int *)0x5c614d;
          FUN_00651ebc(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x40 + iVar8 * 0x48),&local_84);
          local_3c = (int *)local_84;
          local_40 = (undefined *)0x5c615f;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_40 = (undefined *)0x5c6175;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),6,iVar5 + -1);
          local_40 = (undefined *)0x5c618f;
          FUN_006468f4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x3c + iVar8 * 0x48),&local_88);
          local_40 = local_88;
          local_44 = (undefined *)0x5c61a4;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_44 = (undefined *)0x5c61ba;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),7,iVar5 + -1);
          local_44 = (undefined *)0x5c61c7;
          FUN_00409dd8(iVar8,&local_90);
          local_44 = (undefined *)0x5c61d8;
          FUN_004051d4(&local_8c,local_90);
          local_44 = local_8c;
          local_48 = 0x5c61ed;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_48 = 0x5c6203;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),9,iVar5 + -1);
        }
        local_3c = (int *)0x5c620e;
        FUN_00511cd0(*(undefined4 *)(param_1 + 0x2f8));
        iVar5 = 1;
        do {
          local_3c = (int *)0x5c6230;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar8 * 0x48 + -4 + iVar5 * 4),
                       &local_94);
          if (local_94 != 0) {
            local_3c = (int *)0x5c6249;
            FUN_004aa034(PTR_LAB_004a5420,1);
            local_3c = (int *)0x5c6269;
            FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar8 * 0x48 + -4 + iVar5 * 4),
                         &local_98);
            piVar1 = local_3c;
            iVar6 = *local_3c;
            local_3c = (int *)0x5c6277;
            (**(code **)(iVar6 + 0x4c))(piVar1,local_98);
            if (iVar5 == 1) {
              local_3c = (int *)0x5c628a;
              iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
              local_3c = (int *)0x5c629a;
              FUN_00416244(local_a8,iVar6 + -1,0xfc);
              local_3c = (int *)local_a8;
              local_40 = (undefined *)0x5c62b1;
              FUN_00416478(local_b8,"nxescudo1");
              piVar1 = local_3c;
              local_3c = (int *)0x5c62c3;
              iVar6 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x2f8),local_b8,piVar1);
              *(int **)(iVar6 + 8) = local_3c;
            }
            else {
              local_3c = (int *)0x5c62d9;
              iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
              local_3c = (int *)0x5c62e9;
              FUN_00416244(local_c8,iVar6 + -1,0xfc);
              local_3c = (int *)local_c8;
              local_40 = (undefined *)0x5c6300;
              FUN_00416478(local_d8,"nxescudo2");
              piVar1 = local_3c;
              local_3c = (int *)0x5c6312;
              iVar6 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x2f8),local_d8,piVar1);
              *(int **)(iVar6 + 8) = local_3c;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 3);
      }
      iVar8 = iVar8 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != (undefined *)0x0);
  }
  if ((param_2 == 3) && (-1 < (int)(puVar4 + -1))) {
    iVar9 = 0;
    local_40 = puVar4;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar9 * 0x48) == iVar7) &&
          (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar9 * 0x48) == 3)) &&
         (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x24 + iVar9 * 0x48) == 0)) {
        local_3c = (int *)0x5c63a3;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
        local_3c = (int *)0x5c63ae;
        FUN_00511cbc(*(undefined4 *)(param_1 + 0x2f8));
        local_3c = (int *)0x5c63d3;
        FUN_00405194(&local_dc,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066afa0 + iVar9 * 0x48) * 0x2f8);
        local_3c = (int *)local_dc;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_40 = (undefined *)0x5c63ea;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_40 = (undefined *)0x5c63fc;
        (**(code **)(*piVar1 + 0x194))(piVar1,2,iVar8 + -1);
        if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar9 * 0x48) == '\0') {
          local_40 = &DAT_005c6d5c;
          local_44 = (undefined *)0x5c64b8;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_44 = (undefined *)0x5c64ce;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),3,iVar8 + -1);
        }
        else {
          local_40 = (undefined *)0x5c642c;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar9 * 0x48),&local_e8);
          local_40 = local_e8;
          local_44 = &DAT_005c6d54;
          local_48 = 0x5c6451;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar9 * 0x48),&local_ec);
          local_48 = local_ec;
          local_4c = (undefined *)0x5c6467;
          FUN_00404c64(&local_e4,3);
          local_4c = (undefined *)0x5c6478;
          FUN_004051d4(&local_e0,local_e4);
          local_4c = local_e0;
          local_50 = 0x5c648d;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_50 = 0x5c64a3;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),3,iVar8 + -1);
        }
        local_50 = 0x5c64f4;
        FUN_00405194(&local_f0,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar9 * 0x48) * 0x2f8);
        local_50 = local_f0;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_54 = (undefined *)0x5c650b;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_54 = (undefined *)0x5c651d;
        (**(code **)(*piVar1 + 0x194))(piVar1,4,iVar8 + -1);
        local_54 = &DAT_005c6d64;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_58 = 0x5c6532;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_58 = 0x5c6544;
        (**(code **)(*piVar1 + 0x194))(piVar1,9,iVar8 + -1);
        local_58 = 0x5c655d;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar9 * 0x48),&local_f8);
        local_58 = 0x5c656e;
        FUN_004051d4(&local_f4,local_f8);
        local_58 = local_f4;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_5c = (undefined *)0x5c6585;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_5c = (undefined *)0x5c6594;
        (**(code **)(*piVar1 + 0x194))(piVar1,0,iVar8 + -1);
        local_5c = &DAT_005c6d70;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_60 = (undefined *)0x5c65a9;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_60 = (undefined *)0x5c65bb;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,iVar8 + -1);
        local_60 = &DAT_005c6d70;
        piVar1 = *(int **)(param_1 + 0x2f8);
        local_64 = 0x5c65d0;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_64 = 0x5c65e2;
        (**(code **)(*piVar1 + 0x194))(piVar1,5,iVar8 + -1);
        if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar9 * 0x48) != '\0') {
          local_3c = (int *)0x5c6612;
          FUN_00651ebc(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x40 + iVar9 * 0x48),&local_fc);
          local_3c = (int *)local_fc;
          local_40 = (undefined *)0x5c6627;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_40 = (undefined *)0x5c663d;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),6,iVar8 + -1);
          local_40 = (undefined *)0x5c6657;
          FUN_006468f4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x3c + iVar9 * 0x48),&local_100);
          local_40 = local_100;
          local_44 = (undefined *)0x5c666c;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_44 = (undefined *)0x5c6682;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),7,iVar8 + -1);
          local_44 = (undefined *)0x5c668f;
          FUN_00409dd8(iVar9,&local_108);
          local_44 = (undefined *)0x5c66a0;
          FUN_004051d4(&local_104,local_108);
          local_44 = local_104;
          local_48 = 0x5c66b5;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_48 = 0x5c66cb;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))
                    (*(int **)(param_1 + 0x2f8),9,iVar8 + -1);
        }
        local_3c = (int *)0x5c66d6;
        FUN_00511cd0(*(undefined4 *)(param_1 + 0x2f8));
        iVar8 = 1;
        do {
          local_3c = (int *)0x5c66f8;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar9 * 0x48 + -4 + iVar8 * 4),
                       &local_10c);
          if (local_10c != 0) {
            local_3c = (int *)0x5c6711;
            FUN_004aa034(PTR_LAB_004a5420,1);
            local_3c = (int *)0x5c6731;
            FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar9 * 0x48 + -4 + iVar8 * 4),
                         &local_110);
            piVar1 = local_3c;
            iVar5 = *local_3c;
            local_3c = (int *)0x5c673f;
            (**(code **)(iVar5 + 0x4c))(piVar1,local_110);
            if (iVar8 == 1) {
              local_3c = (int *)0x5c6752;
              iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
              local_3c = (int *)0x5c6762;
              FUN_00416244(local_120,iVar5 + -1,0xfc);
              local_3c = (int *)local_120;
              local_40 = (undefined *)0x5c6779;
              FUN_00416478(local_130,"nxescudo1");
              piVar1 = local_3c;
              local_3c = (int *)0x5c678b;
              iVar5 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x2f8),local_130,piVar1);
              *(int **)(iVar5 + 8) = local_3c;
            }
            else {
              local_3c = (int *)0x5c67a1;
              iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
              local_3c = (int *)0x5c67b1;
              FUN_00416244(local_140,iVar5 + -1,0xfc);
              local_3c = (int *)local_140;
              local_40 = (undefined *)0x5c67c8;
              FUN_00416478(local_150,"nxescudo2");
              piVar1 = local_3c;
              local_3c = (int *)0x5c67da;
              iVar5 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x2f8),local_150,piVar1);
              *(int **)(iVar5 + 8) = local_3c;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 3);
      }
      iVar9 = iVar9 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != (undefined *)0x0);
  }
  if (param_2 == 3) {
    local_154 = (int)*(uint *)(PTR_DAT_0066b50c +
                              *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x530) * 0x30 +
                              -0x30) >> 1;
    if (local_154 < 0) {
      local_154 = local_154 +
                  (uint)((*(uint *)(PTR_DAT_0066b50c +
                                   *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x530) * 0x30
                                   + -0x30) & 1) != 0);
    }
    local_3c = (int *)0x5c6838;
    local_28 = (undefined1 *)FUN_00402c38();
  }
  if (param_2 == 1) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      local_3c = (int *)0x5c6867;
      FUN_00642c50(0x23,&local_158);
      local_3c = (int *)0x5c6876;
      FUN_005c5c78(param_1,0,local_158);
      local_3c = (int *)0x5c6884;
      iVar7 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      if (0xb < iVar7) {
        local_3c = (int *)0x5c6899;
        FUN_00642c50(0x24,&local_15c);
        local_3c = (int *)0x5c68ab;
        FUN_005c5c78(param_1,0xb,local_15c);
      }
      local_3c = (int *)0x5c68b9;
      iVar7 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      if (0x16 < iVar7) {
        local_3c = (int *)0x5c68ce;
        FUN_00642c50(0x25,&local_160);
        local_3c = (int *)0x5c68e0;
        FUN_005c5c78(param_1,0x16,local_160);
      }
      local_3c = (int *)0x5c68ee;
      iVar7 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      if (0x21 < iVar7) {
        local_3c = (int *)0x5c6907;
        FUN_00642c50(0x26,&local_164);
        local_3c = (int *)0x5c6919;
        FUN_005c5c78(param_1,0x21,local_164);
      }
    }
    else {
      local_3c = (int *)0x5c692e;
      FUN_00642c50(0x23,&local_168);
      local_3c = (int *)0x5c693d;
      FUN_005c5c78(param_1,0,local_168);
      local_3c = (int *)0x5c694d;
      FUN_00642c50(0x24,&local_16c);
      local_3c = (int *)0x5c695f;
      FUN_005c5c78(param_1,6,local_16c);
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2c20 * 0x294)) {
        local_3c = (int *)0x5c698b;
        FUN_00642c50(0x25,&local_170);
        local_3c = (int *)0x5c699d;
        FUN_005c5c78(param_1,0xc,local_170);
      }
      if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2c20 * 0x294)) {
        local_3c = (int *)0x5c69c9;
        FUN_00642c50(0x26,&local_174);
        local_3c = (int *)0x5c69db;
        FUN_005c5c78(param_1,0x12,local_174);
      }
    }
  }
  if (param_2 == 3) {
    local_3c = (int *)0x5c69f3;
    FUN_005c5c78(param_1,0,&DAT_005c6da0);
    if (1 < *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x510)) {
      local_3c = (int *)0x5c6a1d;
      FUN_005c5c78(param_1,(int)local_28 + 1,&DAT_005c6dbc);
    }
    if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x510)) {
      local_3c = (int *)0x5c6a49;
      FUN_005c5c78(param_1,(int)local_28 + 5,&DAT_005c6dd8);
    }
    if (3 < *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x510)) {
      local_3c = (int *)0x5c6a75;
      FUN_005c5c78(param_1,(int)local_28 + 9,&DAT_005c6df4);
    }
  }
  if ((param_2 == 4) || (param_2 == 6)) {
    local_3c = (int *)0x5c6a95;
    FUN_00642c50(0x1dd,&local_178);
    local_3c = (int *)0x5c6aa5;
    FUN_0040526c(&local_178,&DAT_005c6e10);
    local_3c = (int *)0x5c6ab4;
    FUN_005c5c78(param_1,0,local_178);
    local_3c = (int *)0x5c6ac4;
    FUN_00642c50(0x1dd,&local_17c);
    local_3c = (int *)0x5c6ad4;
    FUN_0040526c(&local_17c,&DAT_005c6e1c);
    local_3c = (int *)0x5c6ae6;
    FUN_005c5c78(param_1,3,local_17c);
    local_3c = (int *)0x5c6af6;
    FUN_00642c50(0x1dd,&local_180);
    local_3c = (int *)0x5c6b06;
    FUN_0040526c(&local_180,&DAT_005c6e28);
    local_3c = (int *)0x5c6b18;
    FUN_005c5c78(param_1,6,local_180);
    local_3c = (int *)0x5c6b28;
    FUN_00642c50(0x1dd,&local_184);
    local_3c = (int *)0x5c6b38;
    FUN_0040526c(&local_184,&DAT_005c6e34);
    local_3c = (int *)0x5c6b4a;
    FUN_005c5c78(param_1,9,local_184);
    local_3c = (int *)0x5c6b5a;
    FUN_00642c50(0x1dd,&local_188);
    local_3c = (int *)0x5c6b6a;
    FUN_0040526c(&local_188,&DAT_005c6e40);
    local_3c = (int *)0x5c6b7c;
    FUN_005c5c78(param_1,0xc,local_188);
    local_3c = (int *)0x5c6b8c;
    FUN_00642c50(0x1dd,&local_18c);
    local_3c = (int *)0x5c6b9c;
    FUN_0040526c(&local_18c,&DAT_005c6e4c);
    local_3c = (int *)0x5c6bae;
    FUN_005c5c78(param_1,0xf,local_18c);
    local_3c = (int *)0x5c6bbe;
    FUN_00642c50(0x1dd,&local_190);
    local_3c = (int *)0x5c6bce;
    FUN_0040526c(&local_190,&DAT_005c6e58);
    local_3c = (int *)0x5c6be0;
    FUN_005c5c78(param_1,0x12,local_190);
    local_3c = (int *)0x5c6bf0;
    FUN_00642c50(0x1dd,&local_194);
    local_3c = (int *)0x5c6c00;
    FUN_0040526c(&local_194,&DAT_005c6e64);
    local_3c = (int *)0x5c6c12;
    FUN_005c5c78(param_1,0x15,local_194);
  }
  puVar2 = puStack_30;
  *in_FS_OFFSET = puStack_38;
  puStack_30 = &LAB_005c6d3a;
  puStack_34 = (undefined *)0x5c6c2f;
  FUN_00405008(&local_194,0x10,puVar2);
  puStack_34 = (undefined *)0x5c6c45;
  FUN_00405744(local_150,PTR_DAT_004010f8,4);
  puStack_34 = (undefined *)0x5c6c55;
  FUN_004048f8(&local_110,3);
  puStack_34 = (undefined *)0x5c6c65;
  FUN_00405008(&local_104,3);
  puStack_34 = (undefined *)0x5c6c70;
  FUN_004048d4(&local_f8);
  puStack_34 = (undefined *)0x5c6c80;
  FUN_00405008(&local_f4,2);
  puStack_34 = (undefined *)0x5c6c90;
  FUN_004048f8(&local_ec,3);
  puStack_34 = (undefined *)0x5c6ca0;
  FUN_00405008(&local_e0,2);
  puStack_34 = (undefined *)0x5c6cb6;
  FUN_00405744(local_d8,PTR_DAT_004010f8,4);
  puStack_34 = (undefined *)0x5c6cc6;
  FUN_004048f8(&local_98,3);
  puStack_34 = (undefined *)0x5c6cd6;
  FUN_00405008(&local_8c,3);
  puStack_34 = (undefined *)0x5c6cde;
  FUN_004048d4(&local_80);
  puStack_34 = (undefined *)0x5c6ceb;
  FUN_00405008(&local_7c,2);
  puStack_34 = (undefined *)0x5c6cf8;
  FUN_004048f8(&local_74,3);
  puStack_34 = (undefined *)0x5c6d05;
  FUN_00405008(&local_68,2);
  puStack_34 = (undefined *)0x5c6d0d;
  FUN_004048d4(&local_60);
  puStack_34 = (undefined *)0x5c6d1a;
  FUN_00405008(&local_5c,3);
  puStack_34 = (undefined *)0x5c6d22;
  FUN_004048d4(&local_50);
  puStack_34 = (undefined *)0x5c6d2f;
  FUN_00405008(&local_4c,3);
  return;
}

