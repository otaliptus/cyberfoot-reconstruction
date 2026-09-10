// Address: 0048fe6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048fe6c(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  iVar3 = *(int *)(param_1 + 0x1c4);
  iVar4 = *(int *)(param_1 + 0x144);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar18 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar7 = *(byte **)(*param_2 + param_3 * 8);
  pbVar8 = *(byte **)(*param_2 + 4 + param_3 * 8);
  pbVar9 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar10 = *(byte **)(param_2[2] + param_3 * 4);
  puVar14 = (undefined1 *)*param_4;
  puVar11 = (undefined1 *)param_4[1];
  for (uVar15 = *(uint *)(param_1 + 0x70) >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    iVar12 = *(int *)(iVar5 + (uint)bVar2 * 4);
    iVar17 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar18 + (uint)bVar2 * 4) >> 0x10;
    iVar13 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar16 = (uint)*pbVar7;
    puVar14[2] = *(undefined1 *)(iVar4 + uVar16 + iVar12);
    puVar14[1] = *(undefined1 *)(iVar4 + uVar16 + iVar17);
    *puVar14 = *(undefined1 *)(iVar4 + uVar16 + iVar13);
    uVar16 = (uint)pbVar7[1];
    pbVar7 = pbVar7 + 2;
    puVar14[5] = *(undefined1 *)(iVar4 + uVar16 + iVar12);
    puVar14[4] = *(undefined1 *)(iVar4 + uVar16 + iVar17);
    puVar14[3] = *(undefined1 *)(iVar4 + uVar16 + iVar13);
    puVar14 = puVar14 + 6;
    uVar16 = (uint)*pbVar8;
    puVar11[2] = *(undefined1 *)(iVar4 + uVar16 + iVar12);
    puVar11[1] = *(undefined1 *)(iVar4 + uVar16 + iVar17);
    *puVar11 = *(undefined1 *)(iVar4 + uVar16 + iVar13);
    uVar16 = (uint)pbVar8[1];
    pbVar8 = pbVar8 + 2;
    puVar11[5] = *(undefined1 *)(iVar4 + uVar16 + iVar12);
    puVar11[4] = *(undefined1 *)(iVar4 + uVar16 + iVar17);
    puVar11[3] = *(undefined1 *)(iVar4 + uVar16 + iVar13);
    puVar11 = puVar11 + 6;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    iVar5 = *(int *)(iVar5 + (uint)*pbVar10 * 4);
    iVar18 = *(int *)(iVar3 + (uint)*pbVar9 * 4) + *(int *)(iVar18 + (uint)*pbVar10 * 4) >> 0x10;
    iVar3 = *(int *)(iVar6 + (uint)*pbVar9 * 4);
    uVar15 = (uint)*pbVar7;
    puVar14[2] = *(undefined1 *)(iVar4 + uVar15 + iVar5);
    puVar14[1] = *(undefined1 *)(iVar4 + uVar15 + iVar18);
    *puVar14 = *(undefined1 *)(iVar4 + uVar15 + iVar3);
    uVar15 = (uint)*pbVar8;
    puVar11[2] = *(undefined1 *)(iVar4 + uVar15 + iVar5);
    puVar11[1] = *(undefined1 *)(iVar4 + uVar15 + iVar18);
    *puVar11 = *(undefined1 *)(iVar4 + uVar15 + iVar3);
  }
  return;
}

