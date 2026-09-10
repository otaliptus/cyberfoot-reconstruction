// Address: 00416790
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00416790(uint param_1)

{
  param_1 = param_1 & 0xffff0fff;
  if (0x14 < (ushort)param_1) {
    if ((ushort)param_1 == 0x100) {
      param_1 = CONCAT22((short)(param_1 >> 0x10),8);
    }
    else {
      FUN_0041159c();
    }
  }
  return param_1;
}

