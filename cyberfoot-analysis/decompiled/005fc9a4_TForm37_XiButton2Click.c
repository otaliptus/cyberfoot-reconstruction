// Address: 005fc9a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm37_XiButton2Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005fcb1e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x324) + 0xcc))();
  if (-1 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x324);
    uVar4 = (**(code **)(*piVar1 + 0xcc))();
    iVar3 = FUN_0044e8f4(piVar1[0x8b],uVar4);
    (**(code **)(**(int **)(iVar3 + 8) + 0xc))(*(int **)(iVar3 + 8),3,&local_8);
    iVar3 = FUN_00409ff8(local_8);
    iVar5 = FUN_0044e868(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
    FUN_00404b6c(&local_c,*(undefined4 *)
                           (PTR_DAT_0066b660 +
                           *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) * 4));
    FUN_0044e308(iVar5,local_c);
    FUN_00404b48(&local_10,*(int *)PTR_DAT_0066b5b8 + iVar3 * 0x130);
    (**(code **)(**(int **)(iVar5 + 8) + 0x38))(*(int **)(iVar5 + 8),local_10);
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar3 * 0x130),&local_14);
    (**(code **)(**(int **)(iVar5 + 8) + 0x38))(*(int **)(iVar5 + 8),local_14);
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar3 * 0x130),&local_18);
    FUN_00404bac(&local_18,&DAT_005fcb34);
    (**(code **)(**(int **)(iVar5 + 8) + 0x38))(*(int **)(iVar5 + 8),local_18);
    FUN_00409dd8(iVar3,&local_1c);
    (**(code **)(**(int **)(iVar5 + 8) + 0x38))(*(int **)(iVar5 + 8),local_1c);
    (**(code **)(**(int **)(param_1 + 0x324) + 0xe4))();
    iVar3 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x22c));
    if (iVar3 == 0) {
      (**(code **)(**(int **)(param_1 + 0x338) + 100))(*(int **)(param_1 + 0x338),1);
    }
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005fcb25;
  puStack_30 = (undefined1 *)0x5fcb1d;
  FUN_004048f8(&local_1c,6,puVar2);
  return;
}

