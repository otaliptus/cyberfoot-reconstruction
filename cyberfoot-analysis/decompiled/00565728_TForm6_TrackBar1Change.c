// Address: 00565728
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm6_TrackBar1Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00565776;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00409dd8(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x228),&local_8);
  FUN_00466238(*(undefined4 *)(param_1 + 0x2f8),local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0056577d;
  puStack_14 = (undefined1 *)0x565775;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

