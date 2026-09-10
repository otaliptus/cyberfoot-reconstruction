// Address: 005511ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005511ec(void)

{
  if (DAT_00669de4 == '\0') {
    DAT_0067b3cc = LoadLibraryA("UXTHEME.DLL");
    if (DAT_0067b3cc < (HMODULE)0x20) {
      DAT_00669de4 = '\0';
    }
    else {
      DAT_00669de4 = '\x01';
      _DAT_0067b314 = GetProcAddress(DAT_0067b3cc,"OpenThemeData");
      if (_DAT_0067b314 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x601);
      }
      _DAT_0067b318 = GetProcAddress(DAT_0067b3cc,"CloseThemeData");
      if (_DAT_0067b318 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x604);
      }
      _DAT_0067b31c = GetProcAddress(DAT_0067b3cc,"DrawThemeBackground");
      if (_DAT_0067b31c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x607);
      }
      _DAT_0067b320 = GetProcAddress(DAT_0067b3cc,"DrawThemeText");
      if (_DAT_0067b320 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x60a);
      }
      _DAT_0067b324 = GetProcAddress(DAT_0067b3cc,"GetThemeBackgroundContentRect");
      if (_DAT_0067b324 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x60d);
      }
      _DAT_0067b328 = GetProcAddress(DAT_0067b3cc,"GetThemeBackgroundExtent");
      if (_DAT_0067b328 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x610);
      }
      _DAT_0067b32c = GetProcAddress(DAT_0067b3cc,"GetThemeTextExtent");
      if (_DAT_0067b32c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x613);
      }
      _DAT_0067b330 = GetProcAddress(DAT_0067b3cc,"GetThemeTextMetrics");
      if (_DAT_0067b330 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x616);
      }
      _DAT_0067b334 = GetProcAddress(DAT_0067b3cc,"GetThemeBackgroundRegion");
      if (_DAT_0067b334 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x619);
      }
      _DAT_0067b338 = GetProcAddress(DAT_0067b3cc,"HitTestThemeBackground");
      if (_DAT_0067b338 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x61c);
      }
      _DAT_0067b33c = GetProcAddress(DAT_0067b3cc,"DrawThemeEdge");
      if (_DAT_0067b33c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x61f);
      }
      _DAT_0067b340 = GetProcAddress(DAT_0067b3cc,"DrawThemeIcon");
      if (_DAT_0067b340 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x622);
      }
      _DAT_0067b344 = GetProcAddress(DAT_0067b3cc,"IsThemePartDefined");
      if (_DAT_0067b344 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x625);
      }
      _DAT_0067b348 = GetProcAddress(DAT_0067b3cc,"IsThemeBackgroundPartiallyTransparent");
      if (_DAT_0067b348 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x628);
      }
      DAT_0067b34c = GetProcAddress(DAT_0067b3cc,"GetThemeColor");
      if (DAT_0067b34c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x62b);
      }
      DAT_0067b350 = GetProcAddress(DAT_0067b3cc,"GetThemeMetric");
      if (DAT_0067b350 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x62e);
      }
      DAT_0067b354 = GetProcAddress(DAT_0067b3cc,"GetThemeString");
      if (DAT_0067b354 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x631);
      }
      DAT_0067b358 = GetProcAddress(DAT_0067b3cc,"GetThemeBool");
      if (DAT_0067b358 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x634);
      }
      DAT_0067b35c = GetProcAddress(DAT_0067b3cc,"GetThemeInt");
      if (DAT_0067b35c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x637);
      }
      DAT_0067b360 = GetProcAddress(DAT_0067b3cc,"GetThemeEnumValue");
      if (DAT_0067b360 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x63a);
      }
      DAT_0067b364 = GetProcAddress(DAT_0067b3cc,"GetThemePosition");
      if (DAT_0067b364 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x63d);
      }
      DAT_0067b368 = GetProcAddress(DAT_0067b3cc,"GetThemeFont");
      if (DAT_0067b368 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x640);
      }
      DAT_0067b36c = GetProcAddress(DAT_0067b3cc,"GetThemeRect");
      if (DAT_0067b36c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x643);
      }
      DAT_0067b370 = GetProcAddress(DAT_0067b3cc,"GetThemeMargins");
      if (DAT_0067b370 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x646);
      }
      DAT_0067b374 = GetProcAddress(DAT_0067b3cc,"GetThemeIntList");
      if (DAT_0067b374 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x649);
      }
      DAT_0067b378 = GetProcAddress(DAT_0067b3cc,"SetWindowTheme");
      if (DAT_0067b378 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x64c);
      }
      DAT_0067b37c = GetProcAddress(DAT_0067b3cc,"GetThemeFilename");
      if (DAT_0067b37c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x64f);
      }
      DAT_0067b380 = GetProcAddress(DAT_0067b3cc,"GetThemeSysColor");
      if (DAT_0067b380 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x652);
      }
      DAT_0067b384 = GetProcAddress(DAT_0067b3cc,"GetThemeSysColorBrush");
      if (DAT_0067b384 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x655);
      }
      DAT_0067b388 = GetProcAddress(DAT_0067b3cc,"GetThemeSysBool");
      if (DAT_0067b388 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x658);
      }
      DAT_0067b38c = GetProcAddress(DAT_0067b3cc,"GetThemeSysSize");
      if (DAT_0067b38c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x65b);
      }
      DAT_0067b390 = GetProcAddress(DAT_0067b3cc,"GetThemeSysFont");
      if (DAT_0067b390 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x65e);
      }
      DAT_0067b394 = GetProcAddress(DAT_0067b3cc,"GetThemeSysString");
      if (DAT_0067b394 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x661);
      }
      DAT_0067b398 = GetProcAddress(DAT_0067b3cc,"GetThemeSysInt");
      if (DAT_0067b398 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x664);
      }
      DAT_0067b39c = GetProcAddress(DAT_0067b3cc,"IsThemeActive");
      if (DAT_0067b39c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x667);
      }
      DAT_0067b3a0 = GetProcAddress(DAT_0067b3cc,"IsAppThemed");
      if (DAT_0067b3a0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x66a);
      }
      DAT_0067b3a4 = GetProcAddress(DAT_0067b3cc,"GetWindowTheme");
      if (DAT_0067b3a4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x66d);
      }
      DAT_0067b3a8 = GetProcAddress(DAT_0067b3cc,"EnableThemeDialogTexture");
      if (DAT_0067b3a8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x670);
      }
      DAT_0067b3ac = GetProcAddress(DAT_0067b3cc,"IsThemeDialogTextureEnabled");
      if (DAT_0067b3ac == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x673);
      }
      DAT_0067b3b0 = GetProcAddress(DAT_0067b3cc,"GetThemeAppProperties");
      if (DAT_0067b3b0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x676);
      }
      DAT_0067b3b4 = GetProcAddress(DAT_0067b3cc,"SetThemeAppProperties");
      if (DAT_0067b3b4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x679);
      }
      DAT_0067b3b8 = GetProcAddress(DAT_0067b3cc,"GetCurrentThemeName");
      if (DAT_0067b3b8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x67c);
      }
      DAT_0067b3bc = GetProcAddress(DAT_0067b3cc,"GetThemeDocumentationProperty");
      if (DAT_0067b3bc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x67f);
      }
      DAT_0067b3c0 = GetProcAddress(DAT_0067b3cc,"DrawThemeParentBackground");
      if (DAT_0067b3c0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x682);
      }
      DAT_0067b3c4 = GetProcAddress(DAT_0067b3cc,"EnableTheming");
      if (DAT_0067b3c4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ACXPVS.pas",
                     0x685);
      }
    }
  }
  return;
}

