// Address: 004a936c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a936c(int param_1,byte param_2,int param_3,undefined1 *param_4,undefined1 *param_5)

{
  int iVar1;
  byte *pbVar2;
  int local_8;
  
  local_8 = (&DAT_00669384)[param_2];
  pbVar2 = (byte *)(local_8 * 3 + param_3);
  param_4 = (undefined1 *)((int)param_4 + local_8);
  do {
    *param_5 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[2]);
    param_5[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[1]);
    param_5[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)*pbVar2);
    param_5[3] = *param_4;
    param_5 = param_5 + 4;
    iVar1 = (&DAT_006693bc)[param_2];
    pbVar2 = pbVar2 + iVar1 * 3;
    param_4 = param_4 + iVar1;
    local_8 = local_8 + iVar1;
  } while (local_8 < *(int *)(param_1 + 0x18));
  return;
}

