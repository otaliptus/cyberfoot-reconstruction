// Address: 005a1e54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a1e54(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005a1ea9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_8);
  uVar2 = FUN_00409ff8(local_8);
  FUN_005a1eb4(param_1,uVar2);
  FUN_00483bc4(DAT_006d2490);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005a1eb0;
  puStack_14 = (undefined1 *)0x5a1ea8;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

