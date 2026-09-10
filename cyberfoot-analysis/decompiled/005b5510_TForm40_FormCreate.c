// Address: 005b5510
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm40_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_18 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  puStack_1c = &LAB_005b5596;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00642c50(0x5d,&uStack_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),uStack_8);
  FUN_00642c50(0x1e8,&uStack_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),uStack_c);
  FUN_00642c50(0x1e9,&uStack_10);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x304),uStack_10);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005b559d;
  puStack_1c = (undefined1 *)0x5b5595;
  FUN_00405008(&uStack_10,3,puVar1);
  return;
}

