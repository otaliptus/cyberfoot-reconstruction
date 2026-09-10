// Address: 004bb578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb578(int *param_1,char param_2)

{
  *(char *)(param_1 + 0x65) = param_2;
  if (param_2 != '\0') {
    if ((*(char *)((int)param_1 + 0x5b) == '\x03') || (*(char *)((int)param_1 + 0x5b) == '\x04')) {
      FUN_004659c4(param_1,6);
    }
    if ((*(char *)((int)param_1 + 0x5b) == '\x01') || (*(char *)((int)param_1 + 0x5b) == '\x02')) {
      FUN_004659e8(param_1,6);
    }
  }
  (**(code **)(*param_1 + 0x7c))();
  return;
}

