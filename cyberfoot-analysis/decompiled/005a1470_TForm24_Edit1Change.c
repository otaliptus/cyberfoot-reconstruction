// Address: 005a1470
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm24_Edit1Change(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_005a1540;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_c);
  if (local_c == 0) {
    (**(code **)(**(int **)(param_1 + 0x324) + 100))(*(int **)(param_1 + 0x324),0);
  }
  else {
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_10);
    if (local_10 != 0) {
      FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_14);
      FUN_0040343c(local_14,&local_8);
    }
    if (local_8 == 0) {
      FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_18);
      iVar2 = FUN_00409ff8(local_18);
      if (iVar2 < 1) {
        (**(code **)(**(int **)(param_1 + 0x324) + 100))(*(int **)(param_1 + 0x324),0);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x324) + 100))(*(int **)(param_1 + 0x324),1);
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x324) + 100))(*(int **)(param_1 + 0x324),0);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005a1547;
  puStack_24 = (undefined1 *)0x5a153f;
  FUN_004048f8(&local_18,4,puVar1);
  return;
}

