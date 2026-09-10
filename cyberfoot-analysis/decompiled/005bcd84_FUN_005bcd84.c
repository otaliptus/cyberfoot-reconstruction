// Address: 005bcd84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bcd84(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_005bcdc2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406d44(PTR_PTR_0066acfc,&local_8);
  FUN_005bcd6c(local_8);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_005bcdc9;
  puStack_10 = (undefined1 *)0x5bcdc1;
  FUN_004048d4(&local_8,uStack_14,puVar1);
  return;
}

