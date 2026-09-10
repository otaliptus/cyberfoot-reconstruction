// Address: 00463fcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HWND FUN_00463fcc(POINT *param_1)

{
  char cVar1;
  HWND hWnd;
  
  hWnd = WindowFromPoint(*param_1);
  while ((hWnd != (HWND)0x0 && (cVar1 = FUN_00463f6c(hWnd), cVar1 == '\0'))) {
    hWnd = GetParent(hWnd);
  }
  return hWnd;
}

