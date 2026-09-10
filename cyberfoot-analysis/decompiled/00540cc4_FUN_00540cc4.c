// Address: 00540cc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00540cc4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_24 = (undefined1 *)0x540cde;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_24 = (undefined1 *)0x540ce6;
  FUN_00405608(&local_c);
  puStack_28 = &LAB_00540d57;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00404b6c(&local_14,local_c);
  FUN_004095b0(local_14,&local_10);
  uVar2 = local_10;
  FUN_00404b6c(&local_1c,local_8);
  FUN_004095b0(local_1c,&local_18);
  FUN_00404ee8(local_18,uVar2);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00540d5e;
  puStack_28 = (undefined1 *)0x540d49;
  FUN_004048f8(&local_1c,4,puVar1);
  puStack_28 = (undefined1 *)0x540d56;
  FUN_00405008(&local_c,2);
  return;
}

