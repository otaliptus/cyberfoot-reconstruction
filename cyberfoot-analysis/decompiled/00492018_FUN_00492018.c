// Address: 00492018
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492018(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *local_74;
  undefined4 *local_70;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_3c;
  byte *local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x1cc);
  iVar3 = *(int *)(iVar2 + 0x18);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x144);
  iVar6 = *(int *)(iVar2 + 0x28);
  iVar7 = **(int **)(param_1 + 0x88);
  iVar8 = *(int *)(*(int *)(param_1 + 0x88) + 4);
  iVar9 = *(int *)(*(int *)(param_1 + 0x88) + 8);
  local_4c = 0;
  local_74 = param_3;
  local_70 = param_2;
  if (0 < param_4) {
    do {
      local_38 = (byte *)*local_70;
      local_3c = (undefined1 *)*local_74;
      if (*(int *)(iVar2 + 0x24) == 0) {
        local_44 = 1;
        local_48 = 3;
        local_34 = *(short **)(iVar2 + 0x20);
        *(undefined4 *)(iVar2 + 0x24) = 1;
      }
      else {
        local_38 = local_38 + (iVar4 + -1) * 3;
        local_3c = local_3c + iVar4 + -1;
        local_44 = -1;
        local_48 = -3;
        local_34 = (short *)(*(int *)(iVar2 + 0x20) + (iVar4 * 3 + 3) * 2);
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      iVar14 = 0;
      iVar16 = 0;
      iVar18 = 0;
      iVar1 = iVar4;
      while( true ) {
        if (iVar1 == 0) break;
        uVar10 = (uint)*(byte *)(iVar5 + *(int *)(iVar6 + (iVar18 + local_34[local_48] + 8 >> 4) * 4
                                                 ) + (uint)*local_38);
        uVar11 = (uint)*(byte *)(iVar5 + *(int *)(iVar6 + (iVar16 + local_34[local_48 + 1] + 8 >> 4)
                                                          * 4) + (uint)local_38[1]);
        uVar13 = (uint)*(byte *)(iVar5 + *(int *)(iVar6 + (iVar14 + local_34[local_48 + 2] + 8 >> 4)
                                                          * 4) + (uint)local_38[2]);
        iVar18 = (int)uVar10 >> 3;
        iVar16 = (int)uVar11 >> 2;
        iVar14 = (int)uVar13 >> 3;
        puVar12 = (ushort *)(*(int *)(iVar3 + iVar18 * 4) + iVar16 * 0x40 + iVar14 * 2);
        if (*puVar12 == 0) {
          FUN_00491e6c(param_1,iVar18,iVar16,iVar14);
        }
        iVar18 = *puVar12 - 1;
        *local_3c = (char)iVar18;
        iVar19 = uVar10 - *(byte *)(iVar7 + iVar18);
        iVar17 = uVar11 - *(byte *)(iVar8 + iVar18);
        iVar15 = uVar13 - *(byte *)(iVar9 + iVar18);
        *local_34 = (short)local_28 + (short)iVar19 * 3;
        local_28 = local_1c + iVar19 * 5;
        iVar18 = iVar19 * 7;
        local_34[1] = (short)local_2c + (short)iVar17 * 3;
        local_2c = local_20 + iVar17 * 5;
        iVar16 = iVar17 * 7;
        local_34[2] = (short)local_30 + (short)iVar15 * 3;
        local_30 = local_24 + iVar15 * 5;
        iVar14 = iVar15 * 7;
        local_38 = local_38 + local_48;
        local_3c = local_3c + local_44;
        local_34 = local_34 + local_48;
        iVar1 = iVar1 + -1;
        local_24 = iVar15;
        local_20 = iVar17;
        local_1c = iVar19;
      }
      *local_34 = (short)local_28;
      local_34[1] = (short)local_2c;
      local_34[2] = (short)local_30;
      local_4c = local_4c + 1;
      local_74 = local_74 + 1;
      local_70 = local_70 + 1;
    } while (local_4c < param_4);
  }
  return;
}

