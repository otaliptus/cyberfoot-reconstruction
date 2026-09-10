// Address: 0043578c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043578c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),iVar2);
        FUN_00403a84();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_0040fe60(param_1 + 0x10);
  }
  return;
}

