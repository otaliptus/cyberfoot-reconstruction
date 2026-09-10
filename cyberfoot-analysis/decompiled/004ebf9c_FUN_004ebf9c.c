// Address: 004ebf9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ebf9c(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  CHAR local_6 [2];
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_004ec015;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    GetLocaleInfoA(0x400,0x100c,local_6,2);
    FUN_00404b54(&local_c,local_6,2);
    FUN_00409ff8(local_c);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004ec01c;
  puStack_18 = (undefined1 *)0x4ec014;
  FUN_004048d4(&local_c,uStack_1c,puVar1);
  return;
}

