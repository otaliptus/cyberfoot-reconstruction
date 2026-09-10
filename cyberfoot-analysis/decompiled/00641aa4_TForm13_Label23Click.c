// Address: 00641aa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Label23Click(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00641b44;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_00641b1c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_004aca0c("InternetExplorer.Application",&local_18);
  FUN_00416558(&local_14,local_18);
  FUN_00411d54();
  FUN_00411d54();
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00641b4b;
  puStack_2c = (undefined1 *)0x641b3b;
  FUN_00406880(&local_18,local_30,puVar1);
  puStack_2c = (undefined1 *)0x641b43;
  FUN_00411d4c(&local_14);
  return;
}

