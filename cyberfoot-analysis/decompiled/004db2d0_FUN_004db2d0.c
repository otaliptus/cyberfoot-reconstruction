// Address: 004db2d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db2d0(void)

{
  DWORD dwThreadId;
  
  if (*(int *)PTR_DAT_0066b790 != 2) {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntForms.pas"
                 ,0x304);
  }
  dwThreadId = GetCurrentThreadId();
  DAT_0067aeb8 = SetWindowsHookExW(3,FUN_004db270,(HINSTANCE)0x0,dwThreadId);
  if (DAT_0067aeb8 == (HHOOK)0x0) {
    FUN_0040f904();
  }
  return;
}

