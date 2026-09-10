// Address: 0061a918
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061a918(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0061ab1a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
    if (param_3 == 1) {
      iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x644);
      FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -0x10));
      FUN_004051d4(&local_c,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -0xc));
    }
    else if (param_3 == 2) {
      iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x644);
      puStack_1c = &stack0xfffffffc;
      FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -8));
      FUN_004051d4(&local_c,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -4));
    }
    else {
      puStack_1c = &stack0xfffffffc;
      if (param_3 == 3) {
        iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x644);
        puStack_1c = &stack0xfffffffc;
        FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -0x10));
        FUN_004051d4(&local_c,*(undefined4 *)(PTR_DAT_0066b368 + iVar1 * 0x10 + -0xc));
      }
    }
    if ((param_4 & 1) == 0) {
      FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + param_4 * 0x1bc,local_c);
      puVar2 = puStack_1c;
    }
    else {
      FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + param_4 * 0x1bc,local_8);
      puVar2 = puStack_1c;
    }
  }
  puStack_1c = puVar2;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) != 9) goto LAB_0061aaff;
  if (param_3 == 1) {
LAB_0061aa58:
    iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x644);
    FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b06c + iVar1 * 0x10 + -0x10));
    FUN_004051d4(&local_c,*(undefined4 *)(PTR_DAT_0066b06c + iVar1 * 0x10 + -0xc));
  }
  else if (param_3 == 2) {
LAB_0061aa92:
    iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x644);
    FUN_004051d4(&local_8,*(undefined4 *)(PTR_DAT_0066b06c + iVar1 * 0x10 + -8));
    FUN_004051d4(&local_c,*(undefined4 *)(PTR_DAT_0066b06c + iVar1 * 0x10 + -4));
  }
  else {
    if (param_3 == 3) goto LAB_0061aa58;
    if (param_3 == 4) goto LAB_0061aa92;
  }
  if ((param_4 & 1) == 0) {
    FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + param_4 * 0x1bc,local_c);
  }
  else {
    FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + param_4 * 0x1bc,local_8);
  }
LAB_0061aaff:
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0061ab21;
  puStack_20 = (undefined1 *)0x61ab19;
  FUN_00405008(&local_c,2,puVar2);
  return;
}

