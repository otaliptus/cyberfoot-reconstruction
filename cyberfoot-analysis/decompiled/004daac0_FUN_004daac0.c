// Address: 004daac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004daac0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  uVar2 = 1;
  puStack_20 = &LAB_004dab52;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004dad28(param_1,&local_c);
  FUN_00404b6c(&local_8,local_c);
  FUN_00404cf0(*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x54),local_8);
  if ((bool)uVar2) {
    FUN_004dad28(param_1,&local_10);
    FUN_0040502c(param_1 + 0x34,local_10);
  }
  FUN_004d83a8(param_1 + 0x34,*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x54),param_2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004dab59;
  puStack_20 = (undefined1 *)0x4dab49;
  FUN_00405008(&local_10,2,puVar1);
  puStack_20 = (undefined1 *)0x4dab51;
  FUN_004048d4(&local_8);
  return;
}

