// Address: 0053c2a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053c2a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  HDC hdc;
  int nSavedDC;
  int bottom;
  int right;
  tagPOINT local_c;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    hdc = (HDC)FUN_0042b5a8(param_3);
    nSavedDC = SaveDC(hdc);
    GetViewportOrgEx(hdc,&local_c);
    SetViewportOrgEx(hdc,local_c.x - *(int *)(param_2 + 0x40),local_c.y - *(int *)(param_2 + 0x44),
                     (LPPOINT)0x0);
    bottom = FUN_00465c50(*(undefined4 *)(param_2 + 0x30));
    right = FUN_00465c0c(*(undefined4 *)(param_2 + 0x30));
    IntersectClipRect(hdc,0,0,right,bottom);
    FUN_004673cc(*(undefined4 *)(param_2 + 0x30),0x14,hdc,0);
    FUN_004673cc(*(undefined4 *)(param_2 + 0x30),0xf,hdc,0);
    RestoreDC(hdc,nSavedDC);
  }
  return;
}

