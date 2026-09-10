// Address: 00471500
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471500(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_0066b7ac[0xc] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_0066cba8 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_0066cba8 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_006630c8 == (HMODULE)0x0) {
      DAT_006630c8 = LoadLibraryA("imm32.dll");
      if (DAT_006630c8 != (HMODULE)0x0) {
        DAT_0066cbac = GetProcAddress(DAT_006630c8,"ImmGetContext");
        DAT_0066cbb0 = GetProcAddress(DAT_006630c8,"ImmReleaseContext");
        DAT_0066cbb4 = GetProcAddress(DAT_006630c8,"ImmGetConversionStatus");
        DAT_0066cbb8 = GetProcAddress(DAT_006630c8,"ImmSetConversionStatus");
        DAT_0066cbbc = GetProcAddress(DAT_006630c8,"ImmSetOpenStatus");
        _DAT_0066cbc0 = GetProcAddress(DAT_006630c8,"ImmSetCompositionWindow");
        _DAT_0066cbc4 = GetProcAddress(DAT_006630c8,"ImmSetCompositionFontA");
        _DAT_0066cbc8 = GetProcAddress(DAT_006630c8,"ImmGetCompositionStringA");
        DAT_0066cbcc = GetProcAddress(DAT_006630c8,"ImmIsIME");
        _DAT_0066cbd0 = GetProcAddress(DAT_006630c8,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x471665;
    SetErrorMode(uMode);
    return;
  }
  return;
}

