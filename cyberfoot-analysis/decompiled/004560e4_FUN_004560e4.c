// Address: 004560e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004560e4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_004561e1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_0046cde4(param_1);
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x268) != 0)) {
    uVar3 = FUN_00406880(&local_8);
    cVar2 = FUN_0040fe70(*(undefined4 *)(param_1 + 0x268),&DAT_004561ec,uVar3);
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x268) + 0x10))();
    }
    else if (DAT_004561fc == *(char *)(param_1 + 0x26c)) {
      (**(code **)(*local_8 + 0x14))();
    }
    else {
      (**(code **)(*local_8 + 0x14))();
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004561e8;
  puStack_14 = (undefined1 *)0x4561e0;
  FUN_00406880(&local_8,uStack_18,puVar1);
  return;
}

