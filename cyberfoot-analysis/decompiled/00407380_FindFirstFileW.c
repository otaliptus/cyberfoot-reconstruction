// Address: 00407380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HANDLE __stdcall FindFirstFileW(LPCWSTR lpFileName,LPWIN32_FIND_DATAW lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileW(lpFileName,lpFindFileData);
  return pvVar1;
}

