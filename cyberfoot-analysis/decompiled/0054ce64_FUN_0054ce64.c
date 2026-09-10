// Address: 0054ce64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054ce64(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0054ceb0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0054b340(param_3,&local_8);
  (**(code **)(**(int **)(param_1 + 0x23c) + 0x20))(*(int **)(param_1 + 0x23c),param_2,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054ceb7;
  puStack_1c = (undefined1 *)0x54ceaf;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

