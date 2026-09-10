// Address: 004073a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD __stdcall
FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPWSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004073a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

