// Address: 005eea60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm19_FormCreate(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined1 local_11c [16];
  undefined1 local_10c [16];
  undefined4 local_fc;
  undefined *local_f8;
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *local_34;
  undefined1 **ppuStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x28;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005ef10a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x5eea91;
  local_8 = param_1;
  FUN_00642c50(0x132,&local_20);
  puStack_2c = (undefined1 *)0x5eeaa2;
  FUN_004e1414(*(undefined4 *)(local_8 + 0x31c),local_20);
  puStack_2c = (undefined1 *)0x5eeab3;
  (**(code **)(**(int **)(local_8 + 0x2f8) + 0x1dc))();
  puStack_2c = (undefined1 *)0x5eead1;
  FUN_00404b48(&local_24,*(int *)PTR_DAT_0066b718 + *(int *)PTR_DAT_0066b394 * 0x80);
  puStack_2c = (undefined1 *)0x5eeae2;
  FUN_00466238(*(undefined4 *)(local_8 + 0x308),local_24);
  puStack_2c = (undefined1 *)0x5eeaee;
  puStack_2c = (undefined1 *)FUN_00405eec(*(undefined4 *)PTR_DAT_0066b6ac);
  ppuStack_30 = (undefined1 **)0x5eeb02;
  FUN_004060a8(&stack0xffffffec,PTR_LAB_005eea40,1);
  puStack_2c = (undefined1 *)0x5eeb11;
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    local_c = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + local_c * 0x14) == *(int *)PTR_DAT_0066b394)
         && (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + local_c * 0x14) == 1)) {
        ppuStack_30 = (undefined1 **)&LAB_005eeb81;
        local_34 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &local_34;
        piVar9 = (int *)(unaff_EBX + *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_c * 0x14) * 4);
        *piVar9 = *piVar9 + 1;
        *in_FS_OFFSET = local_34;
        puStack_2c = (undefined1 *)0x5eeb93;
        iVar6 = FUN_00405eec(local_10,local_34,&stack0xfffffffc);
        puStack_2c = (undefined1 *)(iVar6 + 1);
        ppuStack_30 = (undefined1 **)0x5eeba8;
        FUN_004060a8(&local_10,PTR_DAT_005eea20,1);
        puStack_2c = (undefined1 *)0x5eebb3;
        iVar7 = FUN_00405ef4(local_10);
        iVar6 = local_c;
        *(undefined4 *)(local_10 + iVar7 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b058 + local_c * 0x14);
        puStack_2c = (undefined1 *)0x5eebd9;
        iVar7 = FUN_00405ef4(local_10);
        *(undefined4 *)(local_10 + 4 + iVar7 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b058 + 4 + iVar6 * 0x14);
        puStack_2c = (undefined1 *)0x5eebfb;
        iVar7 = FUN_00405ef4(local_10);
        *(undefined4 *)(local_10 + 8 + iVar7 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b058 + 8 + iVar6 * 0x14);
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puStack_2c = (undefined1 *)0x5eec29;
  iVar5 = FUN_00405ef4(unaff_EBX);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    local_c = 0;
    do {
      if (0 < *(int *)(unaff_EBX + local_c * 4)) {
        puStack_2c = (undefined1 *)0x5eec62;
        (**(code **)(**(int **)(local_8 + 0x2f8) + 0x1d0))(*(int **)(local_8 + 0x2f8),1);
        puStack_2c = (undefined1 *)0x0;
        piVar9 = *(int **)(local_8 + 0x2f8);
        ppuStack_30 = (undefined1 **)0x5eec77;
        iVar6 = (**(code **)(*piVar9 + 0x11c))();
        ppuStack_30 = (undefined1 **)0x5eec84;
        FUN_00416244(&local_34,iVar6 + -1,0xfc);
        ppuStack_30 = &local_34;
        local_34 = (undefined1 *)0x5eec95;
        FUN_00416478(local_44,"nxano");
        ppuVar4 = ppuStack_30;
        ppuStack_30 = (undefined1 **)0x5eeca0;
        FUN_0050e9b8(piVar9,local_44,ppuVar4);
        ppuStack_30 = (undefined1 **)0x5eecab;
        FUN_0064be7c(local_c,&local_48);
        ppuStack_30 = (undefined1 **)local_48;
        piVar9 = *(int **)(local_8 + 0x2f8);
        local_34 = (undefined1 *)0x5eecc2;
        iVar6 = (**(code **)(*piVar9 + 0x11c))();
        local_34 = (undefined1 *)0x5eeccf;
        FUN_00416244(local_58,iVar6 + -1,0xfc);
        local_34 = local_58;
        puStack_38 = (undefined *)0x5eece0;
        FUN_00416478(local_68,"nxclube");
        puVar3 = local_34;
        local_34 = (undefined1 *)0x5eeceb;
        FUN_0050e9b8(piVar9,local_68,puVar3);
        local_34 = &DAT_005ef140;
        piVar9 = *(int **)(local_8 + 0x2f8);
        puStack_38 = (undefined *)0x5eed03;
        iVar6 = (**(code **)(*piVar9 + 0x11c))();
        puStack_38 = (undefined *)0x5eed10;
        FUN_00416244(local_78,iVar6 + -1,0xfc);
        puStack_38 = local_78;
        uStack_3c = 0x5eed24;
        FUN_00416478(local_88,"nxescudo");
        puVar2 = puStack_38;
        puStack_38 = (undefined *)0x5eed32;
        FUN_0050e9b8(piVar9,local_88,puVar2);
        puStack_38 = &DAT_005ef15c;
        piVar9 = *(int **)(local_8 + 0x2f8);
        uStack_3c = 0x5eed4a;
        iVar6 = (**(code **)(*piVar9 + 0x11c))();
        puStack_2c = (undefined1 *)0x5eed5a;
        FUN_00416244(local_98,iVar6 + -1,0xfc);
        puStack_2c = local_98;
        ppuStack_30 = (undefined1 **)0x5eed71;
        FUN_00416478(local_a8,"nxpais");
        puVar3 = puStack_2c;
        puStack_2c = (undefined1 *)0x5eed7f;
        FUN_0050e9b8(piVar9,local_a8,puVar3);
        puStack_2c = (undefined1 *)0x5eed87;
        iVar6 = FUN_00405ef4(local_10);
        if (-1 < iVar6) {
          iVar6 = iVar6 + 1;
          iVar7 = 0;
          do {
            if (*(int *)(local_10 + 4 + iVar7 * 0x1c) == local_c) {
              puStack_2c = (undefined1 *)0x5eedc1;
              (**(code **)(**(int **)(local_8 + 0x2f8) + 0x1d0))(*(int **)(local_8 + 0x2f8),1);
              puStack_2c = (undefined1 *)0x5eedda;
              FUN_00409dd8(*(int *)(local_10 + iVar7 * 0x1c) + *(int *)PTR_DAT_0066b7c4,&local_b0);
              puStack_2c = (undefined1 *)0x5eedeb;
              FUN_004051d4(&local_ac,local_b0);
              puStack_2c = (undefined1 *)local_ac;
              ppuStack_30 = (undefined1 **)0x5eee03;
              iVar8 = (**(code **)(**(int **)(local_8 + 0x2f8) + 0x11c))();
              ppuStack_30 = (undefined1 **)0x5eee13;
              FUN_00416244(local_c0,iVar8 + -1,0xfc);
              ppuStack_30 = (undefined1 **)local_c0;
              local_34 = (undefined1 *)0x5eee2a;
              FUN_00416478(local_d0,"nxano");
              ppuVar4 = ppuStack_30;
              ppuStack_30 = (undefined1 **)0x5eee3f;
              FUN_0050e9b8(*(undefined4 *)(local_8 + 0x2f8),local_d0,ppuVar4);
              ppuStack_30 = (undefined1 **)0x5eee5d;
              FUN_00405194(&local_d4,
                           *(int *)PTR_DAT_0066af70 + *(int *)(local_10 + 8 + iVar7 * 0x1c) * 0x2f8)
              ;
              ppuStack_30 = (undefined1 **)local_d4;
              local_34 = (undefined1 *)0x5eee75;
              iVar8 = (**(code **)(**(int **)(local_8 + 0x2f8) + 0x11c))();
              local_34 = (undefined1 *)0x5eee85;
              FUN_00416244(local_e4,iVar8 + -1,0xfc);
              local_34 = local_e4;
              puStack_38 = (undefined *)0x5eee9c;
              FUN_00416478(local_f4,"nxclube");
              puVar3 = local_34;
              local_34 = (undefined1 *)0x5eeeb1;
              FUN_0050e9b8(*(undefined4 *)(local_8 + 0x2f8),local_f4,puVar3);
              local_34 = (undefined1 *)0x5eeed0;
              FUN_00409dd8(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c +
                            *(int *)(local_10 + 8 + iVar7 * 0x1c) * 0x2f8),&local_fc);
              local_34 = (undefined1 *)0x5eeee1;
              FUN_004051d4(&local_f8,local_fc);
              local_34 = local_f8;
              puStack_38 = (undefined *)0x5eeef9;
              iVar8 = (**(code **)(**(int **)(local_8 + 0x2f8) + 0x11c))();
              puStack_2c = (undefined1 *)0x5eef09;
              FUN_00416244(local_10c,iVar8 + -1,0xfc);
              puStack_2c = local_10c;
              ppuStack_30 = (undefined1 **)0x5eef20;
              FUN_00416478(local_11c,"nxpais");
              puVar3 = puStack_2c;
              puStack_2c = (undefined1 *)0x5eef35;
              FUN_0050e9b8(*(undefined4 *)(local_8 + 0x2f8),local_11c,puVar3);
              puStack_2c = (undefined1 *)0x5eef47;
              FUN_00645508(*(undefined4 *)(local_10 + 8 + iVar7 * 0x1c),&local_120);
              if (local_120 != 0) {
                puStack_2c = (undefined1 *)0x5eef60;
                piVar9 = (int *)FUN_004aa034(PTR_LAB_004a5420,1);
                puStack_2c = (undefined1 *)0x5eef75;
                FUN_00645508(*(undefined4 *)(local_10 + 8 + iVar7 * 0x1c),&local_124);
                if (local_124 != 0) {
                  puStack_2c = (undefined1 *)0x5eef90;
                  FUN_00645508(*(undefined4 *)(local_10 + 8 + iVar7 * 0x1c),&local_128);
                  puStack_2c = (undefined1 *)0x5eef9e;
                  (**(code **)(*piVar9 + 0x4c))(piVar9,local_128);
                }
                piVar1 = *(int **)(local_8 + 0x2f8);
                puStack_2c = (undefined1 *)0x5eefb1;
                iVar8 = (**(code **)(*piVar1 + 0x11c))();
                puStack_2c = (undefined1 *)0x5eefc1;
                FUN_00416244(local_138,iVar8 + -1,0xfc);
                puStack_2c = local_138;
                ppuStack_30 = (undefined1 **)0x5eefd8;
                FUN_00416478(local_148,"nxescudo");
                puVar3 = puStack_2c;
                puStack_2c = (undefined1 *)0x5eefe6;
                iVar8 = FUN_004f77e4(piVar1,local_148,puVar3);
                *(int **)(iVar8 + 8) = piVar9;
              }
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_005ef114;
  local_24 = (undefined1 *)0x5ef023;
  FUN_00405744(local_148,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5ef033;
  FUN_004048f8(&local_128,3);
  local_24 = (undefined1 *)0x5ef049;
  FUN_00405744(local_11c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5ef054;
  FUN_004048d4(&local_fc);
  local_24 = (undefined1 *)0x5ef05f;
  FUN_00404ff0(&local_f8);
  local_24 = (undefined1 *)0x5ef075;
  FUN_00405744(local_f4,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5ef080;
  FUN_00404ff0(&local_d4);
  local_24 = (undefined1 *)0x5ef096;
  FUN_00405744(local_d0,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5ef0a1;
  FUN_004048d4(&local_b0);
  local_24 = (undefined1 *)0x5ef0ac;
  FUN_00404ff0(&local_ac);
  local_24 = (undefined1 *)0x5ef0c2;
  FUN_00405744(local_a8,PTR_DAT_004010f8,6);
  local_24 = (undefined1 *)0x5ef0ca;
  FUN_00404ff0(&local_48);
  local_24 = (undefined1 *)0x5ef0dd;
  FUN_00405744(local_44,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5ef0e5;
  FUN_004048d4(&local_24);
  local_24 = (undefined1 *)0x5ef0ed;
  FUN_00404ff0(&local_20);
  local_24 = (undefined1 *)0x5ef0fb;
  FUN_004061c8(&stack0xffffffec,PTR_LAB_005eea40);
  local_24 = (undefined1 *)0x5ef109;
  FUN_004061c8(&local_10,PTR_DAT_005eea20);
  return;
}

