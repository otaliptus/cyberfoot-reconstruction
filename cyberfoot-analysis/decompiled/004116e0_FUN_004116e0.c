// Address: 004116e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004116e0(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_0041172a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406d44(PTR_PTR_0066b0c8,&local_8);
  FUN_0040e370(PTR_DAT_00411248,1,local_8);
  FUN_00404250();
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00411731;
  puStack_10 = (undefined1 *)0x411729;
  FUN_004048d4(&local_8,uStack_14,puVar1);
  return;
}

