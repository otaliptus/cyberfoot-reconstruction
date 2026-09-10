// Address: 00407610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL __stdcall
WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}

