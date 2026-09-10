// Address: 004902e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004902e4(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *local_14;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x70);
  while (param_4 = param_4 + -1, -1 < param_4) {
    local_10 = 0;
    local_14 = param_2;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined1 *)(*param_5 + local_10);
        puVar3 = *(undefined1 **)(*local_14 + param_3 * 4);
        for (iVar5 = iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + iVar1;
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (local_10 < iVar1);
    }
    param_3 = param_3 + 1;
    param_5 = param_5 + 1;
  }
  return;
}

