// Address: 006010ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_ImagecamisaDragDrop(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  int *in_FS_OFFSET;
  bool bVar11;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined1 *local_684;
  undefined4 local_680;
  int local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined *local_658;
  undefined1 *local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  byte local_640 [256];
  byte local_540 [256];
  byte local_440 [256];
  byte local_340 [256];
  byte local_240 [256];
  byte local_140 [224];
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &stack0xfffffffc;
  iVar9 = 0xd2;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_00601ea0;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  puVar3 = PTR_PTR_004386b8;
  local_3c = (undefined1 *)(&DAT_006d4264)[*(int *)PTR_DAT_0066b5ec];
  local_30 = (undefined1 *)0x601138;
  cVar7 = FUN_00403c10(param_2,PTR_PTR_004386b8);
  if (cVar7 == '\0') {
    local_30 = (undefined1 *)0x601151;
    cVar7 = FUN_00403c10(param_2,PTR_PTR_00457844);
    if (cVar7 == '\0') {
      local_30 = (undefined1 *)0x60116a;
      FUN_00403c10(param_2,PTR_PTR_004df4e4);
    }
  }
  local_30 = (undefined1 *)0x60117d;
  cVar7 = FUN_00403c10(0,puVar3);
  if (cVar7 == '\0') {
    local_30 = (undefined1 *)0x601196;
    cVar7 = FUN_00403c10(0,PTR_PTR_00457844);
    if (cVar7 == '\0') {
      local_30 = (undefined1 *)0x6011af;
      cVar7 = FUN_00403c10(0,PTR_PTR_004df4e4);
      if (cVar7 != '\0') {
        local_34 = puRam0000000c;
      }
    }
    else {
      local_34 = puRam0000000c;
    }
  }
  else {
    local_34 = puRam0000000c;
  }
  local_30 = (undefined1 *)0x6011c6;
  FUN_004039d4(uRam00000000,local_140);
  bVar11 = local_140[0] == 0xffffffff;
  local_30 = (undefined1 *)0x6011db;
  FUN_00403180(local_140,&DAT_00601eb4);
  if (!bVar11) {
    local_30 = (undefined1 *)0x6011ee;
    FUN_004039d4(uRam00000000,local_240);
    bVar11 = local_240[0] == 0xffffffff;
    local_30 = (undefined1 *)0x601203;
    FUN_00403180(local_240,&DAT_00601ebc);
    if (!bVar11) {
      local_30 = (undefined1 *)0x601216;
      FUN_004039d4(*param_2,local_340);
      bVar11 = local_340[0] == 0xffffffff;
      local_30 = (undefined1 *)0x60122b;
      FUN_00403180(local_340,&DAT_00601eb4);
      if (!bVar11) {
        local_30 = (undefined1 *)0x60123a;
        FUN_004039d4(*param_2,local_440);
        bVar11 = local_440[0] == 0xffffffff;
        local_30 = (undefined1 *)0x60124f;
        FUN_00403180(local_440,&DAT_00601ebc);
        if (!bVar11) {
          local_30 = (undefined1 *)0x60125e;
          FUN_004039d4(uRam00000000,local_540);
          bVar11 = local_540[0] == 0xffffffff;
          local_30 = (undefined1 *)0x601273;
          FUN_00403180(local_540,"\tTTntlabel");
          if (!bVar11) {
            local_30 = (undefined1 *)0x601282;
            FUN_004039d4(*param_2,local_640);
            bVar11 = local_640[0] == 0xffffffff;
            local_30 = (undefined1 *)0x601297;
            FUN_00403180(local_640,"\tTTntlabel");
            if (!bVar11) goto LAB_00601970;
          }
        }
      }
    }
  }
  puVar5 = local_30;
  puVar4 = local_34;
  puVar10 = local_3c;
  if ((((int)local_30 < 0xc) && ((int)local_34 < 0xc)) && (local_30 != local_34)) {
    uVar8 = *(undefined4 *)
             (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)local_34 * 4);
    *(undefined4 *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)local_34 * 4) =
         *(undefined4 *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)local_30 * 4);
    *(undefined4 *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)local_30 * 4) =
         uVar8;
    local_30 = (undefined1 *)0x601336;
    FUN_004e1400(*(undefined4 *)(&DAT_006d41cc + (int)local_34 * 4),&local_24);
    local_30 = (undefined1 *)0x60134b;
    FUN_004e1400(*(undefined4 *)(&DAT_006d41cc + (int)puVar5 * 4),&local_644);
    local_30 = (undefined1 *)0x601360;
    FUN_004e1414(*(undefined4 *)(&DAT_006d41cc + (int)puVar4 * 4),local_644);
    local_30 = (undefined1 *)0x601372;
    FUN_004e1414(*(undefined4 *)(&DAT_006d41cc + (int)puVar5 * 4),local_24);
    local_30 = (undefined1 *)0x60137a;
    FUN_00404ff0(&local_2c);
    local_34 = &LAB_006013fd;
    local_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_38;
    local_3c = *(undefined1 **)
                (PTR_DAT_0066b1c8 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c +
                        *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 +
                                (int)puVar5 * 4) * 0x130) * 4);
    local_40 = &DAT_00601ed4;
    puStack_44 = *(undefined **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 +
                                  (int)puVar5 * 4) * 0x130) * 4);
    puStack_48 = (undefined *)0x6013f3;
    local_30 = &stack0xfffffffc;
    FUN_00405330(&local_2c,3);
    puVar10 = local_3c;
    *in_FS_OFFSET = (int)puStack_44;
    iVar9 = *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar5 * 4);
    if (0 < iVar9) {
      local_3c = (undefined1 *)0x601449;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar9 * 0x130),&local_64c,
                   puVar10);
      local_3c = (undefined1 *)0x601459;
      FUN_00404bac(&local_64c,&DAT_00601ee0);
      local_3c = (undefined1 *)0x60146a;
      FUN_004051d4(&local_648,local_64c);
      local_3c = (undefined1 *)0x60147f;
      FUN_004e1414(*(undefined4 *)(&DAT_006d4214 + (int)puVar5 * 4),local_648);
      local_3c = (undefined1 *)0x60148f;
      FUN_00642c50(0x84,&local_654);
      local_3c = local_654;
      local_40 = &DAT_00601ee8;
      puStack_44 = (undefined *)0x6014c3;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar5 * 4)
                    * 0x130),&local_65c);
      puStack_44 = (undefined *)0x6014d4;
      FUN_004051d4(&local_658,local_65c);
      puStack_44 = local_658;
      puStack_48 = &DAT_00601ef0;
      puStack_4c = (undefined *)0x6014ef;
      FUN_00642c50(0x31,&local_660);
      puStack_4c = (undefined *)local_660;
      puStack_50 = &DAT_00601ee8;
      uStack_54 = 0x601523;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar5 * 4)
                    * 0x130),&local_668);
      uStack_54 = 0x601534;
      FUN_004051d4(&local_664,local_668);
      uStack_54 = local_664;
      puStack_58 = &LAB_00601efc;
      iStack_5c = local_2c;
      uStack_60 = 0x601552;
      FUN_00405330(&local_650,9);
      local_3c = (undefined1 *)0x601567;
      FUN_004e14d4(*(undefined4 *)(&DAT_006d4214 + (int)puVar5 * 4),local_650);
    }
    local_40 = &LAB_006015ea;
    puStack_44 = (undefined *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&puStack_44;
    puStack_48 = *(undefined **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c +
                          *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 +
                                  (int)puVar4 * 4) * 0x130) * 4);
    puStack_4c = &DAT_00601ed4;
    puStack_50 = *(undefined **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + (int)&stack0xfffffffc * 0xf8 + -4 +
                                  (int)puVar4 * 4) * 0x130) * 4);
    uStack_54 = 0x6015e0;
    local_3c = &stack0xfffffffc;
    FUN_00405330(&local_2c,3);
    puVar6 = local_30;
    puVar10 = local_3c;
    *in_FS_OFFSET = local_38;
    iVar9 = *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar4 * 4);
    if (0 < iVar9) {
      local_30 = (undefined1 *)0x601636;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar9 * 0x130),&local_670,
                   puVar6);
      local_30 = (undefined1 *)0x601646;
      FUN_00404bac(&local_670,&DAT_00601ee0);
      local_30 = (undefined1 *)0x601657;
      FUN_004051d4(&local_66c,local_670);
      local_30 = (undefined1 *)0x60166c;
      FUN_004e1414(*(undefined4 *)(&DAT_006d4214 + (int)puVar4 * 4),local_66c);
      local_30 = (undefined1 *)0x60167c;
      FUN_00642c50(0x84,&local_678);
      local_30 = (undefined1 *)local_678;
      local_34 = &DAT_00601ee8;
      local_38 = 0x6016b0;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar4 * 4)
                    * 0x130),&local_680);
      local_38 = 0x6016c1;
      FUN_004051d4(&local_67c,local_680);
      local_38 = local_67c;
      local_3c = &DAT_00601ef0;
      local_40 = (undefined *)0x6016dc;
      FUN_00642c50(0x31,&local_684);
      local_40 = local_684;
      puStack_44 = &DAT_00601ee8;
      puStack_48 = (undefined *)0x601710;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar4 * 4)
                    * 0x130),&local_68c);
      puStack_48 = (undefined *)0x601721;
      FUN_004051d4(&local_688,local_68c);
      puStack_48 = (undefined *)local_688;
      puStack_4c = &LAB_00601efc;
      puStack_50 = (undefined *)local_2c;
      uStack_54 = 0x60173f;
      FUN_00405330(&local_674,9);
      local_30 = (undefined1 *)0x601754;
      FUN_004e14d4(*(undefined4 *)(&DAT_006d4214 + (int)puVar4 * 4),local_674);
    }
    if (*(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar5 * 4) < 1) {
      local_30 = (undefined1 *)0x6017b4;
      FUN_00545088(*(undefined4 *)(&DAT_006d4184 + (int)puVar5 * 4),0);
    }
    else {
      local_2c = *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + 0x58 + (int)puVar5 * 4);
      local_34 = (undefined1 *)0x6017a1;
      FUN_00605634(param_1,puVar5,
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar5 * 4));
    }
    if (*(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar4 * 4) < 1) {
      local_30 = (undefined1 *)0x601814;
      FUN_00545088(*(undefined4 *)(&DAT_006d4184 + (int)puVar4 * 4),0);
    }
    else {
      local_2c = *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + 0x58 + (int)puVar4 * 4);
      local_34 = (undefined1 *)0x601801;
      FUN_00605634(param_1,puVar4,
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar4 * 4));
    }
    if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar4 * 4)) {
      if (puVar4 == (undefined1 *)0xb) {
        local_30 = (undefined1 *)0x601849;
        (**(code **)(**(int **)(iRam006d4168 + 0x168) + 8))
                  (*(int **)(iRam006d4168 + 0x168),DAT_006d4130);
      }
      else if ((int)puVar4 < 0xc) {
        local_30 = (undefined1 *)0x60186c;
        (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar4] + 0x168) + 8))
                  (*(int **)((&DAT_006d413c)[(int)puVar4] + 0x168),DAT_006d412c);
      }
      else if (0xc < (int)puVar4) {
        local_30 = (undefined1 *)0x60188f;
        (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar4] + 0x168) + 8))
                  (*(int **)((&DAT_006d413c)[(int)puVar4] + 0x168),DAT_006d4134);
      }
    }
    if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar5 * 4)) {
      if (puVar5 == (undefined1 *)0xb) {
        local_30 = (undefined1 *)0x6018c4;
        (**(code **)(**(int **)(iRam006d4168 + 0x168) + 8))
                  (*(int **)(iRam006d4168 + 0x168),DAT_006d4130);
      }
      else if ((int)puVar5 < 0xc) {
        local_30 = (undefined1 *)0x6018e7;
        (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar5] + 0x168) + 8))
                  (*(int **)((&DAT_006d413c)[(int)puVar5] + 0x168),DAT_006d412c);
      }
      else if (0xc < (int)puVar5) {
        local_30 = (undefined1 *)0x60190a;
        (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar5] + 0x168) + 8))
                  (*(int **)((&DAT_006d413c)[(int)puVar5] + 0x168),DAT_006d4134);
      }
    }
    if (*(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar5 * 4) < 1) {
      local_30 = (undefined1 *)0x601939;
      (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar5] + 0x168) + 8))
                (*(int **)((&DAT_006d413c)[(int)puVar5] + 0x168),DAT_006d4128);
    }
    if (*(int *)(*(int *)PTR_DAT_0066b238 + (int)puVar10 * 0xf8 + -4 + (int)puVar4 * 4) < 1) {
      local_30 = (undefined1 *)0x601968;
      (**(code **)(**(int **)((&DAT_006d413c)[(int)puVar4] + 0x168) + 8))
                (*(int **)((&DAT_006d413c)[(int)puVar4] + 0x168),DAT_006d4128);
    }
  }
  local_30 = (undefined1 *)0x601970;
  FUN_00642c6c(local_3c);
LAB_00601970:
  if (((((int)local_30 < 0xc) || ((int)local_34 < 0xc)) &&
      ((0xb < (int)local_30 || (0xb < (int)local_34)))) && (local_30 != local_34)) {
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc + 0x14 +
                *(int *)PTR_DAT_0066b5ec * 4) < 1) {
      local_30 = (undefined1 *)0x6019ce;
      FUN_00642c50(0x289,&local_690);
      local_30 = (undefined1 *)0x6019e2;
      FUN_00545088(*(undefined4 *)(param_1 + 0x380),local_690);
    }
    else {
      if ((int)local_30 < 0xc) {
        local_40 = local_34;
        puVar10 = local_30;
      }
      else {
        local_40 = local_30;
        puVar10 = local_34;
      }
      if (((0 < (int)(local_40 + -0xb)) && ((int)(local_40 + -0xb) < 8)) &&
         (0 < *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4)))
      {
        local_38 = *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar10 * 4)
        ;
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x86 +
         *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar10 * 4) * 0x130)
             = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + -4 + (int)puVar10 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4);
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x86 +
         *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4) *
         0x130) = 1;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x88 +
         *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4) *
         0x130) = 0;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x118 +
         *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4) *
         0x130) = 0;
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x7c +
         *(int *)(*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4) *
         0x130) = 1;
        local_30 = *(undefined1 **)
                    (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x58 + (int)puVar10 * 4);
        local_34 = (undefined1 *)0x601b50;
        FUN_00605634(param_1,puVar10,
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066b238 + (int)local_3c * 0xf8 + 0x10 + (int)local_40 * 4));
        local_34 = (undefined1 *)0x601b65;
        FUN_004e1400(*(undefined4 *)(&DAT_006d41cc + (int)local_40 * 4),&local_694);
        local_34 = (undefined1 *)0x601b77;
        FUN_004e1414(*(undefined4 *)(&DAT_006d41cc + (int)puVar10 * 4),local_694);
        local_34 = (undefined1 *)0x601b8c;
        FUN_004e1400(*(undefined4 *)(&DAT_006d4214 + (int)local_40 * 4),&local_698);
        local_34 = (undefined1 *)0x601b9e;
        FUN_004e1414(*(undefined4 *)(&DAT_006d4214 + (int)puVar10 * 4),local_698);
        local_34 = (undefined1 *)0x601bb3;
        FUN_004e14c0(*(undefined4 *)(&DAT_006d4214 + (int)local_40 * 4),&local_69c);
        local_34 = (undefined1 *)0x601bc5;
        FUN_004e14d4(*(undefined4 *)(&DAT_006d4214 + (int)puVar10 * 4),local_69c);
        local_34 = (undefined1 *)0x601bd6;
        FUN_00466128(*(undefined4 *)(&DAT_006d41cc + (int)local_40 * 4),0);
        local_34 = (undefined1 *)0x601be7;
        FUN_00466128(*(undefined4 *)(&DAT_006d4214 + (int)local_40 * 4),0);
        local_34 = (undefined1 *)0x601bf8;
        FUN_00466128(*(undefined4 *)(&DAT_006d4184 + (int)local_40 * 4),0);
        local_34 = (undefined1 *)0x601c09;
        FUN_00466128((&DAT_006d413c)[(int)local_40],0);
        iVar9 = *in_FS_OFFSET;
        *in_FS_OFFSET = (int)&local_3c;
        *in_FS_OFFSET = iVar9;
        local_34 = (undefined1 *)0x13;
        local_38 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar9 * 0xf8 + 0x10 + (int)local_40 * 4);
        local_3c = (undefined *)0x601c60;
        uVar8 = FUN_006427a8(*(undefined4 *)PTR_DAT_0066b5ec,local_38,
                             *(undefined4 *)PTR_DAT_0066ad84);
        local_34 = (undefined1 *)0x601c6e;
        FUN_0061b828(*(undefined4 *)PTR_DAT_0066b6a4,uVar8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar9 * 0xf8 + 0x10 + (int)local_40 * 4) =
             0xffffffff;
        if (*(int *)PTR_DAT_0066b2cc == 1) {
          iVar9 = 0;
        }
        else {
          iVar9 = 0x2d;
        }
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc + 0x7c +
                        *(int *)PTR_DAT_0066b5ec * 4);
        *piVar1 = *piVar1 + 1;
        if (3 < *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x80 + *(int *)PTR_DAT_0066ad84 * 0x1bc)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x80 + *(int *)PTR_DAT_0066ad84 * 0x1bc) = 3;
        }
        if (3 < *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x84 + *(int *)PTR_DAT_0066ad84 * 0x1bc)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x84 + *(int *)PTR_DAT_0066ad84 * 0x1bc) = 3;
        }
        iVar2 = *(int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc + 0x7c +
                        *(int *)PTR_DAT_0066b5ec * 4);
        *(int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc +
                 *(int *)PTR_DAT_0066b5ec * 0x18 + 0x30 + iVar2 * 8) = local_38;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc +
                 *(int *)PTR_DAT_0066b5ec * 0x18 + 0x34 + iVar2 * 8) =
             iVar9 + *(int *)PTR_DAT_0066b594;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + *(int *)PTR_DAT_0066ad84 * 0x1bc + 0x14 +
                        *(int *)PTR_DAT_0066b5ec * 4);
        *piVar1 = *piVar1 + -1;
        local_34 = (undefined1 *)0x601db4;
        FUN_00605e40(param_1);
        local_34 = (undefined1 *)0x601dbc;
        FUN_00642c6c(local_3c);
      }
    }
  }
  puVar10 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_00601eaa;
  puStack_28 = (undefined1 *)0x601dd4;
  FUN_00404ff0(&local_69c,local_2c,puVar10);
  puStack_28 = (undefined1 *)0x601de4;
  FUN_00405008(&local_698,2);
  puStack_28 = (undefined1 *)0x601def;
  FUN_00404ff0(&local_690);
  puStack_28 = (undefined1 *)0x601dfa;
  FUN_004048d4(&local_68c);
  puStack_28 = (undefined1 *)0x601e0a;
  FUN_00405008(&local_688,2);
  puStack_28 = (undefined1 *)0x601e15;
  FUN_004048d4(&local_680);
  puStack_28 = (undefined1 *)0x601e25;
  FUN_00405008(&local_67c,3);
  puStack_28 = (undefined1 *)0x601e30;
  FUN_004048d4(&local_670);
  puStack_28 = (undefined1 *)0x601e3b;
  FUN_00404ff0(&local_66c);
  puStack_28 = (undefined1 *)0x601e46;
  FUN_004048d4(&local_668);
  puStack_28 = (undefined1 *)0x601e56;
  FUN_00405008(&local_664,2);
  puStack_28 = (undefined1 *)0x601e61;
  FUN_004048d4(&local_65c);
  puStack_28 = (undefined1 *)0x601e71;
  FUN_00405008(&local_658,3);
  puStack_28 = (undefined1 *)0x601e7c;
  FUN_004048d4(&local_64c);
  puStack_28 = (undefined1 *)0x601e87;
  FUN_00404ff0(&local_648);
  puStack_28 = (undefined1 *)0x601e92;
  FUN_00404ff0(&local_644);
  puStack_28 = (undefined1 *)0x601e9f;
  FUN_00405008(&local_2c,3);
  return;
}

