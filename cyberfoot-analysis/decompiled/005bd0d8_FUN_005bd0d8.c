// Address: 005bd0d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bd0d8(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x5bd0ed;
  local_8 = param_1;
  FUN_004068f4(param_1);
  puStack_18 = &LAB_005bd137;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  if (DAT_006d2b64 != (code *)0x0) {
    puStack_14 = &stack0xfffffffc;
    (*DAT_006d2b64)();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005bd13e;
  puStack_18 = (undefined1 *)0x5bd136;
  FUN_00406880(&local_8,uStack_1c,puVar1);
  return;
}

