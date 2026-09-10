// Address: 0042b03c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b03c(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}

