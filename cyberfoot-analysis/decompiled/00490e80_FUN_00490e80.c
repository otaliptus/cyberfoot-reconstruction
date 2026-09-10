// Address: 00490e80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00490e80(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  char *pcVar21;
  int *local_38;
  undefined4 *local_34;
  int local_28;
  
  iVar6 = *(int *)(param_1 + 0x1cc);
  piVar7 = *(int **)(iVar6 + 0x18);
  iVar8 = *piVar7;
  iVar9 = piVar7[1];
  iVar10 = piVar7[2];
  iVar11 = *(int *)(param_1 + 0x70);
  local_28 = 0;
  local_38 = param_3;
  local_34 = param_2;
  if (0 < param_4) {
    do {
      iVar12 = *(int *)(iVar6 + 0x30);
      pcVar21 = (char *)*local_38;
      iVar13 = *(int *)(iVar6 + 0x34);
      iVar19 = iVar12 * 0x40;
      pbVar18 = (byte *)*local_34;
      iVar14 = *(int *)(iVar6 + 0x38);
      iVar15 = *(int *)(iVar6 + 0x3c);
      uVar20 = 0;
      for (iVar4 = iVar11; iVar4 != 0; iVar4 = iVar4 + -1) {
        bVar5 = *pbVar18;
        pbVar16 = pbVar18 + 1;
        iVar1 = uVar20 * 4;
        pbVar17 = pbVar18 + 2;
        iVar2 = uVar20 * 4;
        pbVar18 = pbVar18 + 3;
        iVar3 = uVar20 * 4;
        uVar20 = uVar20 + 1 & 0xf;
        *pcVar21 = *(char *)(iVar8 + (uint)bVar5 + *(int *)(iVar13 + iVar19 + iVar1)) +
                   *(char *)(iVar9 + (uint)*pbVar16 + *(int *)(iVar14 + iVar19 + iVar2)) +
                   *(char *)(iVar10 + (uint)*pbVar17 + *(int *)(iVar15 + iVar19 + iVar3));
        pcVar21 = pcVar21 + 1;
      }
      *(uint *)(iVar6 + 0x30) = iVar12 + 1U & 0xf;
      local_28 = local_28 + 1;
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
    } while (local_28 < param_4);
  }
  return;
}

