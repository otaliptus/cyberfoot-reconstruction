// Address: 004e64b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e64b0(undefined4 param_1,int *param_2)

{
  HRGN ho;
  HDC hdc;
  HRGN hrgn;
  
  ho = CreateRectRgn(*param_2,param_2[1],param_2[2],param_2[3]);
  hrgn = ho;
  hdc = (HDC)FUN_0042b5a8(param_1);
  SelectClipRgn(hdc,hrgn);
  DeleteObject(ho);
  return;
}

