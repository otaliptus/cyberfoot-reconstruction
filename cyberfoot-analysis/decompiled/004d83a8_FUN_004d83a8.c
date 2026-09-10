// Address: 004d83a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d83a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  uVar2 = 1;
  puStack_1c = &LAB_004d8402;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404b6c(&local_8,*param_1);
  FUN_00404cf0(local_8,param_2);
  if (!(bool)uVar2) {
    FUN_004051d4(param_1,param_2);
  }
  FUN_0040502c(param_3,*param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d8409;
  puStack_1c = (undefined1 *)0x4d8401;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

