// Address: 0051a930
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a930(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x51a945;
  local_8 = param_3;
  FUN_00404d94(param_3);
  uVar2 = local_8;
  puStack_18 = &LAB_0051a979;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 4) + 100))(*(int **)(param_1 + 4),param_1,param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uVar2;
  puStack_18 = &LAB_0051a980;
  uStack_1c = 0x51a978;
  FUN_004048d4(&local_8,uVar2,puVar1);
  return;
}

