// Address: 00408110
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HWND __stdcall
CreateWindowExW(DWORD dwExStyle,LPCWSTR lpClassName,LPCWSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExW(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}

