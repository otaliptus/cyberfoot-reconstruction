// Address: 00497a08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00497a08(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    iVar1 = (int)(5000 / (longlong)param_1);
  }
  else {
    iVar1 = param_1 * -2 + 200;
  }
  return iVar1;
}

