// Address: 0051accc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051accc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x51ace1;
  local_8 = param_3;
  FUN_00404d94(param_3);
  uVar3 = local_8;
  puStack_18 = &LAB_0051ad18;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 4);
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 100))(piVar1,param_1,param_2);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uVar3;
  puStack_18 = &LAB_0051ad1f;
  uStack_1c = 0x51ad17;
  FUN_004048d4(&local_8,uVar3,puVar2);
  return;
}

