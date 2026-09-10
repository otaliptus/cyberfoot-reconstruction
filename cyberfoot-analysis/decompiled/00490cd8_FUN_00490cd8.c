// Address: 00490cd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00490cd8(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  int *local_20;
  undefined4 *local_1c;
  int local_14;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x1cc) + 0x18);
  iVar3 = *piVar2;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  iVar6 = *(int *)(param_1 + 0x70);
  local_14 = 0;
  local_20 = param_3;
  local_1c = param_2;
  if (0 < param_4) {
    do {
      pbVar9 = (byte *)*local_1c;
      pcVar10 = (char *)*local_20;
      for (iVar11 = iVar6; iVar11 != 0; iVar11 = iVar11 + -1) {
        bVar1 = *pbVar9;
        pbVar7 = pbVar9 + 1;
        pbVar8 = pbVar9 + 2;
        pbVar9 = pbVar9 + 3;
        *pcVar10 = *(char *)(iVar3 + (uint)bVar1) + *(char *)(iVar4 + (uint)*pbVar7) +
                   *(char *)(iVar5 + (uint)*pbVar8);
        pcVar10 = pcVar10 + 1;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
    } while (local_14 < param_4);
  }
  return;
}

