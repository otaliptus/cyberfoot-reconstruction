// Address: 004c24a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c24a8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_004c2508;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 0xb;
  local_10 = param_2;
  FUN_0040ae64(param_1,&local_10,0,&local_8);
  FUN_0040e370(PTR_DAT_004c21f8,1,local_8);
  FUN_00404250();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004c250f;
  puStack_20 = (undefined1 *)0x4c2507;
  FUN_004048d4(&local_8,uStack_24,puVar1);
  return;
}

