// Address: 00407fd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL __stdcall
UpdateLayeredWindow(HWND hWnd,HDC hdcDst,POINT *pptDst,SIZE *psize,HDC hdcSrc,POINT *pptSrc,
                   COLORREF crKey,BLENDFUNCTION *pblend,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateLayeredWindow(hWnd,hdcDst,pptDst,psize,hdcSrc,pptSrc,crKey,pblend,dwFlags);
  return BVar1;
}

