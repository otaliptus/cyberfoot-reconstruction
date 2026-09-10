// Address: 004980c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004980c8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 5) {
    *param_1 = param_2;
    iVar1 = 0;
    piVar2 = param_1;
    if (0 < param_2) {
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    param_1 = param_1 + 9;
  }
  else {
    param_1 = (int *)FUN_0049808c(param_1,param_2,0,param_4,param_3,0);
  }
  return param_1;
}

