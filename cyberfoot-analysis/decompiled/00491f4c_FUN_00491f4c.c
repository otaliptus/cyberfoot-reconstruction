// Address: 00491f4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491f4c(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  short *psVar9;
  int *local_28;
  undefined4 *local_24;
  int local_18;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x18);
  iVar4 = *(int *)(param_1 + 0x70);
  local_18 = 0;
  local_28 = param_3;
  local_24 = param_2;
  if (0 < param_4) {
    do {
      pbVar8 = (byte *)*local_24;
      pcVar5 = (char *)*local_28;
      for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        bVar2 = *pbVar8;
        pbVar6 = pbVar8 + 1;
        pbVar7 = pbVar8 + 2;
        pbVar8 = pbVar8 + 3;
        psVar9 = (short *)(*(int *)(iVar3 + ((int)(uint)bVar2 >> 3) * 4) +
                           ((int)(uint)*pbVar6 >> 2) * 0x40 + ((int)(uint)*pbVar7 >> 3) * 2);
        if (*psVar9 == 0) {
          FUN_00491e6c(param_1,(int)(uint)bVar2 >> 3,(int)(uint)*pbVar6 >> 2,(int)(uint)*pbVar7 >> 3
                      );
        }
        *pcVar5 = (char)*psVar9 + -1;
        pcVar5 = pcVar5 + 1;
      }
      local_18 = local_18 + 1;
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    } while (local_18 < param_4);
  }
  return;
}

