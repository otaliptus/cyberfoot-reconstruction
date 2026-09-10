// Address: 00482c28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482c28(int *param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  uint uVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar4;
  LPARAM lParam;
  
  if (((*(int *)(param_2 + 4) == 2) && (*(char *)((int)param_1 + 0x9b) == '\x01')) &&
     ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    BVar2 = IsIconic(pHVar1);
    if (BVar2 == 0) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar1 = (HWND)FUN_0046cae0(param_1);
      SetWindowPos(pHVar1,hWndInsertAfter,X,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar1 = (HWND)FUN_0046cae0(param_1);
      PostMessageA(pHVar1,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x22e) == '\0') {
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x54))();
      FUN_004668c0(param_1,uVar3 ^ 1,0xffffffff);
      return;
    }
  }
  FUN_004678e8(param_1,param_2);
  return;
}

