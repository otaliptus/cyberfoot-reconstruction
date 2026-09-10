// Address: 0059ca68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0059ca68(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 *local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined *local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined4 local_210;
  undefined1 local_20c [16];
  undefined1 local_1fc [16];
  undefined1 *local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc [16];
  undefined1 local_1cc [16];
  undefined1 *local_1bc;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  undefined1 local_14c [16];
  undefined1 local_13c [16];
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54 [11];
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  
  iVar5 = 0x59;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_20 = (undefined1 *)0x59ca99;
  FUN_00405658(local_54,PTR_DAT_004010e8,0xb);
  local_24 = &LAB_0059d97e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_54[10] = (undefined4 *)0x59cab4;
  local_20 = &stack0xfffffffc;
  FUN_00642c50(0xd4,&local_58);
  local_54[10] = (undefined4 *)0x59cabf;
  thunk_FUN_0040502c(local_54,local_58);
  local_54[10] = (undefined4 *)0x59cad6;
  FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8),&local_5c);
  local_54[10] = (undefined4 *)0x59cae1;
  thunk_FUN_0040502c(local_54 + 1,local_5c);
  local_54[10] = (undefined4 *)0x59caf4;
  FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8),&local_60);
  local_54[10] = (undefined4 *)0x59caff;
  thunk_FUN_0040502c(local_54 + 2,local_60);
  local_54[10] = (undefined4 *)0x59cb07;
  FUN_00404ff0(local_54 + 3);
  local_54[10] = (undefined4 *)0x59cb17;
  iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
  if (iVar5 == 1) {
    local_54[10] = (undefined4 *)0x59cb27;
    FUN_00642c50(0xde,&local_64);
    local_54[10] = (undefined4 *)0x59cb32;
    thunk_FUN_0040502c(local_54 + 4,local_64);
    local_54[10] = (undefined4 *)0x59cb3f;
    FUN_00642c50(0xdf,&local_68);
    local_54[10] = (undefined4 *)0x59cb4a;
    thunk_FUN_0040502c(local_54 + 6,local_68);
    local_54[10] = (undefined4 *)0x59cb57;
    FUN_00642c50(0x3e5,&local_6c);
    local_54[10] = (undefined4 *)0x59cb62;
    thunk_FUN_0040502c(local_54 + 10,local_6c);
  }
  else {
    local_54[10] = (undefined4 *)0x59cb71;
    FUN_00642c50(0xdc,&local_70);
    local_54[10] = (undefined4 *)0x59cb7c;
    thunk_FUN_0040502c(local_54 + 4,local_70);
    local_54[10] = (undefined4 *)0x59cb89;
    FUN_00642c50(0xdd,&local_74);
    local_54[10] = (undefined4 *)0x59cb94;
    thunk_FUN_0040502c(local_54 + 6,local_74);
    local_54[10] = (undefined4 *)0x59cba1;
    FUN_00642c50(0x3e4,&local_78);
    local_54[10] = (undefined4 *)0x59cbac;
    thunk_FUN_0040502c(local_54 + 10,local_78);
  }
  local_54[10] = (undefined4 *)0x59cbb9;
  FUN_00642c50(0xe0,&local_7c);
  local_54[10] = (undefined4 *)0x59cbc4;
  thunk_FUN_0040502c(local_54 + 5,local_7c);
  local_54[10] = (undefined4 *)0x59cbd1;
  FUN_00642c50(0x146,&local_80);
  local_54[10] = (undefined4 *)0x59cbdc;
  thunk_FUN_0040502c(local_54 + 7,local_80);
  local_54[10] = (undefined4 *)0x59cbe9;
  FUN_00642c50(0x147,&local_84);
  local_54[10] = (undefined4 *)0x59cbf4;
  thunk_FUN_0040502c(local_54 + 8,local_84);
  local_54[10] = (undefined4 *)0x59cc04;
  FUN_00642c50(0x148,&local_88);
  local_54[10] = (undefined4 *)0x59cc12;
  thunk_FUN_0040502c(local_54 + 9,local_88);
  iVar5 = 6;
  piVar3 = &local_28;
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_54[10] = (undefined4 *)0x59cc30;
  local_10 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae84);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) == param_2) &&
         (*(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) == 0)) {
        local_28 = local_28 + 1;
        local_54[10] = (undefined4 *)0x59cc7f;
        (**(code **)(**(int **)(param_1 + 800) + 0x1d0))(*(int **)(param_1 + 800),1);
        local_54[10] = (undefined4 *)0x59cc9d;
        FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066ae84 + 0x10 + iVar5 * 0x18) +
                     *(int *)PTR_DAT_0066b7c4,&local_90);
        local_54[10] = (undefined4 *)0x59ccae;
        FUN_004051d4(&local_8c,local_90);
        local_54[10] = (undefined4 *)local_8c;
        local_54[9] = (undefined4 *)0x59ccc3;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[9] = (undefined4 *)0x59ccd3;
        FUN_00416244(local_a0,iVar4 + -1,0xfc);
        local_54[9] = (undefined4 *)local_a0;
        local_54[8] = (undefined4 *)0x59ccea;
        FUN_00416478(local_b0,"nxano");
        puVar1 = local_54[9];
        local_54[9] = (undefined4 *)0x59ccfc;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_b0,puVar1);
        local_54[9] = (undefined4 *)0x59cd22;
        FUN_00405194(&local_b4,
                     *(int *)PTR_DAT_0066af70 + 0x1d0 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) * 0x2f8);
        local_54[9] = (undefined4 *)local_b4;
        local_54[8] = (undefined4 *)0x59cd37;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[8] = (undefined4 *)0x59cd47;
        FUN_00416244(local_c4,iVar4 + -1,0xfc);
        local_54[8] = (undefined4 *)local_c4;
        local_54[7] = (undefined4 *)0x59cd5e;
        FUN_00416478(local_d4,"nxestadio");
        puVar1 = local_54[8];
        local_54[8] = (undefined4 *)0x59cd70;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_d4,puVar1);
        local_54[8] = (undefined4 *)0x59cd92;
        FUN_00405194(&local_d8,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) * 0x2f8);
        local_54[8] = (undefined4 *)local_d8;
        local_54[7] = (undefined4 *)0x59cda7;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[7] = (undefined4 *)0x59cdb7;
        FUN_00416244(local_e8,iVar4 + -1,0xfc);
        local_54[7] = (undefined4 *)local_e8;
        local_54[6] = (undefined4 *)0x59cdce;
        FUN_00416478(local_f8,&DAT_0059d9bc);
        puVar1 = local_54[7];
        local_54[7] = (undefined4 *)0x59cde0;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_f8,puVar1);
        local_54[7] = (undefined4 *)0x59cdf6;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18),&local_104);
        local_54[7] = (undefined4 *)local_104;
        local_54[6] = (undefined4 *)&DAT_0059d9cc;
        local_54[5] = (undefined4 *)0x59ce17;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18),&local_108);
        local_54[5] = (undefined4 *)local_108;
        local_54[4] = (undefined4 *)0x59ce2d;
        FUN_00404c64(&local_100,3);
        local_54[4] = (undefined4 *)0x59ce3e;
        FUN_004051d4(&local_fc,local_100);
        local_54[4] = (undefined4 *)local_fc;
        local_54[3] = (undefined4 *)0x59ce53;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[3] = (undefined4 *)0x59ce63;
        FUN_00416244(local_118,iVar4 + -1,0xfc);
        local_54[3] = (undefined4 *)local_118;
        local_54[2] = (undefined4 *)0x59ce7a;
        FUN_00416478(local_128,&DAT_0059d9d8);
        puVar1 = local_54[3];
        local_54[3] = (undefined4 *)0x59ce8c;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_128,puVar1);
        local_54[3] = (undefined4 *)0x59ceaf;
        FUN_00405194(&local_12c,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) * 0x2f8);
        local_54[3] = (undefined4 *)local_12c;
        local_54[2] = (undefined4 *)0x59cec4;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[2] = (undefined4 *)0x59ced4;
        FUN_00416244(local_13c,iVar4 + -1,0xfc);
        local_54[2] = (undefined4 *)local_13c;
        local_54[1] = (undefined4 *)0x59ceeb;
        FUN_00416478(local_14c,&DAT_0059d9e4);
        puVar1 = local_54[2];
        local_54[2] = (undefined4 *)0x59cefd;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_14c,puVar1);
        local_54[2] = local_54[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18)];
        local_54[1] = (undefined4 *)0x59cf1b;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[10] = (undefined4 *)0x59cf2b;
        FUN_00416244(local_15c,iVar4 + -1,0xfc);
        local_54[10] = (undefined4 *)local_15c;
        local_54[9] = (undefined4 *)0x59cf42;
        FUN_00416478(local_16c,"nxcamp");
        puVar1 = local_54[10];
        local_54[10] = (undefined4 *)0x59cf54;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_16c,puVar1);
        if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
          unaff_ESI = unaff_ESI + *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
        }
        if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
          unaff_EBX = unaff_EBX + *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
        }
        if (*(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18) <
            *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
          local_20 = local_20 + 1;
        }
        else if (*(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18) <
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
          unaff_EDI = unaff_EDI + 1;
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      else if ((*(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) == 0) &&
              (*(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) == param_2)) {
        local_28 = local_28 + 1;
        local_54[10] = (undefined4 *)0x59d02c;
        (**(code **)(**(int **)(param_1 + 800) + 0x1d0))(*(int **)(param_1 + 800),1);
        local_54[10] = (undefined4 *)0x59d04a;
        FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066ae84 + 0x10 + iVar5 * 0x18) +
                     *(int *)PTR_DAT_0066b7c4,&local_174);
        local_54[10] = (undefined4 *)0x59d05b;
        FUN_004051d4(&local_170,local_174);
        local_54[10] = (undefined4 *)local_170;
        local_54[9] = (undefined4 *)0x59d070;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[9] = (undefined4 *)0x59d080;
        FUN_00416244(local_184,iVar4 + -1,0xfc);
        local_54[9] = (undefined4 *)local_184;
        local_54[8] = (undefined4 *)0x59d097;
        FUN_00416478(local_194,"nxano");
        puVar1 = local_54[9];
        local_54[9] = (undefined4 *)0x59d0a9;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_194,puVar1);
        local_54[9] = (undefined4 *)0x59d0cf;
        FUN_00405194(&local_198,
                     *(int *)PTR_DAT_0066af70 + 0x1d0 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) * 0x2f8);
        local_54[9] = (undefined4 *)local_198;
        local_54[8] = (undefined4 *)0x59d0e4;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[8] = (undefined4 *)0x59d0f4;
        FUN_00416244(local_1a8,iVar4 + -1,0xfc);
        local_54[8] = (undefined4 *)local_1a8;
        local_54[7] = (undefined4 *)0x59d10b;
        FUN_00416478(local_1b8,"nxestadio");
        puVar1 = local_54[8];
        local_54[8] = (undefined4 *)0x59d11d;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_1b8,puVar1);
        local_54[8] = (undefined4 *)0x59d13f;
        FUN_00405194(&local_1bc,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) * 0x2f8);
        local_54[8] = (undefined4 *)local_1bc;
        local_54[7] = (undefined4 *)0x59d154;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[7] = (undefined4 *)0x59d164;
        FUN_00416244(local_1cc,iVar4 + -1,0xfc);
        local_54[7] = (undefined4 *)local_1cc;
        local_54[6] = (undefined4 *)0x59d17b;
        FUN_00416478(local_1dc,&DAT_0059d9bc);
        puVar1 = local_54[7];
        local_54[7] = (undefined4 *)0x59d18d;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_1dc,puVar1);
        local_54[7] = (undefined4 *)0x59d1a3;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18),&local_1e8);
        local_54[7] = (undefined4 *)local_1e8;
        local_54[6] = (undefined4 *)&DAT_0059d9cc;
        local_54[5] = (undefined4 *)0x59d1c4;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18),&local_1ec);
        local_54[5] = (undefined4 *)local_1ec;
        local_54[4] = (undefined4 *)0x59d1da;
        FUN_00404c64(&local_1e4,3);
        local_54[4] = (undefined4 *)0x59d1eb;
        FUN_004051d4(&local_1e0,local_1e4);
        local_54[4] = (undefined4 *)local_1e0;
        local_54[3] = (undefined4 *)0x59d200;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[3] = (undefined4 *)0x59d210;
        FUN_00416244(local_1fc,iVar4 + -1,0xfc);
        local_54[3] = (undefined4 *)local_1fc;
        local_54[2] = (undefined4 *)0x59d227;
        FUN_00416478(local_20c,&DAT_0059d9d8);
        puVar1 = local_54[3];
        local_54[3] = (undefined4 *)0x59d239;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_20c,puVar1);
        local_54[3] = (undefined4 *)0x59d25c;
        FUN_00405194(&local_210,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) * 0x2f8);
        local_54[3] = (undefined4 *)local_210;
        local_54[2] = (undefined4 *)0x59d271;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[2] = (undefined4 *)0x59d281;
        FUN_00416244(local_220,iVar4 + -1,0xfc);
        local_54[2] = (undefined4 *)local_220;
        local_54[1] = (undefined4 *)0x59d298;
        FUN_00416478(local_230,&DAT_0059d9e4);
        puVar1 = local_54[2];
        local_54[2] = (undefined4 *)0x59d2aa;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_230,puVar1);
        local_54[2] = local_54[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18)];
        local_54[1] = (undefined4 *)0x59d2c8;
        iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x11c))();
        local_54[10] = (undefined4 *)0x59d2d8;
        FUN_00416244(local_240,iVar4 + -1,0xfc);
        local_54[10] = (undefined4 *)local_240;
        local_54[9] = (undefined4 *)0x59d2ef;
        FUN_00416478(local_250,"nxcamp");
        puVar1 = local_54[10];
        local_54[10] = (undefined4 *)0x59d301;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 800),local_250,puVar1);
        if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
          unaff_ESI = unaff_ESI + *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
        }
        if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
          unaff_EBX = unaff_EBX + *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
        }
        if (*(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18) <
            *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
          unaff_EDI = unaff_EDI + 1;
        }
        else if (*(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18) <
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
          local_20 = local_20 + 1;
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (local_28 == 1) {
    local_54[10] = (undefined4 *)0x59d3ad;
    FUN_00409dd8(1,&local_258);
    local_54[10] = (undefined4 *)0x59d3bd;
    FUN_00404bac(&local_258,&DAT_0059da04);
    local_54[10] = (undefined4 *)0x59d3ce;
    FUN_004051d4(&local_254,local_258);
    local_54[10] = &local_254;
    local_54[9] = (undefined4 *)0x59d3e5;
    FUN_00642c50(0x4b,&local_25c);
    puVar1 = local_54[10];
    local_54[10] = (undefined4 *)0x59d3f1;
    FUN_0040526c(puVar1,local_25c);
    local_54[10] = (undefined4 *)0x59d402;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_254);
  }
  else {
    local_54[10] = (undefined4 *)0x59d411;
    FUN_00409dd8(local_28,&local_264);
    local_54[10] = (undefined4 *)0x59d421;
    FUN_00404bac(&local_264,&DAT_0059da04);
    local_54[10] = (undefined4 *)0x59d432;
    FUN_004051d4(&local_260,local_264);
    local_54[10] = &local_260;
    local_54[9] = (undefined4 *)0x59d449;
    FUN_00642c50(0x4c,&local_268);
    puVar1 = local_54[10];
    local_54[10] = (undefined4 *)0x59d455;
    FUN_0040526c(puVar1,local_268);
    local_54[10] = (undefined4 *)0x59d466;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_260);
  }
  if (local_28 < 1) {
    local_54[10] = (undefined4 *)0x59d6b7;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),0);
    local_54[10] = (undefined4 *)0x59d6c4;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x314),0);
  }
  else {
    local_54[10] = (undefined4 *)0x59d47e;
    FUN_00409dd8(local_20,&local_274);
    local_54[10] = (undefined4 *)0x59d48f;
    FUN_004051d4(&local_270,local_274);
    local_54[10] = (undefined4 *)local_270;
    local_54[9] = (undefined4 *)0x59d4a5;
    FUN_00642c50(0x4f,&local_278);
    local_54[9] = (undefined4 *)local_278;
    local_54[8] = (undefined4 *)&LAB_0059da0c;
    local_54[7] = (undefined4 *)0x59d4be;
    FUN_00409dd8(unaff_EDI,&local_280);
    local_54[7] = (undefined4 *)0x59d4cf;
    FUN_004051d4(&local_27c,local_280);
    local_54[7] = (undefined4 *)local_27c;
    local_54[6] = (undefined4 *)0x59d4e5;
    FUN_00642c50(0x51,&local_284);
    local_54[6] = (undefined4 *)local_284;
    local_54[5] = (undefined4 *)&LAB_0059da0c;
    local_54[4] = (undefined4 *)0x59d4fe;
    FUN_00409dd8(unaff_ESI,&local_28c);
    local_54[4] = (undefined4 *)0x59d50f;
    FUN_004051d4(&local_288,local_28c);
    local_54[4] = (undefined4 *)local_288;
    local_54[3] = (undefined4 *)0x59d525;
    FUN_00642c50(0x52,&local_290);
    local_54[3] = (undefined4 *)local_290;
    local_54[2] = (undefined4 *)&LAB_0059da0c;
    local_54[1] = (undefined4 *)0x59d53e;
    FUN_00409dd8(unaff_EBX,&local_298);
    local_54[1] = (undefined4 *)0x59d54f;
    FUN_004051d4(&local_294,local_298);
    local_54[1] = (undefined4 *)local_294;
    local_54[0] = (undefined4 *)0x59d565;
    FUN_00642c50(0x53,&local_29c);
    local_54[0] = local_29c;
    local_58 = 0x59d57b;
    FUN_00405330(&local_26c,0xb);
    local_58 = 0x59d58c;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_26c);
    local_58 = 0x59d59a;
    FUN_00409dd8(unaff_EDI,&local_2a8);
    local_58 = 0x59d5ab;
    FUN_004051d4(&local_2a4,local_2a8);
    local_58 = local_2a4;
    local_5c = 0x59d5c1;
    FUN_00642c50(0x4f,&local_2ac);
    local_5c = local_2ac;
    local_60 = &LAB_0059da0c;
    local_64 = 0x59d5da;
    FUN_00409dd8(local_20,&local_2b4);
    local_64 = 0x59d5eb;
    FUN_004051d4(&local_2b0,local_2b4);
    local_64 = local_2b0;
    local_68 = 0x59d601;
    FUN_00642c50(0x51,&local_2b8);
    local_68 = local_2b8;
    local_6c = &LAB_0059da0c;
    local_70 = 0x59d61a;
    FUN_00409dd8(unaff_EBX,&local_2c0);
    local_70 = 0x59d62b;
    FUN_004051d4(&local_2bc,local_2c0);
    local_70 = local_2bc;
    local_74 = 0x59d641;
    FUN_00642c50(0x52,&local_2c4);
    local_74 = local_2c4;
    local_78 = &LAB_0059da0c;
    local_7c = 0x59d65a;
    FUN_00409dd8(unaff_ESI,&local_2cc);
    local_7c = 0x59d66b;
    FUN_004051d4(&local_2c8,local_2cc);
    local_7c = local_2c8;
    local_80 = 0x59d681;
    FUN_00642c50(0x52,&local_2d0);
    local_80 = local_2d0;
    local_84 = 0x59d697;
    FUN_00405330(&local_2a0,0xb);
    local_54[10] = (undefined4 *)0x59d6a8;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_2a0);
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0059d988;
  local_24 = (undefined1 *)0x59d6dc;
  FUN_00404ff0(&local_2d0,local_28,puVar2);
  local_24 = (undefined1 *)0x59d6e7;
  FUN_004048d4(&local_2cc);
  local_24 = (undefined1 *)0x59d6f7;
  FUN_00405008(&local_2c8,2);
  local_24 = (undefined1 *)0x59d702;
  FUN_004048d4(&local_2c0);
  local_24 = (undefined1 *)0x59d712;
  FUN_00405008(&local_2bc,2);
  local_24 = (undefined1 *)0x59d71d;
  FUN_004048d4(&local_2b4);
  local_24 = (undefined1 *)0x59d72d;
  FUN_00405008(&local_2b0,2);
  local_24 = (undefined1 *)0x59d738;
  FUN_004048d4(&local_2a8);
  local_24 = (undefined1 *)0x59d748;
  FUN_00405008(&local_2a4,3);
  local_24 = (undefined1 *)0x59d753;
  FUN_004048d4(&local_298);
  local_24 = (undefined1 *)0x59d763;
  FUN_00405008(&local_294,2);
  local_24 = (undefined1 *)0x59d76e;
  FUN_004048d4(&local_28c);
  local_24 = (undefined1 *)0x59d77e;
  FUN_00405008(&local_288,2);
  local_24 = (undefined1 *)0x59d789;
  FUN_004048d4(&local_280);
  local_24 = (undefined1 *)0x59d799;
  FUN_00405008(&local_27c,2);
  local_24 = (undefined1 *)0x59d7a4;
  FUN_004048d4(&local_274);
  local_24 = (undefined1 *)0x59d7b4;
  FUN_00405008(&local_270,3);
  local_24 = (undefined1 *)0x59d7bf;
  FUN_004048d4(&local_264);
  local_24 = (undefined1 *)0x59d7cf;
  FUN_00405008(&local_260,2);
  local_24 = (undefined1 *)0x59d7da;
  FUN_004048d4(&local_258);
  local_24 = (undefined1 *)0x59d7e5;
  FUN_00404ff0(&local_254);
  local_24 = (undefined1 *)0x59d7fb;
  FUN_00405744(local_250,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x59d806;
  FUN_00404ff0(&local_210);
  local_24 = (undefined1 *)0x59d81c;
  FUN_00405744(local_20c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d82c;
  FUN_004048f8(&local_1ec,3);
  local_24 = (undefined1 *)0x59d837;
  FUN_00404ff0(&local_1e0);
  local_24 = (undefined1 *)0x59d84d;
  FUN_00405744(local_1dc,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d858;
  FUN_00404ff0(&local_1bc);
  local_24 = (undefined1 *)0x59d86e;
  FUN_00405744(local_1b8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d879;
  FUN_00404ff0(&local_198);
  local_24 = (undefined1 *)0x59d88f;
  FUN_00405744(local_194,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d89a;
  FUN_004048d4(&local_174);
  local_24 = (undefined1 *)0x59d8a5;
  FUN_00404ff0(&local_170);
  local_24 = (undefined1 *)0x59d8bb;
  FUN_00405744(local_16c,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x59d8c6;
  FUN_00404ff0(&local_12c);
  local_24 = (undefined1 *)0x59d8dc;
  FUN_00405744(local_128,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d8ec;
  FUN_004048f8(&local_108,3);
  local_24 = (undefined1 *)0x59d8f7;
  FUN_00404ff0(&local_fc);
  local_24 = (undefined1 *)0x59d90d;
  FUN_00405744(local_f8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d918;
  FUN_00404ff0(&local_d8);
  local_24 = (undefined1 *)0x59d92e;
  FUN_00405744(local_d4,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d939;
  FUN_00404ff0(&local_b4);
  local_24 = (undefined1 *)0x59d94f;
  FUN_00405744(local_b0,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59d95a;
  FUN_004048d4(&local_90);
  local_24 = (undefined1 *)0x59d96a;
  FUN_00405008(&local_8c,0xe);
  local_24 = (undefined1 *)0x59d97d;
  FUN_00405744(local_54,PTR_DAT_004010e8,0xb);
  return;
}

