// Address: 005ff6d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm53_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined4 local_1a4;
  undefined1 *local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined1 *local_178;
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 *local_134;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 *local_e4;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 local_74 [16];
  undefined1 local_64 [12];
  undefined4 uStack_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined *puStack_3c;
  undefined1 *puStack_38;
  wchar_t *pwStack_34;
  wchar_t *local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  char local_9;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x38;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_0060023e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar2 = &stack0xfffffffc;
  if (*PTR_DAT_0066af9c == '\0') {
    local_28 = L"周怂贀\xf055ី\x02\xe800㔪\x04痿棰ʌ`䖍뫴\x03";
    FUN_0043b234(*(undefined4 *)(*(int *)PTR_DAT_0066b6a4 + 0x300),0);
    puVar2 = local_1c;
  }
  local_1c = puVar2;
  local_28 = L"<p align=\"center\"><shad>";
  local_2c = 0x5ff726;
  FUN_00642c50(0x217,&stack0xffffffec);
  local_30 = L"</shad></p>";
  pwStack_34 = L"喋说ႆ\x03\xe800夿\xfff4喍룬Ș";
  local_2c = unaff_ESI;
  FUN_00405330(&stack0xfffffff0,3);
  pwStack_34 = L"喍룬Ș";
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),unaff_EBX);
  pwStack_34 = L"喋诬\x86\x03\xe800Ჰ￮喍루\x80";
  FUN_00642c50(0x218,&stack0xffffffe8);
  pwStack_34 = L"喍루\x80";
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),unaff_EDI);
  pwStack_34 = L"喋诨ᲆ\x03謀恀\xe2e8\xf0a2跿\xe455膸";
  FUN_00642c50(0x80,&local_1c);
  pwStack_34 = L"喍룤\x81";
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x60),local_1c);
  pwStack_34 = L"喋诤₆\x03謀恀쓨\xf0a2跿\xe055莸";
  FUN_00642c50(0x81,&local_20);
  pwStack_34 = L"喍룠\x83";
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 800) + 0x60),local_20);
  pwStack_34 = (wchar_t *)0x5ff7ad;
  FUN_00642c50(0x83,&local_24);
  pwStack_34 = L"喍룜\x84";
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x60),local_24);
  pwStack_34 = (wchar_t *)0x5ff7cb;
  FUN_00642c50(0x84,&local_28);
  pwStack_34 = L"蛆ȭ";
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_28);
  *(undefined1 *)(param_1 + 0x22d) = 1;
  iVar4 = *(int *)PTR_DAT_0066b138;
  pwStack_34 = (wchar_t *)0x5ff7fd;
  FUN_004030d4(&local_48,*(int *)PTR_DAT_0066b5b8 + iVar4 * 0x130);
  pwStack_34 = (wchar_t *)0x5ff80c;
  FUN_004030a4(&local_48,&DAT_006002a4,0x17);
  pwStack_34 = (wchar_t *)0x5ff817;
  FUN_00405194(&local_30,&local_48);
  pwStack_34 = local_30;
  puStack_38 = *(undefined1 **)
                (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar4 * 0x130) * 4);
  puStack_3c = &DAT_006002ac;
  puStack_40 = (undefined1 *)0x5ff854;
  FUN_00405194(&local_4c,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066ae7c * 0x2f8);
  puStack_40 = local_4c;
  puStack_44 = (undefined1 *)0x5ff864;
  FUN_00405330(&local_2c,4);
  puStack_44 = (undefined1 *)0x5ff872;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_2c);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + *(int *)PTR_DAT_0066b138 * 0x130) == 0) {
    local_9 = '\0';
    iVar4 = 1;
    do {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066b238 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae7c * 0x2f8)
                       * 0xf8 + 0x3c + iVar4 * 4);
      if ((0 < iVar3) && (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) == 0)) {
        local_9 = '\x01';
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    if (local_9 != '\0') {
      iVar4 = 1;
      do {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066b238 +
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae7c * 0x2f8
                                 ) * 0xf8 + 0x3c + iVar4 * 4);
        if (((0 < iVar3) && (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar3 * 0x130) == '\0')) &&
           (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) == 0)) {
          puStack_44 = (undefined1 *)0x5ff99c;
          (**(code **)(**(int **)(param_1 + 0x314) + 0x1d0))(*(int **)(param_1 + 0x314),1);
          puStack_44 = (undefined1 *)0x5ff9ce;
          FUN_00409dd8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066b238 +
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae7c * 0x2f8
                                 ) * 0xf8 + 0x3c + iVar4 * 4),&local_54);
          puStack_44 = (undefined1 *)0x5ff9d9;
          FUN_004051d4(&local_50,local_54);
          puStack_44 = local_50;
          piVar1 = *(int **)(param_1 + 0x314);
          local_48 = (undefined1 *)0x5ff9ed;
          iVar3 = (**(code **)(*piVar1 + 0x11c))();
          local_48 = (undefined1 *)0x5ff9fa;
          FUN_00416244(local_64,iVar3 + -1,0xfc);
          local_48 = local_64;
          local_4c = (undefined1 *)0x5ffa0b;
          FUN_00416478(local_74,&DAT_006002bc);
          puVar2 = local_48;
          local_48 = (undefined1 *)0x5ffa16;
          FUN_0050e9b8(piVar1,local_74,puVar2);
          local_48 = (undefined1 *)0x5ffa55;
          FUN_00405194(&local_78,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b238 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                        *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4)
                       * 0x130);
          local_48 = local_78;
          piVar1 = *(int **)(param_1 + 0x314);
          local_4c = (undefined1 *)0x5ffa69;
          iVar3 = (**(code **)(*piVar1 + 0x11c))();
          local_4c = (undefined1 *)0x5ffa79;
          FUN_00416244(local_88,iVar3 + -1,0xfc);
          local_4c = local_88;
          local_50 = (undefined1 *)0x5ffa90;
          FUN_00416478(local_98,&DAT_006002c8);
          puVar2 = local_4c;
          local_4c = (undefined1 *)0x5ffa9e;
          FUN_0050e9b8(piVar1,local_98,puVar2);
          local_4c = *(undefined1 **)
                      (PTR_DAT_0066b660 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                              *(int *)(*(int *)PTR_DAT_0066b238 +
                                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                               *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c +
                                      iVar4 * 4) * 0x130) * 4);
          piVar1 = *(int **)(param_1 + 0x314);
          local_50 = (undefined1 *)0x5ffaef;
          iVar3 = (**(code **)(*piVar1 + 0x11c))();
          local_50 = (undefined1 *)0x5ffaff;
          FUN_00416244(local_a8,iVar3 + -1,0xfc);
          local_50 = local_a8;
          local_54 = (undefined1 *)0x5ffb16;
          FUN_00416478(local_b8,"posicaojog");
          puVar2 = local_50;
          local_50 = (undefined1 *)0x5ffb24;
          FUN_0050e9b8(piVar1,local_b8,puVar2);
          local_50 = (undefined1 *)0x5ffb66;
          FUN_00409dd8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                        *(int *)(*(int *)PTR_DAT_0066b238 +
                                 *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                         *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4
                                ) * 0x130),&local_c0);
          local_50 = (undefined1 *)0x5ffb77;
          FUN_004051d4(&local_bc,local_c0);
          local_50 = local_bc;
          piVar1 = *(int **)(param_1 + 0x314);
          local_54 = (undefined1 *)0x5ffb8e;
          iVar3 = (**(code **)(*piVar1 + 0x11c))();
          local_54 = (undefined1 *)0x5ffb9e;
          FUN_00416244(local_d0,iVar3 + -1,0xfc);
          local_54 = local_d0;
          uStack_58 = 0x5ffbb5;
          FUN_00416478(local_e0,"forca");
          puVar2 = local_54;
          local_54 = (undefined1 *)0x5ffbc3;
          FUN_0050e9b8(piVar1,local_e0,puVar2);
          local_54 = (undefined1 *)0x5ffc05;
          FUN_00409dd8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                        *(int *)(*(int *)PTR_DAT_0066b238 +
                                 *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                         *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4
                                ) * 0x130),&local_e8);
          local_54 = (undefined1 *)0x5ffc16;
          FUN_004051d4(&local_e4,local_e8);
          local_54 = local_e4;
          piVar1 = *(int **)(param_1 + 0x314);
          uStack_58 = 0x5ffc2d;
          iVar3 = (**(code **)(*piVar1 + 0x11c))();
          puStack_44 = (undefined1 *)0x5ffc3d;
          FUN_00416244(local_f8,iVar3 + -1,0xfc);
          puStack_44 = local_f8;
          local_48 = (undefined1 *)0x5ffc54;
          FUN_00416478(local_108,"energia");
          puVar2 = puStack_44;
          puStack_44 = (undefined1 *)0x5ffc62;
          FUN_0050e9b8(piVar1,local_108,puVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 8);
      goto LAB_006000e0;
    }
  }
  local_8 = 1;
  do {
    iVar4 = 1;
    do {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066b238 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae7c * 0x2f8)
                       * 0xf8 + 0x3c + iVar4 * 4);
      if (((0 < iVar3) && (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar3 * 0x130) == '\0')) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) == local_8)) {
        puStack_44 = (undefined1 *)0x5ffd17;
        (**(code **)(**(int **)(param_1 + 0x314) + 0x1d0))(*(int **)(param_1 + 0x314),1);
        puStack_44 = (undefined1 *)0x5ffd4c;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b238 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae7c * 0x2f8)
                       * 0xf8 + 0x3c + iVar4 * 4),&local_110);
        puStack_44 = (undefined1 *)0x5ffd5d;
        FUN_004051d4(&local_10c,local_110);
        puStack_44 = (undefined1 *)local_10c;
        piVar1 = *(int **)(param_1 + 0x314);
        local_48 = (undefined1 *)0x5ffd74;
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        local_48 = (undefined1 *)0x5ffd84;
        FUN_00416244(local_120,iVar3 + -1,0xfc);
        local_48 = local_120;
        local_4c = (undefined1 *)0x5ffd9b;
        FUN_00416478(local_130,&DAT_006002bc);
        puVar2 = local_48;
        local_48 = (undefined1 *)0x5ffda9;
        FUN_0050e9b8(piVar1,local_130,puVar2);
        local_48 = (undefined1 *)0x5ffdeb;
        FUN_00405194(&local_134,
                     *(int *)PTR_DAT_0066b5b8 +
                     *(int *)(*(int *)PTR_DAT_0066b238 +
                              *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                      *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4) *
                     0x130);
        local_48 = local_134;
        piVar1 = *(int **)(param_1 + 0x314);
        local_4c = (undefined1 *)0x5ffe02;
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        local_4c = (undefined1 *)0x5ffe12;
        FUN_00416244(local_144,iVar3 + -1,0xfc);
        local_4c = local_144;
        local_50 = (undefined1 *)0x5ffe29;
        FUN_00416478(local_154,&DAT_006002c8);
        puVar2 = local_4c;
        local_4c = (undefined1 *)0x5ffe37;
        FUN_0050e9b8(piVar1,local_154,puVar2);
        local_4c = *(undefined1 **)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                            *(int *)(*(int *)PTR_DAT_0066b238 +
                                     *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                             *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c +
                                    iVar4 * 4) * 0x130) * 4);
        piVar1 = *(int **)(param_1 + 0x314);
        local_50 = (undefined1 *)0x5ffe88;
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        local_50 = (undefined1 *)0x5ffe98;
        FUN_00416244(local_164,iVar3 + -1,0xfc);
        local_50 = local_164;
        local_54 = (undefined1 *)0x5ffeaf;
        FUN_00416478(local_174,"posicaojog");
        puVar2 = local_50;
        local_50 = (undefined1 *)0x5ffebd;
        FUN_0050e9b8(piVar1,local_174,puVar2);
        local_50 = (undefined1 *)0x5ffeff;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                      *(int *)(*(int *)PTR_DAT_0066b238 +
                               *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                       *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4)
                      * 0x130),&local_17c);
        local_50 = (undefined1 *)0x5fff10;
        FUN_004051d4(&local_178,local_17c);
        local_50 = local_178;
        piVar1 = *(int **)(param_1 + 0x314);
        local_54 = (undefined1 *)0x5fff27;
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        local_54 = (undefined1 *)0x5fff37;
        FUN_00416244(local_18c,iVar3 + -1,0xfc);
        local_54 = local_18c;
        uStack_58 = 0x5fff4e;
        FUN_00416478(local_19c,"forca");
        puVar2 = local_54;
        local_54 = (undefined1 *)0x5fff5c;
        FUN_0050e9b8(piVar1,local_19c,puVar2);
        local_54 = (undefined1 *)0x5fff9e;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                      *(int *)(*(int *)PTR_DAT_0066b238 +
                               *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                                       *(int *)PTR_DAT_0066ae7c * 0x2f8) * 0xf8 + 0x3c + iVar4 * 4)
                      * 0x130),&local_1a4);
        local_54 = (undefined1 *)0x5fffaf;
        FUN_004051d4(&local_1a0,local_1a4);
        local_54 = local_1a0;
        piVar1 = *(int **)(param_1 + 0x314);
        uStack_58 = 0x5fffc6;
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        puStack_44 = (undefined1 *)0x5fffd6;
        FUN_00416244(local_1b4,iVar3 + -1,0xfc);
        puStack_44 = local_1b4;
        local_48 = (undefined1 *)0x5fffed;
        FUN_00416478(local_1c4,"energia");
        puVar2 = puStack_44;
        puStack_44 = (undefined1 *)0x5ffffb;
        FUN_0050e9b8(piVar1,local_1c4,puVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    local_8 = local_8 + 1;
  } while (local_8 != 5);
  puStack_44 = (undefined1 *)0x600020;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x314) + 0x11c))();
  if (iVar4 == 0) {
    puStack_44 = (undefined1 *)0x600038;
    FUN_00466238(*(undefined4 *)(param_1 + 0x308),&DAT_0060030c);
    puStack_44 = (undefined1 *)0x600045;
    (**(code **)(**(int **)(param_1 + 0x308) + 100))(*(int **)(param_1 + 0x308),1);
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + *(int *)PTR_DAT_0066ad84 * 0x1bc) ==
        *(int *)PTR_DAT_0066ae7c) {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + *(int *)PTR_DAT_0066ad84 * 0x1bc) = 0;
    }
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + *(int *)PTR_DAT_0066ad84 * 0x1bc) ==
        *(int *)PTR_DAT_0066ae7c) {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + *(int *)PTR_DAT_0066ad84 * 0x1bc) = 0;
    }
  }
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + *(int *)PTR_DAT_0066b138 * 0x130) == 0) &&
     (local_9 == '\0')) {
    puStack_44 = (undefined1 *)0x6000d6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),L"Improvise as goalkeeper:");
  }
  puStack_44 = (undefined1 *)0x6000e0;
  FUN_0055d080("contusao");
LAB_006000e0:
  *in_FS_OFFSET = puStack_40;
  puStack_38 = &LAB_00600248;
  puStack_3c = (undefined *)0x600103;
  FUN_00405744(local_1c4,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x60010e;
  FUN_004048d4(&local_1a4);
  puStack_3c = (undefined *)0x600119;
  FUN_00404ff0(&local_1a0);
  puStack_3c = (undefined *)0x60012f;
  FUN_00405744(local_19c,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x60013a;
  FUN_004048d4(&local_17c);
  puStack_3c = (undefined *)0x600145;
  FUN_00404ff0(&local_178);
  puStack_3c = (undefined *)0x60015b;
  FUN_00405744(local_174,PTR_DAT_004010f8,4);
  puStack_3c = (undefined *)0x600166;
  FUN_00404ff0(&local_134);
  puStack_3c = (undefined *)0x60017c;
  FUN_00405744(local_130,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x600187;
  FUN_004048d4(&local_110);
  puStack_3c = (undefined *)0x600192;
  FUN_00404ff0(&local_10c);
  puStack_3c = (undefined *)0x6001a8;
  FUN_00405744(local_108,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x6001b3;
  FUN_004048d4(&local_e8);
  puStack_3c = (undefined *)0x6001be;
  FUN_00404ff0(&local_e4);
  puStack_3c = (undefined *)0x6001d4;
  FUN_00405744(local_e0,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x6001df;
  FUN_004048d4(&local_c0);
  puStack_3c = (undefined *)0x6001ea;
  FUN_00404ff0(&local_bc);
  puStack_3c = (undefined *)0x600200;
  FUN_00405744(local_b8,PTR_DAT_004010f8,4);
  puStack_3c = (undefined *)0x600208;
  FUN_00404ff0(&local_78);
  puStack_3c = (undefined *)0x60021b;
  FUN_00405744(local_74,PTR_DAT_004010f8,2);
  puStack_3c = (undefined *)0x600223;
  FUN_004048d4(&local_54);
  puStack_3c = (undefined *)0x600230;
  FUN_00405008(&local_50,2);
  puStack_3c = (undefined *)0x60023d;
  FUN_00405008(&local_30,9);
  return;
}

