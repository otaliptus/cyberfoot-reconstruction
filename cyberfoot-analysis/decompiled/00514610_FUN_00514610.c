// Address: 00514610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00514610(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (-1 < param_2) {
    do {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return param_2;
}

