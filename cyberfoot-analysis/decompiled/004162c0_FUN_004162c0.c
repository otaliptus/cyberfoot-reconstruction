// Address: 004162c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004162c0(ushort *param_1,ushort param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *param_1 = 0x12;
  param_1[4] = param_2;
  return;
}

