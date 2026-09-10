// Address: 004f4ed4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f4ed4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f4f18;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004094ec(param_1 + 0x20,&local_8);
  FUN_004051d4(param_2,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f4f1f;
  puStack_18 = (undefined1 *)0x4f4f17;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

