// Address: 005d1af4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm80_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_005d1c6f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00584114(*(undefined4 *)(param_1 + 0x304),0);
  FUN_00584114(*(undefined4 *)(param_1 + 0x30c),0);
  FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b4dc + *(int *)PTR_DAT_0066b33c * 0x10 + -0x10))
  ;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
  FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b4dc + *(int *)PTR_DAT_0066b33c * 0x10 + -0xc),&local_10)
  ;
  FUN_004051d4(&local_c,local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_c);
  FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b4dc + *(int *)PTR_DAT_0066b33c * 0x10 + -8),&local_18);
  FUN_004051d4(&local_14,local_18);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_14);
  FUN_00642c50(0x2aa,&local_1c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_1c);
  FUN_00642c50(0x2ab,&local_20);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_20);
  FUN_0058478c(*(undefined4 *)(param_1 + 0x304),
               *(undefined4 *)(PTR_DAT_0066b4dc + *(int *)PTR_DAT_0066b33c * 0x10 + -0xc));
  FUN_0058478c(*(undefined4 *)(param_1 + 0x30c),
               *(undefined4 *)(PTR_DAT_0066b4dc + *(int *)PTR_DAT_0066b33c * 0x10 + -8));
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005d1c76;
  puStack_2c = (undefined1 *)0x5d1c49;
  FUN_00405008(&local_20,2,puVar1);
  puStack_2c = (undefined1 *)0x5d1c51;
  FUN_004048d4(&local_18);
  puStack_2c = (undefined1 *)0x5d1c59;
  FUN_00404ff0(&local_14);
  puStack_2c = (undefined1 *)0x5d1c61;
  FUN_004048d4(&local_10);
  puStack_2c = (undefined1 *)0x5d1c6e;
  FUN_00405008(&local_c,2);
  return;
}

