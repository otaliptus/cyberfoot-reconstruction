// Address: 005e1e80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm86_FormCreate(int param_1)

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
  puStack_1c = &LAB_005e1f58;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x16c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  FUN_00642c50(0x45,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_8);
  FUN_00642c50(0x2c4,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_c);
  FUN_00642c50(0x2c5,&local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_10);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e1f5f;
  puStack_1c = (undefined1 *)0x5e1f57;
  FUN_00405008(&local_10,3,puVar1);
  return;
}

