// Address: 004efe6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004efe6c(int *param_1,undefined4 param_2)

{
  char cVar1;
  HWND pHVar2;
  HDC hDC;
  COLORREF color;
  HBRUSH hbr;
  int iVar3;
  tagRECT *lpRect;
  tagRECT local_20;
  
  if (param_1[0x5b] != 0) {
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    hDC = GetWindowDC(pHVar2);
    lpRect = &local_20;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    GetWindowRect(pHVar2,lpRect);
    OffsetRect(&local_20,-local_20.left,-local_20.top);
    color = FUN_00429e64(param_1[0x1c]);
    hbr = CreateSolidBrush(color);
    if ((char)param_1[0x83] == '\x01') {
      InflateRect(&local_20,-1,-1);
    }
    else {
      InflateRect(&local_20,1,1);
    }
    iVar3 = param_1[0x5b];
    if (-1 < iVar3 + -1) {
      do {
        InflateRect(&local_20,-1,-1);
        FrameRect(hDC,&local_20,hbr);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DeleteObject(hbr);
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    ReleaseDC(pHVar2,hDC);
  }
  FUN_0046ab90(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0xfc))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x108))();
  }
  return;
}

