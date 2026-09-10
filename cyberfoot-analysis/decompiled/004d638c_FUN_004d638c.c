// Address: 004d638c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d638c(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 8)) || ((*(byte *)(param_1 + 4) & 2) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    *(short *)(param_1 + 8) = param_2;
  }
  return;
}

