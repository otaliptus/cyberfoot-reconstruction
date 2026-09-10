// Address: 004dc12c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dc12c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004dc17b;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  FUN_004dc054(param_1,&local_8);
  puVar2 = &LAB_004dc04c;
  FUN_004d8410(param_2,param_1 + 0xb4,*(undefined4 *)(param_1 + 0x30),&LAB_004dc04c,param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = puVar2;
  puStack_1c = &LAB_004dc182;
  FUN_00404ff0(&local_8,puVar2,puVar1);
  return;
}

