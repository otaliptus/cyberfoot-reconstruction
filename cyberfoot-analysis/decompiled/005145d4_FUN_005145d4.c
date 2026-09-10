// Address: 005145d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005145d4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (param_2 <= iVar2 + -1) {
    iVar3 = ((iVar2 + -1) - param_2) + 1;
    iVar2 = param_2;
    do {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

