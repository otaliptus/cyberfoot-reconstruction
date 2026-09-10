// Address: 00490d74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00490d74(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int *local_38;
  int *local_34;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x1cc);
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x70);
  local_20 = 0;
  local_38 = param_2;
  local_28 = param_3;
  if (0 < param_4) {
    do {
      FUN_00497770(*local_28,iVar4);
      iVar5 = *(int *)(iVar2 + 0x30);
      local_1c = 0;
      local_34 = (int *)(iVar2 + 0x34);
      if (0 < iVar3) {
        do {
          pcVar9 = (char *)*local_28;
          pbVar10 = (byte *)(*local_38 + local_1c);
          iVar6 = *(int *)(*(int *)(iVar2 + 0x18) + local_1c * 4);
          iVar7 = *local_34;
          uVar8 = 0;
          for (iVar11 = iVar4; iVar11 != 0; iVar11 = iVar11 + -1) {
            iVar1 = uVar8 * 4;
            uVar8 = uVar8 + 1 & 0xf;
            *pcVar9 = *pcVar9 + *(char *)(iVar6 + (uint)*pbVar10 +
                                         *(int *)(iVar7 + iVar5 * 0x40 + iVar1));
            pcVar9 = pcVar9 + 1;
            pbVar10 = pbVar10 + iVar3;
          }
          local_1c = local_1c + 1;
          local_34 = local_34 + 1;
        } while (local_1c < iVar3);
      }
      *(uint *)(iVar2 + 0x30) = iVar5 + 1U & 0xf;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_28 = local_28 + 1;
    } while (local_20 < param_4);
  }
  return;
}

