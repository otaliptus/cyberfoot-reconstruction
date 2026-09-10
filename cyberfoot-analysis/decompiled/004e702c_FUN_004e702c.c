// Address: 004e702c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e702c(undefined4 param_1)

{
  HRGN hrgnSrc1;
  HRGN hrgnSrc2;
  HRGN hrgnSrc2_00;
  HRGN hrgnDst;
  HWND hWnd;
  HRGN hRgn;
  BOOL bRedraw;
  POINT local_68;
  LONG local_60;
  LONG local_5c;
  LONG local_58;
  LONG local_54;
  LONG local_50;
  LONG local_4c;
  LONG local_48;
  LONG local_44;
  POINT local_40;
  LONG local_38;
  LONG local_34;
  LONG local_30;
  LONG local_2c;
  LONG local_28;
  LONG local_24;
  LONG local_20;
  LONG local_1c;
  LONG local_18;
  LONG local_14;
  
  FUN_0041c968(0xffffffff,7,&local_18);
  local_68.x = local_18;
  local_68.y = local_14;
  FUN_0041c968(7,0xffffffff,&local_18);
  local_60 = local_18;
  local_5c = local_14;
  FUN_0041c968(8,0,&local_18);
  local_58 = local_18;
  local_54 = local_14;
  FUN_0041c968(0xe,7,&local_18);
  local_50 = local_18;
  local_4c = local_14;
  FUN_0041c968(0,6,&local_18);
  local_48 = local_18;
  local_44 = local_14;
  hrgnSrc1 = CreatePolygonRgn(&local_68,5,2);
  FUN_0041c968(0xffffffff,0xf,&local_18);
  local_40.x = local_18;
  local_40.y = local_14;
  FUN_0041c968(0xe,0xf,&local_18);
  local_38 = local_18;
  local_34 = local_14;
  FUN_0041c968(6,0x16,&local_18);
  local_30 = local_18;
  local_2c = local_14;
  FUN_0041c968(6,0x16,&local_18);
  local_28 = local_18;
  local_24 = local_14;
  FUN_0041c968(0xffffffff,0xe,&local_18);
  local_20 = local_18;
  local_1c = local_14;
  hrgnSrc2 = CreatePolygonRgn(&local_40,5,2);
  hrgnSrc2_00 = CreateEllipticRgn(5,9,10,0xe);
  hrgnDst = (HRGN)FUN_004e7010();
  CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,2);
  CombineRgn(hrgnDst,hrgnDst,hrgnSrc2_00,2);
  bRedraw = -1;
  hRgn = hrgnDst;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SetWindowRgn(hWnd,hRgn,bRedraw);
  DeleteObject(hrgnSrc1);
  DeleteObject(hrgnSrc2);
  DeleteObject(hrgnSrc2_00);
  DeleteObject(hrgnDst);
  return;
}

