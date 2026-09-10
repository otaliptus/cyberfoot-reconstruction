// Address: 00515948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

MCIERROR __stdcall
mciSendStringA(LPCSTR lpstrCommand,LPSTR lpstrReturnString,UINT uReturnLength,HWND hwndCallback)

{
  MCIERROR MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00515948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciSendStringA(lpstrCommand,lpstrReturnString,uReturnLength,hwndCallback);
  return MVar1;
}

