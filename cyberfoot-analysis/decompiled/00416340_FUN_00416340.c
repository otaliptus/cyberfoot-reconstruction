// Address: 00416340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416340(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *param_1 = 0x14;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return;
}

