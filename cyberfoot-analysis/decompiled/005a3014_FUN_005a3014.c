// Address: 005a3014
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3014(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_54;
  int local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  
  iVar6 = 0x19;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = (undefined1 *)0x5a303d;
  FUN_00405658(&stack0xffffffe4,PTR_DAT_004010e8,2);
  local_24 = &LAB_005a3a6d;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = 0x5a3058;
  local_20 = &stack0xfffffffc;
  FUN_00642c50(0x99,&local_20);
  local_2c = 0x5a3063;
  thunk_FUN_0040502c(&stack0xffffffe4,local_20);
  local_2c = 0x5a3070;
  FUN_00642c50(0x9b,&local_24);
  local_2c = 0x5a307b;
  thunk_FUN_0040502c(&stack0xffffffe8,local_24);
  local_2c = 0x5a308b;
  FUN_0043bf7c(*(undefined4 *)(param_1 + 0x37c),0);
  local_10 = -1;
  DAT_006d24d8 = -1;
  _DAT_006d24e8 = -1;
  local_2c = 0x5a30b2;
  iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  DAT_006d24ec = 0;
  local_2c = 0x5a30c8;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar2 < 2) {
    DAT_006d24ec = 0;
    iVar2 = DAT_006d24ec;
  }
  else {
    local_2c = 0x5a30d7;
    FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    local_2c = 0x5a30dc;
    iVar3 = FUN_004032c8();
    iVar7 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
    iVar2 = DAT_006d24ec;
    if (-1 < iVar7 + -1) {
      iVar4 = 0;
      do {
        iVar2 = iVar4;
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8) ==
            *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar3 * 0x294)) break;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + -1;
        iVar2 = DAT_006d24ec;
      } while (iVar7 != 0);
    }
  }
  DAT_006d24ec = iVar2;
  if (*(int *)PTR_DAT_0066ad44 < 0) {
    iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1;
    iVar2 = local_10;
    if (DAT_006d24ec <= iVar3) {
      iVar4 = (iVar3 - DAT_006d24ec) + 1;
      iVar7 = DAT_006d24ec;
      do {
        if ((((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar7 * 0x2f8) == '\0') &&
             (*(int *)PTR_DAT_0066b610 + -5 <
              *(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar7 * 0x2f8))) &&
            (0xb < *(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + iVar7 * 0x2f8))) &&
           (iVar2 = iVar7, iVar7 != DAT_006d24f0)) break;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
        iVar2 = local_10;
      } while (iVar4 != 0);
    }
    local_10 = iVar2;
    iVar2 = 0;
    if (local_10 == -1) {
      while ((local_10 == -1 && (iVar2 < 0xfa))) {
        iVar2 = iVar2 + 1;
        local_2c = 0x5a31d3;
        iVar7 = FUN_004032c8(iVar3 - DAT_006d24ec);
        iVar7 = iVar7 + DAT_006d24ec;
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar7 * 0x2f8) == '\0') &&
           ((0xf < *(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + iVar7 * 0x2f8) && (-1 < iVar7)))) {
          local_10 = iVar7;
        }
      }
    }
    _DAT_006d24e8 = local_10;
    DAT_006d24d8 = local_10;
    iVar2 = 0;
    do {
      if ((*(int *)PTR_DAT_0066ad44 != -1) || (0xf9 < iVar2)) break;
      local_2c = 0x5a3236;
      iVar3 = FUN_004032c8(5);
      iVar2 = iVar2 + 1;
      if ((2 < *(int *)(*(int *)PTR_DAT_0066af70 + DAT_006d24d8 * 0x2f8 + 0x68 + iVar3 * 4)) &&
         (-1 < iVar6 + -1)) {
        iVar4 = 0;
        iVar7 = iVar6;
        do {
          if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar4 * 0x130) == DAT_006d24d8) &&
              (iVar3 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar4 * 0x130))) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar4 * 0x130) != '\0')) {
            *(int *)PTR_DAT_0066ad44 = iVar4;
            break;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    } while( true );
  }
  if ((*(int *)PTR_DAT_0066ad44 == -1) ||
     (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130) == -1)) {
    local_2c = 0x5a32e1;
    FUN_005a2fe4(param_1);
  }
  else {
    DAT_006d24d8 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130);
    local_2c = 0x5a3319;
    FUN_004030d4(&local_48,*(int *)PTR_DAT_0066af70 + DAT_006d24d8 * 0x2f8);
    local_2c = 0x5a3328;
    FUN_004030a4(&local_48,&DAT_005a3a80,0x1a);
    local_2c = 0x5a3333;
    FUN_00405194(&local_2c,&local_48);
    puStack_30 = (undefined1 *)0x5a3343;
    FUN_00642c50(0x172,&local_4c);
    puStack_30 = local_4c;
    puStack_34 = &DAT_005a3a88;
    puStack_38 = (undefined *)0x5a3358;
    FUN_00405330(&local_28,3);
    puStack_38 = (undefined *)0x5a3369;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_28);
    puStack_38 = (undefined *)0x5a3376;
    FUN_00645508(DAT_006d24d8,&local_50);
    if (local_50 != 0) {
      puStack_38 = (undefined *)0x5a3389;
      FUN_00645508(DAT_006d24d8,&local_54);
      puStack_38 = (undefined *)0x5a33a0;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x374) + 0x168),local_54);
    }
    puStack_38 = (undefined *)0x5a33bc;
    FUN_00405194(&local_58,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066ad44 * 0x130);
    puStack_38 = (undefined *)0x5a33cd;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_58);
    puStack_38 = *(undefined **)
                  (PTR_DAT_0066b660 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + *(int *)PTR_DAT_0066ad44 * 0x130) * 4);
    puStack_3c = &DAT_005a3a90;
    uStack_40 = *(undefined4 *)
                 (&stack0xffffffe4 +
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + *(int *)PTR_DAT_0066ad44 * 0x130) * 4);
    puStack_44 = &DAT_005a3a98;
    local_48 = (undefined1 *)0x5a3414;
    FUN_00405330(&local_5c,4);
    local_48 = (undefined1 *)0x5a3425;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_5c);
    local_48 = (undefined1 *)0x5a3441;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066ad44 * 0x130)
                 ,&local_64);
    local_48 = (undefined1 *)0x5a344c;
    FUN_004051d4(&local_60,local_64);
    local_48 = (undefined1 *)0x5a345d;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_60);
    local_4c = &LAB_005a34cd;
    local_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_50;
    local_54 = *(undefined4 *)
                (PTR_DAT_0066b3a4 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + *(int *)PTR_DAT_0066ad44 * 0x130) * 4);
    local_58 = &DAT_005a3aa0;
    local_5c = *(undefined4 *)
                (PTR_DAT_0066b3a4 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + *(int *)PTR_DAT_0066ad44 * 0x130) * 4);
    local_60 = 0x5a34b2;
    local_48 = &stack0xfffffffc;
    FUN_00405330(&local_68,3);
    puStack_38 = (undefined *)0x5a34c3;
    FUN_004e1414(*(undefined4 *)(param_1 + 800),local_68);
    uVar5 = local_2c;
    *in_FS_OFFSET = (int)puStack_34;
    local_2c = 0x5a34f3;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + *(int *)PTR_DAT_0066ad44 * 0x130)
                 ,&local_70,uVar5);
    local_2c = 0x5a34fe;
    FUN_004051d4(&local_6c,local_70);
    local_2c = 0x5a350f;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_6c);
    local_2c = 0x5a352e;
    uVar5 = FUN_00402c38();
    local_2c = 0x5a3536;
    FUN_00651ebc(uVar5,&local_78);
    local_2c = 0x5a3546;
    FUN_004052cc(&local_74,&DAT_005a3aac,local_78);
    local_2c = 0x5a3557;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_74);
    local_2c = 0x5a3568;
    uVar5 = FUN_0064d944(*(undefined4 *)PTR_DAT_0066ad44,1);
    local_2c = 0x5a3570;
    FUN_00409dd8(uVar5,&local_80);
    local_2c = 0x5a357b;
    FUN_004051d4(&local_7c,local_80);
    local_2c = 0x5a358c;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_7c);
    local_2c = 0x5a359a;
    uVar5 = FUN_0064d944(*(undefined4 *)PTR_DAT_0066ad44,0);
    local_2c = 0x5a35a5;
    FUN_00409dd8(uVar5,&local_88);
    local_2c = 0x5a35b3;
    FUN_004051d4(&local_84,local_88);
    local_2c = 0x5a35c4;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_84);
    local_2c = 0x5a35f5;
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066ad44 * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_90);
    local_2c = 0x5a3606;
    FUN_004051d4(&local_8c,local_90);
    local_2c = 0x5a361a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_8c);
    local_2c = 0x5a3639;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + *(int *)PTR_DAT_0066ad44 * 0x130)
                 ,&local_98);
    local_2c = 0x5a3649;
    FUN_00404bac(&local_98,&DAT_005a3ab8);
    local_2c = 0x5a365a;
    FUN_004051d4(&local_94,local_98);
    local_2c = 0x5a366e;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_94);
    local_2c = 0x5a3699;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),
                 *(undefined4 *)
                  (PTR_DAT_0066b294 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + *(int *)PTR_DAT_0066ad44 * 0x130) * 4))
    ;
    local_2c = 0x5a36a9;
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x30c),0);
    local_2c = 0x5a36bd;
    uVar5 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x168));
    local_2c = 0x5a36e5;
    FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                 *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + *(int *)PTR_DAT_0066ad44 * 0x130)
                 ,uVar5);
    iVar6 = *(int *)PTR_DAT_0066ad44;
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar6 * 0x130 + 0xb8 +
                *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar6 * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 2) {
        if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar6 * 0x130) <=
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
          local_2c = 0x5a38bb;
          FUN_00466128(*(undefined4 *)(param_1 + 0x344),0);
        }
        else {
          local_2c = 0x5a3840;
          FUN_00642c50(0x3d,&local_b8);
          local_2c = local_b8;
          puStack_30 = &DAT_005a3ac0;
          puStack_34 = *(undefined **)
                        (*(int *)PTR_DAT_0066b5b8 + 0x6c + *(int *)PTR_DAT_0066ad44 * 0x130);
          puStack_38 = *(undefined **)
                        (*(int *)PTR_DAT_0066b5b8 + 0x68 + *(int *)PTR_DAT_0066ad44 * 0x130);
          puStack_3c = (undefined *)0x5a386e;
          FUN_0040d11c(&local_c0);
          puStack_34 = (undefined *)0x5a387f;
          FUN_004051d4(&local_bc,local_c0);
          puStack_34 = local_bc;
          puStack_38 = (undefined *)0x5a3895;
          FUN_00405330(&local_b4,3);
          local_2c = 0x5a38a9;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_b4);
        }
      }
      else {
        local_2c = 0x5a37ea;
        FUN_00642c50(0x3b,&local_b0);
        local_2c = 0x5a37fe;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_b0);
      }
    }
    else {
      local_2c = 0x5a3722;
      FUN_00642c50(0x3c,&local_a0);
      local_2c = local_a0;
      puStack_30 = &DAT_005a3ac0;
      puStack_34 = (undefined *)0x5a375e;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066ad44 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_a8);
      puStack_34 = (undefined *)0x5a376f;
      FUN_004051d4(&local_a4,local_a8);
      puStack_34 = local_a4;
      puStack_38 = &DAT_005a3ac0;
      puStack_3c = (undefined *)0x5a378a;
      FUN_00642c50(0x3d,&local_ac);
      puStack_3c = local_ac;
      uStack_40 = 0x5a37a0;
      FUN_00405330(&local_9c,5);
      local_2c = 0x5a37b4;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_9c);
    }
    if (*PTR_DAT_0066b668 == '\0') {
      local_2c = 0x5a38e4;
      local_c8 = FUN_00402c38();
      local_2c = 0x5a3901;
      DAT_006d24b4 = FUN_00402c38();
      local_2c = 0x5a3910;
      iVar6 = FUN_004032c8(1000);
      DAT_006d24b4 = DAT_006d24b4 + iVar6;
    }
    else {
      DAT_006d24b4 = *(int *)PTR_DAT_0066b0a4;
    }
    local_2c = 0x5a3934;
    FUN_006468f4(DAT_006d24b4,&local_d0);
    local_2c = 0x5a394a;
    FUN_004052cc(&local_cc,&DAT_005a3aac,local_d0);
    local_2c = 0x5a395e;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x34c),local_cc);
    local_2c = 0x5a3966;
    FUN_005a3ac8(param_1);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a3a77;
  local_24 = (undefined1 *)0x5a3983;
  FUN_00405008(&local_d0,2,puVar1);
  local_24 = (undefined1 *)0x5a398e;
  FUN_004048d4(&local_c0);
  local_24 = (undefined1 *)0x5a399e;
  FUN_00405008(&local_bc,5);
  local_24 = (undefined1 *)0x5a39a9;
  FUN_004048d4(&local_a8);
  local_24 = (undefined1 *)0x5a39b9;
  FUN_00405008(&local_a4,3);
  local_24 = (undefined1 *)0x5a39c4;
  FUN_004048d4(&local_98);
  local_24 = (undefined1 *)0x5a39cf;
  FUN_00404ff0(&local_94);
  local_24 = (undefined1 *)0x5a39da;
  FUN_004048d4(&local_90);
  local_24 = (undefined1 *)0x5a39e5;
  FUN_00404ff0(&local_8c);
  local_24 = (undefined1 *)0x5a39f0;
  FUN_004048d4(&local_88);
  local_24 = (undefined1 *)0x5a39f8;
  FUN_00404ff0(&local_84);
  local_24 = (undefined1 *)0x5a3a00;
  FUN_004048d4(&local_80);
  local_24 = (undefined1 *)0x5a3a0d;
  FUN_00405008(&local_7c,3);
  local_24 = (undefined1 *)0x5a3a15;
  FUN_004048d4(&local_70);
  local_24 = (undefined1 *)0x5a3a22;
  FUN_00405008(&local_6c,2);
  local_24 = (undefined1 *)0x5a3a2a;
  FUN_004048d4(&local_64);
  local_24 = (undefined1 *)0x5a3a37;
  FUN_00405008(&local_60,3);
  local_24 = (undefined1 *)0x5a3a44;
  FUN_004048f8(&local_54,2);
  local_24 = (undefined1 *)0x5a3a4c;
  FUN_00404ff0(&local_4c);
  local_24 = (undefined1 *)0x5a3a59;
  FUN_00405008(&local_2c,4);
  local_24 = (undefined1 *)0x5a3a6c;
  FUN_00405744(&stack0xffffffe4,PTR_DAT_004010e8,2);
  return;
}

