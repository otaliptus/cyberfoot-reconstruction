// Address: 004080a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004080a4(uint param_1,uint param_2,byte param_3)

{
  return param_1 & 0xff | (param_2 & 0xff) << 8 | (uint)param_3 << 0x10;
}

