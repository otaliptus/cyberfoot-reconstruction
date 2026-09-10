// Address: 0047059c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047059c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4705ae;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_00470607;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_c = FUN_00404ba4(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),local_8,local_c);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047060e;
  puStack_18 = (undefined1 *)0x470606;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

