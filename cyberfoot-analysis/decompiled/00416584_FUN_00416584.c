// Address: 00416584
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416584(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004165c7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004051d4(&local_8,param_2);
  FUN_004164f4(param_1,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004165ce;
  puStack_18 = (undefined1 *)0x4165c6;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

