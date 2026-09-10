// Address: 0043052c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043052c(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  int *local_8;
  
  iVar1 = param_1[10];
  if (((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) && (*(int *)(iVar1 + 0x6c) != 0)
     ) {
    puStack_18 = (undefined1 *)0x0;
    puStack_1c = (undefined1 *)0x0;
    uStack_20 = 0x430559;
    local_8 = param_1;
    FUN_004208f4(*(undefined4 *)(iVar1 + 0x6c));
    local_14 = local_8[4];
    local_10 = local_8[5];
    puStack_1c = &LAB_004305af;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    local_8[4] = 0;
    local_8[5] = 0;
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x54))(local_8,*(undefined4 *)(local_8[10] + 0x6c));
    *in_FS_OFFSET = uStack_20;
    local_8[4] = local_14;
    local_8[5] = local_10;
    return;
  }
  iVar1 = param_1[10];
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

