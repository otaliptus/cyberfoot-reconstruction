// Address: 00403ae8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403ae8(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = *(int **)(iVar1 + -0x24);
    if (*(int *)(iVar1 + -0x40) != 0) {
      FUN_004056f8(param_1);
    }
  } while (piVar2 != (int *)0x0);
  return;
}

