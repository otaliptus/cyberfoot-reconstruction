// Address: 005ea708
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_ImagecamisaDragDrop(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_ESI;
  undefined1 *unaff_EDI;
  int *in_FS_OFFSET;
  bool bVar12;
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined4 *local_620;
  undefined1 local_61c [16];
  undefined1 local_60c [16];
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined1 local_5f4 [16];
  undefined1 local_5e4 [16];
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined1 local_5cc [16];
  undefined1 local_5bc [16];
  undefined4 *local_5ac;
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined4 local_588;
  undefined4 local_584;
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  byte local_554 [256];
  byte local_454 [256];
  byte local_354 [256];
  undefined1 local_254 [16];
  undefined1 local_244 [16];
  undefined4 *local_234;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined4 *local_1c0;
  undefined1 local_1bc [16];
  undefined1 local_1ac [16];
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [16];
  undefined1 local_13c [16];
  undefined4 local_12c;
  undefined4 local_128;
  byte local_124 [228];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 **ppuStack_34;
  undefined4 **ppuStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  local_20 = &stack0xfffffffc;
  iVar10 = 199;
  do {
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005eb44c;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  puStack_2c = (undefined4 *)0x5ea740;
  cVar5 = FUN_00403c10(param_2,PTR_PTR_004386b8);
  if (cVar5 == '\0') {
    puStack_2c = (undefined4 *)0x5ea756;
    cVar5 = FUN_00403c10(param_2,PTR_PTR_00457844);
    if (cVar5 != '\0') {
      unaff_EDI = (undefined1 *)param_2[3];
    }
  }
  else {
    unaff_EDI = (undefined1 *)param_2[3];
  }
  puStack_2c = (undefined4 *)0x5ea76a;
  cVar5 = FUN_00403c10(0,PTR_PTR_004386b8);
  if (cVar5 == '\0') {
    puStack_2c = (undefined4 *)0x5ea783;
    cVar5 = FUN_00403c10(0,PTR_PTR_00457844);
    if (cVar5 == '\0') {
      puStack_2c = (undefined4 *)0x5ea79c;
      cVar5 = FUN_00403c10(0,PTR_PTR_004df4e4);
      if (cVar5 != '\0') {
        local_24 = puRam0000000c;
      }
    }
    else {
      local_24 = puRam0000000c;
    }
  }
  else {
    local_24 = puRam0000000c;
  }
  puStack_2c = (undefined4 *)0x5ea7b3;
  FUN_004039d4(uRam00000000,local_124);
  bVar12 = local_124[0] == 0xffffffff;
  puStack_2c = (undefined4 *)0x5ea7c8;
  FUN_00403180(local_124,"\tTNextGrid");
  if (bVar12) {
    puStack_2c = &local_12c;
    piVar1 = *(int **)(DAT_006d34e8 + 0x304);
    ppuStack_30 = (undefined4 **)0x5ea7ea;
    uVar6 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_30 = (undefined4 **)0x5ea7f9;
    FUN_00416244(local_13c,uVar6,0xfc);
    ppuStack_30 = (undefined4 **)local_13c;
    ppuStack_34 = (undefined4 **)0x5ea810;
    FUN_00416478(local_14c,&DAT_005eb474);
    ppuVar3 = ppuStack_30;
    ppuStack_30 = (undefined4 **)0x5ea81e;
    FUN_0050e448(piVar1,local_14c,ppuVar3);
    ppuStack_30 = (undefined4 **)0x5ea82f;
    FUN_00404b6c(&local_128,local_12c);
    ppuStack_30 = (undefined4 **)0x5ea83a;
    iVar10 = FUN_00409ff8(local_128);
    ppuStack_30 = (undefined4 **)0x5ea848;
    puVar7 = (undefined1 *)FUN_005ea6e4(param_1,iVar10);
    ppuStack_30 = (undefined4 **)&local_154;
    piVar1 = *(int **)(DAT_006d34e8 + 0x304);
    ppuStack_34 = (undefined4 **)0x5ea866;
    uVar6 = (**(code **)(*piVar1 + 0x138))();
    puStack_2c = (undefined4 *)0x5ea875;
    FUN_00416244(local_164,uVar6,0xfc);
    puStack_2c = (undefined4 *)local_164;
    ppuStack_30 = (undefined4 **)0x5ea88c;
    FUN_00416478(local_174,"nxstatus");
    puVar4 = puStack_2c;
    puStack_2c = (undefined4 *)0x5ea89a;
    FUN_0050e448(piVar1,local_174,puVar4);
    puStack_2c = (undefined4 *)0x5ea8ab;
    FUN_00404b6c(&local_150,local_154);
    puStack_2c = (undefined4 *)0x5ea8b6;
    iVar8 = FUN_00409ff8(local_150);
    if (iVar8 < 3) {
      if ((0 < (int)puVar7) && (unaff_EDI != puVar7)) {
        *(undefined4 *)(&DAT_006d3674 + (int)puVar7 * 0x10) = 0xffffffff;
        puStack_2c = (undefined4 *)0x5ea8ee;
        (**(code **)(**(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168),DAT_006d35d0);
        puStack_2c = (undefined4 *)0x5ea8fc;
        FUN_00545088((&DAT_006d34f4)[(int)puVar7],0);
        puStack_2c = (undefined4 *)0x5ea90a;
        FUN_004e1414(*(undefined4 *)(&DAT_006d3584 + (int)puVar7 * 4),0);
      }
      if ((0 < *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10)) &&
         (*(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) != iVar10)) {
        puStack_2c = (undefined4 *)0x5ea937;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        if (-1 < iVar8 + -1) {
          iVar11 = 0;
          do {
            puStack_28 = &local_17c;
            ppuStack_30 = (undefined4 **)0x5ea95b;
            FUN_00416244(local_18c,iVar11,0xfc);
            ppuStack_30 = (undefined4 **)local_18c;
            ppuStack_34 = (undefined4 **)0x5ea972;
            FUN_00416478(local_19c,&DAT_005eb474);
            ppuVar3 = ppuStack_30;
            ppuStack_30 = (undefined4 **)0x5ea989;
            FUN_0050e448(*(undefined4 *)(DAT_006d34e8 + 0x304),local_19c,ppuVar3);
            ppuStack_30 = (undefined4 **)0x5ea99a;
            FUN_00404b6c(&local_178,local_17c);
            ppuStack_30 = (undefined4 **)0x5ea9a5;
            iVar9 = FUN_00409ff8(local_178);
            if (iVar9 == *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10)) {
              ppuStack_30 = (undefined4 **)&DAT_005eb490;
              ppuStack_34 = (undefined4 **)0x5ea9ca;
              FUN_00416244(local_1ac,iVar11,0xfc);
              ppuStack_34 = (undefined4 **)local_1ac;
              puStack_38 = (undefined1 *)0x5ea9e1;
              FUN_00416478(local_1bc,"nxstatus");
              ppuVar3 = ppuStack_34;
              ppuStack_34 = (undefined4 **)0x5ea9f8;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_1bc,ppuVar3);
              ppuStack_34 = &local_1c0;
              puStack_38 = (undefined1 *)0x5eaa14;
              FUN_005e9de8(param_1,*(undefined4 *)(&DAT_006d3674 + (int)unaff_EDI * 0x10),iVar11);
              puStack_28 = local_1c0;
              puStack_3c = (undefined1 *)0x5eaa2a;
              FUN_00416244(local_1d0,iVar11,0xfc);
              puStack_3c = local_1d0;
              uStack_40 = 0x5eaa41;
              FUN_00416478(local_1e0,"status");
              puVar7 = puStack_3c;
              puStack_3c = (undefined1 *)0x5eaa58;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_1e0,puVar7);
            }
            iVar11 = iVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      if (*(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) != iVar10) {
        *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) = iVar10;
        puStack_2c = (undefined4 *)0x5eaa8b;
        FUN_005ea21c(param_1,unaff_EDI,iVar10);
        if ((int)unaff_EDI < 0xc) {
          uVar6 = 1;
        }
        else {
          uVar6 = 2;
        }
        if (unaff_EDI == (undefined1 *)0x1) {
          puStack_2c = (undefined4 *)0x5eaabd;
          (**(code **)(**(int **)(DAT_006d35e8 + 0x168) + 8))
                    (*(int **)(DAT_006d35e8 + 0x168),DAT_006d35d8);
        }
        else if ((int)unaff_EDI < 0xc) {
          puStack_2c = (undefined4 *)0x5eaadc;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168),DAT_006d35d4);
        }
        else if (0xb < (int)unaff_EDI) {
          puStack_2c = (undefined4 *)0x5eaafb;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168),DAT_006d35dc);
        }
        puStack_2c = (undefined4 *)0x5eab0c;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        if (-1 < iVar8 + -1) {
          iVar11 = 0;
          do {
            puStack_28 = &local_1e8;
            puStack_2c = (undefined4 *)0x5eab30;
            FUN_00416244(local_1f8,iVar11,0xfc);
            puStack_2c = (undefined4 *)local_1f8;
            ppuStack_30 = (undefined4 **)0x5eab47;
            FUN_00416478(local_208,&DAT_005eb474);
            puVar4 = puStack_2c;
            puStack_2c = (undefined4 *)0x5eab5e;
            FUN_0050e448(*(undefined4 *)(DAT_006d34e8 + 0x304),local_208,puVar4);
            puStack_2c = (undefined4 *)0x5eab6f;
            FUN_00404b6c(&local_1e4,local_1e8);
            puStack_2c = (undefined4 *)0x5eab7a;
            iVar9 = FUN_00409ff8(local_1e4);
            if (iVar9 == iVar10) {
              puStack_2c = (undefined4 *)0x5eab91;
              FUN_00409dd8(uVar6,&local_210);
              puStack_2c = (undefined4 *)0x5eaba2;
              FUN_004051d4(&local_20c,local_210);
              puStack_2c = (undefined4 *)local_20c;
              ppuStack_30 = (undefined4 **)0x5eabb8;
              FUN_00416244(local_220,iVar11,0xfc);
              ppuStack_30 = (undefined4 **)local_220;
              ppuStack_34 = (undefined4 **)0x5eabcf;
              FUN_00416478(local_230,"nxstatus");
              ppuVar3 = ppuStack_30;
              ppuStack_30 = (undefined4 **)0x5eabe6;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_230,ppuVar3);
              ppuStack_30 = &local_234;
              ppuStack_34 = (undefined4 **)0x5eabfa;
              FUN_005e9de8(param_1,iVar10,iVar11);
              puStack_28 = local_234;
              puStack_38 = (undefined1 *)0x5eac10;
              FUN_00416244(local_244,iVar11,0xfc);
              puStack_38 = local_244;
              puStack_3c = (undefined1 *)0x5eac27;
              FUN_00416478(local_254,"status");
              puVar7 = puStack_38;
              puStack_38 = (undefined1 *)0x5eac3e;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_254,puVar7);
              break;
            }
            iVar11 = iVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
  }
  else {
    puStack_2c = (undefined4 *)0x5eac5d;
    FUN_004039d4(uRam00000000,local_124);
    bVar12 = local_124[0] == 0xffffffff;
    puStack_2c = (undefined4 *)0x5eac72;
    FUN_00403180(local_124,&DAT_005eb4a4);
    if (!bVar12) {
      puStack_2c = (undefined4 *)0x5eac81;
      FUN_004039d4(uRam00000000,local_354);
      bVar12 = local_354[0] == 0xffffffff;
      puStack_2c = (undefined4 *)0x5eac96;
      FUN_00403180(local_354,&LAB_005eb4ac);
      if (!bVar12) {
        puStack_2c = (undefined4 *)0x5eaca5;
        FUN_004039d4(*param_2,local_454);
        bVar12 = local_454[0] == 0xffffffff;
        puStack_2c = (undefined4 *)0x5eacba;
        FUN_00403180(local_454,&DAT_005eb4a4);
        if (!bVar12) {
          puStack_2c = (undefined4 *)0x5eacc9;
          FUN_004039d4(*param_2,local_554);
          bVar12 = local_554[0] == 0xffffffff;
          puStack_2c = (undefined4 *)0x5eacde;
          FUN_00403180(local_554,&LAB_005eb4ac);
          if (!bVar12) goto LAB_005eb216;
        }
      }
    }
    puVar7 = local_24;
    if (unaff_EDI != local_24) {
      uVar6 = *(undefined4 *)(&DAT_006d3674 + (int)local_24 * 0x10);
      *(undefined4 *)(&DAT_006d3674 + (int)local_24 * 0x10) =
           *(undefined4 *)(&DAT_006d3674 + (int)unaff_EDI * 0x10);
      *(undefined4 *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) = uVar6;
      puStack_2c = (undefined4 *)0x5ead2a;
      FUN_004e1400(*(undefined4 *)(&DAT_006d3584 + (int)local_24 * 4),&stack0xffffffe8);
      puStack_2c = (undefined4 *)0x5ead3c;
      FUN_004e1400(*(undefined4 *)(&DAT_006d3584 + (int)unaff_EDI * 4),&local_558);
      puStack_2c = (undefined4 *)0x5ead51;
      FUN_004e1414(*(undefined4 *)(&DAT_006d3584 + (int)puVar7 * 4),local_558);
      puStack_2c = (undefined4 *)0x5ead60;
      FUN_004e1414(*(undefined4 *)(&DAT_006d3584 + (int)unaff_EDI * 4),unaff_ESI);
      if (*(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5ead78;
        FUN_004e1414(*(undefined4 *)(&DAT_006d362c + (int)unaff_EDI * 4),0);
      }
      if (*(int *)(&DAT_006d3674 + (int)puVar7 * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5ead93;
        FUN_004e1414(*(undefined4 *)(&DAT_006d362c + (int)puVar7 * 4),0);
      }
      if (*(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5eadc2;
        FUN_00545088((&DAT_006d34f4)[(int)unaff_EDI],0);
      }
      else {
        puStack_2c = (undefined4 *)0x5eadb2;
        FUN_005ea21c(param_1,unaff_EDI,*(undefined4 *)(&DAT_006d3674 + (int)unaff_EDI * 0x10));
      }
      if (*(int *)(&DAT_006d3674 + (int)puVar7 * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5eadf6;
        FUN_00545088((&DAT_006d34f4)[(int)puVar7],0);
      }
      else {
        puStack_2c = (undefined4 *)0x5eade3;
        FUN_005ea21c(param_1,puVar7,*(undefined4 *)(&DAT_006d3674 + (int)puVar7 * 0x10));
      }
      if (0 < *(int *)(&DAT_006d3674 + (int)puVar7 * 0x10)) {
        if (puVar7 == (undefined1 *)0x1) {
          puStack_2c = (undefined4 *)0x5eae21;
          (**(code **)(**(int **)(DAT_006d35e8 + 0x168) + 8))
                    (*(int **)(DAT_006d35e8 + 0x168),DAT_006d35d8);
        }
        else if ((int)puVar7 < 0xc) {
          puStack_2c = (undefined4 *)0x5eae44;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168),DAT_006d35d4);
        }
        else if (0xb < (int)puVar7) {
          puStack_2c = (undefined4 *)0x5eae67;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168),DAT_006d35dc);
        }
      }
      if (0 < *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10)) {
        if (unaff_EDI == (undefined1 *)0x1) {
          puStack_2c = (undefined4 *)0x5eae8e;
          (**(code **)(**(int **)(DAT_006d35e8 + 0x168) + 8))
                    (*(int **)(DAT_006d35e8 + 0x168),DAT_006d35d8);
        }
        else if ((int)unaff_EDI < 0xc) {
          puStack_2c = (undefined4 *)0x5eaead;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168),DAT_006d35d4);
        }
        else if (0xb < (int)unaff_EDI) {
          puStack_2c = (undefined4 *)0x5eaecc;
          (**(code **)(**(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168) + 8))
                    (*(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168),DAT_006d35dc);
        }
      }
      if (*(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5eaeee;
        (**(code **)(**(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[(int)unaff_EDI] + 0x168),DAT_006d35d0);
      }
      if (*(int *)(&DAT_006d3674 + (int)puVar7 * 0x10) < 1) {
        puStack_2c = (undefined4 *)0x5eaf13;
        (**(code **)(**(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[(int)puVar7] + 0x168),DAT_006d35d0);
      }
      if (0 < *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10)) {
        puStack_2c = (undefined4 *)0x5eaf32;
        iVar10 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        if (-1 < iVar10 + -1) {
          iVar8 = 0;
          do {
            puStack_28 = &local_560;
            puStack_2c = (undefined4 *)0x5eaf56;
            FUN_00416244(local_570,iVar8,0xfc);
            puStack_2c = (undefined4 *)local_570;
            ppuStack_30 = (undefined4 **)0x5eaf6d;
            FUN_00416478(local_580,&DAT_005eb474);
            puVar4 = puStack_2c;
            puStack_2c = (undefined4 *)0x5eaf84;
            FUN_0050e448(*(undefined4 *)(DAT_006d34e8 + 0x304),local_580,puVar4);
            puStack_2c = (undefined4 *)0x5eaf95;
            FUN_00404b6c(&local_55c,local_560);
            puStack_2c = (undefined4 *)0x5eafa0;
            iVar11 = FUN_00409ff8(local_55c);
            if (iVar11 == *(int *)(&DAT_006d3674 + (int)unaff_EDI * 0x10)) {
              if ((int)unaff_EDI < 0xc) {
                uVar6 = 1;
              }
              else {
                uVar6 = 2;
              }
              puStack_2c = (undefined4 *)0x5eafd4;
              FUN_00409dd8(uVar6,&local_588);
              puStack_2c = (undefined4 *)0x5eafe5;
              FUN_004051d4(&local_584,local_588);
              puStack_2c = (undefined4 *)local_584;
              ppuStack_30 = (undefined4 **)0x5eaffb;
              FUN_00416244(local_598,iVar8,0xfc);
              ppuStack_30 = (undefined4 **)local_598;
              ppuStack_34 = (undefined4 **)0x5eb012;
              FUN_00416478(local_5a8,"nxstatus");
              ppuVar3 = ppuStack_30;
              ppuStack_30 = (undefined4 **)0x5eb029;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_5a8,ppuVar3);
              ppuStack_30 = &local_5ac;
              ppuStack_34 = (undefined4 **)0x5eb045;
              FUN_005e9de8(param_1,*(undefined4 *)(&DAT_006d3674 + (int)unaff_EDI * 0x10),iVar8);
              puStack_28 = local_5ac;
              puStack_38 = (undefined1 *)0x5eb05b;
              FUN_00416244(local_5bc,iVar8,0xfc);
              puStack_38 = local_5bc;
              puStack_3c = (undefined1 *)0x5eb072;
              FUN_00416478(local_5cc,"status");
              puVar2 = puStack_38;
              puStack_38 = (undefined1 *)0x5eb089;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_5cc,puVar2);
              break;
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      if (0 < *(int *)(&DAT_006d3674 + (int)puVar7 * 0x10)) {
        puStack_2c = (undefined4 *)0x5eb0b7;
        iVar10 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        if (-1 < iVar10 + -1) {
          iVar8 = 0;
          do {
            puStack_28 = &local_5d4;
            puStack_2c = (undefined4 *)0x5eb0db;
            FUN_00416244(local_5e4,iVar8,0xfc);
            puStack_2c = (undefined4 *)local_5e4;
            ppuStack_30 = (undefined4 **)0x5eb0f2;
            FUN_00416478(local_5f4,&DAT_005eb474);
            puVar4 = puStack_2c;
            puStack_2c = (undefined4 *)0x5eb109;
            FUN_0050e448(*(undefined4 *)(DAT_006d34e8 + 0x304),local_5f4,puVar4);
            puStack_2c = (undefined4 *)0x5eb11a;
            FUN_00404b6c(&local_5d0,local_5d4);
            puStack_2c = (undefined4 *)0x5eb125;
            iVar11 = FUN_00409ff8(local_5d0);
            if (iVar11 == *(int *)(&DAT_006d3674 + (int)puVar7 * 0x10)) {
              if ((int)puVar7 < 0xc) {
                uVar6 = 1;
              }
              else {
                uVar6 = 2;
              }
              puStack_2c = (undefined4 *)0x5eb15b;
              FUN_00409dd8(uVar6,&local_5fc);
              puStack_2c = (undefined4 *)0x5eb16c;
              FUN_004051d4(&local_5f8,local_5fc);
              puStack_2c = (undefined4 *)local_5f8;
              ppuStack_30 = (undefined4 **)0x5eb182;
              FUN_00416244(local_60c,iVar8,0xfc);
              ppuStack_30 = (undefined4 **)local_60c;
              ppuStack_34 = (undefined4 **)0x5eb199;
              FUN_00416478(local_61c,"nxstatus");
              ppuVar3 = ppuStack_30;
              ppuStack_30 = (undefined4 **)0x5eb1b0;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_61c,ppuVar3);
              ppuStack_30 = &local_620;
              ppuStack_34 = (undefined4 **)0x5eb1c8;
              FUN_005e9de8(param_1,*(undefined4 *)(&DAT_006d3674 + (int)puVar7 * 0x10),iVar8);
              puStack_28 = local_620;
              puStack_38 = (undefined1 *)0x5eb1de;
              FUN_00416244(local_630,iVar8,0xfc);
              puStack_38 = local_630;
              puStack_3c = (undefined1 *)0x5eb1f5;
              FUN_00416478(local_640,"status");
              puVar7 = puStack_38;
              puStack_38 = (undefined1 *)0x5eb20c;
              FUN_0050e9b8(*(undefined4 *)(DAT_006d34e8 + 0x304),local_640,puVar7);
              break;
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
    }
  }
LAB_005eb216:
  *in_FS_OFFSET = (int)puStack_28;
  local_20 = &LAB_005eb456;
  local_24 = (undefined1 *)0x5eb239;
  FUN_00405744(local_640,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb244;
  FUN_00404ff0(&local_620);
  local_24 = (undefined1 *)0x5eb25a;
  FUN_00405744(local_61c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb265;
  FUN_004048d4(&local_5fc);
  local_24 = (undefined1 *)0x5eb270;
  FUN_00404ff0(&local_5f8);
  local_24 = (undefined1 *)0x5eb286;
  FUN_00405744(local_5f4,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb291;
  FUN_00404ff0(&local_5d4);
  local_24 = (undefined1 *)0x5eb29c;
  FUN_004048d4(&local_5d0);
  local_24 = (undefined1 *)0x5eb2b2;
  FUN_00405744(local_5cc,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb2bd;
  FUN_00404ff0(&local_5ac);
  local_24 = (undefined1 *)0x5eb2d3;
  FUN_00405744(local_5a8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb2de;
  FUN_004048d4(&local_588);
  local_24 = (undefined1 *)0x5eb2e9;
  FUN_00404ff0(&local_584);
  local_24 = (undefined1 *)0x5eb2ff;
  FUN_00405744(local_580,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb30a;
  FUN_00404ff0(&local_560);
  local_24 = (undefined1 *)0x5eb315;
  FUN_004048d4(&local_55c);
  local_24 = (undefined1 *)0x5eb320;
  FUN_00404ff0(&local_558);
  local_24 = (undefined1 *)0x5eb336;
  FUN_00405744(local_254,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb341;
  FUN_00404ff0(&local_234);
  local_24 = (undefined1 *)0x5eb357;
  FUN_00405744(local_230,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb362;
  FUN_004048d4(&local_210);
  local_24 = (undefined1 *)0x5eb36d;
  FUN_00404ff0(&local_20c);
  local_24 = (undefined1 *)0x5eb383;
  FUN_00405744(local_208,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb38e;
  FUN_00404ff0(&local_1e8);
  local_24 = (undefined1 *)0x5eb399;
  FUN_004048d4(&local_1e4);
  local_24 = (undefined1 *)0x5eb3af;
  FUN_00405744(local_1e0,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb3ba;
  FUN_00404ff0(&local_1c0);
  local_24 = (undefined1 *)0x5eb3d0;
  FUN_00405744(local_1bc,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x5eb3db;
  FUN_00404ff0(&local_17c);
  local_24 = (undefined1 *)0x5eb3e6;
  FUN_004048d4(&local_178);
  local_24 = (undefined1 *)0x5eb3fc;
  FUN_00405744(local_174,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb407;
  FUN_00404ff0(&local_154);
  local_24 = (undefined1 *)0x5eb412;
  FUN_004048d4(&local_150);
  local_24 = (undefined1 *)0x5eb428;
  FUN_00405744(local_14c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5eb433;
  FUN_00404ff0(&local_12c);
  local_24 = (undefined1 *)0x5eb43e;
  FUN_004048d4(&local_128);
  local_24 = (undefined1 *)0x5eb44b;
  FUN_00405008(&local_20,3);
  return;
}

