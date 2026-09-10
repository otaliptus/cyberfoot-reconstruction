// Address: 00482788
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482788(UINT param_1,int param_2,int param_3)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != 0) {
    do {
      iVar2 = param_2;
      param_2 = *(int *)(iVar2 + 0x30);
      if (param_2 == 0) break;
      cVar1 = FUN_00403c10(iVar2,PTR_PTR_0047cb68);
    } while (cVar1 == '\0');
    if ((iVar2 != 0) && (param_3 != iVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_0046cae0(iVar2);
      SendMessageA(hWnd,param_1,wParam,lParam);
    }
  }
  return;
}

