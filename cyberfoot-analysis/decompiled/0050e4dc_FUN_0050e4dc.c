// Address: 0050e4dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050e4dc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x50e4ee;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_14 = &LAB_0050e522;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0050b6a4(*(undefined4 *)(param_1 + 0x4d4),local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0050e529;
  puStack_14 = (undefined1 *)0x50e521;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

