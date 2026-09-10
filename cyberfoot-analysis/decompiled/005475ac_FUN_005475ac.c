// Address: 005475ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005475ac(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  local_10 = 0;
  puStack_18 = (undefined1 *)0x5475c3;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_1c = &LAB_00547607;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00404b6c(&local_10,local_8);
  FUN_0040343c(local_10,local_c);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054760e;
  puStack_1c = (undefined1 *)0x5475fe;
  FUN_004048d4(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x547606;
  FUN_00404ff0(&local_8);
  return;
}

