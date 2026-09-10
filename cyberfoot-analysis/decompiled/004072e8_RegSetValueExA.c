// Address: 004072e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LSTATUS __stdcall
RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004072e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}

