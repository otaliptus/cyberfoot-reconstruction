// Address: 004946d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004946d0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_30;
  int *local_2c;
  int local_24;
  int local_20;
  byte *local_14;
  
  iVar2 = *param_4;
  local_20 = 0;
  local_30 = param_3;
  while (local_20 < *(int *)(param_1 + 0x138)) {
    local_24 = 0;
    local_2c = (int *)(iVar2 + local_20 * 4);
    do {
      pbVar3 = (byte *)*local_30;
      if (local_24 == 0) {
        local_14 = (byte *)local_30[-1];
      }
      else {
        local_14 = (byte *)local_30[1];
      }
      puVar4 = (undefined1 *)*local_2c;
      local_20 = local_20 + 1;
      local_2c = local_2c + 1;
      iVar7 = (uint)*pbVar3 * 3 + (uint)*local_14;
      iVar8 = (uint)pbVar3[1] * 3 + (uint)local_14[1];
      local_14 = local_14 + 2;
      pbVar3 = pbVar3 + 2;
      *puVar4 = (char)(iVar7 * 4 + 8 >> 4);
      puVar4[1] = (char)(iVar7 * 3 + iVar8 + 7 >> 4);
      for (iVar6 = *(int *)(param_2 + 0x28) + -2; puVar5 = puVar4 + 2, iVar6 != 0;
          iVar6 = iVar6 + -1) {
        bVar1 = *local_14;
        local_14 = local_14 + 1;
        iVar9 = (uint)*pbVar3 * 3 + (uint)bVar1;
        pbVar3 = pbVar3 + 1;
        *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
        puVar4[3] = (char)(iVar8 * 3 + iVar9 + 7 >> 4);
        iVar7 = iVar8;
        iVar8 = iVar9;
        puVar4 = puVar5;
      }
      *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
      puVar4[3] = (char)(iVar8 * 4 + 7 >> 4);
      local_24 = local_24 + 1;
    } while (local_24 < 2);
    local_30 = local_30 + 1;
  }
  return;
}

