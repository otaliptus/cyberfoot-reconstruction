// Address: 005e8c30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e8c30(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 **ppuVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_EBX;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 **ppuStack_30;
  undefined1 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *local_24;
  undefined4 **ppuStack_20;
  int local_10;
  int local_c;
  int local_8;
  
  ppuStack_20 = (undefined4 **)&stack0xfffffffc;
  local_10 = 0x21;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = (undefined4 *)&LAB_005e9289;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_2c = (undefined1 *)0x5e8c63;
  local_8 = param_1;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b754);
  iVar10 = -1;
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar9 = 0;
    do {
      iVar10 = iVar9;
      if (*(int *)(*(int *)PTR_DAT_0066b754 + iVar9 * 0x78) == *(int *)(PTR_DAT_0066ac78 + 8))
      break;
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
      iVar10 = -1;
    } while (iVar4 != 0);
  }
  if (-1 < iVar10) {
    iVar4 = 1;
    do {
      iVar9 = *(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4);
      if ((0 < iVar9) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) !=
          *(int *)(PTR_DAT_0066ac78 + 8))) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    do {
      if (0 < *(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4)) {
        puStack_2c = (undefined1 *)0x5e8d20;
        iVar9 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
        if (-1 < iVar9 + -1) {
          local_c = 0;
          do {
            puStack_28 = (undefined4 *)&stack0xffffffec;
            ppuStack_30 = (undefined4 **)0x5e8d44;
            FUN_00416244(&local_24,local_c,0xfc);
            ppuStack_30 = &local_24;
            local_34 = (undefined1 *)0x5e8d55;
            FUN_00416478(&local_34,&DAT_005e92a4);
            ppuVar3 = ppuStack_30;
            ppuStack_30 = (undefined4 **)0x5e8d67;
            FUN_0050e448(*(undefined4 *)(local_8 + 0x304),&local_34,ppuVar3);
            ppuStack_30 = (undefined4 **)0x5e8d72;
            FUN_00404b6c(&local_10,unaff_EBX);
            ppuStack_30 = (undefined4 **)0x5e8d7a;
            iVar5 = FUN_00409ff8(local_10);
            if (iVar5 == *(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4)) {
              puStack_28 = &local_3c;
              local_34 = (undefined1 *)0x5e8da3;
              FUN_00416244(local_4c,local_c,
                           CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b754 >> 8),0xfc));
              local_34 = local_4c;
              local_38 = 0x5e8db4;
              FUN_00416478(local_5c,"nxstatus");
              puVar2 = local_34;
              local_34 = (undefined1 *)0x5e8dc6;
              FUN_0050e448(*(undefined4 *)(local_8 + 0x304),local_5c,puVar2);
              local_34 = (undefined1 *)0x5e8dd1;
              FUN_00404b6c(&local_38,local_3c);
              local_34 = (undefined1 *)0x5e8dd9;
              iVar5 = FUN_00409ff8(local_38);
              if (2 < iVar5) {
                *(undefined4 *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4) = 0;
              }
            }
            local_c = local_c + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    piVar6 = &DAT_006d3678;
    do {
      iVar9 = *(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + iVar4 * 4);
      if (0 < iVar9) {
        *piVar6 = iVar9;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar4 != 0xc);
    iVar4 = 1;
    puVar7 = &DAT_006d3684;
    do {
      *puVar7 = *(undefined4 *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4);
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 4;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    puVar7 = &DAT_006d3680;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4) < 1) {
        *puVar7 = 0;
      }
      else {
        *puVar7 = 1;
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 4;
    } while (iVar4 != 0xc);
    iVar4 = 0xc;
    puVar7 = &DAT_006d3730;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b754 + iVar10 * 0x78 + 0x2c + iVar4 * 4) < 1) {
        *puVar7 = 0;
      }
      else {
        *puVar7 = 2;
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 4;
    } while (iVar4 != 0x13);
    iVar10 = 1;
    piVar6 = &DAT_006d35e8;
    piVar11 = &DAT_006d3684;
    do {
      if (iVar10 == 1) {
        puStack_2c = (undefined1 *)0x5e8f00;
        (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d35d8);
      }
      else if (iVar10 < 0xc) {
        if (*piVar11 < 1) {
          puStack_2c = (undefined1 *)0x5e8f34;
          (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d35d0);
        }
        else {
          puStack_2c = (undefined1 *)0x5e8f1f;
          (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d35d4);
        }
      }
      else if (0xb < iVar10) {
        if (*piVar11 < 1) {
          puStack_2c = (undefined1 *)0x5e8f68;
          (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d35d0);
        }
        else {
          puStack_2c = (undefined1 *)0x5e8f53;
          (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d35dc);
        }
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 4;
      piVar6 = piVar6 + 1;
    } while (iVar10 != 0x13);
    iVar10 = 1;
    piVar6 = &DAT_006d3684;
    puVar7 = &DAT_006d34f8;
    do {
      if (*piVar6 < 1) {
        puStack_2c = (undefined1 *)0x5e8fa4;
        FUN_00545088(*puVar7,0);
      }
      else {
        puStack_2c = (undefined1 *)0x5e8f99;
        FUN_005ea21c(local_8,iVar10,*piVar6);
      }
      iVar10 = iVar10 + 1;
      puVar7 = puVar7 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar10 != 0x13);
    iVar10 = 1;
    piVar6 = &DAT_006d3684;
    do {
      if (0 < *piVar6) {
        puStack_2c = (undefined1 *)0x5e8fd4;
        iVar4 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
        if (-1 < iVar4 + -1) {
          local_c = 0;
          do {
            puStack_28 = &local_64;
            puStack_2c = (undefined1 *)0x5e8ff8;
            FUN_00416244(local_74,local_c,0xfc);
            puStack_2c = local_74;
            ppuStack_30 = (undefined4 **)0x5e9009;
            FUN_00416478(local_84,&DAT_005e92a4);
            puVar2 = puStack_2c;
            puStack_2c = (undefined1 *)0x5e901b;
            FUN_0050e448(*(undefined4 *)(local_8 + 0x304),local_84,puVar2);
            puStack_2c = (undefined1 *)0x5e9026;
            FUN_00404b6c(&local_60,local_64);
            puStack_2c = (undefined1 *)0x5e902e;
            iVar9 = FUN_00409ff8(local_60);
            if (iVar9 == *piVar6) {
              if (iVar10 < 0xc) {
                puStack_28 = (undefined4 *)&DAT_005e92c0;
                ppuStack_30 = (undefined4 **)0x5e9050;
                FUN_00416244(local_94,local_c,0xfc);
                ppuStack_30 = (undefined4 **)local_94;
                local_34 = (undefined1 *)0x5e9067;
                FUN_00416478(local_a4,"nxstatus");
                ppuVar3 = ppuStack_30;
                ppuStack_30 = (undefined4 **)0x5e907c;
                FUN_0050e9b8(*(undefined4 *)(local_8 + 0x304),local_a4,ppuVar3);
              }
              else {
                puStack_28 = (undefined4 *)&DAT_005e92c8;
                ppuStack_30 = (undefined4 **)0x5e9093;
                FUN_00416244(local_b4,local_c,0xfc);
                ppuStack_30 = (undefined4 **)local_b4;
                local_34 = (undefined1 *)0x5e90aa;
                FUN_00416478(local_c4,"nxstatus");
                ppuVar3 = ppuStack_30;
                ppuStack_30 = (undefined4 **)0x5e90bf;
                FUN_0050e9b8(*(undefined4 *)(local_8 + 0x304),local_c4,ppuVar3);
              }
              break;
            }
            local_c = local_c + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar10 = iVar10 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar10 != 0x13);
    puStack_2c = (undefined1 *)0x5e90e9;
    iVar10 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
    if (-1 < iVar10 + -1) {
      iVar4 = 0;
      do {
        ppuStack_20 = &local_c8;
        local_24 = &local_d0;
        puStack_28 = (undefined4 *)0x5e9114;
        FUN_00416244(local_e0,iVar4,0xfc);
        puStack_28 = local_e0;
        puStack_2c = (undefined1 *)0x5e912b;
        FUN_00416478(local_f0,&DAT_005e92a4);
        puVar7 = puStack_28;
        uVar1 = *(undefined4 *)(local_8 + 0x304);
        puStack_28 = (undefined4 *)0x5e9142;
        FUN_0050e448(uVar1,local_f0,puVar7);
        puStack_28 = (undefined4 *)0x5e9153;
        FUN_00404b6c(&local_cc,local_d0);
        puStack_28 = (undefined4 *)0x5e915e;
        uVar8 = FUN_00409ff8(local_cc);
        puStack_28 = (undefined4 *)0x5e916a;
        FUN_005e9de8(local_8,uVar8,iVar4);
        puStack_28 = local_c8;
        puStack_2c = (undefined1 *)0x5e9180;
        FUN_00416244(local_100,iVar4,0xfc);
        puStack_2c = local_100;
        ppuStack_30 = (undefined4 **)0x5e9197;
        FUN_00416478(local_110,"status");
        puVar2 = puStack_2c;
        puStack_2c = (undefined1 *)0x5e91a5;
        FUN_0050e9b8(uVar1,local_110,puVar2);
        iVar4 = iVar4 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = 1;
    piVar6 = &DAT_006d3678;
    do {
      if (0 < *piVar6) {
        puStack_2c = (undefined1 *)0xffffffff;
        ppuStack_30 = (undefined4 **)0x0;
        puStack_28 = (undefined4 *)0x0;
        local_38 = 0x5e91cf;
        FUN_005eb518(local_8,iVar10,*piVar6);
      }
      iVar10 = iVar10 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar10 != 0xc);
  }
  *in_FS_OFFSET = puStack_28;
  ppuStack_20 = (undefined4 **)&LAB_005e9293;
  local_24 = (undefined4 *)0x5e91fb;
  FUN_00405744(local_110,PTR_DAT_004010f8,4);
  local_24 = (undefined4 *)0x5e9206;
  FUN_00404ff0(&local_d0);
  local_24 = (undefined4 *)0x5e9211;
  FUN_004048d4(&local_cc);
  local_24 = (undefined4 *)0x5e921c;
  FUN_00404ff0(&local_c8);
  local_24 = (undefined4 *)0x5e9232;
  FUN_00405744(local_c4,PTR_DAT_004010f8,6);
  local_24 = (undefined4 *)0x5e923a;
  FUN_00404ff0(&local_64);
  local_24 = (undefined4 *)0x5e9242;
  FUN_004048d4(&local_60);
  local_24 = (undefined4 *)0x5e9255;
  FUN_00405744(local_5c,PTR_DAT_004010f8,2);
  local_24 = (undefined4 *)0x5e925d;
  FUN_00404ff0(&local_3c);
  local_24 = (undefined4 *)0x5e9265;
  FUN_004048d4(&local_38);
  local_24 = (undefined4 *)0x5e9278;
  FUN_00405744(&local_34,PTR_DAT_004010f8,2);
  local_24 = (undefined4 *)0x5e9280;
  FUN_00404ff0(&stack0xffffffec);
  local_24 = (undefined4 *)0x5e9288;
  FUN_004048d4(&local_10);
  return;
}

