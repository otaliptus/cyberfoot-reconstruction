// Address: 004f7070
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7070(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  
  uVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x1034),param_2);
  uVar3 = *(undefined4 *)(param_1 + 0x1034);
  uVar2 = FUN_0041e01c(uVar3,param_3);
  FUN_0041e168(uVar3,param_2,uVar2);
  FUN_0041e168(*(undefined4 *)(param_1 + 0x1034),param_3,uVar1);
  local_14 = *(int *)(param_1 + 0x1008);
  if (-1 < local_14 + -1) {
    iVar4 = 0;
    do {
      uVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 4 + iVar4 * 4),param_2);
      uVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4 + iVar4 * 4),param_3);
      FUN_0041e168(*(undefined4 *)(param_1 + 4 + iVar4 * 4),param_2,uVar1);
      FUN_0041e168(*(undefined4 *)(param_1 + 4 + iVar4 * 4),param_3,uVar3);
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

