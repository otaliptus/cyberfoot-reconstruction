// Address: 00466238
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466238(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  uVar3 = 1;
  puStack_18 = &LAB_0046628d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00466208(param_1,&local_8);
  FUN_00404cf0(local_8,param_2);
  if (!(bool)uVar3) {
    uVar2 = FUN_00404da4(param_2);
    FUN_004661e4(param_1,uVar2);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00466294;
  puStack_18 = (undefined1 *)0x46628c;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

