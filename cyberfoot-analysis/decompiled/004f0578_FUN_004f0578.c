// Address: 004f0578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0578(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004f05d9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004efd98(param_1);
  if (*(char *)(param_1 + 0x298) == '\0') {
    FUN_00466208(param_1,&local_8);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x54))(*(int **)(param_1 + 0x2b4),local_8);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f05e0;
  puStack_14 = (undefined1 *)0x4f05d8;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

