// Address: 004829cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004829cc(int param_1,undefined4 param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  HDC hDC;
  HICON hIcon;
  tagPAINTSTRUCT *ptVar3;
  tagPAINTSTRUCT tStack_48;
  
  ptVar3 = &tStack_48;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 == 0) {
    *(ushort *)(param_1 + 0x54) = DAT_00482a48 | *(ushort *)(param_1 + 0x54);
    FUN_0046ab90(param_1,param_2);
    *(ushort *)(param_1 + 0x54) = ~DAT_00482a48 & *(ushort *)(param_1 + 0x54);
  }
  else {
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    hDC = BeginPaint(pHVar1,ptVar3);
    ptVar3 = &tStack_48;
    hIcon = (HICON)FUN_00482854(param_1);
    DrawIcon(hDC,0,0,hIcon);
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    EndPaint(pHVar1,ptVar3);
  }
  return;
}

