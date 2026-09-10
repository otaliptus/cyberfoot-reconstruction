// Address: 005b4fac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm41_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_005b5032;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00642c50(0x1ea,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
  FUN_00642c50(0x1eb,&local_c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x2fc),local_c);
  FUN_00642c50(0x1ec,&local_10);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x300),local_10);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005b5039;
  puStack_1c = (undefined1 *)0x5b5031;
  FUN_00405008(&local_10,3,puVar1);
  return;
}

