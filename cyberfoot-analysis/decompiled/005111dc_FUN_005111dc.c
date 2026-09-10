// Address: 005111dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005111dc(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  HWND hWnd;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;
  RECT local_1c;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = param_1;
  local_5 = param_2;
  switch(param_2) {
  case 1:
    FUN_0050f004(param_1,&local_1c);
    break;
  case 2:
    FUN_0050f33c(param_1,&local_1c);
    break;
  case 3:
    FUN_0050f410(param_1,&local_1c);
    break;
  case 4:
    FUN_0050f458(param_1,&local_1c);
    break;
  case 5:
    FUN_0050f4d0(param_1,&local_1c);
  }
  cVar1 = FUN_0051115c();
  if (cVar1 != '\0') {
    flags = 1;
    hrgnUpdate = (HRGN)0x0;
    lprcUpdate = &local_1c;
    hWnd = (HWND)FUN_0046cae0(local_c);
    RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  }
  return;
}

