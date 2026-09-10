// Address: 00481554
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481554(int param_1)

{
  HWND pHVar1;
  HMENU pHVar2;
  HMENU wParam;
  LPARAM lParam;
  
  if ((*(char *)(param_1 + 0x22f) == '\x02') && (*(int *)(param_1 + 0x254) != 0)) {
    wParam = (HMENU)0x0;
    if (*(int **)(param_1 + 0x248) != (int *)0x0) {
      wParam = (HMENU)(**(code **)(**(int **)(param_1 + 0x248) + 0x34))();
    }
    lParam = 0;
    if (*(int *)(param_1 + 600) != 0) {
      lParam = FUN_004770e0();
    }
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageA(*(HWND *)(param_1 + 0x254),0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)FUN_0046cae0(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}

