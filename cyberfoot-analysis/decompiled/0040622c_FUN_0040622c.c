// Address: 0040622c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040622c(int param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}

