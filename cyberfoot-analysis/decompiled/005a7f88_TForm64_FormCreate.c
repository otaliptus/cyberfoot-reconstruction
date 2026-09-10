// Address: 005a7f88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm64_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005a80e5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00642c50(0x1c8,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),*(undefined4 *)PTR_DAT_0066b084);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(PTR_DAT_0066b084 + 4));
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),*(undefined4 *)(PTR_DAT_0066b084 + 8));
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),*(undefined4 *)(PTR_DAT_0066b084 + 0xc));
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(PTR_DAT_0066b084 + 0x10));
  FUN_00642c50(0x1c9,&local_c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x328),local_c);
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0xe4));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0xe8));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0xec));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0xf0));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 800) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0xf4));
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005a80ec;
  puStack_18 = (undefined1 *)0x5a80e4;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

