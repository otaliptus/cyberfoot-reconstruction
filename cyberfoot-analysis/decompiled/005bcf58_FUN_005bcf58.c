// Address: 005bcf58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bcf58(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005bcf97;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00406d44(PTR_PTR_0066acfc,&local_8);
  FUN_005bcd6c(local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005bcf9e;
  puStack_14 = (undefined1 *)0x5bcf96;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

