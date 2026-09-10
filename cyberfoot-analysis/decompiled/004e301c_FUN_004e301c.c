// Address: 004e301c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e301c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined1 local_c [8];
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_004e3081;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_0067aef0 == '\0') {
    FUN_00404b6c(&local_10,param_2);
    FUN_0042b3e4(param_1,local_10);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    FUN_004e2ec8(param_1,param_2,local_c);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004e3088;
  puStack_20 = (undefined1 *)0x4e3080;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  return;
}

