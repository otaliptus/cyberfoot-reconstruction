// Address: 00460630
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00460630(undefined4 param_1)

{
  char cVar1;
  DWORD dwThreadId;
  undefined4 uVar2;
  WNDENUMPROC lpfn;
  undefined1 *lParam;
  undefined1 auStack_18 [4];
  HWND local_14;
  char local_c;
  
  lParam = auStack_18;
  uVar2 = 0;
  FUN_0046056c(auStack_18);
  if (local_c != '\0') {
    lpfn = (WNDENUMPROC)&LAB_00460514;
    dwThreadId = GetWindowThreadProcessId(local_14,(LPDWORD)0x0);
    EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  }
  cVar1 = FUN_00460610(param_1,auStack_18);
  if (cVar1 == '\0') {
    cVar1 = FUN_00460614(param_1,auStack_18);
    if (cVar1 != '\0') {
      FUN_0046068c(param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

