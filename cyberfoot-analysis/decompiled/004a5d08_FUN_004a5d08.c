// Address: 004a5d08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a5d08(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

