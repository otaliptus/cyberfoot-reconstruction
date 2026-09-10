// Address: 0041d940
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0041d940(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    do {
      if (param_1 == *param_3) {
        FUN_00404928(param_2,param_3[1]);
        return 1;
      }
      param_3 = param_3 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 0;
}

