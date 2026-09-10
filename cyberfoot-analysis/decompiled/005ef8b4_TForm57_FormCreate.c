// Address: 005ef8b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void TForm57_FormCreate(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined1 *local_54;
  wchar_t *local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  undefined1 *local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  wchar_t **local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20 [2];
  int local_c;
  undefined4 local_8;
  
  iVar3 = 0xb;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20[1] = (undefined1 *)0x5ef8db;
  FUN_00405658(local_20,PTR_DAT_004010e8,5);
  local_20[0] = &LAB_005efb9e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x5ef8f6;
  local_20[1] = &stack0xfffffffc;
  FUN_00642c50(0x220,&local_24);
  local_28 = 0x5ef904;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_24);
  local_28 = 0x5ef911;
  FUN_00642c50(0x203,&local_28);
  uVar1 = local_28;
  local_28 = 0x5ef91f;
  FUN_00545088(*(undefined4 *)(param_1 + 0x318),uVar1);
  local_28 = 0x5ef92c;
  FUN_00642c50(0x202,&local_2c);
  local_28 = 0x5ef93a;
  FUN_00545088(*(undefined4 *)(param_1 + 0x31c),local_2c);
  local_28 = 0x5ef947;
  FUN_00642c50(0x223,&local_30);
  local_28 = 0x5ef955;
  FUN_00545088(*(undefined4 *)(param_1 + 800),local_30);
  local_28 = 0x5ef962;
  FUN_00642c50(0x400,&local_34);
  local_28 = 0x5ef970;
  FUN_00545088(*(undefined4 *)(param_1 + 0x324),local_34);
  DAT_006d3f20 = 0;
  local_28 = 0x5ef984;
  FUN_00642c50(0x221,&local_38);
  local_28 = 0x5ef98f;
  thunk_FUN_0040502c(local_20,local_38);
  local_28 = 0x5ef99c;
  FUN_00642c50(0x401,&local_3c);
  local_28 = 0x5ef9a7;
  thunk_FUN_0040502c(local_20 + 1,local_3c);
  local_28 = 0x5ef9b4;
  FUN_00642c50(0x402,&local_40);
  local_28 = 0x5ef9bf;
  thunk_FUN_0040502c(&stack0xffffffe8,local_40);
  local_28 = 0x5ef9cc;
  FUN_00642c50(0x403,&local_44);
  local_28 = 0x5ef9d7;
  thunk_FUN_0040502c(&stack0xffffffec,local_44);
  local_28 = 0x5ef9e4;
  FUN_00642c50(0x402,&local_48);
  local_28 = 0x5ef9ef;
  thunk_FUN_0040502c(&stack0xfffffff0,local_48);
  local_28 = 0x5ef9fb;
  DAT_006d3f1c = FUN_0042fcb8(PTR_PTR_00429378,1);
  local_28 = 0x5efa08;
  FUN_00404ff0(&local_8);
  local_28 = 0x5efa14;
  local_c = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
  if (-1 < local_c) {
    local_c = local_c + 1;
    iVar3 = 0;
    do {
      DAT_006d3f20 = DAT_006d3f20 + 0x14;
      local_28 = local_8;
      local_2c = L"<FONT color=\"#008040\"><IMG src=\"";
      local_30 = &local_50;
      local_34 = 0x5efa4f;
      FUN_005ef714(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3cc + iVar3 * 0x10),1);
      local_34 = 0x5efa5a;
      FUN_004051d4(&local_4c,local_50);
      local_34 = local_4c;
      local_38 = L"\"<IND x=\"22\"> ";
      local_3c = (undefined1 *)0x5efa81;
      FUN_00405194(&local_54,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066b3cc + iVar3 * 0x10) * 0x2f8);
      local_3c = local_54;
      local_40 = L"<IND x=\"172\">";
      local_44 = 
      L"痿梬ﰼ^䖍讨찕暳謀謒\xf254섈Ӣඋ뜘fঋᒍ\xe8d1嚿￡痿梨ﱜ^첡暳謀謀\xf044，蕴棤ﱼ^䖍뫼\f"
      ;
      FUN_00405194(&local_58,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066b3cc + 4 + iVar3 * 0x10) * 0x80);
      local_44 = local_58;
      local_48 = L"<IND x=\"340\">";
      local_4c = 0x5efad5;
      FUN_00405194(&local_5c,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066b3cc + 8 + iVar3 * 0x10) * 0x80);
      local_4c = local_5c;
      local_50 = L"<IND x=\"500\">";
      local_54 = local_20[*(int *)(*(int *)PTR_DAT_0066b3cc + 0xc + iVar3 * 0x10)];
      local_58 = L"</FONT><br>";
      local_5c = 0x5efafe;
      FUN_00405330(&local_8,0xc);
      iVar3 = iVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (200 < DAT_006d3f20) {
    local_28 = 0x5efb28;
    FUN_004659e8(*(undefined4 *)(param_1 + 0x314),DAT_006d3f20 + 0x28);
  }
  local_28 = 0x5efb45;
  FUN_0047eea0(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x20c),
               *(int *)(*(int *)(param_1 + 0x314) + 0x4c) + 2);
  local_28 = 0x5efb53;
  FUN_00545088(*(undefined4 *)(param_1 + 0x314),local_8);
  puVar2 = local_20[1];
  *in_FS_OFFSET = local_24;
  local_20[1] = &LAB_005efba5;
  local_20[0] = (undefined1 *)0x5efb6d;
  FUN_00405008(&local_5c,3,puVar2);
  local_20[0] = (undefined1 *)0x5efb75;
  FUN_004048d4(&local_50);
  local_20[0] = (undefined1 *)0x5efb82;
  FUN_00405008(&local_4c,0xb);
  local_20[0] = (undefined1 *)0x5efb95;
  FUN_00405744(local_20,PTR_DAT_004010e8,5);
  local_20[0] = (undefined1 *)0x5efb9d;
  FUN_00404ff0(&local_8);
  return;
}

