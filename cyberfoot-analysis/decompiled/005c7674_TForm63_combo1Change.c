// Address: 005c7674
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm63_combo1Change(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005c77b5;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x328) + 0xcc))();
  DAT_006d2c14 = *(int *)(&DAT_006d2ba8 + iVar3 * 4);
  DAT_006d2c24 = *(int *)(PTR_DAT_0066b50c +
                         *(int *)(PTR_DAT_0066ae98 + DAT_006d2c14 * 0x568 + 0x530) * 0x30 + -4);
  (**(code **)(**(int **)(param_1 + 0x37c) + 0xd8))();
  if (0 < DAT_006d2c24) {
    iVar4 = 1;
    iVar3 = DAT_006d2c24;
    do {
      FUN_00409dd8(iVar4,&local_8);
      FUN_00404bac(&local_8,&LAB_005c77cc);
      piVar1 = *(int **)(*(int *)(param_1 + 0x37c) + 0x23c);
      (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(int *)PTR_DAT_0066b6cc < 1) || (100 < *(int *)PTR_DAT_0066b004)) {
    FUN_005c5d38(param_1,3,1,1);
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),0);
  }
  else {
    FUN_005c5d38(param_1,3,*(undefined4 *)PTR_DAT_0066b6cc,1);
    if (*(int *)PTR_DAT_0066b6cc <= DAT_006d2c24) {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)PTR_DAT_0066b6cc + -1);
    }
  }
  FUN_005c5d38(param_1,3,1);
  puVar2 = puStack_20;
  *in_FS_OFFSET = 1;
  puStack_20 = &LAB_005c77bc;
  FUN_004048d4(&local_8,1,puVar2);
  return;
}

