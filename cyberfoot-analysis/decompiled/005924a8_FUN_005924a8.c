// Address: 005924a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005924a8(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined4 **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_1ec [16];
  undefined1 local_1dc [16];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined1 *local_178;
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [16];
  undefined1 local_13c [16];
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 **ppuStack_38;
  undefined4 **ppuStack_34;
  undefined1 *puStack_30;
  undefined4 *local_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  int iVar8;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 0x3d;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_20 = &LAB_00592f67;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  iStack_28 = 0x5924db;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1dc))();
  iVar7 = 0;
  iStack_28 = 0x5924e9;
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    do {
      local_c = param_2;
      if (param_2 < 0) {
        iVar8 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80);
        if (iVar8 < 0) {
          local_c = *(int *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar6 * 0x80);
        }
        else {
          local_c = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar8 * 0x2f8);
        }
      }
      iVar8 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80);
      if (iVar8 < 0) {
        iVar8 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar6 * 0x80);
      }
      else {
        iVar8 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar8 * 0x2f8);
      }
      if ((*(char *)(*(int *)PTR_DAT_0066b718 + iVar6 * 0x80) != '\0') && (iVar8 == local_c)) {
        iVar7 = iVar7 + 1;
        local_2c = (undefined4 *)0x5925c5;
        iStack_28 = iVar7;
        FUN_004060a8(&DAT_006d2258,PTR_DAT_00591f8c,1);
        *(int *)(DAT_006d2258 + -0x28 + iVar7 * 0x28) = iVar6;
        *(undefined4 *)(DAT_006d2258 + -4 + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80);
        if (param_2 < 0) {
          *(undefined4 *)(DAT_006d2258 + -8 + iVar7 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x2c + iVar6 * 0x80);
        }
        else {
          *(undefined4 *)(DAT_006d2258 + -8 + iVar7 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x28 + iVar6 * 0x80);
        }
        *(undefined4 *)(DAT_006d2258 + -0x24 + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x44 + iVar6 * 0x80);
        *(undefined4 *)(DAT_006d2258 + -0x20 + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x48 + iVar6 * 0x80);
        *(undefined4 *)(DAT_006d2258 + -0x1c + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x4c + iVar6 * 0x80);
        if (local_c == 0x1d) {
          *(undefined4 *)(DAT_006d2258 + -0x18 + iVar7 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x50 + iVar6 * 0x80);
        }
        *(undefined4 *)(DAT_006d2258 + -0x14 + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x54 + iVar6 * 0x80);
        *(undefined4 *)(DAT_006d2258 + -0x10 + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x58 + iVar6 * 0x80);
        *(undefined4 *)(DAT_006d2258 + -0xc + iVar7 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x5c + iVar6 * 0x80);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iStack_28 = 0x59270f;
  DAT_006d2254 = FUN_00405eec(DAT_006d2258);
  iStack_28 = DAT_006d2254 + -1;
  local_2c = (undefined4 *)&LAB_00591fac;
  puStack_30 = (undefined1 *)0x592731;
  FUN_004bcdb0(DAT_006d2258,0x28,0);
  if (-1 < iVar7 + -1) {
    iVar5 = 0;
    do {
      puStack_30 = (undefined1 *)0x592753;
      (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
      puStack_30 = (undefined1 *)0x59275e;
      FUN_00511cbc(*(undefined4 *)(param_1 + 0x2f8));
      puStack_30 = (undefined1 *)0x592769;
      FUN_00409dd8(iVar5 + 1,&local_1c);
      puStack_30 = (undefined1 *)0x592774;
      FUN_004051d4(&stack0xffffffe8,local_1c);
      piVar1 = *(int **)(param_1 + 0x2f8);
      ppuStack_34 = (undefined4 **)0x592788;
      iVar6 = (**(code **)(*piVar1 + 0x11c))();
      ppuStack_34 = (undefined4 **)0x592795;
      FUN_00416244(&local_2c,iVar6 + -1,0xfc);
      ppuStack_34 = &local_2c;
      ppuStack_38 = (undefined1 **)0x5927a6;
      FUN_00416478(&local_3c,"colocacao");
      ppuVar4 = ppuStack_34;
      ppuStack_34 = (undefined4 **)0x5927b1;
      FUN_0050e9b8(piVar1,&local_3c,ppuVar4);
      ppuStack_34 = (undefined4 **)0x5927d3;
      FUN_00405194(&local_40,*(int *)PTR_DAT_0066b718 + *(int *)(DAT_006d2258 + iVar5 * 0x28) * 0x80
                  );
      ppuStack_34 = (undefined4 **)local_40;
      ppuStack_38 = (undefined1 **)0x5927e5;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      ppuStack_38 = (undefined1 **)0x5927f2;
      FUN_00416244(&local_50,iVar6 + -1,0xfc);
      ppuStack_38 = &local_50;
      local_3c = (undefined1 *)0x592803;
      FUN_00416478(local_60,"nxtecnico");
      ppuVar3 = ppuStack_38;
      ppuStack_38 = (undefined1 **)0x592812;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_60,ppuVar3);
      if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x40 + *(int *)(DAT_006d2258 + iVar5 * 0x28) * 0x80)
          != '\0') {
        ppuStack_38 = (undefined1 **)0x59284a;
        FUN_00405194(&local_64,
                     *(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d2258 + 0x24 + iVar5 * 0x28) * 0x2f8
                    );
        ppuStack_38 = (undefined1 **)local_64;
        local_3c = (undefined1 *)0x59285c;
        iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        ppuStack_38 = (undefined1 **)0x592869;
        FUN_00416244(local_74,iVar6 + -1,0xfc);
        ppuStack_38 = (undefined1 **)local_74;
        local_3c = (undefined1 *)0x59287a;
        FUN_00416478(local_84,"timeatual");
        ppuVar3 = ppuStack_38;
        ppuStack_38 = (undefined1 **)0x592889;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_84,ppuVar3);
      }
      ppuStack_38 = (undefined1 **)0x59289d;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0x18 + iVar5 * 0x28),&local_8c);
      ppuStack_38 = (undefined1 **)0x5928ae;
      FUN_004051d4(&local_88,local_8c);
      ppuStack_38 = (undefined1 **)local_88;
      local_3c = (undefined1 *)0x5928c3;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      local_3c = (undefined1 *)0x5928d3;
      FUN_00416244(local_9c,iVar6 + -1,0xfc);
      local_3c = local_9c;
      local_40 = (undefined1 *)0x5928ea;
      FUN_00416478(local_ac,"mundial");
      puVar2 = local_3c;
      local_3c = (undefined1 *)0x5928fc;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_ac,puVar2);
      local_3c = (undefined1 *)0x592910;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0x14 + iVar5 * 0x28),&local_b4);
      local_3c = (undefined1 *)0x592921;
      FUN_004051d4(&local_b0,local_b4);
      local_3c = local_b0;
      local_40 = (undefined1 *)0x592936;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      local_40 = (undefined1 *)0x592946;
      FUN_00416244(local_c4,iVar6 + -1,0xfc);
      local_40 = local_c4;
      puStack_44 = (undefined1 *)0x59295d;
      FUN_00416478(local_d4,&DAT_00592fcc);
      puVar2 = local_40;
      local_40 = (undefined1 *)0x59296f;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_d4,puVar2);
      local_40 = (undefined1 *)0x592983;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0x1c + iVar5 * 0x28),&local_dc);
      local_40 = (undefined1 *)0x592994;
      FUN_004051d4(&local_d8,local_dc);
      local_40 = local_d8;
      puStack_44 = (undefined1 *)0x5929a9;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      puStack_44 = (undefined1 *)0x5929b9;
      FUN_00416244(local_ec,iVar6 + -1,0xfc);
      puStack_44 = local_ec;
      puStack_48 = (undefined1 *)0x5929d0;
      FUN_00416478(local_fc,&DAT_00592fd8);
      puVar2 = puStack_44;
      puStack_44 = (undefined1 *)0x5929e2;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_fc,puVar2);
      puStack_44 = (undefined1 *)0x5929f6;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 8 + iVar5 * 0x28),&local_104);
      puStack_44 = (undefined1 *)0x592a07;
      FUN_004051d4(&local_100,local_104);
      puStack_44 = (undefined1 *)local_100;
      puStack_48 = (undefined1 *)0x592a1c;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      puStack_48 = (undefined1 *)0x592a2c;
      FUN_00416244(local_114,iVar6 + -1,0xfc);
      puStack_48 = local_114;
      puStack_4c = (undefined1 *)0x592a43;
      FUN_00416478(local_124,"nacional");
      puVar2 = puStack_48;
      puStack_48 = (undefined1 *)0x592a55;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_124,puVar2);
      puStack_48 = (undefined1 *)0x592a69;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0xc + iVar5 * 0x28),&local_12c);
      puStack_48 = (undefined1 *)0x592a7a;
      FUN_004051d4(&local_128,local_12c);
      puStack_48 = (undefined1 *)local_128;
      puStack_4c = (undefined1 *)0x592a8f;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      puStack_4c = (undefined1 *)0x592a9f;
      FUN_00416244(local_13c,iVar6 + -1,0xfc);
      puStack_4c = local_13c;
      local_50 = (undefined1 *)0x592ab6;
      FUN_00416478(local_14c,&DAT_00592ff8);
      puVar2 = puStack_4c;
      puStack_4c = (undefined1 *)0x592ac8;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_14c,puVar2);
      puStack_4c = (undefined1 *)0x592adc;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0x10 + iVar5 * 0x28),&local_154);
      puStack_4c = (undefined1 *)0x592aed;
      FUN_004051d4(&local_150,local_154);
      puStack_4c = (undefined1 *)local_150;
      local_50 = (undefined1 *)0x592b02;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      local_50 = (undefined1 *)0x592b12;
      FUN_00416244(local_164,iVar6 + -1,0xfc);
      local_50 = local_164;
      puStack_54 = (undefined1 *)0x592b29;
      FUN_00416478(local_174,"estadual");
      puVar2 = local_50;
      local_50 = (undefined1 *)0x592b3b;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_174,puVar2);
      local_50 = (undefined1 *)0x592b4f;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + 0x20 + iVar5 * 0x28),&local_17c);
      local_50 = (undefined1 *)0x592b60;
      FUN_004051d4(&local_178,local_17c);
      local_50 = local_178;
      puStack_54 = (undefined1 *)0x592b75;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      puStack_54 = (undefined1 *)0x592b85;
      FUN_00416244(local_18c,iVar6 + -1,0xfc);
      puStack_54 = local_18c;
      uStack_58 = 0x592b9c;
      FUN_00416478(local_19c,"pontos");
      puVar2 = puStack_54;
      puStack_54 = (undefined1 *)0x592bae;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_19c,puVar2);
      puStack_54 = (undefined1 *)0x592bc1;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2258 + iVar5 * 0x28),&local_1a4);
      puStack_54 = (undefined1 *)0x592bd2;
      FUN_004051d4(&local_1a0,local_1a4);
      puStack_54 = (undefined1 *)local_1a0;
      uStack_58 = 0x592be7;
      iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      puStack_30 = (undefined1 *)0x592bf7;
      FUN_00416244(local_1b4,iVar6 + -1,0xfc);
      puStack_30 = local_1b4;
      ppuStack_34 = (undefined4 **)0x592c0e;
      FUN_00416478(local_1c4,&DAT_0059302c);
      puVar2 = puStack_30;
      puStack_30 = (undefined1 *)0x592c20;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_1c4,puVar2);
      puStack_30 = (undefined1 *)0x592c2b;
      FUN_00511cd0(*(undefined4 *)(param_1 + 0x2f8));
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  puStack_30 = (undefined1 *)0x0;
  ppuStack_34 = (undefined4 **)0x592c4c;
  FUN_004060a8(&DAT_006d2258,PTR_DAT_00591f8c,1);
  puStack_30 = (undefined1 *)0x592c5d;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if (0 < iVar5) {
    if (*(int *)PTR_DAT_0066b394 < 0) {
      puStack_30 = (undefined1 *)0x592d69;
      (**(code **)(**(int **)(param_1 + 0x2f8) + 0x210))(*(int **)(param_1 + 0x2f8),DAT_00593030);
    }
    else {
      puStack_30 = (undefined1 *)0x592c81;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        do {
          local_2c = &local_1cc;
          puStack_30 = (undefined1 *)0x592ca6;
          FUN_00416244(local_1dc,iVar7,0xfc);
          puStack_30 = local_1dc;
          ppuStack_34 = (undefined4 **)0x592cbd;
          FUN_00416478(local_1ec,&DAT_0059302c);
          puVar2 = puStack_30;
          puStack_30 = (undefined1 *)0x592ccf;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),local_1ec,puVar2);
          puStack_30 = (undefined1 *)0x592ce0;
          FUN_00404b6c(&local_1c8,local_1cc);
          puStack_30 = (undefined1 *)0x592ceb;
          iVar6 = FUN_00409ff8(local_1c8);
          if (iVar6 == *(int *)PTR_DAT_0066b394) {
            puStack_30 = (undefined1 *)CONCAT31((int3)((uint)iVar6 >> 8),DAT_00593030);
            ppuStack_34 = (undefined4 **)0x1;
            ppuStack_38 = (undefined1 **)0x0;
            local_3c = (undefined1 *)0x592d11;
            (**(code **)(**(int **)(param_1 + 0x2f8) + 0x20c))(*(int **)(param_1 + 0x2f8),0,iVar7);
            puStack_30 = (undefined1 *)0x592d1e;
            FUN_00512eb4(*(undefined4 *)(param_1 + 0x2f8),iVar7);
            *(undefined4 *)PTR_DAT_0066b394 = 0xffffffff;
            break;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (-1 < *(int *)PTR_DAT_0066b394) {
        puStack_30 = (undefined1 *)0x592d53;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x210))(*(int **)(param_1 + 0x2f8),DAT_00593030);
      }
    }
  }
  *(undefined4 *)PTR_DAT_0066b394 = 0xffffffff;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00592f71;
  iStack_28 = 0x592d97;
  FUN_00405744(local_1ec,PTR_DAT_004010f8,2);
  iStack_28 = 0x592da2;
  FUN_00404ff0(&local_1cc);
  iStack_28 = 0x592dad;
  FUN_004048d4(&local_1c8);
  iStack_28 = 0x592dc3;
  FUN_00405744(local_1c4,PTR_DAT_004010f8,2);
  iStack_28 = 0x592dce;
  FUN_004048d4(&local_1a4);
  iStack_28 = 0x592dd9;
  FUN_00404ff0(&local_1a0);
  iStack_28 = 0x592def;
  FUN_00405744(local_19c,PTR_DAT_004010f8,2);
  iStack_28 = 0x592dfa;
  FUN_004048d4(&local_17c);
  iStack_28 = 0x592e05;
  FUN_00404ff0(&local_178);
  iStack_28 = 0x592e1b;
  FUN_00405744(local_174,PTR_DAT_004010f8,2);
  iStack_28 = 0x592e26;
  FUN_004048d4(&local_154);
  iStack_28 = 0x592e31;
  FUN_00404ff0(&local_150);
  iStack_28 = 0x592e47;
  FUN_00405744(local_14c,PTR_DAT_004010f8,2);
  iStack_28 = 0x592e52;
  FUN_004048d4(&local_12c);
  iStack_28 = 0x592e5d;
  FUN_00404ff0(&local_128);
  iStack_28 = 0x592e73;
  FUN_00405744(local_124,PTR_DAT_004010f8,2);
  iStack_28 = 0x592e7e;
  FUN_004048d4(&local_104);
  iStack_28 = 0x592e89;
  FUN_00404ff0(&local_100);
  iStack_28 = 0x592e9f;
  FUN_00405744(local_fc,PTR_DAT_004010f8,2);
  iStack_28 = 0x592eaa;
  FUN_004048d4(&local_dc);
  iStack_28 = 0x592eb5;
  FUN_00404ff0(&local_d8);
  iStack_28 = 0x592ecb;
  FUN_00405744(local_d4,PTR_DAT_004010f8,2);
  iStack_28 = 0x592ed6;
  FUN_004048d4(&local_b4);
  iStack_28 = 0x592ee1;
  FUN_00404ff0(&local_b0);
  iStack_28 = 0x592ef7;
  FUN_00405744(local_ac,PTR_DAT_004010f8,2);
  iStack_28 = 0x592f02;
  FUN_004048d4(&local_8c);
  iStack_28 = 0x592f0d;
  FUN_00404ff0(&local_88);
  iStack_28 = 0x592f20;
  FUN_00405744(local_84,PTR_DAT_004010f8,2);
  iStack_28 = 0x592f28;
  FUN_00404ff0(&local_64);
  iStack_28 = 0x592f3b;
  FUN_00405744(local_60,PTR_DAT_004010f8,2);
  iStack_28 = 0x592f43;
  FUN_00404ff0(&local_40);
  iStack_28 = 0x592f56;
  FUN_00405744(&local_3c,PTR_DAT_004010f8,2);
  iStack_28 = 0x592f5e;
  FUN_004048d4(&local_1c);
  iStack_28 = 0x592f66;
  FUN_00404ff0(&stack0xffffffe8);
  return;
}

