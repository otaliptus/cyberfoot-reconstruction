// Address: 00402b90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00402b90(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceCounter(&local_8);
  if (BVar1 != 0) {
    DAT_00662008 = local_8.s.LowPart;
    return;
  }
  DAT_00662008 = GetTickCount();
  return;
}

