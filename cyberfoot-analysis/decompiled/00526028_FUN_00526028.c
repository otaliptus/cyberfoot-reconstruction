// Address: 00526028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526028(double *param_1,double *param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  if (((((double)CONCAT44(param_11,param_10) <= (double)_DAT_00526100) ||
       ((double)CONCAT44(param_9,param_8) <= (double)_DAT_00526100)) ||
      ((double)CONCAT44(param_7,param_6) <= (double)_DAT_00526100)) ||
     ((double)CONCAT44(param_5,param_4) <= (double)_DAT_00526100)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  else if ((((double)CONCAT44(param_7,param_6) <= (double)CONCAT44(param_11,param_10)) ||
           ((double)CONCAT44(param_5,param_4) <= (double)CONCAT44(param_9,param_8))) ||
          (param_3 != '\x01')) {
    if ((double)CONCAT44(param_7,param_6) / (double)CONCAT44(param_5,param_4) <=
        (double)CONCAT44(param_11,param_10) / (double)CONCAT44(param_9,param_8)) {
      *(undefined4 *)param_1 = param_6;
      *(undefined4 *)((int)param_1 + 4) = param_7;
      *param_2 = ((double)CONCAT44(param_7,param_6) * (double)CONCAT44(param_9,param_8)) /
                 (double)CONCAT44(param_11,param_10);
    }
    else {
      *(undefined4 *)param_2 = param_4;
      *(undefined4 *)((int)param_2 + 4) = param_5;
      *param_1 = ((double)CONCAT44(param_5,param_4) * (double)CONCAT44(param_11,param_10)) /
                 (double)CONCAT44(param_9,param_8);
    }
  }
  else {
    *(undefined4 *)param_1 = param_10;
    *(undefined4 *)((int)param_1 + 4) = param_11;
    *(undefined4 *)param_2 = param_8;
    *(undefined4 *)((int)param_2 + 4) = param_9;
  }
  return;
}

