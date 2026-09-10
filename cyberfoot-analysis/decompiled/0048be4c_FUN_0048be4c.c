// Address: 0048be4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048be4c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_0048be8a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406d44(PTR_PTR_0066ad00,&local_8);
  FUN_0048abcc(local_8);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0048be91;
  puStack_10 = (undefined1 *)0x48be89;
  FUN_004048d4(&local_8,uStack_14,puVar1);
  return;
}

