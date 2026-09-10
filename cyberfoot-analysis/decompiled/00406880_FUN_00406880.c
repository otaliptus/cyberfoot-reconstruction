// Address: 00406880
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00406880(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))();
    param_1 = piVar1;
  }
  return param_1;
}

