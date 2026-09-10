// Address: 004c1f58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1f58(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004c1fb5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = FUN_004c1f0c(param_1,param_2);
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b13c,&local_8);
    FUN_0040e370(PTR_DAT_00408d90,1,local_8);
    FUN_00404250();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004c1fbc;
  puStack_18 = (undefined1 *)0x4c1fb4;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

