// Address: 0041e110
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e110(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != param_2) {
    if ((param_3 < 0) || ((int)param_1[2] <= param_3)) {
      FUN_0041dfa8(*param_1,PTR_PTR_0066b4e8,param_3);
    }
    uVar1 = FUN_0041e01c(param_1,param_2);
    *(undefined4 *)(param_1[1] + param_2 * 4) = 0;
    FUN_0041df0c(param_1,param_2);
    FUN_0041e098(param_1,param_3,0);
    *(undefined4 *)(param_1[1] + param_3 * 4) = uVar1;
  }
  return;
}

