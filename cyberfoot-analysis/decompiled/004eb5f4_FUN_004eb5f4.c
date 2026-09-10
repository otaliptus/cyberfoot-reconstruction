// Address: 004eb5f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb5f4(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004eb65f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_004bc42c();
    FUN_0040d14c(&local_8);
    FUN_00403c80(param_1,local_8);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  if (*(int *)(param_2 + 0xc) == 1) {
    FUN_00403c80(param_1,0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004eb666;
  puStack_1c = (undefined1 *)0x4eb65e;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

