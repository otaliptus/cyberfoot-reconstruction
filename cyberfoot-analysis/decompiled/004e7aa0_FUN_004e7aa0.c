// Address: 004e7aa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7aa0(int param_1,char param_2)

{
  *(char *)(param_1 + 0x11) = param_2;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}

