// Address: 00420208
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420208(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 5)) || ((*(byte *)(param_1 + 4) & 1) == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    *(char *)(param_1 + 5) = param_2;
  }
  return;
}

