// Address: 00442f54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00442f54(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
  }
  return;
}

