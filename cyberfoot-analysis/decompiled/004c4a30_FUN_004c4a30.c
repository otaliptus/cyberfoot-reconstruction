// Address: 004c4a30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004c4a30(byte param_1)

{
  if ((param_1 & 0x80) != 0) {
    return param_1 & 0x3f;
  }
  return param_1 & 0x3f | 0x80;
}

