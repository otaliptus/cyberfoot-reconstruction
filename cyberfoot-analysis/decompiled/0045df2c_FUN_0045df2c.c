// Address: 0045df2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045df2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x45df41;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_18 = &LAB_0045df75;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x23c) + 0x3c))(*(int **)(param_1 + 0x23c),local_8,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0045df7c;
  puStack_18 = (undefined1 *)0x45df74;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

