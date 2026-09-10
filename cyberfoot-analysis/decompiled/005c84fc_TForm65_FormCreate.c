// Address: 005c84fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm65_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_005c859d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00642c50(0x28d,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  FUN_00642c50(0x28e,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_c);
  FUN_00642c50(0x1eb,&local_10);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x300),local_10);
  FUN_00642c50(0x1ec,&local_14);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x304),local_14);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005c85a4;
  puStack_20 = (undefined1 *)0x5c859c;
  FUN_00405008(&local_14,4,puVar1);
  return;
}

