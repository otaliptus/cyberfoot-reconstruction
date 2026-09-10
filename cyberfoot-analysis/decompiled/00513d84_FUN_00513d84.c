// Address: 00513d84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00513d84(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0050f794(param_1,0);
  iVar4 = param_1[0x136];
  iVar3 = (**(code **)(*param_1 + 0x11c))();
  if (iVar4 <= iVar3 + -1) {
    iVar3 = ((iVar3 + -1) - iVar4) + 1;
    do {
      cVar1 = (**(code **)(*param_1 + 0x130))(param_1,iVar4);
      if (cVar1 != '\0') {
        FUN_00511a00(param_1,iVar4,0);
      }
      if (param_1[0x136] + iVar2 < iVar4) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

