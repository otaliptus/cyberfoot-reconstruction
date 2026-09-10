// Address: 004f496c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f496c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004f49be;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0040d14c(&local_8,param_2,param_3,param_4,param_5);
  FUN_004051d4(param_1 + 0x20,local_8);
  FUN_004f71f0(param_1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f49c5;
  puStack_14 = (undefined1 *)0x4f49bd;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

