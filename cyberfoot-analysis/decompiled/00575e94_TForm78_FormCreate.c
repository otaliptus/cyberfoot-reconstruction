// Address: 00575e94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm78_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined *puVar3;
  undefined4 unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
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
  undefined *local_a0;
  undefined *local_9c;
  wchar_t *local_98;
  undefined *local_94;
  undefined *local_90;
  wchar_t *local_8c;
  undefined *local_88;
  wchar_t *local_84;
  wchar_t *local_80;
  undefined *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  undefined *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x25;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_00576c25;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined *)0x575ec4;
  FUN_00642c50(0xd6,&local_8);
  local_2c = (undefined *)0x575ed2;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x538),local_8);
  local_2c = (undefined *)0x575edf;
  FUN_00642c50(0xd7,&local_c);
  local_2c = (undefined *)0x575eed;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x53c),local_c);
  local_2c = (undefined *)0x575efa;
  FUN_00642c50(0x1dd,&local_10);
  local_2c = (undefined *)0x575f08;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x54c),local_10);
  local_2c = (undefined *)0x575f15;
  FUN_00642c50(0xd8,&stack0xffffffec);
  local_2c = (undefined *)0x575f23;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x540),unaff_EBX);
  local_2c = (undefined *)0x575f30;
  FUN_00642c50(0xd9,&stack0xffffffe8);
  local_2c = (undefined *)0x575f3e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x544),unaff_ESI);
  local_2c = (undefined *)0x575f4b;
  FUN_00642c50(0x1fd,&stack0xffffffe4);
  local_2c = (undefined *)0x575f59;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x548),unaff_EDI);
  if (7 < *(int *)(PTR_DAT_0066ac78 + 0x88)) {
    local_2c = (undefined *)0x575f74;
    FUN_00466128(*(undefined4 *)(param_1 + 0x534),1);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
    local_2c = (undefined *)0x575f8f;
    FUN_00466128(*(undefined4 *)(param_1 + 0x51c),0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9)) {
    local_2c = (undefined *)0x575fb7;
    FUN_00466128(*(undefined4 *)(param_1 + 0x520),0);
    local_2c = (undefined *)0x575fc4;
    FUN_00466128(*(undefined4 *)(param_1 + 0x524),0);
    local_2c = (undefined *)0x575fd1;
    FUN_00466128(*(undefined4 *)(param_1 + 0x528),0);
    local_2c = (undefined *)0x575fde;
    FUN_00466128(*(undefined4 *)(param_1 + 0x52c),0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9)) {
    iVar4 = 1;
    do {
      local_2c = (undefined *)0x57600f;
      FUN_00466128(*(undefined4 *)(param_1 + 0x538),0);
      local_2c = &DAT_00576c3c;
      local_30 = (undefined1 *)0x57601e;
      FUN_00409dd8(iVar4,&local_24);
      local_30 = local_24;
      local_34 = &DAT_00576c48;
      local_38 = (undefined *)0x576033;
      FUN_00404c64(&local_20,3);
      local_38 = (undefined *)0x576040;
      uVar2 = FUN_00427360(DAT_006d2070,local_20);
      local_38 = (undefined *)0x57604b;
      FUN_00466128(uVar2,0);
      local_38 = &DAT_00576c3c;
      local_3c = (undefined *)0x57605a;
      FUN_00409dd8(iVar4,&local_2c);
      local_3c = local_2c;
      local_40 = &DAT_00576c54;
      local_44 = (undefined *)0x57606f;
      FUN_00404c64(&local_28,3);
      local_44 = (undefined *)0x57607c;
      uVar2 = FUN_00427360(DAT_006d2070,local_28);
      local_44 = (undefined *)0x576087;
      FUN_00466128(uVar2,0);
      local_44 = &DAT_00576c60;
      local_48 = (undefined *)0x576096;
      FUN_00409dd8(iVar4,&local_34);
      local_48 = local_34;
      local_4c = &DAT_00576c48;
      local_50 = (undefined *)0x5760ab;
      FUN_00404c64(&local_30,3);
      local_50 = (undefined *)0x5760b8;
      uVar2 = FUN_00427360(DAT_006d2070,local_30);
      local_50 = (undefined *)0x5760c3;
      FUN_00466128(uVar2,0);
      local_50 = &DAT_00576c60;
      local_54 = (undefined *)0x5760d2;
      FUN_00409dd8(iVar4,&local_3c);
      local_54 = local_3c;
      local_58 = &DAT_00576c54;
      local_5c = (wchar_t *)0x5760e7;
      FUN_00404c64(&local_38,3);
      local_5c = 
      L"\xf88b툳잋⧨\xef00跿쁕욋쿨\xe93c诿쁍䖍뫄汬Wퟨ\xe8ea诿쑕炡洠\xe800ሺ￫\xf88b툳잋\xf7e8\xeeff跿롕욋鷨\xe93c诿롍䖍몼汸Wꗨ\xe8ea诿뱕炡洠\xe800ለ￫\xf88b툳잋엨\xeeff跿끕욋毨\xe93c诿끍䖍몴沄W珨\xe8ea诿둕炡洠\xe800ᇖ￫\xf88b툳잋鏨\xeeff棿沐W喍뢨ǝ"
      ;
      uVar2 = FUN_00427360(DAT_006d2070,local_38);
      local_5c = (wchar_t *)0x5760ff;
      FUN_00466128(uVar2,0);
      local_5c = (wchar_t *)0x576109;
      FUN_00409dd8(iVar4,&local_44);
      local_5c = (wchar_t *)0x576119;
      FUN_00404bf0(&local_40,&DAT_00576c6c,local_44);
      local_5c = 
      L"\xf88b툳잋\xf7e8\xeeff跿롕욋鷨\xe93c诿롍䖍몼汸Wꗨ\xe8ea诿뱕炡洠\xe800ለ￫\xf88b툳잋엨\xeeff跿끕욋毨\xe93c诿끍䖍몴沄W珨\xe8ea诿둕炡洠\xe800ᇖ￫\xf88b툳잋鏨\xeeff棿沐W喍뢨ǝ"
      ;
      uVar2 = FUN_00427360(DAT_006d2070,local_40);
      local_5c = (wchar_t *)0x576131;
      FUN_00466128(uVar2,0);
      local_5c = (wchar_t *)0x57613b;
      FUN_00409dd8(iVar4,&local_4c);
      local_5c = (wchar_t *)0x57614b;
      FUN_00404bf0(&local_48,&DAT_00576c78,local_4c);
      local_5c = 
      L"\xf88b툳잋엨\xeeff跿끕욋毨\xe93c诿끍䖍몴沄W珨\xe8ea诿둕炡洠\xe800ᇖ￫\xf88b툳잋鏨\xeeff棿沐W喍뢨ǝ"
      ;
      uVar2 = FUN_00427360(DAT_006d2070,local_48);
      local_5c = (wchar_t *)0x576163;
      FUN_00466128(uVar2,0);
      local_5c = (wchar_t *)0x57616d;
      FUN_00409dd8(iVar4,&local_54);
      local_5c = (wchar_t *)0x57617d;
      FUN_00404bf0(&local_50,&DAT_00576c84,local_54);
      local_5c = L"\xf88b툳잋鏨\xeeff棿沐W喍뢨ǝ";
      uVar2 = FUN_00427360(DAT_006d2070,local_50);
      local_5c = (wchar_t *)0x576195;
      FUN_00466128(uVar2,0);
      local_5c = L"1 - ";
      local_60 = L"痿梨沠W䖍몬\x03";
      FUN_00642c50(0x1dd,&local_5c);
      local_60 = local_5c;
      local_64 = L" A";
      local_68 = (wchar_t *)0x5761bc;
      FUN_00405330(&local_58,3);
      local_68 = (wchar_t *)0x5761ca;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x45c),local_58);
      local_68 = L"2 - ";
      local_6c = L"痿梠沼W䖍몤\x03";
      FUN_00642c50(0x1dd,&local_64);
      local_6c = local_64;
      local_70 = &DAT_00576cbc;
      local_74 = (wchar_t *)0x5761f1;
      FUN_00405330(&local_60,3);
      local_74 = (wchar_t *)0x5761ff;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x47c),local_60);
      local_74 = L"1 - ";
      local_78 = L"痿梘泈W䖍몜\x03";
      FUN_00642c50(0x1dd,&local_6c);
      local_78 = local_6c;
      local_7c = &DAT_00576cc8;
      local_80 = L"喋讜境\x04\xe800뇠\xfff6碡暬茀袸";
      FUN_00405330(&local_68,3);
      local_80 = L"碡暬茀袸";
      FUN_004e1414(*(undefined4 *)(param_1 + 0x458),local_68);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
        local_80 = (wchar_t *)0x57624f;
        FUN_00642c50(0x2a9,&local_70);
        local_80 = (wchar_t *)0x57625d;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x478),local_70);
      }
      else {
        local_80 = L"2 - ";
        local_84 = L"痿梌泔W䖍몐\x03";
        FUN_00642c50(0x1dd,&local_78);
        local_84 = local_78;
        local_88 = &DAT_00576cd4;
        local_8c = (wchar_t *)0x576286;
        FUN_00405330(&local_74,3);
        local_80 = (wchar_t *)0x576294;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x478),local_74);
      }
      local_80 = L"1 - ";
      local_84 = L"痿梄沼W䖍몈\x03";
      FUN_00642c50(0x1dd,&local_80);
      local_84 = local_80;
      local_88 = &DAT_00576cbc;
      local_8c = L"喋讈咃\x04\xe800녋\xfff6걨坬贀粕\xffff룿ǝ";
      FUN_00405330(&local_7c,3);
      local_8c = L"걨坬贀粕\xffff룿ǝ";
      FUN_004e1414(*(undefined4 *)(param_1 + 0x454),local_7c);
      local_8c = L"2 - ";
      local_90 = (undefined *)0x5762de;
      FUN_00642c50(0x1dd,&local_88);
      local_90 = local_88;
      local_94 = &DAT_00576ca0;
      local_98 = L"喋讀璃\x04\xe800널\xfff6碡暬茀袸";
      FUN_00405330(&local_84,3);
      local_98 = L"碡暬茀袸";
      FUN_004e1414(*(undefined4 *)(param_1 + 0x474),local_84);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
        local_98 = L"1 - ";
        local_9c = (undefined *)0x576327;
        FUN_00642c50(0x1dd,&local_90);
        local_9c = local_90;
        local_a0 = &DAT_00576cd4;
        local_a4 = 0x576342;
        FUN_00405330(&local_8c,3);
        local_98 = L"⇫閍ｰ\xffffꦸ\x02\xe800죫\f開ｰ\xffff莋ѐ";
        FUN_004e1414(*(undefined4 *)(param_1 + 0x450),local_8c);
      }
      else {
        local_98 = L"開ｰ\xffff莋ѐ";
        FUN_00642c50(0x2a9,&local_94);
        local_98 = L"걨坬贀梕\xffff룿ǝ";
        FUN_004e1414(*(undefined4 *)(param_1 + 0x450),local_94);
      }
      local_98 = L"2 - ";
      local_9c = (undefined *)0x57638b;
      FUN_00642c50(0x1dd,&local_9c);
      local_a0 = &DAT_00576cc8;
      local_a4 = 0x5763a6;
      FUN_00405330(&local_98,3);
      local_2c = (undefined *)0x5763b7;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x470),local_98);
      local_2c = (undefined *)0x5763c7;
      FUN_00642c50(0x2a7,&local_a0);
      local_2c = (undefined *)0x5763d7;
      FUN_0040526c(&local_a0,&DAT_00576ce0);
      local_2c = (undefined *)0x5763e8;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4a0),local_a0);
      local_2c = (undefined *)0x5763f8;
      FUN_00642c50(0x2a7,&local_a4);
      local_2c = (undefined *)0x576408;
      FUN_0040526c(&local_a4,&DAT_00576cec);
      local_2c = (undefined *)0x576419;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4c0),local_a4);
      local_2c = (undefined *)0x576429;
      FUN_00642c50(0x2a7,&local_a8);
      local_2c = (undefined *)0x576439;
      FUN_0040526c(&local_a8,&DAT_00576cf8);
      local_2c = (undefined *)0x57644a;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4b4),local_a8);
      local_2c = (undefined *)0x57645a;
      FUN_00642c50(0x2a7,&local_ac);
      local_2c = (undefined *)0x57646a;
      FUN_0040526c(&local_ac,&DAT_00576d04);
      local_2c = (undefined *)0x57647b;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4c4),local_ac);
      local_2c = (undefined *)0x57648b;
      FUN_00642c50(0x2a7,&local_b0);
      local_2c = (undefined *)0x57649b;
      FUN_0040526c(&local_b0,&DAT_00576d10);
      local_2c = (undefined *)0x5764ac;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4e0),local_b0);
      local_2c = (undefined *)0x5764bc;
      FUN_00642c50(0x2a7,&local_b4);
      local_2c = (undefined *)0x5764cc;
      FUN_0040526c(&local_b4,&DAT_00576d1c);
      local_2c = (undefined *)0x5764dd;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4e8),local_b4);
      local_2c = (undefined *)0x5764ed;
      FUN_00642c50(0x2a8,&local_b8);
      local_2c = (undefined *)0x5764fd;
      FUN_0040526c(&local_b8,&DAT_00576d10);
      local_2c = (undefined *)0x57650e;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x4f4),local_b8);
      local_2c = (undefined *)0x57651e;
      FUN_00642c50(0x2a8,&local_bc);
      local_2c = (undefined *)0x57652e;
      FUN_0040526c(&local_bc,&DAT_00576d1c);
      local_2c = (undefined *)0x57653f;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x504),local_bc);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
        local_2c = (undefined *)0x576574;
        FUN_004051d4(&local_c0,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x576585;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x430),local_c0);
        local_2c = (undefined *)0x5765a8;
        FUN_004051d4(&local_c4,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x5765b9;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x43c),local_c4);
        local_2c = (undefined *)0x5765dc;
        FUN_004051d4(&local_c8,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -8));
        local_2c = (undefined *)0x5765ed;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x440),local_c8);
        local_2c = (undefined *)0x576610;
        FUN_004051d4(&local_cc,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -4));
        local_2c = (undefined *)0x576621;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x44c),local_cc);
        local_2c = (undefined *)0x576644;
        FUN_004051d4(&local_d0,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x576655;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4a8),local_d0);
        local_2c = (undefined *)0x576678;
        FUN_004051d4(&local_d4,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x576689;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4ac),local_d4);
        local_2c = (undefined *)0x5766ac;
        FUN_004051d4(&local_d8,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x5766bd;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4d8),local_d8);
        local_2c = (undefined *)0x5766e0;
        FUN_004051d4(&local_dc,
                     *(undefined4 *)
                      (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x5766f1;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4fc),local_dc);
      }
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
        local_2c = (undefined *)0x576726;
        FUN_004051d4(&local_e0,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x576737;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x430),local_e0);
        local_2c = (undefined *)0x57675a;
        FUN_004051d4(&local_e4,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x57676b;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x43c),local_e4);
        local_2c = (undefined *)0x57678e;
        FUN_004051d4(&local_e8,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -8));
        local_2c = (undefined *)0x57679f;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x440),local_e8);
        local_2c = (undefined *)0x5767c2;
        FUN_004051d4(&local_ec,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -4));
        local_2c = (undefined *)0x5767d3;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x44c),local_ec);
        local_2c = (undefined *)0x5767f6;
        FUN_004051d4(&local_f0,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x576807;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4a8),local_f0);
        local_2c = (undefined *)0x57682a;
        FUN_004051d4(&local_f4,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x57683b;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4ac),local_f4);
        local_2c = (undefined *)0x57685e;
        FUN_004051d4(&local_f8,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
        local_2c = (undefined *)0x57686f;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4d8),local_f8);
        local_2c = (undefined *)0x576892;
        FUN_004051d4(&local_fc,
                     *(undefined4 *)
                      (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
        local_2c = (undefined *)0x5768a3;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x4fc),local_fc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 9);
    iVar4 = 1;
    do {
      local_2c = (undefined *)0x5768c0;
      FUN_00409dd8(iVar4 + 8,&local_104);
      local_2c = (undefined *)0x5768d6;
      FUN_00404bf0(&local_100,&DAT_00576c78,local_104);
      local_2c = (undefined *)0x5768e6;
      uVar2 = FUN_00427360(DAT_006d2070,local_100);
      local_2c = (undefined *)0x5768f5;
      FUN_00409dd8(iVar4,&local_108);
      local_2c = (undefined *)0x576902;
      FUN_00466238(uVar2,local_108);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 9);
  }
  local_2c = (undefined *)0x57690f;
  FUN_0057488c(param_1);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x62c) < 3) && (0 < *(int *)(PTR_DAT_0066ac78 + 0x600))) {
    local_2c = (undefined *)0x576960;
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 0x94 + *(int *)(PTR_DAT_0066ac78 + 0x600) * 0x2f8),
                 &local_110);
    local_2c = (undefined *)0x576976;
    FUN_00404bf0(&local_10c,&DAT_00576d2c,local_110);
    local_2c = (undefined *)0x576986;
    uVar2 = FUN_00427360(DAT_006d2070,local_10c);
    local_2c = (undefined *)0x576991;
    TForm78_gr1Click(param_1,uVar2);
  }
  else {
    local_2c = (undefined *)0x576938;
    TForm78_gr1Click(param_1,*(undefined4 *)(param_1 + 0x510));
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) {
    if (3 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x5769b4;
      FUN_005751d0(param_1);
    }
    if (4 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x5769c9;
      FUN_005754a0(param_1);
    }
    if (5 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x5769de;
      FUN_00575834(param_1);
    }
    if (6 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x5769f3;
      FUN_00575b64(param_1);
    }
  }
  else {
    if (3 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x576a0a;
      FUN_005754a0(param_1);
    }
    if (4 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x576a1f;
      FUN_00575834(param_1);
    }
    if (5 < *(int *)(PTR_DAT_0066ac78 + 0x62c)) {
      local_2c = (undefined *)0x576a34;
      FUN_00575b64(param_1);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) {
    iVar4 = 1;
    puVar3 = PTR_PTR_0066ae90;
    do {
      local_2c = (undefined *)0x576a61;
      FUN_00409dd8(iVar4,&local_118);
      local_2c = (undefined *)0x576a77;
      FUN_00404bf0(&local_114,&DAT_00576c84,local_118);
      local_2c = (undefined *)0x576a87;
      uVar2 = FUN_00427360(DAT_006d2070,local_114);
      local_2c = (undefined *)0x576aa2;
      FUN_00466238(uVar2,*(undefined4 *)(puVar3 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x20)
                  );
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 9);
    iVar4 = 1;
    puVar3 = PTR_PTR_0066ae90;
    do {
      local_2c = (undefined *)0x576ac7;
      FUN_00409dd8(iVar4 + 8,&local_120);
      local_2c = (undefined *)0x576add;
      FUN_00404bf0(&local_11c,&DAT_00576c84,local_120);
      local_2c = (undefined *)0x576aed;
      uVar2 = FUN_00427360(DAT_006d2070,local_11c);
      local_2c = (undefined *)0x576b08;
      FUN_00466238(uVar2,*(undefined4 *)(puVar3 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x20)
                  );
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 5);
    iVar4 = 1;
    puVar3 = PTR_PTR_0066ae90;
    do {
      local_2c = (undefined *)0x576b2d;
      FUN_00409dd8(iVar4 + 0xc,&local_128);
      local_2c = (undefined *)0x576b43;
      FUN_00404bf0(&local_124,&DAT_00576c84,local_128);
      local_2c = (undefined *)0x576b53;
      uVar2 = FUN_00427360(DAT_006d2070,local_124);
      local_2c = (undefined *)0x576b6e;
      FUN_00466238(uVar2,*(undefined4 *)(puVar3 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x20)
                  );
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 3);
    iVar4 = 1;
    puVar3 = PTR_PTR_0066ae90;
    do {
      local_2c = (undefined *)0x576b93;
      FUN_00409dd8(iVar4 + 0xe,&local_130);
      local_2c = (undefined *)0x576ba9;
      FUN_00404bf0(&local_12c,&DAT_00576c84,local_130);
      local_2c = (undefined *)0x576bb9;
      uVar2 = FUN_00427360(DAT_006d2070,local_12c);
      local_2c = (undefined *)0x576bd4;
      FUN_00466238(uVar2,*(undefined4 *)(puVar3 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x20)
                  );
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 3);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00576c2c;
  local_24 = (undefined1 *)0x576bfa;
  FUN_004048f8(&local_130,0xd,puVar1);
  local_24 = (undefined1 *)0x576c0a;
  FUN_00405008(&local_fc,0x2a);
  local_24 = (undefined1 *)0x576c17;
  FUN_004048f8(&local_54,0xe);
  local_24 = (undefined1 *)0x576c24;
  FUN_00405008(&stack0xffffffe4,6);
  return;
}

