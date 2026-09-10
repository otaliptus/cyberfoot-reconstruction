// Address: 00407e78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int __stdcall
ScrollWindowEx(HWND hWnd,int dx,int dy,RECT *prcScroll,RECT *prcClip,HRGN hrgnUpdate,
              LPRECT prcUpdate,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ScrollWindowEx(hWnd,dx,dy,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
  return iVar1;
}

