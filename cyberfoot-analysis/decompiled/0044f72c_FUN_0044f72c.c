// Address: 0044f72c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044f72c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  if (*(int *)(*(int *)(param_4 + -4) + 0x248) != 0) {
    puStack_c = (undefined1 *)0x44f754;
    local_8 = param_3;
    FUN_0041ed0c(*(undefined4 *)(*(int *)(param_4 + -4) + 0x23c));
    puStack_c = (undefined1 *)0x400;
    puStack_10 = (undefined1 *)0x44f771;
    local_8 = FUN_004213b8(PTR_PTR_0041c3e0,1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x248));
    puStack_10 = &LAB_0044f7b4;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    FUN_004239d4(local_8);
    FUN_0042208c(local_8,*(undefined4 *)(*(int *)(param_4 + -4) + 0x23c));
    puVar1 = puStack_c;
    *in_FS_OFFSET = uStack_14;
    puStack_c = &DAT_0044f7bb;
    puStack_10 = (undefined1 *)0x44f7b3;
    FUN_00403a84(local_8,uStack_14,puVar1);
    return;
  }
  return;
}

