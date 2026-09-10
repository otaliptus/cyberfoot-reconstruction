// Address: 00553dd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00553dd0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x553de3;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_00553e6f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_00404ee8(&DAT_00553e84,local_8);
  if (iVar2 < 1) {
    FUN_00404928(param_2,local_8);
  }
  else {
    FUN_00404e04(local_8,1,iVar2 + -1,param_2);
    FUN_00404e44(&local_8,1,iVar2);
    iVar2 = FUN_00404ee8(&DAT_00553e90,local_8);
    if (0 < iVar2) {
      FUN_00404e44(&local_8,iVar2,1);
    }
    FUN_00404bac(param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00553e76;
  puStack_18 = (undefined1 *)0x553e6e;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

