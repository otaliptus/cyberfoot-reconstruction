// Address: 0056ca64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_xbt2DragDrop(int param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_20 = &LAB_0056cb31;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = **(int **)(param_1 + 0x33c);
  ppuStack_28 = (undefined1 **)0x56ca97;
  iVar2 = (**(code **)(iVar2 + 0x134))(*(int **)(param_1 + 0x33c),iVar2,0);
  if (0 < iVar2) {
    ppuStack_28 = (undefined1 **)&local_c;
    local_2c = 0x56caad;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x138))();
    ppuStack_28 = (undefined1 **)0x56cab9;
    FUN_00416244(&local_1c,uVar3,0xfc);
    ppuStack_28 = &local_1c;
    local_2c = 0x56caca;
    FUN_00416478(&local_2c,"idjog");
    ppuVar1 = ppuStack_28;
    ppuStack_28 = (undefined1 **)0x56cade;
    FUN_0050e448(*(undefined4 *)(DAT_0067b4b4 + 0x33c),&local_2c,ppuVar1);
    ppuStack_28 = (undefined1 **)0x56cae9;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_28 = (undefined1 **)0x56caf1;
    uVar3 = FUN_00409ff8(local_8);
    ppuStack_28 = (undefined1 **)0x56cb00;
    TForm3_dragjogadorselecao(param_1,DAT_0067b4c0,uVar3);
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_0056cb38;
  puStack_20 = (undefined1 *)0x56cb20;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x56cb28;
  FUN_00404ff0(&local_c);
  puStack_20 = (undefined1 *)0x56cb30;
  FUN_004048d4(&local_8);
  return;
}

