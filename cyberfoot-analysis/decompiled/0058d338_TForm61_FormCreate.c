// Address: 0058d338
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm61_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
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
  puStack_2c = &LAB_0058d4af;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  DAT_006d2220 = FUN_00402c38();
  if (*PTR_DAT_0066b7a4 != '\0') {
    iVar2 = FUN_00402c38();
    iVar3 = FUN_00402c38();
    DAT_006d2220 = iVar2 + iVar3;
    FUN_00651ebc(DAT_006d2220,&local_8);
    FUN_00642c50(0x232,&local_c);
    FUN_00405194(&local_10,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066afb0 * 0x130,
                 *(int *)PTR_DAT_0066b5b8,&DAT_0058d4c4,local_c);
    FUN_00642c50(0x233,&local_14);
    FUN_00405330(PTR_DAT_0066b124,7);
    FUN_00642c50(0x234,&local_18);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x300),local_18);
    FUN_00466128(*(undefined4 *)(param_1 + 0x2fc),1);
    FUN_00642c50(0x235,&local_1c);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x2fc),local_1c);
  }
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),*(undefined4 *)PTR_DAT_0066b124);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0058d4b6;
  puStack_2c = (undefined1 *)0x58d4ae;
  FUN_00405008(&local_1c,6,puVar1);
  return;
}

