// Address: 004853cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004853cc(int param_1,short param_2)

{
  POINT Point;
  HWND hWnd;
  DWORD DVar1;
  DWORD DVar2;
  LPARAM LVar3;
  LRESULT LVar4;
  HCURSOR hCursor;
  undefined2 extraout_var;
  tagPOINT local_18;
  
  if (param_2 != *(short *)(param_1 + 0x44)) {
    *(short *)(param_1 + 0x44) = param_2;
    if (param_2 == 0) {
      GetCursorPos(&local_18);
      Point.y = local_18.y;
      Point.x = local_18.x;
      hWnd = WindowFromPoint(Point);
      if (hWnd != (HWND)0x0) {
        DVar1 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        DVar2 = GetCurrentThreadId();
        if (DVar1 == DVar2) {
          LVar3 = FUN_004080e0(&local_18);
          LVar4 = SendMessageA(hWnd,0x84,0,LVar3);
          LVar3 = FUN_00408014(LVar4,CONCAT22(extraout_var,0x200));
          SendMessageA(hWnd,0x20,(WPARAM)hWnd,LVar3);
          return;
        }
      }
    }
    hCursor = (HCURSOR)FUN_004853a4(param_1,(int)param_2);
    SetCursor(hCursor);
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

