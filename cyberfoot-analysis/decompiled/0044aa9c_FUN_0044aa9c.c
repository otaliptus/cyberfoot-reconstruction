// Address: 0044aa9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044aa9c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_2a [34];
  undefined4 local_8;
  
  puStack_4c = (undefined1 *)0x44aab0;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_50 = &LAB_0044aaff;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_0044a934(param_1,local_44);
  local_40 = 0x20000000;
  FUN_0040a81c(local_2a,local_8,0x1f);
  FUN_0044a990(param_1,local_44);
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0044ab06;
  puStack_50 = (undefined1 *)0x44aafe;
  FUN_004048d4(&local_8,uStack_54,puVar1);
  return;
}

