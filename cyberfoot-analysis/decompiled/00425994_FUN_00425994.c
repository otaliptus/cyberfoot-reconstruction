// Address: 00425994
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425994(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00425a83;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x1c);
  if (iVar1 == *(int *)(param_1 + 4)) {
    puStack_18 = &stack0xfffffffc;
    FUN_00404928(param_2,*(undefined4 *)(param_1 + 8));
  }
  else if (iVar1 == param_1) {
    puStack_18 = &stack0xfffffffc;
    FUN_00404928(param_2,"Owner");
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(param_1 + 8) == 0)) {
      if (*(int *)(param_1 + 8) == 0) {
        FUN_004048d4(param_2,param_4);
      }
      else {
        puStack_18 = &stack0xfffffffc;
        FUN_00404bf0(param_2,*(undefined4 *)(param_1 + 8),".Owner");
      }
    }
    else {
      puStack_18 = &stack0xfffffffc;
      cVar3 = FUN_0042597c(iVar1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x1c));
      if (cVar3 == '\0') {
        FUN_00404c64(param_2,3);
      }
      else {
        FUN_00425994(*(undefined4 *)(param_1 + 4),&local_8);
        FUN_00404c64(param_2,3,param_4,*(undefined4 *)(param_1 + 8),&DAT_00425aa8,local_8);
      }
    }
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00425a8a;
  puStack_1c = (undefined1 *)0x425a82;
  FUN_004048d4(&local_8,uStack_20,puVar2);
  return;
}

