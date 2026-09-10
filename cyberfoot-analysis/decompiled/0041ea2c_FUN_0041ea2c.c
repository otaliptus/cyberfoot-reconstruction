// Address: 0041ea2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ea2c(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1[3] == 0)) {
    if (param_2 != '\0') {
      param_1 = 0;
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
  }
  return;
}

