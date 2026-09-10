// Address: 00469df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469df4(int param_1)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) | 0x200;
  puStack_10 = &LAB_00469e41;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x180));
  if (BVar1 == 0) {
    FUN_0040f904();
  }
  *in_FS_OFFSET = uStack_14;
  *(ushort *)(local_8 + 0x54) = *(ushort *)(local_8 + 0x54) & 0xfdff;
  return;
}

