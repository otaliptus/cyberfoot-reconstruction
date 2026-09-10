// Address: 00593078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm47_gridview1CellFormating(int param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined1 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 **local_2c;
  undefined4 *puStack_28;
  int iStack_24;
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
  puStack_20 = &LAB_00593138;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_28 = &local_c;
  local_2c = (undefined1 **)0x5930ae;
  FUN_00416244(&local_1c,in_stack_00000010,0xfc);
  local_2c = &local_1c;
  FUN_00416478(&local_2c,&DAT_00593150);
  ppuVar1 = local_2c;
  local_2c = (undefined1 **)0x5930ce;
  FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),&local_2c,ppuVar1);
  local_2c = (undefined1 **)0x5930d9;
  FUN_00404b6c(&local_8,local_c);
  local_2c = (undefined1 **)0x5930e1;
  iVar2 = FUN_00409ff8(local_8);
  if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + iVar2 * 0x80) != '\0') {
    *in_stack_00000008 = DAT_00593154;
    *in_stack_0000000c = 0x4000;
  }
  *in_FS_OFFSET = (int)puStack_28;
  puStack_20 = &LAB_0059313f;
  iStack_24 = 0x593127;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_24 = 0x59312f;
  FUN_00404ff0(&local_c);
  iStack_24 = 0x593137;
  FUN_004048d4(&local_8);
  return;
}

