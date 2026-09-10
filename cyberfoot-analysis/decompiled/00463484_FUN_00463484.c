// Address: 00463484
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00463484(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 8) <= *param_3) {
      return 0;
    }
    iVar1 = FUN_0041e01c(param_1,*param_3);
    if (param_2 == *(int *)(iVar1 + 4)) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}

