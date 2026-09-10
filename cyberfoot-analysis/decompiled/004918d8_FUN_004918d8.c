// Address: 004918d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004918d8(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar5 = *param_2;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x18) + iVar5 * 4);
  for (; iVar3 = param_2[2], iVar5 <= param_2[1]; iVar5 = iVar5 + 1) {
    for (; iVar3 <= param_2[3]; iVar3 = iVar3 + 1) {
      puVar7 = (ushort *)(*piVar1 + iVar3 * 0x40 + param_2[4] * 2);
      for (iVar6 = param_2[4]; iVar6 <= param_2[5]; iVar6 = iVar6 + 1) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        uVar4 = (uint)uVar2;
        if (uVar4 != 0) {
          local_28 = local_28 + uVar4;
          local_24 = local_24 + (iVar5 * 8 + 4) * uVar4;
          local_20 = local_20 + (iVar3 * 4 + 2) * uVar4;
          local_1c = local_1c + (iVar6 * 8 + 4) * uVar4;
        }
      }
    }
    piVar1 = piVar1 + 1;
  }
  iVar5 = local_28 >> 1;
  piVar1 = *(int **)(param_1 + 0x88);
  *(char *)(*piVar1 + param_3) = (char)((iVar5 + local_24) / local_28);
  *(char *)(piVar1[1] + param_3) = (char)((iVar5 + local_20) / local_28);
  *(char *)(piVar1[2] + param_3) = (char)((iVar5 + local_1c) / local_28);
  return;
}

