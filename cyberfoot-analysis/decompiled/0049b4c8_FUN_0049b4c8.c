// Address: 0049b4c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049b4c8(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_30;
  int *local_2c;
  int local_c;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  FUN_0049b14c(param_3 + -1,*(int *)(param_1 + 0xe8) + 2,*(undefined4 *)(param_1 + 0x1c),iVar1 << 4)
  ;
  iVar11 = *(int *)(param_1 + 0xbc) * 0x10;
  iVar12 = *(int *)(param_1 + 0xbc) * -0x50 + 0x4000;
  local_2c = param_4;
  local_30 = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    puVar2 = (undefined1 *)*local_2c;
    pbVar3 = (byte *)*local_30;
    pbVar4 = (byte *)local_30[2];
    pbVar5 = (byte *)local_30[1];
    pbVar6 = (byte *)local_30[-1];
    *puVar2 = (char)(((uint)*pbVar3 + (uint)pbVar3[1] + (uint)*pbVar5 + (uint)pbVar5[1]) * iVar12 +
                     (((uint)*pbVar6 + (uint)pbVar6[1] + (uint)*pbVar4 + (uint)pbVar4[1] +
                       (uint)*pbVar3 + (uint)pbVar3[2] + (uint)*pbVar5 + (uint)pbVar5[2]) * 2 +
                     (uint)*pbVar6 + (uint)pbVar6[2] + (uint)*pbVar4 + (uint)pbVar4[2]) * iVar11 +
                     0x8000 >> 0x10);
    iVar13 = iVar1 * 8 + -2;
    while( true ) {
      puVar2 = puVar2 + 1;
      pbVar10 = pbVar4 + 2;
      pbVar9 = pbVar6 + 2;
      pbVar8 = pbVar5 + 2;
      pbVar7 = pbVar3 + 2;
      if (iVar13 == 0) break;
      *puVar2 = (char)(((uint)*pbVar7 + (uint)pbVar3[3] + (uint)*pbVar8 + (uint)pbVar5[3]) * iVar12
                       + (((uint)*pbVar9 + (uint)pbVar6[3] + (uint)*pbVar10 + (uint)pbVar4[3] +
                           (uint)pbVar3[1] + (uint)pbVar3[4] + (uint)pbVar5[1] + (uint)pbVar5[4]) *
                          2 + (uint)pbVar6[1] + (uint)pbVar6[4] + (uint)pbVar4[1] + (uint)pbVar4[4])
                         * iVar11 + 0x8000 >> 0x10);
      iVar13 = iVar13 + -1;
      pbVar3 = pbVar7;
      pbVar5 = pbVar8;
      pbVar6 = pbVar9;
      pbVar4 = pbVar10;
    }
    *puVar2 = (char)(((uint)*pbVar7 + (uint)pbVar3[3] + (uint)*pbVar8 + (uint)pbVar5[3]) * iVar12 +
                     (((uint)*pbVar9 + (uint)pbVar6[3] + (uint)*pbVar10 + (uint)pbVar4[3] +
                       (uint)pbVar3[1] + (uint)pbVar3[3] + (uint)pbVar5[1] + (uint)pbVar5[3]) * 2 +
                     (uint)pbVar6[1] + (uint)pbVar6[3] + (uint)pbVar4[1] + (uint)pbVar4[3]) * iVar11
                     + 0x8000 >> 0x10);
    local_30 = local_30 + 2;
    local_2c = local_2c + 1;
  }
  return;
}

