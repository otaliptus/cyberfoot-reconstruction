// Address: 00436728
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD_PTR __stdcall
SHGetFileInfoA(LPCSTR pszPath,DWORD dwFileAttributes,SHFILEINFOA *psfi,UINT cbFileInfo,UINT uFlags)

{
  DWORD_PTR DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00436728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SHGetFileInfoA(pszPath,dwFileAttributes,psfi,cbFileInfo,uFlags);
  return DVar1;
}

