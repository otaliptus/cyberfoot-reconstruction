// Address: 004692a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004692a0(int param_1)

{
  *(short *)(param_1 + 0x160) = *(short *)(param_1 + 0x160) + -1;
  if ((*(short *)(param_1 + 0x160) == 0) && ((*(byte *)(param_1 + 0x54) & 0x10) != 0)) {
    FUN_004692c0();
  }
  return;
}

