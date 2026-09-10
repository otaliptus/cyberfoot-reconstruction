// Address: 0047e2ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0047e2ac(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND local_8;
  undefined1 local_4;
  
  local_8 = GetActiveWindow();
  lParam = &local_8;
  local_4 = 0;
  lpfn = FUN_0047e28c;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}

