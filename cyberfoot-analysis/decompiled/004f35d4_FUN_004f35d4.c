// Address: 004f35d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f35d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x4f35ea;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_1c = &LAB_004f3625;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00403c80(param_1);
  FUN_004f00e4(param_1,param_2,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f362c;
  puStack_1c = (undefined1 *)0x4f3624;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

