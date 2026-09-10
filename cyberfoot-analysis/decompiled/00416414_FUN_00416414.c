// Address: 00416414
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416414(ushort *param_1,char param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *param_1 = 0xb;
  param_1[4] = -(ushort)(param_2 != '\0');
  return;
}

