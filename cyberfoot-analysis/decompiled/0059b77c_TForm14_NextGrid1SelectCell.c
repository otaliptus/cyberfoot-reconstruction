// Address: 0059b77c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_NextGrid1SelectCell(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  bool bVar5;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 **local_2c;
  int *local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 9;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_20 = &LAB_0059b8ad;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  local_28 = &local_8;
  piVar1 = *(int **)(param_1 + 0x358);
  local_2c = (undefined1 **)0x59b7b5;
  uVar4 = (**(code **)(*piVar1 + 0x138))(piVar1,*piVar1,0);
  local_2c = (undefined1 **)0x59b7c1;
  FUN_00416244(&stack0xffffffe8,uVar4,0xfc);
  local_2c = (undefined1 **)&stack0xffffffe8;
  local_30 = (undefined1 *)0x59b7d2;
  FUN_00416478(&local_28,"treeid");
  ppuVar3 = local_2c;
  local_2c = (undefined1 **)0x59b7dd;
  FUN_0050e448(piVar1,&local_28,ppuVar3);
  bVar5 = true;
  local_2c = (undefined1 **)0x59b7e7;
  FUN_00405378(local_8);
  if (!bVar5) {
    local_2c = &local_30;
    piVar1 = *(int **)(param_1 + 0x358);
    local_30 = (undefined1 *)0x59b7fd;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    local_30 = (undefined1 *)0x59b809;
    FUN_00416244(local_40,uVar4,0xfc);
    local_30 = local_40;
    uStack_34 = 0x59b81a;
    FUN_00416478(local_50,"treeid");
    puVar2 = local_30;
    local_30 = (undefined1 *)0x59b825;
    FUN_0050e448(piVar1,local_50,puVar2);
    puVar2 = local_30;
    local_30 = (undefined1 *)0x59b830;
    FUN_00404b6c(&local_2c,puVar2);
    local_30 = (undefined1 *)0x59b838;
    uVar4 = FUN_00409ff8(local_2c);
    *(undefined4 *)PTR_DAT_0066b2b4 = uVar4;
    local_30 = (undefined1 *)0x59b847;
    FUN_00597468(param_1);
    local_30 = (undefined1 *)0x59b854;
    (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),0);
    local_30 = (undefined1 *)0x59b861;
    (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
  }
  *in_FS_OFFSET = (int)local_28;
  puStack_20 = &LAB_0059b8b4;
  iStack_24 = 0x59b881;
  FUN_00405744(local_50,PTR_DAT_004010f8,2);
  iStack_24 = 0x59b889;
  FUN_00404ff0(&local_30);
  iStack_24 = 0x59b891;
  FUN_004048d4(&local_2c);
  iStack_24 = 0x59b8a4;
  FUN_00405744(&local_28,PTR_DAT_004010f8,2);
  iStack_24 = 0x59b8ac;
  FUN_00404ff0(&local_8);
  return;
}

