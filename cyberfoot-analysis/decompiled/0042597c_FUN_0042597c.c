// Address: 0042597c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042597c(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == param_1) break;
    param_1 = *(int *)(param_1 + 4);
  }
  return 1;
}

