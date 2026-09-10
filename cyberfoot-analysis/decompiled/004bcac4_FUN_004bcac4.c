// Address: 004bcac4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bcac4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = param_1 + 1;
  if (local_c <= param_2) {
    local_14 = (param_2 - local_c) + 1;
    do {
      FUN_004049c4(*(int *)(param_4 + 8) + -0xc,
                   *(int *)(*(int *)(param_4 + 8) + -4) +
                   *(int *)(*(int *)(param_4 + 8) + -8) * local_c,
                   *(undefined4 *)(*(int *)(param_4 + 8) + -8));
      uVar1 = thunk_FUN_00404db0(*(int *)(param_4 + 8) + -0xc);
      iVar3 = (local_c + -1) * *(int *)(*(int *)(param_4 + 8) + -8) +
              *(int *)(*(int *)(param_4 + 8) + -4);
      for (iVar4 = local_c; param_1 < iVar4; iVar4 = iVar4 + -1) {
        iVar2 = (**(code **)(*(int *)(param_4 + 8) + 8))(iVar3,uVar1);
        if (iVar2 < 1) break;
        FUN_00402a04(iVar3,*(int *)(*(int *)(param_4 + 8) + -8) + iVar3,
                     *(undefined4 *)(*(int *)(param_4 + 8) + -8));
        iVar3 = iVar3 - *(int *)(*(int *)(param_4 + 8) + -8);
      }
      FUN_00402a04(uVar1,*(int *)(*(int *)(param_4 + 8) + -4) +
                         *(int *)(*(int *)(param_4 + 8) + -8) * iVar4,
                   *(undefined4 *)(*(int *)(param_4 + 8) + -8));
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

