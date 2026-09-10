// Address: 00512a84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00512a84(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = (**(code **)(*param_1 + 0x138))();
  uVar4 = (int)param_2 >> 0x1f;
  if ((int)param_2 < 1) {
    if (-1 < (int)param_2) {
      return;
    }
    while ((iVar5 < (int)((param_2 ^ uVar4) - uVar4) &&
           (iVar3 = (**(code **)(*param_1 + 0x10c))(), iVar3 < iVar2))) {
      iVar2 = iVar2 + -1;
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
    }
  }
  else {
    while ((iVar5 < (int)((param_2 ^ uVar4) - uVar4) &&
           (iVar3 = (**(code **)(*param_1 + 0x118))(), iVar2 < iVar3))) {
      iVar2 = iVar2 + 1;
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
    }
  }
  (**(code **)(*param_1 + 0x1b0))(param_1,iVar2);
  return;
}

