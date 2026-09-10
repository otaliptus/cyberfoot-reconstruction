// Address: 0047e230
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047e230(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_006631f4 = 0;
  DAT_006631f8 = 0;
  lParam = 0;
  lpfn = FUN_0047e1cc;
  DAT_006631f0 = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_006631f4 != 0) {
    return DAT_006631f4;
  }
  return DAT_006631f8;
}

