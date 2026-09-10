// Address: 00561afc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_estadocomboChange(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00561b52;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
  FUN_00409dd8(uVar2,&local_8);
  FUN_00404928(&DAT_0067b47c,local_8);
  puVar1 = puStack_10;
  DAT_0067b454 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00561b59;
  puStack_14 = (undefined1 *)0x561b51;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

