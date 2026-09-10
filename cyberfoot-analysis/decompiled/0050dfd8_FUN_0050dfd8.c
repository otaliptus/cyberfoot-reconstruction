// Address: 0050dfd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050dfd8(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      cVar1 = (**(code **)(*param_1 + 0x130))(param_1,iVar3);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x1ac))(param_1,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

