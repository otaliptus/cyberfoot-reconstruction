// Address: 004a91e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a91e0(int param_1,byte param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (&DAT_00669384)[param_2];
  pbVar2 = (byte *)(iVar1 * 3 + param_3);
  do {
    *param_5 = (ushort)*(byte *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[2]);
    param_5[1] = (ushort)*(byte *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[1]);
    param_5[2] = (ushort)*(byte *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)*pbVar2);
    param_5 = param_5 + 3;
    pbVar2 = pbVar2 + (&DAT_006693bc)[param_2] * 3;
    iVar1 = iVar1 + (&DAT_006693bc)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x18));
  return;
}

