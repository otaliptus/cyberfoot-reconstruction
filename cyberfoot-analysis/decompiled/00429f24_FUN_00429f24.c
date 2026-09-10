// Address: 00429f24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00429f24(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}

