// Address: 005662cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm79_grid1SelectCell(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  undefined1 *local_30;
  undefined4 *local_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 5;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_00566428;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  local_2c = &local_c;
  piVar2 = *(int **)(param_1 + 0x300);
  local_30 = (undefined1 *)0x566306;
  uVar4 = (**(code **)(*piVar2 + 0x138))(piVar2,*piVar2,0);
  local_30 = (undefined1 *)0x566312;
  FUN_00416244(&stack0xffffffe4,uVar4,0xfc);
  local_30 = &stack0xffffffe4;
  FUN_00416478(&local_2c,&DAT_00566440);
  puVar3 = local_30;
  local_30 = (undefined1 *)0x56632e;
  FUN_0050e448(piVar2,&local_2c,puVar3);
  local_30 = (undefined1 *)0x566339;
  FUN_00404b6c(&local_8,local_c);
  local_30 = (undefined1 *)0x566341;
  DAT_0067b4ac = FUN_00409ff8(local_8);
  iVar6 = 0;
  iVar5 = 1;
  do {
    pbVar1 = (byte *)(*(int *)PTR_DAT_0066b110 + DAT_0067b4ac * 0x708 + -0x24 + iVar5 * 0x24);
    bVar7 = *pbVar1 == 0xffffffff;
    local_30 = (undefined1 *)0x566378;
    FUN_00403180(pbVar1,&DAT_00566448);
    if ((!bVar7) &&
       (*(char *)(*(int *)PTR_DAT_0066b110 + DAT_0067b4ac * 0x708 + -0x24 + iVar5 * 0x24) != '\0'))
    {
      iVar6 = iVar6 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x1a);
  if (iVar6 < 0x19) {
    local_30 = (undefined1 *)0x5663b2;
    (**(code **)(**(int **)(param_1 + 0x314) + 100))(*(int **)(param_1 + 0x314),1);
  }
  else {
    local_30 = (undefined1 *)0x5663c1;
    (**(code **)(**(int **)(param_1 + 0x314) + 100))(*(int **)(param_1 + 0x314),0);
  }
  local_30 = (undefined1 *)0x5663e1;
  FUN_00404b48(&local_30,*(int *)PTR_DAT_0066b010 + 4 + DAT_0067b4ac * 200);
  puVar3 = local_30;
  local_30 = (undefined1 *)0x5663ef;
  FUN_00466238(*(undefined4 *)(param_1 + 0x32c),puVar3);
  puVar3 = puStack_24;
  *in_FS_OFFSET = (int)local_2c;
  puStack_24 = &LAB_0056642f;
  iStack_28 = 0x566404;
  FUN_004048d4(&local_30,local_2c,puVar3);
  iStack_28 = 0x566417;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_28 = 0x56641f;
  FUN_00404ff0(&local_c);
  iStack_28 = 0x566427;
  FUN_004048d4(&local_8);
  return;
}

