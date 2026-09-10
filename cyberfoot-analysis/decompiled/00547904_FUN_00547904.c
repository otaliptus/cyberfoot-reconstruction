// Address: 00547904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00547904(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0054795d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405118(&local_8,param_1);
  FUN_005478d0(local_8,&local_c);
  thunk_FUN_0040502c(&local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00547964;
  puStack_18 = (undefined1 *)0x54795c;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

