// Address: 00401f48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401f48(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  param_1[2] = param_2;
  *(int *)((int)param_1 + param_2 + -4) = param_2;
  if (param_2 < 0x1001) {
    if (param_2 < 0) {
      param_2 = param_2 + 3;
    }
    piVar1 = *(int **)(DAT_0066c624 + -0xc + (param_2 >> 2) * 4);
    if (piVar1 == (int *)0x0) {
      *(int **)(DAT_0066c624 + -0xc + (param_2 >> 2) * 4) = param_1;
      param_1[1] = (int)param_1;
      *param_1 = (int)param_1;
    }
    else {
      iVar2 = *piVar1;
      param_1[1] = (int)piVar1;
      *param_1 = iVar2;
      *piVar1 = (int)param_1;
      *(int **)(iVar2 + 4) = param_1;
    }
  }
  else {
    if ((0x3bff < param_2) && (cVar4 = FUN_00401e98(param_1,param_2), cVar4 != '\0')) {
      return;
    }
    piVar1 = DAT_0066c618;
    iVar2 = *DAT_0066c618;
    piVar3 = param_1;
    param_1[1] = (int)DAT_0066c618;
    DAT_0066c618 = piVar3;
    *param_1 = iVar2;
    *piVar1 = (int)param_1;
    *(int **)(iVar2 + 4) = param_1;
  }
  return;
}

