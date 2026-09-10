// Address: 0049db78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049db78(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int *local_34;
  int local_30 [4];
  int local_20 [4];
  
  iVar2 = *(int *)(param_1 + 0x168);
  FUN_0048aaf4();
  FUN_0048aaf4();
  local_34 = (int *)(param_1 + 0xf4);
  for (local_38 = 0; local_38 < *(int *)(param_1 + 0xf0); local_38 = local_38 + 1) {
    iVar5 = *(int *)(*local_34 + 0x14);
    iVar3 = *(int *)(*local_34 + 0x18);
    if (local_30[iVar5] == 0) {
      piVar1 = (int *)(param_1 + 0x54 + iVar5 * 4);
      if (*piVar1 == 0) {
        iVar4 = FUN_004977f8(param_1);
        *piVar1 = iVar4;
      }
      FUN_0049d994(param_1,*piVar1,*(undefined4 *)(iVar2 + 0x4c + iVar5 * 4));
      local_30[iVar5] = 1;
    }
    if (local_20[iVar3] == 0) {
      piVar1 = (int *)(param_1 + 100 + iVar3 * 4);
      if (*piVar1 == 0) {
        iVar5 = FUN_004977f8(param_1);
        *piVar1 = iVar5;
      }
      FUN_0049d994(param_1,*piVar1,*(undefined4 *)(iVar2 + 0x5c + iVar3 * 4));
      local_20[iVar3] = 1;
    }
    local_34 = local_34 + 1;
  }
  return;
}

