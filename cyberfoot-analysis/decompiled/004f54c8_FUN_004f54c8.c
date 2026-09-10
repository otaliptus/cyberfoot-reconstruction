// Address: 004f54c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f54c8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004f5529;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00409dd8(param_2,&local_c);
  FUN_004051d4(&local_8,local_c);
  (**(code **)(*param_1 + 0x30))(param_1,local_8);
  FUN_004f7208(param_1,param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f5530;
  puStack_1c = (undefined1 *)0x4f5520;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x4f5528;
  FUN_00404ff0(&local_8);
  return;
}

