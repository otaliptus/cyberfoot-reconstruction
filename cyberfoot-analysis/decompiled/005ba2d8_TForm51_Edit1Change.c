// Address: 005ba2d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm51_Edit1Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005ba356;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00466208(*(undefined4 *)(param_1 + 0x2fc),&local_8);
  if (local_8 == 0) {
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),1);
  }
  FUN_00466208(*(undefined4 *)(param_1 + 0x2fc),&local_c);
  FUN_00404928(PTR_DAT_0066ae38,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005ba35d;
  puStack_18 = (undefined1 *)0x5ba355;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

