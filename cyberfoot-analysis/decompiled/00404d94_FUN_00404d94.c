// Address: 00404d94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404d94(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}

