// Address: 00403cb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00403cb4(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}

