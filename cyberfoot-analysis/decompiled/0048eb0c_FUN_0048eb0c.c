// Address: 0048eb0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048eb0c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  short local_14c;
  short local_148;
  int local_144;
  int local_140;
  int local_130;
  int *local_12c;
  int *local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int *local_114;
  int aiStack_110 [64];
  
  iVar1 = param_1[0x6f];
  iVar2 = param_1[0x65];
  uVar13 = 1 << ((byte)param_1[0x67] & 0x1f);
  uVar5 = -1 << ((byte)param_1[0x67] & 0x1f);
  if (((param_1[0x45] == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar6 = FUN_0048e4d8(param_1), iVar6 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      local_124 = *(undefined4 *)param_1[6];
      local_120 = ((undefined4 *)param_1[6])[1];
      iVar6 = *(int *)(iVar1 + 0xc);
      iVar14 = *(int *)(iVar1 + 0x10);
      local_140 = *(int *)(iVar1 + 0x14);
      iVar3 = *param_2;
      iVar11 = *(int *)(iVar1 + 0x3c);
      local_130 = 0;
      local_144 = param_1[100];
      local_14c = (short)uVar13;
      local_148 = (short)uVar5;
      local_114 = param_1;
      if (local_140 == 0) {
        local_128 = aiStack_110;
        local_12c = &DAT_00665684 + local_144;
        for (; local_144 <= iVar2; local_144 = local_144 + 1) {
          if (iVar14 < 8) {
            iVar6 = FUN_0048f3e0(&local_124,iVar6,iVar14,0);
            if (iVar6 == 0) goto LAB_0048ef02;
            iVar14 = local_118;
            iVar6 = local_11c;
            if (7 < local_118) goto LAB_0048ec48;
            uVar7 = 1;
LAB_0048ec78:
            uVar8 = FUN_0048f52c(&local_124,iVar6,iVar14,uVar7,iVar11);
            iVar14 = local_118;
            iVar6 = local_11c;
            if ((int)uVar8 < 0) goto LAB_0048ef02;
          }
          else {
LAB_0048ec48:
            uVar8 = iVar6 >> ((char)iVar14 - 8U & 0x1f) & 0xff;
            iVar15 = *(int *)(iVar11 + 0x90 + uVar8 * 4);
            if (iVar15 == 0) {
              uVar7 = 9;
              goto LAB_0048ec78;
            }
            uVar8 = (uint)*(byte *)(iVar11 + 0x490 + uVar8);
            iVar14 = iVar14 - iVar15;
          }
          iVar15 = (int)uVar8 >> 4;
          if ((uVar8 & 0xf) == 0) {
            uVar8 = 0;
            if (iVar15 != 0xf) {
              local_140 = 1 << ((byte)iVar15 & 0x1f);
              if (iVar15 != 0) {
                if ((iVar14 < iVar15) &&
                   (iVar11 = FUN_0048f3e0(&local_124,iVar6,iVar14,iVar15), iVar14 = local_118,
                   iVar6 = local_11c, iVar11 == 0)) goto LAB_0048ef02;
                iVar14 = iVar14 - iVar15;
                local_140 = local_140 + (iVar6 >> ((byte)iVar14 & 0x1f) & local_140 - 1U);
              }
              break;
            }
          }
          else {
            if ((uVar8 & 0xf) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x76;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            }
            if ((iVar14 < 1) &&
               (iVar9 = FUN_0048f3e0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
               iVar6 = local_11c, iVar9 == 0)) goto LAB_0048ef02;
            iVar14 = iVar14 + -1;
            uVar8 = uVar5;
            if ((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) {
              uVar8 = uVar13;
            }
          }
          do {
            psVar10 = (short *)(*local_12c * 2 + iVar3);
            if (*psVar10 == 0) {
              iVar15 = iVar15 + -1;
              if (iVar15 < 0) break;
            }
            else {
              if ((iVar14 < 1) &&
                 (iVar9 = FUN_0048f3e0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
                 iVar6 = local_11c, iVar9 == 0)) goto LAB_0048ef02;
              iVar14 = iVar14 + -1;
              if (((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar13) == 0)) {
                if (*psVar10 < 0) {
                  *psVar10 = *psVar10 + local_148;
                }
                else {
                  *psVar10 = *psVar10 + local_14c;
                }
              }
            }
            local_144 = local_144 + 1;
            local_12c = local_12c + 1;
          } while (local_144 <= iVar2);
          if (uVar8 != 0) {
            iVar15 = *local_12c;
            *(short *)(iVar3 + iVar15 * 2) = (short)uVar8;
            *local_128 = iVar15;
            local_130 = local_130 + 1;
            local_128 = local_128 + 1;
          }
          local_12c = local_12c + 1;
        }
      }
      if (local_140 != 0) {
        for (; local_144 <= iVar2; local_144 = local_144 + 1) {
          psVar10 = (short *)((&DAT_00665684)[local_144] * 2 + iVar3);
          if (*psVar10 != 0) {
            if ((iVar14 < 1) &&
               (iVar11 = FUN_0048f3e0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
               iVar6 = local_11c, iVar11 == 0)) {
LAB_0048ef02:
              piVar12 = aiStack_110 + local_130;
              for (; 0 < local_130; local_130 = local_130 + -1) {
                piVar12 = piVar12 + -1;
                *(undefined2 *)(iVar3 + *piVar12 * 2) = 0;
              }
              return 0;
            }
            iVar14 = iVar14 + -1;
            if (((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar13) == 0)) {
              if (*psVar10 < 0) {
                *psVar10 = *psVar10 + local_148;
              }
              else {
                *psVar10 = *psVar10 + local_14c;
              }
            }
          }
        }
        local_140 = local_140 + -1;
      }
      puVar4 = (undefined4 *)param_1[6];
      *puVar4 = local_124;
      puVar4[1] = local_120;
      *(int *)(iVar1 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x10) = iVar14;
      *(int *)(iVar1 + 0x14) = local_140;
    }
    uVar7 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

