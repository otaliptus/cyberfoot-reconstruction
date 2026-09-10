// Address: 004a9474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9474(int param_1,byte param_2,int param_3,undefined1 *param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = (&DAT_00669384)[param_2];
  puVar2 = (undefined1 *)(param_3 + iVar3);
  param_4 = (undefined1 *)((int)param_4 + iVar3);
  do {
    *param_5 = *puVar2;
    param_5[1] = *param_4;
    param_5 = param_5 + 2;
    iVar1 = (&DAT_006693bc)[param_2];
    puVar2 = puVar2 + iVar1;
    param_4 = param_4 + iVar1;
    iVar3 = iVar3 + iVar1;
  } while (iVar3 < *(int *)(param_1 + 0x18));
  return;
}

