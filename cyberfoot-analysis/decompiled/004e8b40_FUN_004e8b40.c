// Address: 004e8b40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e8b40(undefined4 param_1,int param_2)

{
  HWND hwnd;
  uint nBar;
  tagSCROLLINFO *lpsi;
  tagSCROLLINFO local_24;
  
  lpsi = &local_24;
  local_24.cbSize = 0x1c;
  local_24.fMask = 0x10;
  nBar = (uint)(*(char *)(param_2 + 0x11) == '\x01');
  hwnd = (HWND)FUN_0046cae0(param_1);
  GetScrollInfo(hwnd,nBar,lpsi);
  return local_24.nTrackPos;
}

