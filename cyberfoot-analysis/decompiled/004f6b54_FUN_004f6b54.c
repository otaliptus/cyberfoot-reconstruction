// Address: 004f6b54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6b54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_c;
  
  uVar1 = FUN_0041e01c(*(undefined4 *)(*(int *)(param_4 + -4) + 0x1034),param_1);
  uVar3 = *(undefined4 *)(*(int *)(param_4 + -4) + 0x1034);
  uVar2 = FUN_0041e01c(uVar3,param_2);
  FUN_0041e168(uVar3,param_1,uVar2);
  FUN_0041e168(*(undefined4 *)(*(int *)(param_4 + -4) + 0x1034),param_2,uVar1);
  local_c = *(int *)(*(int *)(param_4 + -4) + 0x1008);
  if (-1 < local_c + -1) {
    iVar4 = 0;
    do {
      uVar3 = FUN_0041e01c(*(undefined4 *)(*(int *)(param_4 + -4) + 4 + iVar4 * 4),param_1);
      uVar1 = FUN_0041e01c(*(undefined4 *)(*(int *)(param_4 + -4) + 4 + iVar4 * 4),param_2);
      FUN_0041e168(*(undefined4 *)(*(int *)(param_4 + -4) + 4 + iVar4 * 4),param_1,uVar1);
      FUN_0041e168(*(undefined4 *)(*(int *)(param_4 + -4) + 4 + iVar4 * 4),param_2,uVar3);
      iVar4 = iVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

