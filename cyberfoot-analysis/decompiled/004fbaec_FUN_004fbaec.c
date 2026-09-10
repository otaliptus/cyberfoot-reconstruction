// Address: 004fbaec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fbaec(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x4fbafe;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_14 = &LAB_004fbb35;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_004e301c(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x20),local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fbb3c;
  puStack_14 = (undefined1 *)0x4fbb34;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

