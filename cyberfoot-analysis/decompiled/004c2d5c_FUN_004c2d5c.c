// Address: 004c2d5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2d5c(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004c2daa;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_004c45e0(param_1);
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b310,&local_8);
    FUN_004c24a8(local_8,param_1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004c2db1;
  puStack_14 = (undefined1 *)0x4c2da9;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

