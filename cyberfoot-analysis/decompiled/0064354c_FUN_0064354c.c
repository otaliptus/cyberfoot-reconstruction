// Address: 0064354c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064354c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [4];
  
  puStack_30 = &stack0xfffffffc;
  local_14[3] = 0;
  local_14[2] = 0;
  local_14[1] = 0;
  local_14[0] = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_34 = &LAB_00643640;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00404ff0(local_14 + 3);
  iVar3 = 3;
  piVar4 = local_14;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 1;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar3 * 4);
    if (iVar1 - 1U < 9) {
      local_14[0] = local_14[0] + 1;
    }
    else if (iVar1 - 10U < 8) {
      local_14[1] = local_14[1] + 1;
    }
    else if (iVar1 - 0x12U < 8) {
      local_14[2] = local_14[2] + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xb);
  FUN_00409dd8(local_14[0],&local_1c);
  FUN_00409dd8(local_14[1],&local_20);
  uVar5 = local_20;
  FUN_00409dd8(local_14[2],&local_24);
  uVar2 = local_24;
  FUN_00404c64(&local_18,5);
  FUN_004051d4(local_14 + 3,local_18);
  FUN_0040502c(param_2,local_14[3]);
  *in_FS_OFFSET = uVar2;
  FUN_004048f8(&local_24,4,uVar5,&LAB_00643647);
  FUN_00404ff0(local_14 + 3);
  return;
}

