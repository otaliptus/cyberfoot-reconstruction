// Address: 004f8d30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f8d30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 + 1;
  iVar1 = (**(code **)(*param_1 + 0x11c))();
  if (iVar4 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - iVar4) + 1;
    do {
      iVar2 = FUN_004f8d14(param_1,iVar4);
      iVar3 = FUN_004f8d14(param_1,param_2);
      if (iVar2 < iVar3) {
        return -1;
      }
      iVar2 = FUN_004f8d14(param_1,iVar4);
      iVar3 = FUN_004f8d14(param_1,param_2);
      if (iVar2 == iVar3) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

