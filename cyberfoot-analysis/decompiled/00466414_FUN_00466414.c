// Address: 00466414
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466414(int param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x78)) {
    *(short *)(param_1 + 0x78) = param_2;
    FUN_004673cc(param_1,0xb00f,0,0);
  }
  return;
}

