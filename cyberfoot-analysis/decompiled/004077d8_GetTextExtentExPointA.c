// Address: 004077d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL __stdcall
GetTextExtentExPointA
          (HDC hdc,LPCSTR lpszString,int cchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,
          LPSIZE lpSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004077d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentExPointA(hdc,lpszString,cchString,nMaxExtent,lpnFit,lpnDx,lpSize);
  return BVar1;
}

