// Address: 004c200c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c200c(undefined2 *param_1)

{
  char cVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  float10 in_ST0;
  
  cVar1 = FUN_004c1664(param_1);
  if (cVar1 == '\0') {
    FUN_0040c20c(*param_1,CONCAT22(extraout_var_02,param_1[1]),CONCAT22(extraout_var_00,param_1[2]))
    ;
    if ((float)in_ST0 < _DAT_004c2090) {
      FUN_0040c06c(CONCAT22(extraout_var,param_1[3]),CONCAT22(extraout_var_03,param_1[4]),
                   CONCAT22(extraout_var_01,param_1[5]),CONCAT22(extraout_var,param_1[6]));
    }
    else {
      FUN_0040c06c(CONCAT22(extraout_var,param_1[3]),CONCAT22(extraout_var_03,param_1[4]),
                   CONCAT22(extraout_var_01,param_1[5]),CONCAT22(extraout_var,param_1[6]));
    }
  }
  return;
}

