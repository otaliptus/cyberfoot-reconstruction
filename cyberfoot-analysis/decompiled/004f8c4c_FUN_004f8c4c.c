// Address: 004f8c4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f8c4c(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1[0x9a] + 0x2c);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      cVar2 = (**(code **)(*param_1 + 300))(param_1,iVar3);
      if (cVar2 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}

