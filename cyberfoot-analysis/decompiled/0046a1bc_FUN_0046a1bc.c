// Address: 0046a1bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a1bc(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  puStack_1c = &LAB_0046a214;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0046a203;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c));
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0046a20a;
  puStack_28 = (undefined1 *)0x46a1fd;
  FUN_00464c30(0,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x46a202;
  FUN_0042eef4();
  return;
}

