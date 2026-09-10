// Address: 0059be38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_joglistCellFormating(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_0059bf21;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x318) + 0x11c))();
  if (in_stack_00000010 < iVar1) {
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x318),"nomejog");
    iVar1 = FUN_0050a2cc();
    if (iVar1 == 0) {
      FUN_00416244(&stack0xffffffe4,in_stack_00000010,0xfc,&local_c);
      FUN_00416478(&local_2c,&LAB_0059bf4c);
      FUN_0050e448(*(undefined4 *)(param_1 + 0x318),&local_2c,&stack0xffffffe4);
      FUN_00404b6c(&local_8,local_c);
      iVar1 = FUN_00409ff8(local_8);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar1 * 0x130) == 2) {
        *in_stack_0000000c = 0x8000;
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_0059bf28;
  puStack_28 = (undefined1 *)0x59bf10;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x59bf18;
  FUN_00404ff0(&local_c);
  puStack_28 = (undefined1 *)0x59bf20;
  FUN_004048d4(&local_8);
  return;
}

