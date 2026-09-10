// Address: 00485bfd
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00485bfd(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x99) == '\0')); param_1 = *(int *)(param_1 + 0x30))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}

