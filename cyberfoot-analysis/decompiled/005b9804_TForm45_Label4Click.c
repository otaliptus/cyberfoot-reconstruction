// Address: 005b9804
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm45_Label4Click(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_005b98c7;
  local_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_38;
  puStack_40 = &LAB_005b9881;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_004aca0c("InternetExplorer.Application",&local_20);
  FUN_00416558(&local_1c,local_20);
  FUN_00411d54();
  FUN_00411d54();
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_44;
  *in_FS_OFFSET = local_38;
  puStack_30 = &LAB_005b98ce;
  puStack_34 = (undefined1 *)0x5b98be;
  FUN_00406880(&local_20,local_38,puVar1);
  puStack_34 = (undefined1 *)0x5b98c6;
  FUN_00411d4c(&local_1c);
  return;
}

