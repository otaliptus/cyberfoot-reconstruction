// Address: 005b18a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b18a4(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int *in_FS_OFFSET;
  int *local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined *local_d4;
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
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined4 local_3c;
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int iVar9;
  int local_10;
  int local_c;
  
  iVar5 = 0x1f;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = (undefined1 *)0x5b18cd;
  FUN_00405658(&local_58,PTR_DAT_004010e8,8);
  local_20 = (undefined1 *)0x5b18e0;
  FUN_00405658(&local_78,PTR_DAT_004010e8,8);
  local_24 = &LAB_005b2849;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (int *)0x5b18fb;
  local_20 = &stack0xfffffffc;
  FUN_00642c50(0x56,&local_7c);
  local_2c = (int *)0x5b1906;
  thunk_FUN_0040502c(&local_58,local_7c);
  local_2c = (int *)0x5b1913;
  FUN_00642c50(0x54,&local_80);
  local_2c = (int *)0x5b191e;
  thunk_FUN_0040502c(local_54,local_80);
  local_2c = (int *)0x5b192b;
  FUN_00642c50(0x4f,&local_84);
  local_2c = (int *)0x5b1936;
  thunk_FUN_0040502c(local_50,local_84);
  local_2c = (int *)0x5b1946;
  FUN_00642c50(0x50,&local_88);
  local_2c = (int *)0x5b1954;
  thunk_FUN_0040502c(local_4c,local_88);
  local_2c = (int *)0x5b1964;
  FUN_00642c50(0x51,&local_8c);
  local_2c = (int *)0x5b1972;
  thunk_FUN_0040502c(local_48,local_8c);
  local_2c = (int *)0x5b1982;
  FUN_00642c50(0x52,&local_90);
  local_2c = (int *)0x5b1990;
  thunk_FUN_0040502c(local_44,local_90);
  local_2c = (int *)0x5b19a0;
  FUN_00642c50(0x53,&local_94);
  local_2c = (int *)0x5b19ae;
  thunk_FUN_0040502c(local_40,local_94);
  local_2c = (int *)0x5b19be;
  FUN_00642c50(0x55,&local_98);
  local_2c = (int *)0x5b19cc;
  thunk_FUN_0040502c(&local_3c,local_98);
  local_2c = (int *)0x5b19dc;
  FUN_00642c50(0x1d5,&local_9c);
  local_2c = (int *)0x5b19ea;
  thunk_FUN_0040502c(&local_78,local_9c);
  local_2c = (int *)0x5b19fa;
  FUN_00642c50(0x1d6,&local_a0);
  local_2c = (int *)0x5b1a08;
  thunk_FUN_0040502c(local_74,local_a0);
  local_2c = (int *)0x5b1a18;
  FUN_00642c50(0x1d7,&local_a4);
  local_2c = (int *)0x5b1a26;
  thunk_FUN_0040502c(local_70,local_a4);
  local_2c = (int *)0x5b1a36;
  FUN_00642c50(0x1d8,&local_a8);
  local_2c = (int *)0x5b1a44;
  thunk_FUN_0040502c(local_6c,local_a8);
  local_2c = (int *)0x5b1a54;
  FUN_00642c50(0x1d9,&local_ac);
  local_2c = (int *)0x5b1a62;
  thunk_FUN_0040502c(local_68,local_ac);
  local_2c = (int *)0x5b1a72;
  FUN_00642c50(0x1da,&local_b0);
  local_2c = (int *)0x5b1a80;
  thunk_FUN_0040502c(local_64,local_b0);
  local_2c = (int *)0x5b1a90;
  FUN_00642c50(0x1db,&local_b4);
  local_2c = (int *)0x5b1a9e;
  thunk_FUN_0040502c(local_60,local_b4);
  local_2c = (int *)0x5b1aae;
  FUN_00642c50(0x1dc,&local_b8);
  local_2c = (int *)0x5b1abc;
  thunk_FUN_0040502c(local_5c,local_b8);
  local_2c = (int *)0x5b1ace;
  DAT_006d25d4 = (int *)FUN_0054b6ac(PTR_PTR_00545e44,1,DAT_006d25cc);
  local_2c = (int *)0x5b1ae2;
  (**(code **)(*DAT_006d25d4 + 0x18))(DAT_006d25d4,"comboboxd1");
  local_2c = (int *)0x5b1af2;
  (**(code **)(*DAT_006d25d4 + 0x68))(DAT_006d25d4,DAT_006d25cc);
  local_2c = (int *)0x5b1b04;
  FUN_0042a5c8(DAT_006d25d4[0x1a],"Tahoma");
  local_2c = (int *)0x5b1b13;
  FUN_0046599c(DAT_006d25d4,0x3c);
  local_2c = (int *)0x5b1b22;
  FUN_00465978(DAT_006d25d4,600);
  local_2c = (int *)0x5b1b31;
  FUN_004659c4(DAT_006d25d4,0x81);
  local_2c = (int *)0x5b1b48;
  FUN_0054b94c(DAT_006d25d4,*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc));
  piVar2 = DAT_006d25d4;
  DAT_006d25d4[0x87] = param_1;
  piVar2[0x86] = (int)TForm36_combopaisChange;
  local_2c = (int *)0x5b1b6a;
  FUN_00466468(DAT_006d25d4);
  local_2c = (int *)0x5b1b7b;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar5 < 2) {
    local_2c = (int *)0x5b1cbd;
    FUN_00466128(DAT_006d25d4,0);
  }
  else {
    local_20 = (undefined1 *)0x0;
    if (*(int *)(PTR_DAT_0066ac78 + 8) < 0) {
      local_2c = (int *)0x5b1bc1;
      local_20 = (undefined1 *)FUN_0065208c(0x1d);
    }
    else {
      local_2c = (int *)0x5b1bb2;
      local_20 = (undefined1 *)
                 FUN_0065208c(*(undefined4 *)
                               (*(int *)PTR_DAT_0066af70 + 0x3c +
                               *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    }
    if (-1 < iVar5 + -1) {
      local_10 = 0;
      do {
        local_2c = (int *)0x5b2884;
        local_30 = (undefined4 *)0x5b1bfe;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_10 * 0x294),&local_c4)
        ;
        local_30 = (undefined4 *)local_c4;
        local_34 = (undefined4 *)&DAT_005b289c;
        local_38 = (int *)0x5b1c19;
        FUN_00404c64(&local_c0,3);
        local_2c = (int *)0x5b1c2a;
        FUN_004051d4(&local_bc,local_c0);
        local_2c = (int *)0x5b1c54;
        FUN_0040526c(&local_bc,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_10 * 0x294) * 4));
        local_2c = (int *)0x5b1c64;
        FUN_0054cd98(DAT_006d25d4,local_bc);
        local_10 = local_10 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (-1 < (int)local_20) {
      local_2c = (int *)0x5b1c80;
      iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
      if ((int)local_20 < iVar5) {
        local_2c = (int *)0x5b1c92;
        FUN_0054c10c(DAT_006d25d4,local_20);
        DAT_006d2658 = local_20;
        goto LAB_005b1cbd;
      }
    }
    local_2c = (int *)0x5b1ca8;
    FUN_0054c10c(DAT_006d25d4,0);
    DAT_006d2658 = (undefined1 *)0x0;
  }
LAB_005b1cbd:
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    local_2c = (int *)0x5b1ce1;
    DAT_006d25d0 = (int *)FUN_004556ac(PTR_PTR_00448e94,1,DAT_006d25cc);
    local_2c = (int *)0x5b1cf5;
    (**(code **)(*DAT_006d25d0 + 0x18))(DAT_006d25d0,"combobox1");
    local_2c = (int *)0x5b1d01;
    FUN_00455a4c(DAT_006d25d0,2);
    local_2c = (int *)0x5b1d11;
    (**(code **)(*DAT_006d25d0 + 0x68))(DAT_006d25d0,DAT_006d25cc);
    local_2c = (int *)0x5b1d20;
    FUN_0046599c(DAT_006d25d0,0x3c);
    local_2c = (int *)0x5b1d2f;
    FUN_00465978(DAT_006d25d0,0x280);
    local_2c = (int *)0x5b1d3e;
    FUN_004659c4(DAT_006d25d0,0x81);
    local_2c = (int *)0x5b1d55;
    FUN_00455914(DAT_006d25d0,*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2f8));
    piVar2 = DAT_006d25d0;
    DAT_006d25d0[0x87] = param_1;
    piVar2[0x86] = (int)TForm36_combo1Change;
    local_2c = (int *)0x5b1d7f;
    (**(code **)(*DAT_006d25d0 + 0x108))(DAT_006d25d0,0x1a);
    local_24 = (undefined1 *)0x0;
    local_10 = 0;
    pcVar6 = PTR_DAT_0066ae98 + 0x52d;
    local_28 = (undefined4 *)PTR_PTR_0066b348;
    do {
      if (*pcVar6 != '\0') {
        local_2c = (int *)0x5b1dba;
        FUN_004553ac(DAT_006d25d0[0xa3]);
        local_2c = (int *)0x5b1dcd;
        local_2c = (int *)FUN_00443198(DAT_006d25d0[0xa3],local_24);
        local_30 = (undefined4 *)*local_28;
        local_34 = (undefined4 *)&DAT_005b28bc;
        local_38 = (int *)*local_2c;
        local_3c = 0x5b1ded;
        FUN_00404c64(&local_c8,3);
        piVar2 = local_38;
        iVar5 = *local_38;
        local_38 = (int *)0x5b1df9;
        (**(code **)(iVar5 + 0x20))(piVar2,local_c8);
        local_38 = (int *)0x5b1e0c;
        piVar2 = (int *)FUN_00443198(DAT_006d25d0[0xa3],local_24);
        local_38 = (int *)0x5b1e14;
        (**(code **)(*piVar2 + 0x28))(piVar2,local_10);
        (&DAT_006d25e8)[(int)local_24] = local_10;
        local_24 = local_24 + 1;
      }
      local_10 = local_10 + 1;
      local_28 = local_28 + 1;
      pcVar6 = pcVar6 + 0x568;
    } while (local_10 != 0x1b);
    local_2c = (int *)0x5b1e4f;
    iVar5 = (**(code **)(*(int *)DAT_006d25d0[0x8f] + 0x14))();
    if (-1 < iVar5 + -1) {
      local_10 = 0;
      local_2c = &DAT_006d25e8;
      do {
        if (*local_2c == DAT_006d25e4) {
          local_2c = (int *)0x5b1e82;
          (**(code **)(*DAT_006d25d0 + 0xd0))(DAT_006d25d0,local_10);
          break;
        }
        local_10 = local_10 + 1;
        local_2c = local_2c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  local_2c = (int *)0x29;
  local_30 = (undefined4 *)0x5b1ea5;
  FUN_004060a8(&DAT_006d2660,PTR_DAT_005ae29c,1);
  local_2c = (int *)0x9;
  local_30 = (undefined4 *)0x5b1ebf;
  FUN_004060a8(&DAT_006d2764,PTR_DAT_005ae2bc,1);
  local_2c = (int *)0x29;
  local_30 = (undefined4 *)0x5b1ed9;
  FUN_004060a8(&DAT_006d2a70,PTR_DAT_005ae31c,1);
  local_2c = (int *)0x4;
  local_30 = (undefined4 *)0x5b1ef3;
  FUN_004060a8(&DAT_006d2a68,PTR_DAT_005ae2dc,1);
  local_2c = (int *)0x2;
  local_30 = (undefined4 *)0x5b1f0d;
  FUN_004060a8(&DAT_006d2a6c,PTR_DAT_005ae2fc,1);
  iVar5 = 0x78;
  iVar9 = 0x14;
  local_10 = 1;
  do {
    iVar8 = 1;
    puVar7 = &DAT_00669fc8;
    do {
      local_2c = (int *)0x5b1f41;
      piVar2 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,DAT_006d25cc);
      *(int **)(DAT_006d2660 + local_10 * 0x28 + -4 + iVar8 * 4) = piVar2;
      local_2c = (int *)&DAT_005b28c8;
      local_30 = (undefined4 *)0x5b1f69;
      FUN_00409dd8(local_10,&local_d0);
      local_30 = (undefined4 *)local_d0;
      local_34 = (undefined4 *)0x5b1f7c;
      FUN_00409dd8(iVar8,&local_d4);
      local_34 = (undefined4 *)local_d4;
      local_38 = (int *)0x5b1f92;
      FUN_00404c64(&local_cc,3);
      local_38 = (int *)0x5b1f9f;
      (**(code **)(*piVar2 + 0x18))(piVar2,local_cc);
      local_38 = (int *)0x5b1fac;
      (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d25cc);
      local_38 = (int *)0x5b1fb5;
      FUN_004663cc(piVar2,0);
      local_38 = (int *)0x5b1fbe;
      FUN_004659c4(piVar2,*puVar7);
      local_38 = (int *)0x5b1fca;
      FUN_004659e8(piVar2,0x12);
      local_38 = (int *)0x5b1fd3;
      (**(code **)(*piVar2 + 0x5c))(piVar2,0);
      local_2c = (int *)0x5b1fdf;
      FUN_00466238(piVar2,&DAT_005b28d8);
      if (iVar8 == 2) {
        iVar9 = *(int *)(*(int *)(DAT_006d2660 + local_10 * 0x28) + 0x40) +
                *(int *)(*(int *)(DAT_006d2660 + local_10 * 0x28) + 0x48) + 0x14;
      }
      else if (2 < iVar8) {
        iVar9 = *(int *)(*(int *)(DAT_006d2660 + local_10 * 0x28 + -8 + iVar8 * 4) + 0x40) +
                *(int *)(*(int *)(DAT_006d2660 + local_10 * 0x28 + -8 + iVar8 * 4) + 0x48) + 1;
      }
      local_2c = (int *)0x5b204f;
      FUN_00465978(piVar2,iVar9);
      local_2c = (int *)0x5b2059;
      FUN_0046599c(piVar2,iVar5);
      local_2c = (int *)0x5b2065;
      FUN_004663a8(piVar2,0xffffff);
      local_2c = (int *)0x5b206f;
      FUN_0042a3a0(piVar2[0x1a],0);
      local_2c = (int *)0x5b2078;
      FUN_00466358(piVar2,1);
      local_2c = (int *)0x5b207f;
      FUN_00466468(piVar2);
      local_2c = (int *)0x5b2088;
      FUN_0045bc28(piVar2,1);
      local_2c = (int *)0x5b2096;
      FUN_0042a66c(piVar2[0x1a],DAT_005b28dc);
      if (iVar8 < 3) {
        local_2c = (int *)0x5b20af;
        FUN_0045bb70(piVar2,0);
      }
      else {
        local_2c = (int *)0x5b20a4;
        FUN_0045bb70(piVar2,2);
      }
      local_2c = (int *)0x5b20b8;
      FUN_0045bbe4(piVar2,0);
      local_2c = (int *)0x5b20c1;
      FUN_00466128(piVar2,1);
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 != 0xb);
    iVar5 = iVar5 + 0x13;
    iVar9 = 0x14;
    if (0x13 < local_10) {
      iVar9 = 0x1a4;
    }
    if (local_10 == 0x14) {
      iVar5 = 0x78;
    }
    local_10 = local_10 + 1;
  } while (local_10 != 0x29);
  local_10 = 1;
  do {
    local_2c = (int *)0x5b2119;
    piVar2 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,DAT_006d25cc);
    *(int **)(DAT_006d2a70 + local_10 * 4) = piVar2;
    local_2c = (int *)0x5b2134;
    FUN_00409dd8(local_10,&local_dc);
    local_2c = (int *)0x5b214a;
    FUN_00404bf0(&local_d8,&DAT_005b28e8,local_dc);
    local_2c = (int *)0x5b2157;
    (**(code **)(*piVar2 + 0x18))(piVar2,local_d8);
    local_2c = (int *)0x5b2164;
    (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d25cc);
    local_2c = (int *)0x5b216d;
    (**(code **)(*piVar2 + 0x5c))(piVar2,0);
    local_2c = (int *)0x5b2176;
    FUN_0043aa78(piVar2,1);
    local_2c = (int *)0x5b2182;
    FUN_004659c4(piVar2,0x12);
    local_2c = (int *)0x5b218e;
    FUN_004659e8(piVar2,0x12);
    local_2c = (int *)0x5b2197;
    FUN_0043aa50(piVar2,1);
    iVar5 = *(int *)(DAT_006d2660 + local_10 * 0x28);
    local_2c = (int *)0x5b21b3;
    FUN_00465978(piVar2,*(int *)(iVar5 + 0x40) + *(int *)(iVar5 + 0x48) + 1);
    local_2c = (int *)0x5b21c5;
    FUN_0046599c(piVar2,*(undefined4 *)(*(int *)(DAT_006d2660 + local_10 * 0x28) + 0x44));
    local_2c = (int *)0x5b21cc;
    FUN_00466468(piVar2);
    local_10 = local_10 + 1;
  } while (local_10 != 0x29);
  iVar5 = 0x1e;
  local_10 = 1;
  local_2c = &DAT_006d2664;
  do {
    iVar9 = 10;
    iVar8 = 1;
    local_30 = &local_58;
    local_34 = &local_78;
    piVar2 = local_2c;
    do {
      local_2c = (int *)0x5b221d;
      piVar3 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,DAT_006d25cc);
      *piVar2 = (int)piVar3;
      local_2c = (int *)&DAT_005b28f8;
      local_30 = (undefined4 *)0x5b2234;
      FUN_00409dd8(local_10,&local_e4);
      local_30 = local_e4;
      local_34 = (undefined4 *)0x5b2247;
      FUN_00409dd8(iVar8,&local_e8);
      local_34 = local_e8;
      local_38 = (int *)0x5b225d;
      FUN_00404c64(&local_e0,3);
      local_38 = (int *)0x5b226a;
      (**(code **)(*piVar3 + 0x18))(piVar3,local_e0);
      local_38 = (int *)0x5b2277;
      (**(code **)(*piVar3 + 0x68))(piVar3,DAT_006d25cc);
      local_38 = (int *)0x5b2280;
      FUN_004663cc(piVar3,0);
      local_38 = (int *)0x5b228d;
      FUN_004659c4(piVar3,DAT_00669fd0);
      local_38 = (int *)0x5b2299;
      FUN_004659e8(piVar3,0x12);
      local_38 = (int *)0x5b22a2;
      (**(code **)(*piVar3 + 0x5c))(piVar3,0);
      local_2c = (int *)0x5b22ae;
      FUN_004e1414(piVar3,*local_30);
      if (1 < iVar8) {
        iVar9 = *(int *)(piVar2[-1] + 0x40) + *(int *)(piVar2[-1] + 0x48) + 1;
      }
      local_2c = (int *)0x5b22ca;
      FUN_00465978(piVar3,iVar9);
      local_2c = (int *)0x5b22d3;
      FUN_0045bb70(piVar3,2);
      local_2c = (int *)0x5b22dd;
      FUN_0046599c(piVar3,iVar5);
      local_2c = (int *)0x5b22ed;
      FUN_004663a8(piVar3,*(undefined4 *)(PTR_DAT_0066b0cc + 4));
      local_2c = (int *)0x5b22fa;
      FUN_0042a3a0(piVar3[0x1a],0xffffff);
      local_2c = (int *)0x5b2301;
      FUN_00466468(piVar3);
      local_2c = (int *)0x5b230a;
      FUN_0045bc28(piVar3,1);
      local_2c = (int *)0x5b2318;
      FUN_0042a66c(piVar3[0x1a],DAT_005b28dc);
      local_2c = (int *)0x5b2321;
      FUN_0045bbe4(piVar3,0);
      local_2c = (int *)0x5b232a;
      FUN_00466128(piVar3,1);
      local_2c = (int *)0x5b2336;
      FUN_004e14d4(piVar3,*local_34);
      local_2c = (int *)0x5b233f;
      FUN_00466358(piVar3,1);
      iVar8 = iVar8 + 1;
      local_34 = local_34 + 1;
      local_30 = local_30 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar8 != 9);
    iVar5 = iVar5 + 10;
    local_10 = local_10 + 1;
    local_2c = (int *)((int)local_2c + 0x20);
  } while (local_10 != 9);
  iVar5 = 0x82;
  local_10 = 1;
  do {
    local_2c = (int *)0x5b2397;
    piVar2 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,DAT_006d25cc);
    *(int **)(DAT_006d2764 + local_10 * 4) = piVar2;
    local_2c = (int *)0x5b23b2;
    FUN_00409dd8(local_10,&local_f0);
    local_2c = (int *)0x5b23c8;
    FUN_00404bf0(&local_ec,"info1",local_f0);
    local_2c = (int *)0x5b23d5;
    (**(code **)(*piVar2 + 0x18))(piVar2,local_ec);
    local_2c = (int *)0x5b23e2;
    (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d25cc);
    local_2c = (int *)0x5b23eb;
    FUN_004663cc(piVar2,0);
    local_2c = (int *)0x5b23f7;
    FUN_004659c4(piVar2,0x78);
    local_2c = (int *)0x5b2403;
    FUN_004659e8(piVar2,0x12);
    local_2c = (int *)0x5b240c;
    (**(code **)(*piVar2 + 0x5c))(piVar2,0);
    local_2c = (int *)0x5b2418;
    FUN_004e1414(piVar2,&DAT_005b2914);
    local_2c = (int *)0x5b2422;
    FUN_00465978(piVar2,10);
    local_2c = (int *)0x5b242c;
    FUN_0046599c(piVar2,iVar5);
    local_2c = (int *)0x5b2438;
    FUN_004663a8(piVar2,0x1fffffff);
    local_2c = (int *)0x5b2445;
    FUN_0042a3a0(piVar2[0x1a],&DAT_006cffff);
    local_2c = (int *)0x5b244c;
    FUN_00466468(piVar2);
    local_2c = (int *)0x5b2459;
    FUN_0042a5c8(piVar2[0x1a],"arial");
    local_2c = (int *)0x5b2462;
    FUN_0045bc28(piVar2,1);
    local_2c = (int *)0x5b2470;
    FUN_0042a66c(piVar2[0x1a],DAT_005b28dc);
    local_2c = (int *)0x5b2479;
    FUN_0045bbe4(piVar2,1);
    local_2c = (int *)0x5b2482;
    FUN_00466128(piVar2,1);
    iVar5 = iVar5 + 0x13;
    local_10 = local_10 + 1;
  } while (local_10 != 9);
  local_c = 1;
  local_2c = &DAT_006d2768;
  do {
    iVar5 = 0x1a;
    local_10 = 1;
    local_38 = local_2c;
    do {
      iVar9 = 10;
      iVar8 = 1;
      piVar2 = local_38;
      do {
        if (local_c == 1) {
          local_2c = (int *)0x5b24e1;
          iVar4 = FUN_0045b76c(PTR_PTR_00457844,1,*(undefined4 *)(param_1 + 0x338));
          *piVar2 = iVar4;
        }
        else if (local_c == 2) {
          local_2c = (int *)0x5b2500;
          iVar4 = FUN_0045b76c(PTR_PTR_00457844,1,*(undefined4 *)(param_1 + 0x348));
          *piVar2 = iVar4;
        }
        else {
          local_2c = (int *)0x5b2519;
          iVar4 = FUN_0045b76c(PTR_PTR_00457844,1,*(undefined4 *)(param_1 + 0x340));
          *piVar2 = iVar4;
        }
        piVar3 = (int *)*piVar2;
        local_2c = (int *)0x5b293c;
        local_30 = (undefined4 *)0x5b2530;
        FUN_00409dd8(local_c,&local_f8);
        local_30 = local_f8;
        local_34 = (undefined4 *)0x5b2544;
        FUN_00409dd8(local_10,&local_fc);
        local_34 = local_fc;
        local_38 = (int *)0x5b2557;
        FUN_00409dd8(iVar8,&local_100);
        local_38 = local_100;
        local_3c = 0x5b256d;
        FUN_00404c64(&local_f4,4);
        local_3c = 0x5b257a;
        (**(code **)(*piVar3 + 0x18))(piVar3,local_f4);
        if (local_c == 1) {
          local_3c = 0x5b2590;
          (**(code **)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(param_1 + 0x338));
        }
        else if (local_c == 2) {
          local_3c = 0x5b25a8;
          (**(code **)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(param_1 + 0x348));
        }
        else {
          local_3c = 0x5b25ba;
          (**(code **)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(param_1 + 0x340));
        }
        local_3c = 0x5b25c3;
        FUN_004663cc(piVar3,0);
        local_3c = 0x5b25cf;
        FUN_004659e8(piVar3,0x12);
        local_3c = 0x5b25d8;
        (**(code **)(*piVar3 + 0x5c))(piVar3,0);
        switch(iVar8) {
        case 1:
          local_3c = 0x5b2617;
          FUN_00466238(piVar3,0);
          break;
        case 2:
          local_3c = 0x5b2622;
          FUN_00466238(piVar3,0);
          break;
        case 3:
          local_3c = 0x5b262d;
          FUN_00466238(piVar3,0);
          break;
        case 4:
          local_3c = 0x5b2638;
          FUN_00466238(piVar3,0);
          break;
        case 5:
          local_3c = 0x5b2646;
          FUN_00466238(piVar3,&DAT_005b294c);
          break;
        case 6:
          local_3c = 0x5b2651;
          FUN_00466238(piVar3,0);
          break;
        case 7:
          local_3c = 0x5b265c;
          FUN_00466238(piVar3,0);
          break;
        case 8:
          local_3c = 0x5b2667;
          FUN_00466238(piVar3,0);
        }
        switch(iVar8) {
        case 1:
          local_3c = 0x5b26a9;
          FUN_004659c4(piVar3,10);
          break;
        case 2:
          local_3c = 0x5b26b7;
          FUN_004659c4(piVar3,0x14);
          break;
        case 3:
          local_3c = 0x5b26c5;
          FUN_004659c4(piVar3,0x73);
          break;
        case 4:
          local_3c = 0x5b26d3;
          FUN_004659c4(piVar3,0x10);
          break;
        case 5:
          local_3c = 0x5b26e1;
          FUN_004659c4(piVar3,8);
          break;
        case 6:
          local_3c = 0x5b26ef;
          FUN_004659c4(piVar3,0x10);
          break;
        case 7:
          local_3c = 0x5b26fd;
          FUN_004659c4(piVar3,0x73);
          break;
        case 8:
          local_3c = 0x5b270b;
          FUN_004659c4(piVar3,0x28);
        }
        local_3c = 0x5b2714;
        (**(code **)(*piVar3 + 0x5c))(piVar3,0);
        if (1 < iVar8) {
          iVar9 = *(int *)(piVar2[-1] + 0x40) + *(int *)(piVar2[-1] + 0x48) + 1;
        }
        if ((iVar8 == 1) || (iVar8 == 3)) {
          local_2c = (int *)0x5b2739;
          FUN_0045bb70(piVar3,1);
        }
        else if (iVar8 == 7) {
          local_2c = (int *)0x5b2749;
          FUN_0045bb70(piVar3,0);
        }
        else {
          local_2c = (int *)0x5b2754;
          FUN_0045bb70(piVar3,2);
        }
        local_2c = (int *)0x5b275e;
        FUN_00465978(piVar3,iVar9);
        local_2c = (int *)0x5b2768;
        FUN_0046599c(piVar3,iVar5);
        local_2c = (int *)0x5b2774;
        FUN_004663a8(piVar3,0x2d5b24);
        local_2c = (int *)0x5b2781;
        FUN_0042a3a0(piVar3[0x1a],0xffffff);
        local_2c = (int *)0x5b278e;
        FUN_0042a5c8(piVar3[0x1a],"Arial");
        local_2c = (int *)0x5b279b;
        FUN_0042a640(piVar3[0x1a],9);
        local_2c = (int *)0x5b27a2;
        FUN_00466468(piVar3);
        local_2c = (int *)0x5b27ab;
        FUN_0045bc28(piVar3,1);
        local_2c = (int *)0x5b27b9;
        FUN_0042a66c(piVar3[0x1a],DAT_005b28dc);
        local_2c = (int *)0x5b27c2;
        FUN_0045bbe4(piVar3,0);
        local_2c = (int *)0x5b27cb;
        FUN_00466128(piVar3,1);
        puVar1 = local_20;
        iVar8 = iVar8 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar8 != 9);
      iVar5 = iVar5 + 0x12;
      local_10 = local_10 + 1;
      local_38 = local_38 + 8;
    } while (local_10 != 9);
    local_c = local_c + 1;
    local_2c = (int *)((int)local_2c + 0x100);
  } while (local_c != 4);
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_005b2850;
  local_24 = (undefined1 *)0x5b2825;
  FUN_004048f8(&local_100,0x11,puVar1);
  local_24 = (undefined1 *)0x5b2835;
  FUN_00405008(&local_bc,0x11);
  local_24 = (undefined1 *)0x5b2848;
  FUN_00405744(&local_78,PTR_DAT_004010e8,0x10);
  return;
}

