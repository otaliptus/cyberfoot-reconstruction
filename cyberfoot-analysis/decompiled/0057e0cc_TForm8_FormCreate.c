// Address: 0057e0cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm8_FormCreate(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar6;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 local_9c [44];
  undefined1 local_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 uStack_8;
  
  puVar2 = PTR_DAT_0066af70;
  puVar1 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar5 = 0x29;
  do {
    uStack_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_0057ea52;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x57e107;
  FUN_00642c50(0x2ce,&stack0xfffffff0);
  local_28 = 0x57e115;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x348),unaff_EBX);
  local_28 = 0x57e122;
  FUN_00642c50(0x406,&stack0xffffffec);
  local_28 = 0x57e130;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x378),unaff_ESI);
  local_28 = 0x57e13d;
  FUN_00642c50(0x2d3,&stack0xffffffe8);
  local_28 = 0x57e14b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x34c),unaff_EDI);
  local_28 = 0x57e158;
  FUN_00642c50(0x2cf,&local_1c);
  local_28 = 0x57e166;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x350),local_1c);
  local_28 = 0x57e173;
  FUN_00642c50(0x2d0,&local_20);
  local_28 = 0x57e181;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_20);
  local_28 = 0x57e18e;
  FUN_00642c50(0x2d1,&local_24);
  local_28 = 0x57e19c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x358),local_24);
  local_28 = 0x57e1a9;
  FUN_00642c50(0x2d2,&local_28);
  uVar4 = local_28;
  local_28 = 0x57e1b7;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),uVar4);
  local_28 = 0x57e1c4;
  FUN_00642c50(0x2d6,&local_2c);
  local_28 = 0x57e1d2;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x370),local_2c);
  local_28 = 0x57e1df;
  FUN_00642c50(0x2cf,&local_30);
  local_28 = 0x57e1ed;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_30);
  local_28 = 0x57e1fa;
  FUN_00642c50(0x2d0,&local_34);
  local_28 = 0x57e208;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x368),local_34);
  local_28 = 0x57e215;
  FUN_00642c50(0x2d1,&local_38);
  local_28 = 0x57e223;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_38);
  local_28 = 0x57e230;
  FUN_00642c50(0x2d2,&local_3c);
  local_28 = 0x57e23e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_3c);
  local_28 = 0x57e24b;
  FUN_00642c50(0x2d4,&local_40);
  local_28 = 0x57e259;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_40);
  uStack_8 = uStack_8 & 0xffffff;
  local_28 = 0x57e265;
  FUN_004048d4(&local_c);
  local_28 = 0x57e272;
  FUN_004030d4(local_70,"\t<SHAD><B>");
  local_28 = 0x57e289;
  FUN_004030a4(local_70,*(int *)puVar2 + 0x1d0 + *(int *)(puVar1 + 8) * 0x2f8,0x27);
  local_28 = 0x57e297;
  FUN_004030d4(local_9c,local_70);
  local_28 = 0x57e2a9;
  FUN_004030a4(local_9c,&DAT_0057ea70,0x2a);
  local_28 = 0x57e2b7;
  FUN_00405194(&local_48,local_9c);
  local_28 = local_48;
  local_2c = (undefined1 *)0x57e2f9;
  FUN_00651ebc(*(int *)(*(int *)puVar2 + 0x204 + *(int *)(puVar1 + 8) * 0x2f8) +
               *(int *)(*(int *)puVar2 + 0x208 + *(int *)(puVar1 + 8) * 0x2f8) +
               *(int *)(*(int *)puVar2 + 0x20c + *(int *)(puVar1 + 8) * 0x2f8) +
               *(int *)(*(int *)puVar2 + 0x210 + *(int *)(puVar1 + 8) * 0x2f8),&local_a0);
  local_2c = local_a0;
  local_30 = &DAT_0057ea78;
  local_34 = 0x57e314;
  FUN_00642c50(0x2d5,&local_a4);
  local_34 = local_a4;
  local_38 = 0x57e327;
  FUN_00405330(&local_44,4);
  local_38 = 0x57e335;
  FUN_00545088(*(undefined4 *)(param_1 + 0x340),local_44);
  local_38 = 0x57e34d;
  FUN_00409dd8(*(undefined4 *)(*(int *)puVar2 + 500 + *(int *)(puVar1 + 8) * 0x2f8),&local_b0);
  local_38 = 0x57e363;
  FUN_00404bf0(&local_ac,&DAT_0057ea84,local_b0);
  local_38 = 0x57e374;
  FUN_004051d4(&local_a8,local_ac);
  local_38 = 0x57e385;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_a8);
  local_38 = 0x57e39e;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x324),
               CONCAT22((short)((uint)*(int *)puVar2 >> 0x10),
                        *(undefined2 *)(*(int *)puVar2 + 500 + *(int *)(puVar1 + 8) * 0x2f8)));
  local_38 = 0x57e3b6;
  FUN_00409dd8(*(undefined4 *)(*(int *)puVar2 + 0x1f8 + *(int *)(puVar1 + 8) * 0x2f8),&local_bc);
  local_38 = 0x57e3cc;
  FUN_00404bf0(&local_b8,&DAT_0057ea84,local_bc);
  local_38 = 0x57e3dd;
  FUN_004051d4(&local_b4,local_b8);
  local_38 = 0x57e3ee;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_b4);
  local_38 = 0x57e407;
  FUN_0044d38c(*(undefined4 *)(param_1 + 800),
               CONCAT22((short)((uint)*(int *)puVar2 >> 0x10),
                        *(undefined2 *)(*(int *)puVar2 + 0x1f8 + *(int *)(puVar1 + 8) * 0x2f8)));
  local_38 = 0x57e41f;
  FUN_00409dd8(*(undefined4 *)(*(int *)puVar2 + 0x1fc + *(int *)(puVar1 + 8) * 0x2f8),&local_c8);
  local_38 = 0x57e435;
  FUN_00404bf0(&local_c4,&DAT_0057ea84,local_c8);
  local_38 = 0x57e446;
  FUN_004051d4(&local_c0,local_c4);
  local_38 = 0x57e457;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_c0);
  local_38 = 0x57e470;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x31c),
               CONCAT22((short)((uint)*(int *)puVar2 >> 0x10),
                        *(undefined2 *)(*(int *)puVar2 + 0x1fc + *(int *)(puVar1 + 8) * 0x2f8)));
  local_38 = 0x57e488;
  FUN_00409dd8(*(undefined4 *)(*(int *)puVar2 + 0x200 + *(int *)(puVar1 + 8) * 0x2f8),&local_d4);
  local_38 = 0x57e49e;
  FUN_00404bf0(&local_d0,&DAT_0057ea84,local_d4);
  local_38 = 0x57e4af;
  FUN_004051d4(&local_cc,local_d0);
  local_38 = 0x57e4c0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_cc);
  local_38 = 0x57e4d9;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x328),
               CONCAT22((short)((uint)*(int *)puVar2 >> 0x10),
                        *(undefined2 *)(*(int *)puVar2 + 0x200 + *(int *)(puVar1 + 8) * 0x2f8)));
  local_38 = 0x57e4f9;
  FUN_00409dd8(*(undefined4 *)
                (PTR_DAT_0066b608 +
                *(int *)(*(int *)puVar2 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8) * 0x10),&local_e0);
  local_38 = 0x57e50f;
  FUN_00404bf0(&local_dc,&DAT_0057ea84,local_e0);
  local_38 = 0x57e520;
  FUN_004051d4(&local_d8,local_dc);
  local_38 = 0x57e531;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_d8);
  local_38 = 0x57e552;
  FUN_00409dd8(*(undefined4 *)
                (PTR_DAT_0066b608 +
                *(int *)(*(int *)puVar2 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8) * 0x10 + 4),&local_ec
              );
  local_38 = 0x57e568;
  FUN_00404bf0(&local_e8,&DAT_0057ea84,local_ec);
  local_38 = 0x57e579;
  FUN_004051d4(&local_e4,local_e8);
  local_38 = 0x57e58a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_e4);
  local_38 = 0x57e5ab;
  FUN_00409dd8(*(undefined4 *)
                (PTR_DAT_0066b608 +
                *(int *)(*(int *)puVar2 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8) * 0x10 + 8),&local_f8
              );
  local_38 = 0x57e5c1;
  FUN_00404bf0(&local_f4,&DAT_0057ea84,local_f8);
  local_38 = 0x57e5d2;
  FUN_004051d4(&local_f0,local_f4);
  local_38 = 0x57e5e3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_f0);
  local_38 = 0x57e604;
  FUN_00409dd8(*(undefined4 *)
                (PTR_DAT_0066b608 +
                *(int *)(*(int *)puVar2 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8) * 0x10 + 0xc),
               &local_104);
  local_38 = 0x57e61a;
  FUN_00404bf0(&local_100,&DAT_0057ea84,local_104);
  local_38 = 0x57e62b;
  FUN_004051d4(&local_fc,local_100);
  local_38 = 0x57e63c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_fc);
  if (*(int *)(puVar1 + 0x88) == 4) {
    local_38 = 0x57e65b;
    FUN_00409dd8(*(undefined4 *)PTR_DAT_0066b670,&local_110);
    local_38 = 0x57e671;
    FUN_00404bf0(&local_10c,&DAT_0057ea84,local_110);
    local_38 = 0x57e682;
    FUN_004051d4(&local_108,local_10c);
    local_38 = 0x57e693;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_108);
    local_38 = 0x57e6a6;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b670 + 4),&local_11c);
    local_38 = 0x57e6bc;
    FUN_00404bf0(&local_118,&DAT_0057ea84,local_11c);
    local_38 = 0x57e6cd;
    FUN_004051d4(&local_114,local_118);
    local_38 = 0x57e6de;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_114);
    local_38 = 0x57e6f1;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b670 + 8),&local_128);
    local_38 = 0x57e707;
    FUN_00404bf0(&local_124,&DAT_0057ea84,local_128);
    local_38 = 0x57e718;
    FUN_004051d4(&local_120,local_124);
    local_38 = 0x57e729;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_120);
    local_38 = 0x57e73c;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b670 + 0xc),&local_134);
    local_38 = 0x57e752;
    FUN_00404bf0(&local_130,&DAT_0057ea84,local_134);
    local_38 = 0x57e763;
    FUN_004051d4(&local_12c,local_130);
    local_38 = 0x57e774;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_12c);
  }
  local_38 = 0x57e78c;
  FUN_00651ebc(*(undefined4 *)(*(int *)puVar2 + 0x204 + *(int *)(puVar1 + 8) * 0x2f8),&local_138);
  local_38 = 0x57e79d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_138);
  local_38 = 0x57e7b5;
  FUN_00651ebc(*(undefined4 *)(*(int *)puVar2 + 0x208 + *(int *)(puVar1 + 8) * 0x2f8),&local_13c);
  local_38 = 0x57e7c6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_13c);
  local_38 = 0x57e7de;
  FUN_00651ebc(*(undefined4 *)(*(int *)puVar2 + 0x20c + *(int *)(puVar1 + 8) * 0x2f8),&local_140);
  local_38 = 0x57e7ef;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_140);
  local_38 = 0x57e807;
  FUN_00651ebc(*(undefined4 *)(*(int *)puVar2 + 0x210 + *(int *)(puVar1 + 8) * 0x2f8),&local_144);
  local_38 = 0x57e818;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_144);
  local_38 = 0x57e824;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b108);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b108 + iVar6 * 0x28) == *(int *)(puVar1 + 8)) &&
         (*(char *)(*(int *)PTR_DAT_0066b108 + 0x20 + iVar6 * 0x28) != '\0')) {
        uStack_8 = CONCAT13(1,(undefined3)uStack_8);
        local_38 = *(undefined4 *)(*(int *)PTR_DAT_0066b108 + 0xc + iVar6 * 0x28);
        local_3c = *(undefined4 *)(*(int *)PTR_DAT_0066b108 + 8 + iVar6 * 0x28);
        local_40 = 0x57e870;
        FUN_0040d11c(&local_c);
        break;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (uStack_8._3_1_ != '\0') {
    local_38 = 0x57e88f;
    FUN_00404bf0(&local_14c,&DAT_0057ea90,local_c);
    local_38 = 0x57e8a0;
    FUN_004051d4(&local_148,local_14c);
    local_38 = 0x57e8b1;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_148);
    local_38 = 0x57e8be;
    FUN_00466128(*(undefined4 *)(param_1 + 0x33c),1);
    local_38 = 0x57e8cb;
    FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
  }
  puVar3 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = &LAB_0057ea5c;
  local_30 = (undefined *)0x57e8e3;
  FUN_004048d4(&local_14c,local_34,puVar3);
  local_30 = (undefined *)0x57e8f3;
  FUN_00405008(&local_148,5);
  local_30 = (undefined *)0x57e903;
  FUN_004048f8(&local_134,2);
  local_30 = (undefined *)0x57e90e;
  FUN_00404ff0(&local_12c);
  local_30 = (undefined *)0x57e91e;
  FUN_004048f8(&local_128,2);
  local_30 = (undefined *)0x57e929;
  FUN_00404ff0(&local_120);
  local_30 = (undefined *)0x57e939;
  FUN_004048f8(&local_11c,2);
  local_30 = (undefined *)0x57e944;
  FUN_00404ff0(&local_114);
  local_30 = (undefined *)0x57e954;
  FUN_004048f8(&local_110,2);
  local_30 = (undefined *)0x57e95f;
  FUN_00404ff0(&local_108);
  local_30 = (undefined *)0x57e96f;
  FUN_004048f8(&local_104,2);
  local_30 = (undefined *)0x57e97a;
  FUN_00404ff0(&local_fc);
  local_30 = (undefined *)0x57e98a;
  FUN_004048f8(&local_f8,2);
  local_30 = (undefined *)0x57e995;
  FUN_00404ff0(&local_f0);
  local_30 = (undefined *)0x57e9a5;
  FUN_004048f8(&local_ec,2);
  local_30 = (undefined *)0x57e9b0;
  FUN_00404ff0(&local_e4);
  local_30 = (undefined *)0x57e9c0;
  FUN_004048f8(&local_e0,2);
  local_30 = (undefined *)0x57e9cb;
  FUN_00404ff0(&local_d8);
  local_30 = (undefined *)0x57e9db;
  FUN_004048f8(&local_d4,2);
  local_30 = (undefined *)0x57e9e6;
  FUN_00404ff0(&local_cc);
  local_30 = (undefined *)0x57e9f6;
  FUN_004048f8(&local_c8,2);
  local_30 = (undefined *)0x57ea01;
  FUN_00404ff0(&local_c0);
  local_30 = (undefined *)0x57ea11;
  FUN_004048f8(&local_bc,2);
  local_30 = (undefined *)0x57ea1c;
  FUN_00404ff0(&local_b4);
  local_30 = (undefined *)0x57ea2c;
  FUN_004048f8(&local_b0,2);
  local_30 = (undefined *)0x57ea3c;
  FUN_00405008(&local_a8,3);
  local_30 = (undefined *)0x57ea49;
  FUN_00405008(&local_48,0xf);
  local_30 = (undefined *)0x57ea51;
  FUN_004048d4(&local_c);
  return;
}

