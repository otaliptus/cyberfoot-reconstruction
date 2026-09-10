// Address: 0054c5b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c5b4(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte local_9;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  puStack_34 = &LAB_0054c695;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_9 = 1;
  iVar1 = *(int *)(param_2 + 8);
  local_8 = param_2;
  FUN_004048d4(&local_10);
  if (*(char *)(param_1 + 0x2fc) != '\0') {
    if (*(char *)(param_1 + 0x2fd) == '\0') {
      uVar3 = FUN_0054c0f0(param_1);
      FUN_0054bf1c(param_1,uVar3,&local_18);
      FUN_00404b6c(iVar1 + 0x38,local_18);
    }
    else {
      uVar3 = FUN_0054c0f0(param_1);
      (**(code **)(**(int **)(param_1 + 0x23c) + 0xc))(*(int **)(param_1 + 0x23c),uVar3,&local_14);
      FUN_00404928(iVar1 + 0x38,local_14);
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_00465d20(param_1,iVar1 + 8,&local_20);
    *(undefined4 *)(iVar1 + 8) = local_20;
    *(undefined4 *)(iVar1 + 0xc) = local_1c;
  }
  puVar2 = puStack_30;
  *(uint *)(local_8 + 0xc) = (local_9 ^ 1) & 0x7f;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0054c69c;
  puStack_34 = (undefined1 *)0x54c687;
  FUN_00404ff0(&local_18,uStack_38,puVar2);
  puStack_34 = (undefined1 *)0x54c694;
  FUN_004048f8(&local_14,2);
  return;
}

