// Address: 005477ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005477ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x5477c3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_14 = (undefined1 *)0x5477cb;
  FUN_00405608(&local_c);
  puStack_18 = &LAB_00547803;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_00405574(local_8,local_c);
  puVar1 = puStack_14;
  *param_3 = uVar2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0054780a;
  puStack_18 = (undefined1 *)0x547802;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

