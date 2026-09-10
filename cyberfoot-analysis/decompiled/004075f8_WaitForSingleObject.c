// Address: 004075f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004075f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}

