// Address: 00471474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00471474(undefined4 param_1,HWND param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_004713e8(param_1);
  if (param_2 != pHVar1) {
    if (param_2 == (HWND)0x0) {
      ReleaseCapture();
    }
    else {
      SetCapture(param_2);
    }
  }
  return;
}

