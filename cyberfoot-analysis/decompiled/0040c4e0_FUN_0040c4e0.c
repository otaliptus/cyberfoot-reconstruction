// Address: 0040c4e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c4e0(double *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  float10 fVar2;
  
  uVar1 = FUN_00402c44();
  *param_1 = (double)CONCAT44(extraout_EDX,uVar1);
  if (*param_1 < (double)_DAT_0040c530) {
    fVar2 = (float10)param_4;
    FUN_00402c14();
    *param_1 = (double)((float10)*param_1 - ABS(fVar2));
  }
  else {
    fVar2 = (float10)param_4;
    FUN_00402c14();
    *param_1 = (double)(ABS(fVar2) + (float10)*param_1);
  }
  return;
}

