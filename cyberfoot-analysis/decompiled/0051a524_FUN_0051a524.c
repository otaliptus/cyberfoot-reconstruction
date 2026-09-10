// Address: 0051a524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a524(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0051a5a4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 < 0) || (puVar1 = &stack0xfffffffc, param_1[2] <= param_2)) {
    FUN_00406d44(&PTR_DAT_00516664,&local_8);
    FUN_00516934(local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    FUN_00402a04(param_1[1] + 3 + param_2 * 3,param_1[1] + param_2 * 3,(param_1[2] - param_2) * 3);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 0x1c))();
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0051a5ab;
  puStack_18 = (undefined1 *)0x51a5a3;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

