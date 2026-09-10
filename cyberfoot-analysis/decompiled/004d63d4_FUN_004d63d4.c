// Address: 004d63d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d63d4(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 10)) || ((*(byte *)(param_1 + 4) & 4) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
    *(short *)(param_1 + 10) = param_2;
  }
  return;
}

