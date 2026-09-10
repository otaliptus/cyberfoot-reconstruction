// Address: 00405448
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405448(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405260(*param_1,param_2,param_3,param_3);
  if ((((0 < iVar1) && (0 < param_2)) && (param_2 <= iVar1)) && (0 < param_3)) {
    param_2 = param_2 + -1;
    param_3 = (iVar1 - param_2) - param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    if ((param_2 == 0) && (param_3 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00404fc8(param_3 + param_2);
      if (0 < param_2) {
        FUN_00402a04(*param_1,iVar2,param_2 * 2);
      }
      if (0 < param_3) {
        FUN_00402a04(*param_1 + (iVar1 - param_3) * 2,iVar2 + param_2 * 2,param_3 * 2);
      }
    }
    FUN_00404fe0(param_1,iVar2);
  }
  return;
}

