// Address: 004e529c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e529c(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2[2] < *param_3) || (param_3[2] < *param_2)) || (param_2[3] < param_3[1])) ||
     (param_3[3] < param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)param_2[1] >> 8),1);
  }
  return uVar1;
}

