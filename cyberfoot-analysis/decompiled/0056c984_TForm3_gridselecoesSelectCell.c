// Address: 0056c984
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_gridselecoesSelectCell(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_0056ca45;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar3 = **(int **)(param_1 + 0x370);
  local_2c = (undefined4 *)0x56c9b8;
  iVar3 = (**(code **)(iVar3 + 0x134))(*(int **)(param_1 + 0x370),iVar3,0);
  if (0 < iVar3) {
    local_2c = &local_c;
    piVar1 = *(int **)(param_1 + 0x370);
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    local_2c = (undefined4 *)0x56c9dc;
    FUN_00416244(&stack0xffffffe4,uVar4,0xfc);
    local_2c = (undefined4 *)&stack0xffffffe4;
    FUN_00416478(&local_2c,"idsel");
    puVar2 = local_2c;
    local_2c = (undefined4 *)0x56c9f8;
    FUN_0050e448(piVar1,&local_2c,puVar2);
    local_2c = (undefined4 *)0x56ca03;
    FUN_00404b6c(&local_8,local_c);
    local_2c = (undefined4 *)0x56ca0b;
    uVar4 = FUN_00409ff8(local_8);
    local_2c = (undefined4 *)0x56ca14;
    TForm3_listjogselecao(param_1,uVar4);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0056ca4c;
  puStack_24 = (undefined1 *)0x56ca34;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56ca3c;
  FUN_00404ff0(&local_c);
  puStack_24 = (undefined1 *)0x56ca44;
  FUN_004048d4(&local_8);
  return;
}

