// Address: 004b170c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b170c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_004aed9c(param_1,2);
  }
  else {
    iVar1 = FUN_004b16e8(param_1);
    if ((iVar1 < *param_3) || (iVar1 < 1)) {
      FUN_004aed9c(param_1,2);
    }
    else {
      iVar1 = *param_3;
      uVar2 = GdipSetPathGradientSurroundColorsWithCount();
      FUN_004aed9c(param_1,uVar2);
      if (*(int *)(param_1 + 8) == 0) {
        *param_3 = iVar1;
      }
    }
  }
  return;
}

