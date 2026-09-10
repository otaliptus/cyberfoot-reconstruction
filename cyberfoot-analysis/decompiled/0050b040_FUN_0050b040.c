// Address: 0050b040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050b040(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_0050ae9c(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar4);
      if (*(char *)(iVar2 + 0xa9) != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

