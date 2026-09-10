// Address: 00474894
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00474894(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x40)) {
    *(char *)(param_1 + 0x40) = param_2;
    FUN_00403c80(param_1);
  }
  return;
}

