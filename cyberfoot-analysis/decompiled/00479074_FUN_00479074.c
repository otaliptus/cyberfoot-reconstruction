// Address: 00479074
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00479074(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00478b4c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00478b5c(param_1,iVar3);
      (**(code **)(*piVar2 + 0x40))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

