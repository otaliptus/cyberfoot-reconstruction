// Address: 004c42ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c42ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004c4388;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_004c3b98(param_1);
  bVar4 = cVar2 == '\0';
  if (!bVar4) {
    cVar2 = FUN_004c3b98(param_2);
    bVar4 = cVar2 == '\0';
    if (!bVar4) {
      bVar4 = param_1 == 0;
      if (!bVar4) {
        FUN_00404cf0(param_1,&DAT_004c43a0);
        if (!bVar4) {
          FUN_00406d44(PTR_PTR_0066b638,&local_8);
          FUN_004c2518(local_8);
          goto LAB_004c4372;
        }
      }
      FUN_00404928(param_3,&DAT_004c43a0);
      goto LAB_004c4372;
    }
  }
  FUN_00404cf0(param_2,&DAT_004c43ac);
  if (bVar4) {
    FUN_00404928(param_3,param_1);
  }
  else {
    FUN_00404cf0(param_2,&DAT_004c43b8);
    if (bVar4) {
      FUN_00404bf0(param_3,&DAT_004c43c4,param_1);
    }
    else {
      iVar3 = FUN_00409628(param_1,param_2);
      if (iVar3 == 0) {
        FUN_00404928(param_3,&DAT_004c43ac);
      }
      else {
        FUN_004c4134(param_1,param_2,param_3);
      }
    }
  }
LAB_004c4372:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c438f;
  puStack_1c = (undefined1 *)0x4c4387;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

