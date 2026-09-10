// Address: 004efd28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004efd28(int *param_1)

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
  puStack_14 = &LAB_004efd79;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004eedac(param_1);
  FUN_00466208(param_1,&local_8);
  uVar2 = FUN_00404ba4(local_8);
  (**(code **)(*param_1 + 0xdc))(param_1,uVar2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004efd80;
  puStack_14 = (undefined1 *)0x4efd78;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

