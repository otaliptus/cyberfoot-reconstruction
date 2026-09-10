// Address: 00524264
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00524264(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x524276;
  local_8 = param_1;
  FUN_0041e41c(*(undefined4 *)(param_1 + 0x38));
  puStack_10 = &LAB_005242c6;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (*(int *)(local_8 + 0x54) == 0) {
    puStack_c = &stack0xfffffffc;
    FUN_004042fc();
  }
  else {
    puStack_c = &stack0xfffffffc;
    FUN_00522630();
    puVar1 = puStack_c;
    if ((*(byte *)(*(int *)(local_8 + 0x54) + 0x58) & 1) != 0) {
      *in_FS_OFFSET = uStack_14;
      puStack_c = &DAT_005242cd;
      puStack_10 = (undefined1 *)0x5242c5;
      FUN_0041e480(*(undefined4 *)(local_8 + 0x38),uStack_14,puVar1);
      return;
    }
    FUN_004042fc();
  }
  puStack_c = (undefined1 *)0x5242fb;
  FUN_005236d4(local_8);
  return;
}

