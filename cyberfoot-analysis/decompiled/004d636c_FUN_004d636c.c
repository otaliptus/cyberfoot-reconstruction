// Address: 004d636c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d636c(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 6)) || ((*(byte *)(param_1 + 4) & 1) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    *(short *)(param_1 + 6) = param_2;
  }
  return;
}

