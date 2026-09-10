// Address: 0054ce04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054ce04(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0054ce57;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_3;
  (**(code **)(**(int **)(param_1 + 0x23c) + 0xc))(*(int **)(param_1 + 0x23c),param_2,&local_c);
  FUN_0054b400(local_c,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054ce5e;
  puStack_1c = (undefined1 *)0x54ce56;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

