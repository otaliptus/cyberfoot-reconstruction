// Address: 004075b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL __stdcall
SetProcessWorkingSetSize
          (HANDLE hProcess,SIZE_T dwMinimumWorkingSetSize,SIZE_T dwMaximumWorkingSetSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004075b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetProcessWorkingSetSize(hProcess,dwMinimumWorkingSetSize,dwMaximumWorkingSetSize);
  return BVar1;
}

