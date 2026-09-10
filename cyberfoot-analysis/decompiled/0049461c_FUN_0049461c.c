// Address: 0049461c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049461c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *local_14;
  int local_10;
  
  local_14 = (undefined4 *)*param_4;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x138); local_10 = local_10 + 1) {
    pbVar2 = (byte *)*local_14;
    bVar1 = *(byte *)*param_3;
    pbVar4 = (byte *)*param_3 + 1;
    *pbVar2 = bVar1;
    pbVar2[1] = (byte)((int)((uint)bVar1 * 3 + (uint)*pbVar4 + 2) >> 2);
    for (iVar5 = *(int *)(param_2 + 0x28) + -2; pbVar3 = pbVar2 + 2, iVar5 != 0; iVar5 = iVar5 + -1)
    {
      bVar1 = *pbVar4;
      *pbVar3 = (byte)((int)((uint)pbVar4[-1] + (uint)bVar1 * 3 + 1) >> 2);
      pbVar2[3] = (byte)((int)((uint)bVar1 * 3 + (uint)pbVar4[1] + 2) >> 2);
      pbVar4 = pbVar4 + 1;
      pbVar2 = pbVar3;
    }
    bVar1 = *pbVar4;
    *pbVar3 = (byte)((int)((uint)bVar1 * 3 + (uint)pbVar4[-1] + 1) >> 2);
    pbVar2[3] = bVar1;
    local_14 = local_14 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

