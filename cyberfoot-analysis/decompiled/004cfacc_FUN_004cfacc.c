// Address: 004cfacc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfacc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x238)) {
    *(int *)(param_1 + 0x238) = param_2;
    FUN_004d0164();
  }
  return;
}

