// Address: 0062c380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm39_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_0062c53a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  iVar6 = 0;
  local_8 = (undefined4 *)PTR_DAT_0066b294;
  do {
    if (0 < *(int *)(*(int *)PTR_DAT_0066b550 + iVar6 * 4)) {
      (**(code **)(**(int **)(param_1 + 0x32c) + 0x1d0))(*(int **)(param_1 + 0x32c),1);
      FUN_00409dd8(iVar6,&local_10);
      FUN_004051d4(&local_c,local_10);
      piVar1 = *(int **)(param_1 + 0x32c);
      uVar5 = local_c;
      iVar4 = (**(code **)(*piVar1 + 0x11c))();
      (**(code **)(*piVar1 + 0x194))(piVar1,0,iVar4 + -1,uVar5);
      uVar5 = *local_8;
      piVar1 = *(int **)(param_1 + 0x32c);
      iVar4 = (**(code **)(*piVar1 + 0x11c))();
      (**(code **)(*piVar1 + 0x194))(piVar1,2,iVar4 + -1,uVar5);
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b550 + iVar6 * 4),&local_18);
      FUN_004051d4(&local_14,local_18);
      piVar1 = *(int **)(param_1 + 0x32c);
      uVar5 = local_14;
      iVar4 = (**(code **)(*piVar1 + 0x11c))();
      (**(code **)(*piVar1 + 0x194))(piVar1,3,iVar4 + -1,uVar5);
      FUN_00409dd8(iVar6,&local_20);
      FUN_004051d4(&local_1c,local_20);
      piVar1 = *(int **)(param_1 + 0x32c);
      uVar5 = local_1c;
      iVar4 = (**(code **)(*piVar1 + 0x11c))();
      (**(code **)(*piVar1 + 0x194))(piVar1,4,iVar4 + -1,uVar5);
    }
    iVar6 = iVar6 + 1;
    local_8 = local_8 + 1;
  } while (iVar6 != 0xca);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
  FUN_00409dd8(uVar5,&local_24);
  FUN_00466238(*(undefined4 *)(param_1 + 0x304),local_24);
  cVar3 = FUN_00651f8c();
  if (cVar3 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x334) + 100))(*(int **)(param_1 + 0x334),1);
  }
  puVar2 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0062c541;
  puStack_38 = (undefined1 *)0x62c511;
  FUN_004048f8(&local_24,2,puVar2);
  puStack_38 = (undefined1 *)0x62c519;
  FUN_00404ff0(&local_1c);
  puStack_38 = (undefined1 *)0x62c521;
  FUN_004048d4(&local_18);
  puStack_38 = (undefined1 *)0x62c529;
  FUN_00404ff0(&local_14);
  puStack_38 = (undefined1 *)0x62c531;
  FUN_004048d4(&local_10);
  puStack_38 = (undefined1 *)0x62c539;
  FUN_00404ff0(&local_c);
  return;
}

