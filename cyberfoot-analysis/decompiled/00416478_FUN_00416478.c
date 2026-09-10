// Address: 00416478
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416478(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0x100;
  FUN_00404928(param_1 + 4,param_2);
  return;
}

