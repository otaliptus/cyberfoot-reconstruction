// Address: 0049808c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049808c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *param_1 = 1;
      param_1[1] = iVar1;
      param_1[5] = param_3;
      param_1[6] = param_6;
      iVar1 = iVar1 + 1;
      param_1[7] = param_5;
      param_1[8] = param_4;
      param_1 = param_1 + 9;
    } while (iVar1 < param_2);
  }
  return;
}

