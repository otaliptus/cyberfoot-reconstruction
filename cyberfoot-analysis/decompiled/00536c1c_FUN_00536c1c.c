// Address: 00536c1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00536c1c(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x536c2f;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_00536cc2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  do {
    iVar2 = FUN_00404ee8(&DAT_00536cd8,local_8);
    if (iVar2 < 1) {
      FUN_00404928(param_2,local_8);
    }
    else {
      FUN_00404e04(local_8,1,iVar2 + -1,param_2);
      FUN_00404e44(&local_8,1,iVar2);
      iVar3 = FUN_00404ee8(&DAT_00536ce4,local_8);
      if (0 < iVar3) {
        FUN_00404e44(&local_8,iVar3,1);
      }
      FUN_00404bf0(&local_8,*param_2,local_8);
    }
    puVar1 = puStack_14;
  } while (0 < iVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00536cc9;
  puStack_18 = (undefined1 *)0x536cc1;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

