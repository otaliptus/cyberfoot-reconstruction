// Address: 005f88dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_get_substituto(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24 [8];
  
  puVar1 = PTR_DAT_0066ae14;
  iVar2 = 3;
  piVar5 = local_24 + 3;
  local_24[6] = param_3;
  local_24[7] = param_2;
  do {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 3;
  piVar5 = local_24;
  do {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae14);
  iVar2 = local_24[3];
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x20) == local_24[7]) &&
         (iVar2 = iVar4, *(int *)(*(int *)puVar1 + 4 + iVar4 * 0x20) == local_24[6])) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = local_24[3];
    } while (iVar3 != 0);
  }
  local_24[3] = iVar2;
  iVar2 = local_24[4];
  if ((-1 < local_24[3]) &&
     (iVar3 = FUN_00405ef4(*(undefined4 *)puVar1), iVar2 = local_24[4], -1 < iVar3)) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x20) == local_24[7]) &&
         (iVar2 = iVar4,
         *(int *)(*(int *)puVar1 + 4 + iVar4 * 0x20) ==
         *(int *)(*(int *)puVar1 + local_24[3] * 0x20))) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = local_24[4];
    } while (iVar3 != 0);
  }
  local_24[4] = iVar2;
  if ((-1 < local_24[4]) && (iVar2 = FUN_00405ef4(*(undefined4 *)puVar1), -1 < iVar2)) {
    iVar2 = iVar2 + 1;
    local_24[5] = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + 0x10 + local_24[5] * 0x20) == local_24[7]) &&
         (*(int *)(*(int *)puVar1 + 4 + local_24[5] * 0x20) ==
          *(int *)(*(int *)puVar1 + local_24[4] * 0x20))) {
        break;
      }
      local_24[5] = local_24[5] + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar3 = -3;
  piVar5 = local_24 + 5;
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (-1 < *piVar5) {
      iVar4 = iVar2 + 1;
      local_24[iVar2] = *piVar5;
    }
    piVar5 = piVar5 + -1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar4;
  } while (iVar3 != 0);
  *param_4 = local_24[0];
  param_4[1] = local_24[1];
  param_4[2] = local_24[2];
  return;
}

