// Address: 004e093c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e093c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004e0994;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_004e0a50(param_1,&local_8);
    FUN_00405260(local_8);
  }
  else {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xcc))();
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e099b;
  puStack_14 = (undefined1 *)0x4e0993;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

