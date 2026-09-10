// Address: 004e5688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e5688(undefined4 param_1,int param_2,LONG *param_3,char param_4)

{
  HDC hdc;
  COLORREF color;
  COLORREF color_00;
  RECT local_14;
  
  local_14.left = *param_3;
  local_14.top = param_3[1];
  local_14.right = param_3[2];
  local_14.bottom = param_3[3];
  if (param_4 == '\0') {
    hdc = (HDC)FUN_0042b5a8(param_2);
    color = SetBkColor(hdc,0);
    color_00 = SetTextColor(hdc,0xffffff);
    DrawFocusRect(hdc,&local_14);
    SetBkColor(hdc,color);
    SetTextColor(hdc,color_00);
  }
  else {
    FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),0);
    FUN_0042ab6c(*(undefined4 *)(param_2 + 0x14),0xff00000d);
    FUN_0042afc8(param_2,&local_14);
  }
  return;
}

