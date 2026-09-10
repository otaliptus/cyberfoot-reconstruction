// Address: 0050e5ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050e5ec(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      cVar1 = (**(code **)(*param_1 + 0x130))(param_1,iVar4);
      if (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar3;
}

