// Address: 00429978
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00429978(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  local_8 = 0;
  puStack_18 = (undefined1 *)0x42998f;
  iVar1 = FUN_0041e41c(DAT_0066c8ec);
  puStack_1c = &LAB_00429a15;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  while (local_8 < *(int *)(iVar1 + 8)) {
    uVar2 = FUN_0041e01c(iVar1,local_8);
    FUN_0042b03c(uVar2);
    local_8 = local_8 + 1;
    FUN_0042b5c8(uVar2);
  }
  FUN_0042990c(DAT_0066c8e4);
  FUN_0042990c(DAT_0066c8e8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00429a1c;
  if (-1 < local_8 + -1) {
    iVar3 = 0;
    do {
      puStack_1c = (undefined1 *)0x429a01;
      FUN_0041e01c(iVar1,iVar3);
      puStack_1c = (undefined1 *)0x429a06;
      FUN_0042b47c();
      iVar3 = iVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puStack_1c = (undefined1 *)0x429a14;
  FUN_0041e480(DAT_0066c8ec);
  return;
}

