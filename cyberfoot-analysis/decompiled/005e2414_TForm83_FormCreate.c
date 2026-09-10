// Address: 005e2414
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm83_FormCreate(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar3;
  wchar_t *local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  int local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined1 *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  int local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0xe;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005e28ba;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = L"<P align=\"center\">";
  local_30 = 0x5e2449;
  FUN_00642c50(0x8e,&local_10);
  local_30 = local_10;
  local_34 = L"</p>";
  local_38 = L"喋诸\xf883\x02\xe800Ⱌ\xfff6챨帨贀\xec55銸";
  FUN_00405330(&local_c,3);
  local_38 = L"챨帨贀\xec55銸";
  FUN_00545088(*(undefined4 *)(param_1 + 0x2f8),local_c);
  local_38 = L"<P align=\"center\">";
  local_3c = 0x5e247e;
  FUN_00642c50(0x92,&stack0xffffffe8);
  local_40 = &DAT_005e2908;
  local_44 = 0x5e2493;
  local_3c = unaff_ESI;
  FUN_00642c50(0x9a,&stack0xffffffe4);
  local_48 = L"</p>";
  local_4c = L"喋诰ࢃ\x03\xe800⯒\xfff6챨帨贀\xe055銸";
  local_44 = unaff_EDI;
  FUN_00405330(&stack0xffffffec,5);
  local_4c = L"챨帨贀\xe055銸";
  FUN_00545088(*(undefined4 *)(param_1 + 0x308),unaff_EBX);
  local_4c = L"<P align=\"center\">";
  local_50 = (undefined1 *)0x5e24c8;
  FUN_00642c50(0x92,&local_24);
  local_50 = local_24;
  local_54 = &DAT_005e2908;
  local_58 = 0x5e24dd;
  FUN_00642c50(0x98,&local_28);
  local_58 = local_28;
  local_5c = L"</p>";
  local_60 = L"喋诤҃\x03\xe800⮈\xfff6챨帨贀푕隸";
  FUN_00405330(&local_20,5);
  local_60 = L"챨帨贀푕隸";
  FUN_00545088(*(undefined4 *)(param_1 + 0x304),local_20);
  local_60 = L"<P align=\"center\">";
  local_64 = 0x5e2512;
  FUN_00642c50(0x96,&local_30);
  local_64 = local_30;
  local_68 = L"</p>";
  local_6c = L"喋诘ᒃ\x03\xe800⭓\xfff6챨帨贀챕邸";
  FUN_00405330(&local_2c,3);
  local_6c = L"챨帨贀챕邸";
  FUN_00545088(*(undefined4 *)(param_1 + 0x314),local_2c);
  local_6c = L"<P align=\"center\">";
  local_70 = L"痿棌⣸^䖍뫐\x03";
  FUN_00642c50(0x90,&local_38);
  local_70 = local_38;
  local_74 = L"</p>";
  local_78 = L"喋诐ᲃ\x03\xe800⬞\xfff6챨帨贀쑕Ᾰ\x04\xe800۔\x06痿棄⣸^䖍뫈\x03";
  FUN_00405330(&local_34,3);
  local_78 = L"챨帨贀쑕Ᾰ\x04\xe800۔\x06痿棄⣸^䖍뫈\x03";
  FUN_00545088(*(undefined4 *)(param_1 + 0x31c),local_34);
  local_78 = L"<P align=\"center\">";
  FUN_00642c50(0x41f,&local_40);
  FUN_00405330(&local_3c,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),local_3c);
  FUN_00642c50(0x420,&local_48);
  FUN_00405330(&local_44,3);
  FUN_00545088(*(undefined4 *)(param_1 + 800),local_44);
  pwVar3 = L"<P align=\"center\">";
  FUN_00642c50(0x3de,&local_50);
  FUN_00405330(&local_4c,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x318),local_4c);
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar1 < 2) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x364),0);
    DAT_006d34d4 = 0;
  }
  else {
    local_8 = FUN_0065208c(0x1d);
    iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar2 * 0x294),&local_5c);
        FUN_00404c64(&local_58,3);
        FUN_004051d4(&local_54,local_58);
        FUN_0040526c(&local_54,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar2 * 0x294) * 4));
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x364),local_54);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_8 < 0) {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x364),0);
      DAT_006d34d4 = 0;
    }
    else {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x364),local_8);
      DAT_006d34d4 = local_8;
    }
  }
  DAT_006d34d8 = FUN_0064dee4(1,*(undefined4 *)
                                 (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d34d4 * 0x294),1,
                              0xffffffff,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x328) + 0xd8))();
  FUN_00642c50(0x23,&local_60);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_60);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d34d4 * 0x294)) {
      FUN_00642c50(0x24,&local_64);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_64);
    }
    if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d34d4 * 0x294)) {
      FUN_00642c50(0x25,&local_68);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_68);
    }
    if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d34d4 * 0x294)) {
      FUN_00642c50(0x26,&local_6c);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_6c);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    FUN_00642c50(0x24,&local_70);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_70);
    FUN_00642c50(0x25,&local_74);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_74);
    FUN_00642c50(0x26,&local_78);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_78);
  }
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x328),0);
  FUN_005e2b18(param_1);
  *in_FS_OFFSET = L"</p>";
  FUN_00405008(&local_78,7,pwVar3,&LAB_005e28c1);
  FUN_004048f8(&local_5c,2);
  FUN_00405008(&local_54,0x13);
  return;
}

