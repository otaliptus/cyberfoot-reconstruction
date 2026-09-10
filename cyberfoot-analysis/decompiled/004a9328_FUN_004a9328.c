// Address: 004a9328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9328(int param_1,byte param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (&DAT_00669384)[param_2];
  pbVar1 = (byte *)(param_3 + iVar2);
  do {
    *param_5 = (ushort)*pbVar1;
    param_5 = param_5 + 1;
    pbVar1 = pbVar1 + (&DAT_006693bc)[param_2];
    iVar2 = iVar2 + (&DAT_006693bc)[param_2];
  } while (iVar2 < *(int *)(param_1 + 0x18));
  return;
}

