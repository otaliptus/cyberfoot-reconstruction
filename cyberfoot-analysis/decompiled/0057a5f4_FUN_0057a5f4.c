// Address: 0057a5f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_0057a5f4(double *param_1,double *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float10 in_ST0;
  
  if ((*param_2 - (double)CONCAT44(param_5,param_4) < *param_1) &&
     (*param_1 < *param_2 + (double)CONCAT44(param_5,param_4))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
    return 0;
  }
  FUN_00432400();
  if (*param_2 <= *param_1) {
    *param_1 = *param_1 - (double)in_ST0;
  }
  else {
    *param_1 = *param_1 + (double)in_ST0;
  }
  return 1;
}

