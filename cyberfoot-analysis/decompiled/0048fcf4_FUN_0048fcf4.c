// Address: 0048fcf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048fcf4(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  
  iVar3 = *(int *)(param_1 + 0x1c4);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar5 = *(int *)(param_1 + 0x144);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar8 = *(byte **)(*param_2 + param_3 * 4);
  pbVar9 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar10 = *(byte **)(param_2[2] + param_3 * 4);
  puVar15 = (undefined1 *)*param_4;
  for (uVar13 = *(uint *)(param_1 + 0x70) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    iVar11 = *(int *)(iVar4 + (uint)bVar2 * 4);
    iVar16 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar7 + (uint)bVar2 * 4) >> 0x10;
    iVar12 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar14 = (uint)*pbVar8;
    puVar15[2] = *(undefined1 *)(iVar5 + uVar14 + iVar11);
    puVar15[1] = *(undefined1 *)(iVar5 + uVar14 + iVar16);
    *puVar15 = *(undefined1 *)(iVar5 + uVar14 + iVar12);
    uVar14 = (uint)pbVar8[1];
    pbVar8 = pbVar8 + 2;
    puVar15[5] = *(undefined1 *)(iVar5 + uVar14 + iVar11);
    puVar15[4] = *(undefined1 *)(iVar5 + uVar14 + iVar16);
    puVar15[3] = *(undefined1 *)(iVar5 + uVar14 + iVar12);
    puVar15 = puVar15 + 6;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar9 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar10 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar9 * 4);
    uVar13 = (uint)*pbVar8;
    puVar15[2] = *(undefined1 *)(iVar5 + uVar13 + *(int *)(iVar4 + (uint)*pbVar10 * 4));
    puVar15[1] = *(undefined1 *)(iVar5 + uVar13 + (iVar3 + iVar7 >> 0x10));
    *puVar15 = *(undefined1 *)(iVar5 + uVar13 + iVar6);
  }
  return;
}

