// Address: 004d2614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2614(int param_1,undefined4 param_2)

{
  if ((char)param_2 != *(char *)(param_1 + 0x2f9)) {
    *(char *)(param_1 + 0x2f9) = (char)param_2;
    FUN_004d2584(param_1,param_2);
  }
  return;
}

