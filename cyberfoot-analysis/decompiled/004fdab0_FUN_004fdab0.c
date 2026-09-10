// Address: 004fdab0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fdab0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004fdb4a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = *(int *)(param_2 + 0x60);
  if (*(char *)(iVar1 + 0x30) == '\0') {
    puStack_1c = &stack0xfffffffc;
    FUN_00404b6c(&local_8,*(undefined4 *)(iVar1 + 4));
    FUN_0042b3e4(*(undefined4 *)(param_1 + 8),local_8);
  }
  else {
    FUN_00404b6c(&local_c,*(undefined4 *)(iVar1 + 4));
    FUN_0042b400(*(undefined4 *)(param_1 + 8),local_c);
  }
  (**(code **)(**(int **)(iVar1 + 0x14) + 0x2c))();
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004fdb51;
  puStack_20 = (undefined1 *)0x4fdb49;
  FUN_004048f8(&local_c,2,puVar2);
  return;
}

