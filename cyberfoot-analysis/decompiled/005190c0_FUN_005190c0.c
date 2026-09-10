// Address: 005190c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005190c0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_4 + -4);
  if (param_3 != 0) {
    param_2[*(int *)(*piVar3 + 0x44)] = param_2[*(int *)(*piVar3 + 0x44)] + param_3 * 2;
    param_2[-*(int *)(*piVar3 + 0x44)] = param_2[-*(int *)(*piVar3 + 0x44)] + param_3 * 2;
    iVar2 = param_3 * 4;
    piVar1 = (int *)(param_1 + *(int *)(*piVar3 + 0x44) * 4);
    *piVar1 = *piVar1 + iVar2;
    param_2[-*(int *)(*piVar3 + 4)] = param_2[-*(int *)(*piVar3 + 4)] + iVar2;
    param_2[*(int *)(*piVar3 + 4)] = param_2[*(int *)(*piVar3 + 4)] + iVar2;
    piVar3 = (int *)(param_1 + *(int *)(*piVar3 + 4) * 4);
    *piVar3 = *piVar3 + param_3 * 8;
    *param_2 = *param_2 + param_3 * 8;
  }
  return;
}

