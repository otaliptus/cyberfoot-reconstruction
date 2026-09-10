// Address: 004dd6c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd6c0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004dd716;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_004dd644(param_1,1);
  FUN_0040502c(iVar2 + 0x38,param_2);
  FUN_00404b6c(&local_8,param_2);
  FUN_00466238(param_1,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004dd71d;
  puStack_18 = (undefined1 *)0x4dd715;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

