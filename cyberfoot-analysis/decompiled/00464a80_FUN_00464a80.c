// Address: 00464a80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00464a80(POINT *param_1)

{
  HWND hWnd;
  int iVar1;
  
  hWnd = WindowFromPoint(*param_1);
  iVar1 = 0;
  while ((hWnd != (HWND)0x0 && (iVar1 = FUN_00463094(hWnd), iVar1 == 0))) {
    hWnd = GetParent(hWnd);
  }
  return iVar1;
}

