// Address: 00404b80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404b80(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + -4), iVar1 != 0)) {
    if (iVar1 <= param_3) {
      param_3 = iVar1;
    }
    *param_1 = (char)param_3;
    FUN_00402a04(param_2,param_1 + 1);
    return;
  }
  *param_1 = 0;
  return;
}

