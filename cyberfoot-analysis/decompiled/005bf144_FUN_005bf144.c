// Address: 005bf144
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf144(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_005bf226;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x248) == '\0') {
    *(undefined1 *)(param_1 + 0x248) = 1;
    puStack_34 = &LAB_005bf209;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    iVar3 = *(int *)(*(int *)(param_1 + 0x244) + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(local_8 + 0x208) + 0x40) + iVar2 * 4) == local_c) {
          piVar1 = (int *)FUN_0041e01c(*(undefined4 *)(local_8 + 0x244),iVar2);
          (**(code **)(*piVar1 + 8))(piVar1,local_10);
          FUN_005bc040(piVar1,&local_14);
          FUN_005bef4c(local_8,local_c,local_14);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *in_FS_OFFSET = uStack_38;
    *(undefined1 *)(local_8 + 0x248) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005bf22d;
  puStack_28 = (undefined1 *)0x5bf225;
  FUN_00406880(&local_14,uStack_2c,&stack0xfffffffc);
  return;
}

