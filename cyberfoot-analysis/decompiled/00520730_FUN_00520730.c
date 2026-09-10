// Address: 00520730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520730(int param_1,char param_2)

{
  *(char *)(*(int *)(param_1 + 8) + 0x34) = param_2;
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
    return;
  }
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  return;
}

