// Address: 0065188c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065188c(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 *local_d4;
  undefined4 local_d0;
  undefined4 **local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 **local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 **local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 **local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 **local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 **local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  undefined4 **local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 **local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = (undefined4 **)&stack0xfffffffc;
  iVar3 = 0x1b;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c = &LAB_00651e54;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  if ((int)param_1 < 0) {
    if ((int)param_1 < -99999) {
      if (param_1 + 9999999 < 9000000) {
        local_24 = &local_4c;
        local_28 = (undefined *)0x651ab4;
        local_18 = (undefined4 **)&stack0xfffffffc;
        FUN_00409dd8(param_1,&local_50);
        local_28 = (undefined *)0x651ac6;
        FUN_00404e04(local_50,1,2);
        local_24 = (undefined4 **)local_4c;
        local_28 = &DAT_00651e6c;
        local_2c = &local_54;
        local_30 = (undefined *)0x651adc;
        FUN_00409dd8(param_1,&local_58);
        local_30 = (undefined *)0x651aee;
        FUN_00404e04(local_58,3,3);
        local_2c = local_54;
        local_30 = &DAT_00651e6c;
        local_34 = &local_5c;
        local_38 = (undefined4 *)0x651b04;
        FUN_00409dd8(param_1,&local_60);
        local_38 = (undefined4 *)0x651b16;
        FUN_00404e04(local_60,6,3);
        local_34 = local_5c;
        local_38 = (undefined4 **)0x651b26;
        FUN_00404c64(&local_48,5);
        local_24 = (undefined4 **)0x651b30;
        FUN_004051d4(param_2,local_48);
        goto LAB_00651e36;
      }
      if (param_1 + 999999 < 900000) {
        local_24 = &local_38;
        local_28 = (undefined *)0x651a4d;
        local_18 = (undefined4 **)&stack0xfffffffc;
        FUN_00409dd8(param_1,&local_3c);
        local_28 = (undefined *)0x651a5f;
        FUN_00404e04(local_3c,1,4);
        local_24 = (undefined4 **)local_38;
        local_28 = &DAT_00651e6c;
        local_2c = &local_40;
        local_30 = (undefined *)0x651a75;
        FUN_00409dd8(param_1,&local_44);
        local_30 = (undefined *)0x651a87;
        FUN_00404e04(local_44,5,3);
        local_2c = local_40;
        local_30 = (undefined *)0x651a97;
        FUN_00404c64(&local_34,3);
        local_24 = (undefined4 **)0x651aa1;
        FUN_004051d4(param_2,local_34);
        goto LAB_00651e36;
      }
    }
    else {
      if (param_1 + 99999 < 90000) {
        local_24 = &local_24;
        local_28 = (undefined *)0x6519e6;
        local_18 = (undefined4 **)&stack0xfffffffc;
        FUN_00409dd8(param_1,&local_28);
        puVar1 = local_28;
        local_28 = (undefined *)0x6519f8;
        FUN_00404e04(puVar1,1,3);
        local_28 = &DAT_00651e6c;
        local_2c = &local_2c;
        local_30 = (undefined *)0x651a0e;
        FUN_00409dd8(param_1,&local_30);
        puVar1 = local_30;
        local_30 = (undefined *)0x651a20;
        FUN_00404e04(puVar1,4,3);
        local_30 = (undefined *)0x651a30;
        FUN_00404c64(&local_20,3);
        local_24 = (undefined4 **)0x651a3a;
        FUN_004051d4(param_2,local_20);
        goto LAB_00651e36;
      }
      if (param_1 + 9999 < 9000) {
        local_24 = (undefined4 **)&stack0xfffffff0;
        local_28 = (undefined *)0x65197f;
        local_18 = (undefined4 **)&stack0xfffffffc;
        FUN_00409dd8(param_1,&stack0xffffffec);
        local_28 = (undefined *)0x651991;
        FUN_00404e04(unaff_ESI,1,2);
        local_28 = &DAT_00651e6c;
        local_2c = &local_18;
        local_30 = (undefined *)0x6519a7;
        FUN_00409dd8(param_1,&local_1c);
        local_30 = (undefined *)0x6519b9;
        FUN_00404e04(local_1c,3,3);
        local_2c = local_18;
        local_30 = (undefined *)0x6519c9;
        FUN_00404c64(&local_c,3);
        local_24 = (undefined4 **)0x6519d3;
        FUN_004051d4(param_2,local_c);
        goto LAB_00651e36;
      }
      if (param_1 + 999 < 999) {
        local_24 = (undefined4 **)0x651962;
        local_18 = (undefined4 **)&stack0xfffffffc;
        FUN_00409dd8(param_1,&local_8);
        local_24 = (undefined4 **)0x65196c;
        FUN_004051d4(param_2,local_8);
        goto LAB_00651e36;
      }
    }
  }
  else if ((int)param_1 < 100000) {
    if (param_1 < 1000) {
      local_24 = (undefined4 **)0x651b3f;
      local_18 = (undefined4 **)&stack0xfffffffc;
      FUN_00409dd8(param_1,&local_64);
      local_24 = (undefined4 **)0x651b49;
      FUN_004051d4(param_2,local_64);
      goto LAB_00651e36;
    }
    if (param_1 - 1000 < 9000) {
      local_24 = &local_6c;
      local_28 = (undefined *)0x651b5c;
      local_18 = (undefined4 **)&stack0xfffffffc;
      FUN_00409dd8(param_1,&local_70);
      local_28 = (undefined *)0x651b6e;
      FUN_00404e04(local_70,1,1);
      local_24 = (undefined4 **)local_6c;
      local_28 = &DAT_00651e6c;
      local_2c = &local_74;
      local_30 = (undefined *)0x651b84;
      FUN_00409dd8(param_1,&local_78);
      local_30 = (undefined *)0x651b96;
      FUN_00404e04(local_78,2,3);
      local_2c = local_74;
      local_30 = (undefined *)0x651ba6;
      FUN_00404c64(&local_68,3);
      local_24 = (undefined4 **)0x651bb0;
      FUN_004051d4(param_2,local_68);
      goto LAB_00651e36;
    }
    if (param_1 - 10000 < 90000) {
      local_24 = &local_80;
      local_28 = (undefined *)0x651bc3;
      local_18 = (undefined4 **)&stack0xfffffffc;
      FUN_00409dd8(param_1,&local_84);
      local_28 = (undefined *)0x651bd5;
      FUN_00404e04(local_84,1,2);
      local_24 = (undefined4 **)local_80;
      local_28 = &DAT_00651e6c;
      local_2c = &local_88;
      local_30 = (undefined *)0x651bf1;
      FUN_00409dd8(param_1,&local_8c);
      local_30 = (undefined *)0x651c06;
      FUN_00404e04(local_8c,3,3);
      local_2c = local_88;
      local_30 = (undefined *)0x651c19;
      FUN_00404c64(&local_7c,3);
      local_24 = (undefined4 **)0x651c23;
      FUN_004051d4(param_2,local_7c);
      goto LAB_00651e36;
    }
  }
  else {
    if (param_1 - 100000 < 900000) {
      local_24 = &local_94;
      local_28 = (undefined *)0x651c3c;
      FUN_00409dd8(param_1,&local_98);
      local_28 = (undefined *)0x651c51;
      FUN_00404e04(local_98,1,3);
      local_24 = (undefined4 **)local_94;
      local_28 = &DAT_00651e6c;
      local_2c = &local_9c;
      local_30 = (undefined *)0x651c70;
      FUN_00409dd8(param_1,&local_a0);
      local_30 = (undefined *)0x651c85;
      FUN_00404e04(local_a0,4,3);
      local_2c = local_9c;
      local_30 = (undefined *)0x651c9b;
      FUN_00404c64(&local_90,3);
      local_24 = (undefined4 **)0x651ca8;
      FUN_004051d4(param_2,local_90);
      goto LAB_00651e36;
    }
    if (param_1 - 1000000 < 9000000) {
      local_24 = &local_a8;
      local_28 = (undefined *)0x651cc1;
      local_18 = (undefined4 **)&stack0xfffffffc;
      FUN_00409dd8(param_1,&local_ac);
      local_28 = (undefined *)0x651cd6;
      FUN_00404e04(local_ac,1,1);
      local_24 = (undefined4 **)local_a8;
      local_28 = &DAT_00651e6c;
      local_2c = &local_b0;
      local_30 = (undefined *)0x651cf5;
      FUN_00409dd8(param_1,&local_b4);
      local_30 = (undefined *)0x651d0a;
      FUN_00404e04(local_b4,2,3);
      local_2c = local_b0;
      local_30 = &DAT_00651e6c;
      local_34 = &local_b8;
      local_38 = (undefined4 *)0x651d29;
      FUN_00409dd8(param_1,&local_bc);
      local_38 = (undefined4 *)0x651d3e;
      FUN_00404e04(local_bc,5,3);
      local_34 = local_b8;
      local_38 = (undefined4 **)0x651d54;
      FUN_00404c64(&local_a4,5);
      local_24 = (undefined4 **)0x651d61;
      FUN_004051d4(param_2,local_a4);
      goto LAB_00651e36;
    }
    if (param_1 - 10000000 < 90000000) {
      local_24 = &local_c4;
      local_28 = (undefined *)0x651d7a;
      local_18 = (undefined4 **)&stack0xfffffffc;
      FUN_00409dd8(param_1,&local_c8);
      local_28 = (undefined *)0x651d8f;
      FUN_00404e04(local_c8,1,2);
      local_24 = (undefined4 **)local_c4;
      local_28 = &DAT_00651e6c;
      local_2c = &local_cc;
      local_30 = (undefined *)0x651dae;
      FUN_00409dd8(param_1,&local_d0);
      local_30 = (undefined *)0x651dc3;
      FUN_00404e04(local_d0,3,3);
      local_2c = local_cc;
      local_30 = &DAT_00651e6c;
      local_34 = &local_d4;
      local_38 = (undefined4 *)0x651de2;
      FUN_00409dd8(param_1,&local_d8);
      local_38 = (undefined4 *)0x651df7;
      FUN_00404e04(local_d8,6,3);
      local_34 = local_d4;
      local_38 = (undefined4 **)0x651e0d;
      FUN_00404c64(&local_c0,5);
      local_24 = (undefined4 **)0x651e1a;
      FUN_004051d4(param_2,local_c0);
      goto LAB_00651e36;
    }
  }
  local_24 = (undefined4 **)0x651e29;
  local_18 = (undefined4 **)&stack0xfffffffc;
  FUN_00409dd8(param_1,&local_dc);
  local_24 = (undefined4 **)0x651e36;
  FUN_004051d4(param_2,local_dc);
LAB_00651e36:
  ppuVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = (undefined4 **)&LAB_00651e5b;
  local_1c = (undefined1 *)0x651e53;
  FUN_004048f8(&local_dc,0x36,ppuVar2);
  return;
}

