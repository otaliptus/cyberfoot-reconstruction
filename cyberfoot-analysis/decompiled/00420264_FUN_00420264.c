// Address: 00420264
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420264(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 7)) || ((*(byte *)(param_1 + 4) & 4) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
    *(char *)(param_1 + 7) = param_2;
  }
  return;
}

