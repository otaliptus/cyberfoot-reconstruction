// Address: 005b9d94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm48_FormCreate(int param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  wchar_t *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &stack0xfffffffc;
  iVar3 = 7;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18 = &LAB_005b9f76;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = L"喋诼₃\x03\xe800⿉\xfff9喍룸\x90";
  FUN_00642c50(0x8e,&local_8);
  local_20 = L"喍룸\x90";
  FUN_0054cd98(*(undefined4 *)(param_1 + 800),local_8);
  local_20 = L"喋诸₃\x03\xe800⾮\xfff9喍룴\x92";
  FUN_00642c50(0x90,&local_c);
  local_20 = L"喍룴\x92";
  FUN_0054cd98(*(undefined4 *)(param_1 + 800),local_c);
  local_20 = L"喋说₃\x03\xe800⾓\xfff9喍룰\x94";
  FUN_00642c50(0x92,&stack0xfffffff0);
  local_20 = L"喍룰\x94";
  FUN_0054cd98(*(undefined4 *)(param_1 + 800),unaff_EBX);
  local_20 = L"喋诰₃\x03\xe800⽸\xfff9喍룬\x96";
  FUN_00642c50(0x94,&local_14);
  local_20 = L"喍룬\x96";
  FUN_0054cd98(*(undefined4 *)(param_1 + 800),local_14);
  local_20 = L"喋诬₃\x03\xe800⽝\xfff9表実贀\xe455޸\x02\xe800踃\b痿棤鿀[䖍뫨\x03";
  FUN_00642c50(0x96,&local_18);
  local_20 = L"表実贀\xe455޸\x02\xe800踃\b痿棤鿀[䖍뫨\x03";
  FUN_0054cd98(*(undefined4 *)(param_1 + 800),local_18);
  local_20 = L"<p align=\"center\"><shad>";
  local_24 = L"痿棤鿀[䖍뫨\x03";
  FUN_00642c50(0x207,&local_20);
  local_24 = local_20;
  local_28 = L"</shad></p>";
  local_2c = 0x5b9e62;
  FUN_00405330(&local_1c,3);
  local_2c = 0x5b9e70;
  FUN_00545088(*(undefined4 *)(param_1 + 0x31c),local_1c);
  local_2c = 0x5b9e7d;
  FUN_00642c50(0x208,&local_24);
  local_2c = 0x5b9e8b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_24);
  local_2c = 0x5b9e98;
  FUN_00642c50(0x209,&local_28);
  local_2c = 0x5b9ea6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_28);
  local_2c = 0x5b9eb3;
  FUN_00642c50(0x20a,&local_2c);
  uVar1 = local_2c;
  local_2c = 0x5b9ec1;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),uVar1);
  local_2c = 0x5b9ece;
  FUN_00642c50(0x20b,&local_30);
  local_2c = 0x5b9edc;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_30);
  local_2c = 0x5b9ee9;
  FUN_00642c50(0x20c,&local_34);
  local_2c = 0x5b9ef7;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_34);
  local_2c = 0x5b9f04;
  FUN_00642c50(0x20d,&local_38);
  local_2c = 0x5b9f12;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x324),local_38);
  local_2c = 0x5b9f2e;
  FUN_00405194(&local_3c,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b3c4 * 0x130);
  local_2c = 0x5b9f3c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_3c);
  local_2c = 0x5b9f5b;
  FUN_0054c10c(*(undefined4 *)(param_1 + 800),
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + *(int *)PTR_DAT_0066b3c4 * 0x130));
  pwVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = L"譛工Ã\x3000";
  local_24 = L"\xe9c3ꊝ￤\xebeb譛工Ã\x3000";
  FUN_00405008(&local_3c,0xe,pwVar2);
  return;
}

