// Address: 005e92dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e92dc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 unaff_EBX;
  int *piVar10;
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
  local_24 = (undefined4 *)&LAB_005e991f;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_2c = (undefined1 *)0x5e930e;
  local_8 = param_1;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b540);
  if (((param_2 <= iVar4) &&
      (*(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c) == *(int *)(PTR_DAT_0066ac78 + 8))) &&
     (*(int *)(*(int *)PTR_DAT_0066b540 + 4 + param_2 * 0x9c) == *(int *)(PTR_DAT_0066ac78 + 0x10)))
  {
    iVar4 = 1;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4);
      if ((0 < iVar5) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130) !=
          *(int *)(PTR_DAT_0066ac78 + 8))) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    do {
      if (0 < *(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4)) {
        puStack_2c = (undefined1 *)0x5e93cd;
        iVar5 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
        if (-1 < iVar5 + -1) {
          local_c = 0;
          do {
            puStack_28 = (undefined4 *)&stack0xffffffec;
            ppuStack_30 = (undefined4 **)0x5e93f1;
            FUN_00416244(&local_24,local_c,0xfc);
            ppuStack_30 = &local_24;
            local_34 = (undefined1 *)0x5e9402;
            FUN_00416478(&local_34,&DAT_005e9938);
            ppuVar3 = ppuStack_30;
            ppuStack_30 = (undefined4 **)0x5e9414;
            FUN_0050e448(*(undefined4 *)(local_8 + 0x304),&local_34,ppuVar3);
            ppuStack_30 = (undefined4 **)0x5e941f;
            FUN_00404b6c(&local_10,unaff_EBX);
            ppuStack_30 = (undefined4 **)0x5e9427;
            iVar6 = FUN_00409ff8(local_10);
            if (iVar6 == *(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4)) {
              puStack_28 = &local_3c;
              local_34 = (undefined1 *)0x5e944c;
              FUN_00416244(local_4c,local_c,
                           CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b540 >> 8),0xfc));
              local_34 = local_4c;
              local_38 = 0x5e945d;
              FUN_00416478(local_5c,"nxstatus");
              puVar2 = local_34;
              local_34 = (undefined1 *)0x5e946f;
              FUN_0050e448(*(undefined4 *)(local_8 + 0x304),local_5c,puVar2);
              local_34 = (undefined1 *)0x5e947a;
              FUN_00404b6c(&local_38,local_3c);
              local_34 = (undefined1 *)0x5e9482;
              iVar6 = FUN_00409ff8(local_38);
              if (2 < iVar6) {
                *(undefined4 *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4) = 0;
              }
            }
            local_c = local_c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    piVar7 = &DAT_006d3678;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 4 + iVar4 * 4);
      if (0 < iVar5) {
        *piVar7 = iVar5;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar4 != 0xc);
    iVar4 = 1;
    puVar8 = &DAT_006d3684;
    do {
      *puVar8 = *(undefined4 *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    puVar8 = &DAT_006d3680;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4) < 1) {
        *puVar8 = 0;
      }
      else {
        *puVar8 = 1;
      }
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar4 != 0xc);
    iVar4 = 0xc;
    puVar8 = &DAT_006d3730;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b540 + param_2 * 0x9c + 0x30 + iVar4 * 4) < 1) {
        *puVar8 = 0;
      }
      else {
        *puVar8 = 2;
      }
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    piVar7 = &DAT_006d35e8;
    piVar10 = &DAT_006d3684;
    do {
      if (iVar4 == 1) {
        puStack_2c = (undefined1 *)0x5e9596;
        (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35d8);
      }
      else if (iVar4 < 0xc) {
        if (*piVar10 < 1) {
          puStack_2c = (undefined1 *)0x5e95ca;
          (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35d0);
        }
        else {
          puStack_2c = (undefined1 *)0x5e95b5;
          (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35d4);
        }
      }
      else if (0xb < iVar4) {
        if (*piVar10 < 1) {
          puStack_2c = (undefined1 *)0x5e95fe;
          (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35d0);
        }
        else {
          puStack_2c = (undefined1 *)0x5e95e9;
          (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35dc);
        }
      }
      iVar4 = iVar4 + 1;
      piVar10 = piVar10 + 4;
      piVar7 = piVar7 + 1;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    piVar7 = &DAT_006d3684;
    puVar8 = &DAT_006d34f8;
    do {
      if (*piVar7 < 1) {
        puStack_2c = (undefined1 *)0x5e963a;
        FUN_00545088(*puVar8,0);
      }
      else {
        puStack_2c = (undefined1 *)0x5e962f;
        FUN_005ea21c(local_8,iVar4,*piVar7);
      }
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    piVar7 = &DAT_006d3684;
    do {
      if (0 < *piVar7) {
        puStack_2c = (undefined1 *)0x5e966a;
        iVar5 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
        if (-1 < iVar5 + -1) {
          local_c = 0;
          do {
            puStack_28 = &local_64;
            puStack_2c = (undefined1 *)0x5e968e;
            FUN_00416244(local_74,local_c,0xfc);
            puStack_2c = local_74;
            ppuStack_30 = (undefined4 **)0x5e969f;
            FUN_00416478(local_84,&DAT_005e9938);
            puVar2 = puStack_2c;
            puStack_2c = (undefined1 *)0x5e96b1;
            FUN_0050e448(*(undefined4 *)(local_8 + 0x304),local_84,puVar2);
            puStack_2c = (undefined1 *)0x5e96bc;
            FUN_00404b6c(&local_60,local_64);
            puStack_2c = (undefined1 *)0x5e96c4;
            iVar6 = FUN_00409ff8(local_60);
            if (iVar6 == *piVar7) {
              if (iVar4 < 0xc) {
                puStack_28 = (undefined4 *)&DAT_005e9954;
                ppuStack_30 = (undefined4 **)0x5e96e6;
                FUN_00416244(local_94,local_c,0xfc);
                ppuStack_30 = (undefined4 **)local_94;
                local_34 = (undefined1 *)0x5e96fd;
                FUN_00416478(local_a4,"nxstatus");
                ppuVar3 = ppuStack_30;
                ppuStack_30 = (undefined4 **)0x5e9712;
                FUN_0050e9b8(*(undefined4 *)(local_8 + 0x304),local_a4,ppuVar3);
              }
              else {
                puStack_28 = (undefined4 *)&DAT_005e995c;
                ppuStack_30 = (undefined4 **)0x5e9729;
                FUN_00416244(local_b4,local_c,0xfc);
                ppuStack_30 = (undefined4 **)local_b4;
                local_34 = (undefined1 *)0x5e9740;
                FUN_00416478(local_c4,"nxstatus");
                ppuVar3 = ppuStack_30;
                ppuStack_30 = (undefined4 **)0x5e9755;
                FUN_0050e9b8(*(undefined4 *)(local_8 + 0x304),local_c4,ppuVar3);
              }
              break;
            }
            local_c = local_c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar4 != 0x13);
    puStack_2c = (undefined1 *)0x5e977f;
    iVar4 = (**(code **)(**(int **)(local_8 + 0x304) + 0x11c))();
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        ppuStack_20 = &local_c8;
        local_24 = &local_d0;
        puStack_28 = (undefined4 *)0x5e97aa;
        FUN_00416244(local_e0,iVar5,0xfc);
        puStack_28 = local_e0;
        puStack_2c = (undefined1 *)0x5e97c1;
        FUN_00416478(local_f0,&DAT_005e9938);
        puVar8 = puStack_28;
        uVar1 = *(undefined4 *)(local_8 + 0x304);
        puStack_28 = (undefined4 *)0x5e97d8;
        FUN_0050e448(uVar1,local_f0,puVar8);
        puStack_28 = (undefined4 *)0x5e97e9;
        FUN_00404b6c(&local_cc,local_d0);
        puStack_28 = (undefined4 *)0x5e97f4;
        uVar9 = FUN_00409ff8(local_cc);
        puStack_28 = (undefined4 *)0x5e9800;
        FUN_005e9de8(local_8,uVar9,iVar5);
        puStack_28 = local_c8;
        puStack_2c = (undefined1 *)0x5e9816;
        FUN_00416244(local_100,iVar5,0xfc);
        puStack_2c = local_100;
        ppuStack_30 = (undefined4 **)0x5e982d;
        FUN_00416478(local_110,"status");
        puVar2 = puStack_2c;
        puStack_2c = (undefined1 *)0x5e983b;
        FUN_0050e9b8(uVar1,local_110,puVar2);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 1;
    piVar7 = &DAT_006d3678;
    do {
      if (0 < *piVar7) {
        puStack_2c = (undefined1 *)0xffffffff;
        ppuStack_30 = (undefined4 **)0x0;
        puStack_28 = (undefined4 *)0x0;
        local_38 = 0x5e9865;
        FUN_005eb518(local_8,iVar4,*piVar7);
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar4 != 0xc);
  }
  *in_FS_OFFSET = puStack_28;
  ppuStack_20 = (undefined4 **)&LAB_005e9929;
  local_24 = (undefined4 *)0x5e9891;
  FUN_00405744(local_110,PTR_DAT_004010f8,4);
  local_24 = (undefined4 *)0x5e989c;
  FUN_00404ff0(&local_d0);
  local_24 = (undefined4 *)0x5e98a7;
  FUN_004048d4(&local_cc);
  local_24 = (undefined4 *)0x5e98b2;
  FUN_00404ff0(&local_c8);
  local_24 = (undefined4 *)0x5e98c8;
  FUN_00405744(local_c4,PTR_DAT_004010f8,6);
  local_24 = (undefined4 *)0x5e98d0;
  FUN_00404ff0(&local_64);
  local_24 = (undefined4 *)0x5e98d8;
  FUN_004048d4(&local_60);
  local_24 = (undefined4 *)0x5e98eb;
  FUN_00405744(local_5c,PTR_DAT_004010f8,2);
  local_24 = (undefined4 *)0x5e98f3;
  FUN_00404ff0(&local_3c);
  local_24 = (undefined4 *)0x5e98fb;
  FUN_004048d4(&local_38);
  local_24 = (undefined4 *)0x5e990e;
  FUN_00405744(&local_34,PTR_DAT_004010f8,2);
  local_24 = (undefined4 *)0x5e9916;
  FUN_00404ff0(&stack0xffffffec);
  local_24 = (undefined4 *)0x5e991e;
  FUN_004048d4(&local_10);
  return;
}

