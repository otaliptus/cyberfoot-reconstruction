// Address: 00407688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HBITMAP __stdcall
CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}

