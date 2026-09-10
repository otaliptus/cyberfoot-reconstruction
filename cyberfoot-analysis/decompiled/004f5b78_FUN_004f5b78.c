// Address: 004f5b78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f5b78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_004f5b28(param_1,param_2);
  iVar1 = *(int *)(iVar1 + 0x14);
  while ((param_2 = param_2 + 1, param_2 < *(int *)(param_1 + 0x1028) &&
         (iVar2 = FUN_004f5b28(param_1,param_2), iVar1 < *(int *)(iVar2 + 0x14)))) {
    iVar2 = FUN_004f5b28(param_1,param_2);
    if (*(int *)(iVar2 + 0x14) == iVar1 + 1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

