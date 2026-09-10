// Address: 005a263c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm25_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_005a2716;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00642c50(0x182,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_8);
  FUN_00642c50(0x183,&local_c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x308),local_c);
  FUN_00642c50(0x184,&local_10);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x30c),local_10);
  uVar2 = FUN_00402c38();
  FUN_00651ebc(uVar2,&local_1c);
  FUN_004052cc(&local_18,&LAB_005a2728,local_1c);
  FUN_00404b6c(&local_14,local_18);
  FUN_00466238(*(undefined4 *)(param_1 + 0x2fc),local_14);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005a271d;
  puStack_28 = (undefined1 *)0x5a2700;
  FUN_00405008(&local_1c,2,puVar1);
  puStack_28 = (undefined1 *)0x5a2708;
  FUN_004048d4(&local_14);
  puStack_28 = (undefined1 *)0x5a2715;
  FUN_00405008(&local_10,3);
  return;
}

