// Address: 00432a84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00432a84(void)

{
  if (DAT_0066c900 == (HMODULE)0x0) {
    DAT_0066c900 = GetModuleHandleA("comctl32.dll");
    if (DAT_0066c900 != (HMODULE)0x0) {
      DAT_0066c904 = GetProcAddress(DAT_0066c900,"InitCommonControlsEx");
    }
  }
  return;
}

