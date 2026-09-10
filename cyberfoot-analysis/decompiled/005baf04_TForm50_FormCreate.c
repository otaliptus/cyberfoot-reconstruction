// Address: 005baf04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm50_FormCreate(int param_1)

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
  puStack_1c = &LAB_005bafd6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00642c50(0x212,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_8);
  FUN_004048d4(&DAT_006d2b34);
  DAT_006d2b38 = 0x1d;
  FUN_00642c50(0x213,&local_c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x31c),local_c);
  FUN_00642c50(0x214,&local_10);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 800),local_10);
  FUN_005bac10(param_1);
  if (*(int *)(PTR_DAT_0066ac78 + 0x13c) < *(int *)PTR_DAT_0066b57c) {
    (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005bafdd;
  puStack_1c = (undefined1 *)0x5bafd5;
  FUN_00405008(&local_10,3,puVar1);
  return;
}

