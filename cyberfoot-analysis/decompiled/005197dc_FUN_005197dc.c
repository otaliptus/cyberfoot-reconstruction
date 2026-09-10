// Address: 005197dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005197dc(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) break;
  } while (*(int *)(param_4 + param_2 * 4) == 0);
  iVar1 = *(int *)(param_4 + param_2 * 4);
  *(undefined4 *)(param_4 + param_2 * 4) = *(undefined4 *)(iVar1 + 0x18);
  iVar4 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x1c + iVar3 * 4);
    if (iVar2 != 0) {
      iVar4 = iVar4 + *(int *)(iVar2 + 0xc);
      local_c = local_c + *(int *)(iVar2 + 0x10);
      local_10 = local_10 + *(int *)(iVar2 + 0x14);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + *(int *)(iVar2 + 8);
      FUN_00403a84(*(undefined4 *)(iVar1 + 0x1c + iVar3 * 4));
      *(undefined4 *)(iVar1 + 0x1c + iVar3 * 4) = 0;
      local_14 = local_14 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  *(undefined1 *)(iVar1 + 4) = 1;
  *(int *)(iVar1 + 0xc) = iVar4;
  *(int *)(iVar1 + 0x10) = local_c;
  *(int *)(iVar1 + 0x14) = local_10;
  *param_3 = *param_3 - (local_14 + -1);
  return;
}

