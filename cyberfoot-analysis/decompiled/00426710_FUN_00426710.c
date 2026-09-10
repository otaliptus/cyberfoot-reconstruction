// Address: 00426710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426710(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
  DAT_0066c854 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,0,"");
  if (DAT_0066c854 == (HANDLE)0x0) {
    FUN_0040f904();
  }
  return;
}

