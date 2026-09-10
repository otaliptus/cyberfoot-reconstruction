// Address: 005c2800
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm62_FormCreate(int param_1)

{
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar1;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_005c28c3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pwVar1 = L"<shad>";
  FUN_00642c50(0x236,&local_c);
  FUN_00405330(&local_8,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x324),local_8);
  FUN_00642c50(0x237,&local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_10);
  FUN_00642c50(0x1eb,&local_14);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x330),local_14);
  FUN_00642c50(0x1ec,&local_18);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x32c),local_18);
  FUN_005c28f8(param_1);
  *in_FS_OFFSET = L"</shad>";
  FUN_00405008(&local_18,5,pwVar1,&LAB_005c28ca);
  return;
}

