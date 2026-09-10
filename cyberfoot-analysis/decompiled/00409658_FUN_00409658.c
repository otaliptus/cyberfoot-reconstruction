// Address: 00409658
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00409658(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  uVar2 = param_3 & 3;
  iVar1 = (int)param_3 >> 2;
  bVar5 = iVar1 == 0;
  if (-1 < iVar1) {
    do {
      piVar3 = param_1;
      piVar4 = param_2;
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      piVar4 = param_2 + 1;
      piVar3 = param_1 + 1;
      bVar5 = *param_1 == *param_2;
      param_1 = piVar3;
      param_2 = piVar4;
    } while (bVar5);
    if (!bVar5) {
      return 0;
    }
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar5 = (char)*piVar3 == (char)*piVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) {
      return 0;
    }
  }
  return 1;
}

