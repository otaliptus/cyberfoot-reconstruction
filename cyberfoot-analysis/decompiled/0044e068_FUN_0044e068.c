// Address: 0044e068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e068(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0044e21c(*(undefined4 *)(param_1 + 0x30));
  cVar1 = FUN_00450588(iVar2);
  if (cVar1 != '\0') {
    iVar3 = FUN_0041edb0(*(undefined4 *)(iVar2 + 0x23c));
    if (param_2 < iVar3) {
      iVar3 = FUN_00451f90(iVar2,param_2);
      if (*(int *)(iVar3 + 0x24) == -1) {
        FUN_0045223c(iVar2,param_2);
      }
    }
  }
  return;
}

