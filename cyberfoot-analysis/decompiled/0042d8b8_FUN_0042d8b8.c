// Address: 0042d8b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d8b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))(piVar1,param_2,param_3,param_4);
  }
  return;
}

