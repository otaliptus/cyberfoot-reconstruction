// Address: 0042b47c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b47c(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  return;
}

