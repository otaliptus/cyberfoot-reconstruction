// Address: 005c3714
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm62_grid1CellFormating(int param_1)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 uVar2;
  undefined1 *in_stack_00000008;
  undefined4 in_stack_00000010;
  int *local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_20 = &LAB_005c37fa;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  local_28 = (int *)0x5c374b;
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2f8),"assunto");
  local_28 = (int *)0x5c3750;
  iVar1 = FUN_0050a2cc();
  uVar2 = iVar1 == 0;
  if (!(bool)uVar2) {
    local_28 = (int *)0x5c3764;
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2f8),&DAT_005c3824);
    local_28 = (int *)0x5c3769;
    iVar1 = FUN_0050a2cc();
    uVar2 = iVar1 == 0;
    if (!(bool)uVar2) {
      local_28 = (int *)0x5c377d;
      FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2f8),"nxdata");
      local_28 = (int *)0x5c3782;
      iVar1 = FUN_0050a2cc();
      uVar2 = iVar1 == 0;
      if (!(bool)uVar2) goto LAB_005c37d1;
    }
  }
  local_28 = &local_8;
  FUN_00416244(&stack0xffffffe8,in_stack_00000010,0xfc);
  FUN_00416478(&local_28,&DAT_005c3844);
  FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),&local_28,&stack0xffffffe8);
  FUN_00405378(local_8,&DAT_005c3850);
  if ((bool)uVar2) {
    *in_stack_00000008 = DAT_005c3854;
  }
LAB_005c37d1:
  *in_FS_OFFSET = (int)local_28;
  puStack_20 = &LAB_005c3801;
  iStack_24 = 0x5c37f1;
  FUN_00405744(&local_28,PTR_DAT_004010f8,2);
  iStack_24 = 0x5c37f9;
  FUN_00404ff0(&local_8);
  return;
}

