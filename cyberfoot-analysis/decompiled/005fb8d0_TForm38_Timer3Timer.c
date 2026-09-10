// Address: 005fb8d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm38_Timer3Timer(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005fb99d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x338),0);
  if (((&DAT_006d4090)[DAT_006d4074] == 0) || (DAT_006d4074 == 0xb)) {
    DAT_006d4074 = 0;
  }
  if (((&DAT_006d40bc)[DAT_006d4078] == 0) || (DAT_006d4078 == 0xb)) {
    DAT_006d4078 = 0;
  }
  iVar2 = FUN_0044e868(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
  FUN_00404b48(&local_8,*(int *)PTR_DAT_0066b5b8 + (&DAT_006d4090)[DAT_006d4074] * 0x130);
  FUN_0044e308(iVar2,local_8);
  (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),0);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x330),1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005fb9a4;
  puStack_18 = (undefined1 *)0x5fb99c;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

