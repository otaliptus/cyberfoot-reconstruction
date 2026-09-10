// Address: 005ac4c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ac4c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_1c = (undefined1 *)0x5ac4dd;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_20 = &LAB_005ac54c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00409dd8(param_2,&local_10);
  FUN_00404bf0(&local_c,&DAT_005ac560,local_10);
  uVar2 = FUN_00427360(DAT_006d25b8,local_c);
  FUN_00404b6c(&local_14,local_8);
  FUN_00466238(uVar2,local_14);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005ac553;
  puStack_20 = (undefined1 *)0x5ac543;
  FUN_004048f8(&local_14,3,puVar1);
  puStack_20 = (undefined1 *)0x5ac54b;
  FUN_00404ff0(&local_8);
  return;
}

