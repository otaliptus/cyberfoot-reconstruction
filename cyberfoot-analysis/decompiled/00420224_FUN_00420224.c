// Address: 00420224
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420224(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 6)) || ((*(byte *)(param_1 + 4) & 2) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}

