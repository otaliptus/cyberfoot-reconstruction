// Address: 004ef5e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef5e0(int param_1)

{
  int *piVar1;
  
  FUN_0046b148(param_1);
  piVar1 = *(int **)(param_1 + 0x228);
  if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x57) != '\0')) {
    (**(code **)(*piVar1 + 0x7c))();
  }
  return;
}

