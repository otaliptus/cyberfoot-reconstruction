// Address: 00412524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00412524(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00412562;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00416198(&local_8);
  FUN_00416558(param_1,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00412569;
  puStack_14 = (undefined1 *)0x412561;
  FUN_00406880(&local_8,uStack_18,puVar1);
  return;
}

