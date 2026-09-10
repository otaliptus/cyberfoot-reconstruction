// Address: 0042bb10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042bb10(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}

