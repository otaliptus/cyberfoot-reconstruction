// Address: 004b1ca0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004b1ca0(int param_1,uint param_2,uint param_3,byte param_4)

{
  return (uint)param_4 | (param_3 & 0xff) << 8 | (param_2 & 0xff) << 0x10 | param_1 << 0x18;
}

