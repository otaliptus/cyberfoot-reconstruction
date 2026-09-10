// Address: 004aa384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aa384(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 < *param_1) {
    param_1[2] = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = param_1[3];
  if (iVar1 < param_1[1]) {
    param_1[3] = param_1[1];
    param_1[1] = iVar1;
  }
  return;
}

