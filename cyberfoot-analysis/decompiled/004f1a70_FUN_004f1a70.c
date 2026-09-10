// Address: 004f1a70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1a70(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_004f1ae9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004f3b90(param_1);
  FUN_00466208(param_1,&local_8);
  if (local_8 != 0) {
    FUN_004bc42c();
    FUN_00466208(param_1,&local_c);
    FUN_0040d9a0(local_c);
    (**(code **)(*param_1 + 0x114))();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f1af0;
  puStack_18 = (undefined1 *)0x4f1ae8;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

