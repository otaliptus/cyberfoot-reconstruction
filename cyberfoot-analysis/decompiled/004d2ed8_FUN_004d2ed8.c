// Address: 004d2ed8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2ed8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x78) = param_2;
    FUN_004d2d94();
  }
  return;
}

