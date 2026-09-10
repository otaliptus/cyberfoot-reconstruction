// Address: 004162e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004162e0(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *param_1 = 0x13;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

