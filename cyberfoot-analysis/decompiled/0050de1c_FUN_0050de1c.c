// Address: 0050de1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050de1c(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1[0x136];
  if (0 < (int)param_2) {
    while ((iVar4 < (int)(((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) + -1) &&
           (iVar2 = (**(code **)(*param_1 + 0x11c))(), iVar3 < iVar2))) {
      iVar3 = iVar3 + 1;
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar3);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar3;
}

