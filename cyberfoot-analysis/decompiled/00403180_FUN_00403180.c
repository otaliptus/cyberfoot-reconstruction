// Address: 00403180
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00403180(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 2;
  do {
    if (uVar1 == 0) {
LAB_004031b0:
      param_3 = param_3 & 3;
      if (((param_3 != 0) && ((char)*param_1 == (char)*param_2)) &&
         ((param_3 == 1 ||
          ((*(char *)((int)param_1 + 1) == *(char *)((int)param_2 + 1) &&
           ((param_3 == 2 || (*(char *)((int)param_1 + 2) == *(char *)((int)param_2 + 2))))))))) {
        return (int *)0x0;
      }
      return param_1;
    }
    if (*param_1 != *param_2) {
      return param_1;
    }
    if (uVar1 == 1) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      goto LAB_004031b0;
    }
    if (param_1[1] != param_2[1]) {
      return param_1;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    uVar1 = uVar1 - 2;
  } while( true );
}

