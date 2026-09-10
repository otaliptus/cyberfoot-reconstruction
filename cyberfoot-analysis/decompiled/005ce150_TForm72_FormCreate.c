// Address: 005ce150
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm72_FormCreate(int param_1)

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
  puStack_20 = &LAB_005ce208;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00404b48(&local_8,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b644 * 0x130);
  FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_8);
  FUN_00642c50(0x2a0,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_c);
  FUN_00642c50(0x2a1,&local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_10);
  FUN_00642c50(0x2a2,&local_14);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_14);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005ce20f;
  puStack_20 = (undefined1 *)0x5ce1ff;
  FUN_00405008(&local_14,3,puVar1);
  puStack_20 = (undefined1 *)0x5ce207;
  FUN_004048d4(&local_8);
  return;
}

