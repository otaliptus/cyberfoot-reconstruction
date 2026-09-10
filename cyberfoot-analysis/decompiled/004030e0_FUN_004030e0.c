// Address: 004030e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004030e0(byte *param_1,byte *param_2,byte param_3)

{
  if (*param_2 < param_3) {
    param_3 = *param_2;
  }
  *param_1 = param_3;
  FUN_00402a04(param_2 + 1,param_1 + 1,param_3);
  return;
}

