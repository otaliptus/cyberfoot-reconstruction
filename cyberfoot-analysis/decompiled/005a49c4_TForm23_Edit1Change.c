// Address: 005a49c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm23_Edit1Change(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_005a4a93;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_c);
  if (local_c == 0) {
    FUN_004e1414(*(undefined4 *)(param_1 + 0x394),0);
  }
  else {
    FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_10);
    if (local_10 != 0) {
      FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_14);
      FUN_0040343c(local_14,&local_8);
    }
    if (local_8 == 0) {
      FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_1c);
      iVar2 = FUN_00409ff8(local_1c);
      FUN_006468f4(iVar2 * 1000,&local_18);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x394),local_18);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005a4a9a;
  puStack_28 = (undefined1 *)0x5a4a7d;
  FUN_004048d4(&local_1c,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5a4a85;
  FUN_00404ff0(&local_18);
  puStack_28 = (undefined1 *)0x5a4a92;
  FUN_004048f8(&local_14,3);
  return;
}

