// Address: 0062ab84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm11_Edit1Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0062abe9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00466208(*(undefined4 *)(param_1 + 800),&local_8);
  if ((local_8 == 0) || (DAT_006d4a0c == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x340) + 100))(*(int **)(param_1 + 0x340),0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x340) + 100))(*(int **)(param_1 + 0x340),1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0062abf0;
  puStack_14 = (undefined1 *)0x62abe8;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

