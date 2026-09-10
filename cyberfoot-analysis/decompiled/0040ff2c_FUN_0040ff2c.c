// Address: 0040ff2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ff2c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0040ff70;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = FUN_00406880(&local_8);
  FUN_0040fe94(param_1,param_2,uVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040ff77;
  puStack_18 = (undefined1 *)0x40ff6f;
  FUN_00406880(&local_8,uStack_1c,puVar1);
  return;
}

