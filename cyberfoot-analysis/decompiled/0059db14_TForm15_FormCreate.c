// Address: 0059db14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm15_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_0059dd83;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  local_8 = param_1;
  FUN_00642c50(0x13b,&local_c);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x33c),local_c);
  iVar5 = 0;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_004060a8(&DAT_006d23f0,PTR_DAT_0059c9f8,1,iVar5);
      FUN_00404b48(DAT_006d23f0 + -8 + iVar5 * 8,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8);
      *(int *)(DAT_006d23f0 + -4 + iVar5 * 8) = iVar4;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_006d23f4 = FUN_00405eec(DAT_006d23f0);
  puVar6 = &LAB_0059ca38;
  FUN_004bcdb0(DAT_006d23f0,8,0,&LAB_0059ca38,DAT_006d23f4 + -1);
  FUN_004060a8(&DAT_006d23f8,PTR_DAT_0059ca18,1,iVar5);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(local_8 + 0x31c) + 0x23c);
      (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(DAT_006d23f0 + iVar3 * 8));
      if (*(int *)(DAT_006d23f0 + 4 + iVar3 * 8) == *(int *)PTR_DAT_0066b39c) {
        (**(code **)(**(int **)(local_8 + 0x31c) + 0xd0))(*(int **)(local_8 + 0x31c),iVar3);
      }
      piVar1 = *(int **)(*(int *)(local_8 + 0x318) + 0x23c);
      (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(DAT_006d23f0 + iVar3 * 8));
      if (*(int *)(DAT_006d23f0 + 4 + iVar3 * 8) == *(int *)(PTR_DAT_0066b39c + 4)) {
        (**(code **)(**(int **)(local_8 + 0x318) + 0xd0))(*(int **)(local_8 + 0x318),iVar3);
      }
      *(undefined4 *)(DAT_006d23f8 + iVar3 * 4) = *(undefined4 *)(DAT_006d23f0 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004060a8(&DAT_006d23f0,PTR_DAT_0059c9f8,1,0);
  if ((*(int *)PTR_DAT_0066b39c == -1) || (*(int *)(PTR_DAT_0066b39c + 4) == -1)) {
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),0);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x300),0);
  }
  else {
    FUN_0059ca68(local_8,*(int *)PTR_DAT_0066b39c,*(undefined4 *)(PTR_DAT_0066b39c + 4));
    FUN_00405194(&local_10,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b39c * 0x2f8);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_10);
    FUN_00405194(&local_14,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066b39c + 4) * 0x2f8);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x300),local_14);
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = puVar6;
  puStack_2c = &LAB_0059dd8a;
  FUN_00405008(&local_14,3,puVar2);
  return;
}

