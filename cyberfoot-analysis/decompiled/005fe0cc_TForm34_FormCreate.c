// Address: 005fe0cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm34_FormCreate(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *local_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 **ppuStack_3c;
  undefined1 *local_38;
  wchar_t *local_34;
  undefined4 local_30;
  wchar_t *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int *local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x22;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005fe85f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = L"<p align=\"center\"><shad>";
  local_30 = 0x5fe101;
  FUN_00642c50(0x1ca,&stack0xffffffec);
  local_34 = L"</shad></p>";
  local_38 = (undefined1 *)0x5fe116;
  local_30 = unaff_EBX;
  FUN_00405330(&local_10,3);
  local_38 = (undefined1 *)0x5fe124;
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),local_10);
  local_38 = (undefined1 *)0x5fe131;
  FUN_00642c50(0x1cb,&stack0xffffffe8);
  local_38 = (undefined1 *)0x5fe13f;
  FUN_00545088(*(undefined4 *)(param_1 + 0x314),unaff_ESI);
  local_38 = (undefined1 *)0x5fe14c;
  FUN_00642c50(0x1cc,&stack0xffffffe4);
  local_38 = (undefined1 *)0x5fe15a;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x318),unaff_EDI);
  local_38 = (undefined1 *)0x5fe167;
  FUN_00642c50(0x80,&local_20);
  local_38 = (undefined1 *)0x5fe178;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_20);
  local_38 = (undefined1 *)0x5fe185;
  FUN_00642c50(0x81,&local_24);
  local_38 = (undefined1 *)0x5fe196;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x60),local_24);
  local_38 = (undefined1 *)0x5fe1a3;
  FUN_00642c50(0x83,&local_28);
  local_38 = (undefined1 *)0x5fe1b4;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x60),local_28);
  local_38 = (undefined1 *)0x5fe1c1;
  FUN_00642c50(0x84,&local_2c);
  local_38 = (undefined1 *)0x5fe1d2;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_2c);
  local_38 = (undefined1 *)0x5fe1df;
  FUN_00642c50(0x88,&local_30);
  local_38 = (undefined1 *)0x5fe1f0;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x60),local_30);
  if (*PTR_DAT_0066af9c == '\0') {
    local_38 = (undefined1 *)0x5fe204;
    FUN_0055d080("penalty");
  }
  if (*PTR_DAT_0066af9c == '\0') {
    local_38 = (undefined1 *)0x5fe222;
    FUN_0043b234(*(undefined4 *)(*(int *)PTR_DAT_0066b6a4 + 0x300),0);
  }
  local_38 = (undefined1 *)0x5fe231;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066ae04,&local_34);
  if (local_34 != (wchar_t *)0x0) {
    local_38 = (undefined1 *)0x5fe246;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066ae04,&local_38);
    puVar2 = local_38;
    local_38 = (undefined1 *)0x5fe25a;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x168),puVar2);
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae04 * 0x2f8);
  local_8 = 0x19;
  local_c = (int *)PTR_DAT_0066ad68;
  do {
    iVar5 = 1;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4) == *local_c) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                   *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130) !=
          '\0')) {
        local_38 = (undefined1 *)0x5fe2e3;
        (**(code **)(**(int **)(param_1 + 0x31c) + 0x1d0))(*(int **)(param_1 + 0x31c),1);
        local_38 = *(undefined1 **)
                    (PTR_DAT_0066b6bc +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4) * 4 + -4);
        ppuStack_3c = (undefined1 **)0x5fe312;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        ppuStack_3c = (undefined1 **)0x5fe31f;
        FUN_00416244(&local_48,iVar4 + -1,0xfc);
        ppuStack_3c = &local_48;
        puStack_40 = (undefined1 *)0x5fe330;
        FUN_00416478(&local_58,"posicaojog");
        ppuVar3 = ppuStack_3c;
        ppuStack_3c = (undefined1 **)0x5fe33f;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),&local_58,ppuVar3);
        ppuStack_3c = (undefined1 **)0x5fe369;
        FUN_00405194(&local_5c,
                     *(int *)PTR_DAT_0066b5b8 +
                     *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130);
        ppuStack_3c = (undefined1 **)local_5c;
        puStack_40 = (undefined1 *)0x5fe37b;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        puStack_40 = (undefined1 *)0x5fe388;
        FUN_00416244(local_6c,iVar4 + -1,0xfc);
        puStack_40 = local_6c;
        puStack_44 = (undefined1 *)0x5fe399;
        FUN_00416478(local_7c,&DAT_005fe8f0);
        puVar2 = puStack_40;
        puStack_40 = (undefined1 *)0x5fe3a8;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),local_7c,puVar2);
        puStack_40 = (undefined1 *)0x5fe3d3;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130),
                     &local_84);
        puStack_40 = (undefined1 *)0x5fe3de;
        FUN_004051d4(&local_80,local_84);
        puStack_40 = (undefined1 *)local_80;
        puStack_44 = (undefined1 *)0x5fe3f0;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        puStack_44 = (undefined1 *)0x5fe400;
        FUN_00416244(local_94,iVar4 + -1,0xfc);
        puStack_44 = local_94;
        local_48 = (undefined1 *)0x5fe417;
        FUN_00416478(local_a4,"forca");
        puVar2 = puStack_44;
        puStack_44 = (undefined1 *)0x5fe429;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),local_a4,puVar2);
        puStack_44 = (undefined1 *)0x5fe457;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130),
                     &local_ac);
        puStack_44 = (undefined1 *)0x5fe468;
        FUN_004051d4(&local_a8,local_ac);
        puStack_44 = (undefined1 *)local_a8;
        local_48 = (undefined1 *)0x5fe47d;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        local_48 = (undefined1 *)0x5fe48d;
        FUN_00416244(local_bc,iVar4 + -1,0xfc);
        local_48 = local_bc;
        puStack_4c = (undefined1 *)0x5fe4a4;
        FUN_00416478(local_cc,"energia");
        puVar2 = local_48;
        local_48 = (undefined1 *)0x5fe4b6;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),local_cc,puVar2);
        local_48 = (undefined1 *)0x5fe4d7;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4),
                     &local_d4);
        local_48 = (undefined1 *)0x5fe4e8;
        FUN_004051d4(&local_d0,local_d4);
        local_48 = local_d0;
        puStack_4c = (undefined1 *)0x5fe4fd;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        puStack_4c = (undefined1 *)0x5fe50d;
        FUN_00416244(local_e4,iVar4 + -1,0xfc);
        puStack_4c = local_e4;
        puStack_50 = (undefined *)0x5fe524;
        FUN_00416478(local_f4,&DAT_005fe920);
        puVar2 = puStack_4c;
        puStack_4c = (undefined1 *)0x5fe536;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),local_f4,puVar2);
        puStack_4c = *(undefined1 **)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c +
                              *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) *
                              0x130) * 4);
        puStack_50 = &DAT_005fe928;
        uStack_54 = *(undefined4 *)
                     (PTR_DAT_0066b1c8 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 +
                             *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) *
                             0x130) * 4);
        local_58 = 0x5fe5a3;
        FUN_00405330(&local_f8,3);
        local_58 = local_f8;
        local_5c = 0x5fe5b8;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x11c))();
        local_38 = (undefined1 *)0x5fe5c8;
        FUN_00416244(local_108,iVar4 + -1,0xfc);
        local_38 = local_108;
        ppuStack_3c = (undefined1 **)0x5fe5df;
        FUN_00416478(local_118,"habilidades");
        puVar2 = local_38;
        local_38 = (undefined1 *)0x5fe5f1;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x31c),local_118,puVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xc);
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + 0x28 +
                  *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066adc8 * 0x2f8) *
                  0xf8);
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar1 * 0x130) != '\0') {
    DAT_006d4114 = iVar1;
  }
  local_8 = 0;
  iVar1 = DAT_006d4114;
  if (DAT_006d4114 < 1) {
    local_8 = 1;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066adc8 * 0x2f8)
                       * 0xf8 + -4 + local_8 * 4);
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar1 * 0x130) == 0) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar1 * 0x130) != '\0')) break;
      local_8 = local_8 + 1;
      iVar1 = DAT_006d4114;
    } while (local_8 != 0xc);
  }
  DAT_006d4114 = iVar1;
  iVar1 = DAT_006d4114;
  if (DAT_006d4114 < 1) {
    local_8 = 1;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066adc8 * 0x2f8)
                       * 0xf8 + -4 + local_8 * 4);
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar1 * 0x130) != '\0') break;
      local_8 = local_8 + 1;
      iVar1 = DAT_006d4114;
    } while (local_8 != 0xc);
  }
  DAT_006d4114 = iVar1;
  *in_FS_OFFSET = (int)local_34;
  local_2c = L"幟譛工ッ";
  local_30 = 0x5fe78d;
  FUN_00405744(local_118,PTR_DAT_004010f8,2);
  local_30 = 0x5fe798;
  FUN_00404ff0(&local_f8);
  local_30 = 0x5fe7ae;
  FUN_00405744(local_f4,PTR_DAT_004010f8,2);
  local_30 = 0x5fe7b9;
  FUN_004048d4(&local_d4);
  local_30 = 0x5fe7c4;
  FUN_00404ff0(&local_d0);
  local_30 = 0x5fe7da;
  FUN_00405744(local_cc,PTR_DAT_004010f8,2);
  local_30 = 0x5fe7e5;
  FUN_004048d4(&local_ac);
  local_30 = 0x5fe7f0;
  FUN_00404ff0(&local_a8);
  local_30 = 0x5fe806;
  FUN_00405744(local_a4,PTR_DAT_004010f8,2);
  local_30 = 0x5fe80e;
  FUN_004048d4(&local_84);
  local_30 = 0x5fe816;
  FUN_00404ff0(&local_80);
  local_30 = 0x5fe829;
  FUN_00405744(local_7c,PTR_DAT_004010f8,2);
  local_30 = 0x5fe831;
  FUN_00404ff0(&local_5c);
  local_30 = 0x5fe844;
  FUN_00405744(&local_58,PTR_DAT_004010f8,2);
  local_30 = 0x5fe851;
  FUN_004048f8(&local_38,2);
  local_30 = 0x5fe85e;
  FUN_00405008(&local_30,9);
  return;
}

