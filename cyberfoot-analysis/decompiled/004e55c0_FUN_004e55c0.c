// Address: 004e55c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e55c0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  HRGN ho;
  HDC hdc;
  HRGN hrgn;
  
  ho = CreateRectRgn(*param_3,param_3[1],param_3[2],param_3[3]);
  hrgn = ho;
  hdc = (HDC)FUN_0042b5a8(param_2);
  SelectClipRgn(hdc,hrgn);
  DeleteObject(ho);
  return;
}

