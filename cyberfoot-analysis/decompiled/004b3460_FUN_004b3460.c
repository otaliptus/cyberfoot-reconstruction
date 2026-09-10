// Address: 004b3460
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b3460(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  if (0 < iVar1) {
    iVar2 = 1;
    do {
      FUN_004b351c(param_1,iVar2 + -1);
      FUN_00403a84();
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*param_1 + 8))();
  return;
}

