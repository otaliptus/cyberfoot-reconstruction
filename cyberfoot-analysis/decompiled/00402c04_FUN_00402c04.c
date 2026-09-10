// Address: 00402c04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00402c04(void)

{
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  
  fsin(in_ST0);
  if ((in_FPUStatusWord & 0x400) == 0) {
    return;
  }
  return;
}

