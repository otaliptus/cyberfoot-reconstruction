// Address: 00416a50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416a50(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_00416aab;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004153cc(&local_8,param_1);
  FUN_004153cc(&local_c,param_2);
  uVar2 = FUN_00409628(local_8,local_c);
  FUN_00416984(uVar2,0);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00416ab2;
  puStack_18 = (undefined1 *)0x416aaa;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

