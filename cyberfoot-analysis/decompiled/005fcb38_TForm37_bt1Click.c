// Address: 005fcb38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm37_bt1Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005fccb0;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  iVar2 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x22c));
  iVar3 = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    do {
      local_c = iVar3;
      iVar3 = FUN_0044e8f4(*(undefined4 *)(*(int *)(local_8 + 0x324) + 0x22c),local_c);
      (**(code **)(**(int **)(iVar3 + 8) + 0xc))(*(int **)(iVar3 + 8),3,&local_10);
      iVar3 = FUN_00409ff8(local_10);
      iVar2 = FUN_0044e868(*(undefined4 *)(*(int *)(local_8 + 0x328) + 0x22c));
      FUN_00404b6c(&local_14,
                   *(undefined4 *)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) * 4));
      FUN_0044e308(iVar2,local_14);
      FUN_00404b48(&local_18,*(int *)PTR_DAT_0066b5b8 + iVar3 * 0x130);
      (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),local_18);
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar3 * 0x130),&local_1c);
      (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),local_1c);
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar3 * 0x130),&local_20);
      FUN_00404bac(&local_20,&DAT_005fccc8);
      (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),local_20);
      FUN_00409dd8(iVar3,&local_24);
      (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),local_24);
      local_c = local_c + -1;
      iVar3 = local_c;
    } while (local_c != -1);
  }
  (**(code **)(**(int **)(local_8 + 0x324) + 0xd8))();
  (**(code **)(**(int **)(local_8 + 0x338) + 100))(*(int **)(local_8 + 0x338),1);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005fccb7;
  puStack_38 = (undefined1 *)0x5fccaf;
  FUN_004048f8(&local_24,6,puVar1);
  return;
}

