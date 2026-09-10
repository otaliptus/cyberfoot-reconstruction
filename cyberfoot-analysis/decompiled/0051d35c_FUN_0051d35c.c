// Address: 0051d35c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051d35c(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0051d3b0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_0051d3bc(param_1);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00406d44(&PTR_DAT_00516744,&local_8);
    FUN_00516934(local_8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051d3b7;
  puStack_14 = (undefined1 *)0x51d3af;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

