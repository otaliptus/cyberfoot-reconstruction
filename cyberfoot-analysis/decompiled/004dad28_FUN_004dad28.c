// Address: 004dad28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dad28(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004dad73;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004dda80(*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x48),&local_8);
  FUN_004ddb30(local_8,param_2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004dad7a;
  puStack_18 = (undefined1 *)0x4dad72;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

