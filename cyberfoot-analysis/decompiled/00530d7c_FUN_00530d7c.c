// Address: 00530d7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00530d7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x530d91;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_18 = &LAB_00530dd0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x232) != 0) {
    puStack_14 = &stack0xfffffffc;
    (**(code **)(param_1 + 0x230))(*(undefined4 *)(param_1 + 0x234),param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00530dd7;
  puStack_18 = (undefined1 *)0x530dcf;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

