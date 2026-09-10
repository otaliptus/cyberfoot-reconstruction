// Address: 0055e654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm7_ComboBox1Select(int param_1)

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
  puStack_14 = &LAB_0055e6a3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x310) + 0xcc))();
  FUN_00409dd8(uVar2,&local_8);
  FUN_00404928(&DAT_0067b3f8,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0055e6aa;
  puStack_14 = (undefined1 *)0x55e6a2;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

