// Address: 00436730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HINSTANCE __stdcall
ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory,
             INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00436730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}

