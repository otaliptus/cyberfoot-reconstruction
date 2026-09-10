// Address: 00569bbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_gridtimesCellFormating(int param_1)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_2c;
  int iStack_28;
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
  puStack_24 = &LAB_00569c8e;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  local_2c = (undefined4 *)0x569bf4;
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2f8),"clube");
  local_2c = (undefined4 *)0x569bf9;
  iVar1 = FUN_0050a2cc();
  if (iVar1 == 0) {
    local_2c = &local_c;
    FUN_00416244(&stack0xffffffe4,in_stack_00000010,0xfc);
    FUN_00416478(&local_2c,&DAT_00569cb8);
    FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),&local_2c,&stack0xffffffe4);
    FUN_00404b6c(&local_8,local_c);
    iVar1 = FUN_00409ff8(local_8);
    if (*(char *)(DAT_0067b4b8 + 1 + iVar1 * 200) == '\0') {
      *in_stack_0000000c = 0xff;
    }
  }
  *in_FS_OFFSET = (int)local_2c;
  puStack_24 = &LAB_00569c95;
  iStack_28 = 0x569c7d;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_28 = 0x569c85;
  FUN_00404ff0(&local_c);
  iStack_28 = 0x569c8d;
  FUN_004048d4(&local_8);
  return;
}

