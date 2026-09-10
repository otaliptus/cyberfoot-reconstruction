// Address: 00416280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416280(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *param_1 = 3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

