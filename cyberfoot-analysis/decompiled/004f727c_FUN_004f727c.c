// Address: 004f727c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f727c(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
    return;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  return;
}

