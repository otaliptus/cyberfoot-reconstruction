// Address: 005c9334
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9334(void)

{
  if (DAT_0066a198 == '\0') {
    DAT_006d2cfc = LoadLibraryA("UXTHEME.DLL");
    if (DAT_006d2cfc < (HMODULE)0x20) {
      DAT_0066a198 = '\0';
    }
    else {
      DAT_0066a198 = '\x01';
      _DAT_006d2c44 = GetProcAddress(DAT_006d2cfc,"OpenThemeData");
      if (_DAT_006d2c44 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x601);
      }
      _DAT_006d2c48 = GetProcAddress(DAT_006d2cfc,"CloseThemeData");
      if (_DAT_006d2c48 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x604);
      }
      _DAT_006d2c4c = GetProcAddress(DAT_006d2cfc,"DrawThemeBackground");
      if (_DAT_006d2c4c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x607);
      }
      _DAT_006d2c50 = GetProcAddress(DAT_006d2cfc,"DrawThemeText");
      if (_DAT_006d2c50 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x60a);
      }
      _DAT_006d2c54 = GetProcAddress(DAT_006d2cfc,"GetThemeBackgroundContentRect");
      if (_DAT_006d2c54 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x60d);
      }
      _DAT_006d2c58 = GetProcAddress(DAT_006d2cfc,"GetThemeBackgroundExtent");
      if (_DAT_006d2c58 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x610);
      }
      _DAT_006d2c5c = GetProcAddress(DAT_006d2cfc,"GetThemeTextExtent");
      if (_DAT_006d2c5c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x613);
      }
      _DAT_006d2c60 = GetProcAddress(DAT_006d2cfc,"GetThemeTextMetrics");
      if (_DAT_006d2c60 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x616);
      }
      _DAT_006d2c64 = GetProcAddress(DAT_006d2cfc,"GetThemeBackgroundRegion");
      if (_DAT_006d2c64 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x619);
      }
      _DAT_006d2c68 = GetProcAddress(DAT_006d2cfc,"HitTestThemeBackground");
      if (_DAT_006d2c68 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x61c);
      }
      _DAT_006d2c6c = GetProcAddress(DAT_006d2cfc,"DrawThemeEdge");
      if (_DAT_006d2c6c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x61f);
      }
      _DAT_006d2c70 = GetProcAddress(DAT_006d2cfc,"DrawThemeIcon");
      if (_DAT_006d2c70 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x622);
      }
      _DAT_006d2c74 = GetProcAddress(DAT_006d2cfc,"IsThemePartDefined");
      if (_DAT_006d2c74 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x625);
      }
      _DAT_006d2c78 = GetProcAddress(DAT_006d2cfc,"IsThemeBackgroundPartiallyTransparent");
      if (_DAT_006d2c78 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x628);
      }
      DAT_006d2c7c = GetProcAddress(DAT_006d2cfc,"GetThemeColor");
      if (DAT_006d2c7c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x62b);
      }
      DAT_006d2c80 = GetProcAddress(DAT_006d2cfc,"GetThemeMetric");
      if (DAT_006d2c80 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x62e);
      }
      DAT_006d2c84 = GetProcAddress(DAT_006d2cfc,"GetThemeString");
      if (DAT_006d2c84 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x631);
      }
      DAT_006d2c88 = GetProcAddress(DAT_006d2cfc,"GetThemeBool");
      if (DAT_006d2c88 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x634);
      }
      DAT_006d2c8c = GetProcAddress(DAT_006d2cfc,"GetThemeInt");
      if (DAT_006d2c8c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x637);
      }
      DAT_006d2c90 = GetProcAddress(DAT_006d2cfc,"GetThemeEnumValue");
      if (DAT_006d2c90 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x63a);
      }
      DAT_006d2c94 = GetProcAddress(DAT_006d2cfc,"GetThemePosition");
      if (DAT_006d2c94 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x63d);
      }
      DAT_006d2c98 = GetProcAddress(DAT_006d2cfc,"GetThemeFont");
      if (DAT_006d2c98 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x640);
      }
      DAT_006d2c9c = GetProcAddress(DAT_006d2cfc,"GetThemeRect");
      if (DAT_006d2c9c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x643);
      }
      DAT_006d2ca0 = GetProcAddress(DAT_006d2cfc,"GetThemeMargins");
      if (DAT_006d2ca0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x646);
      }
      DAT_006d2ca4 = GetProcAddress(DAT_006d2cfc,"GetThemeIntList");
      if (DAT_006d2ca4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x649);
      }
      DAT_006d2ca8 = GetProcAddress(DAT_006d2cfc,"SetWindowTheme");
      if (DAT_006d2ca8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x64c);
      }
      DAT_006d2cac = GetProcAddress(DAT_006d2cfc,"GetThemeFilename");
      if (DAT_006d2cac == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x64f);
      }
      DAT_006d2cb0 = GetProcAddress(DAT_006d2cfc,"GetThemeSysColor");
      if (DAT_006d2cb0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x652);
      }
      DAT_006d2cb4 = GetProcAddress(DAT_006d2cfc,"GetThemeSysColorBrush");
      if (DAT_006d2cb4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x655);
      }
      DAT_006d2cb8 = GetProcAddress(DAT_006d2cfc,"GetThemeSysBool");
      if (DAT_006d2cb8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x658);
      }
      DAT_006d2cbc = GetProcAddress(DAT_006d2cfc,"GetThemeSysSize");
      if (DAT_006d2cbc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x65b);
      }
      DAT_006d2cc0 = GetProcAddress(DAT_006d2cfc,"GetThemeSysFont");
      if (DAT_006d2cc0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x65e);
      }
      DAT_006d2cc4 = GetProcAddress(DAT_006d2cfc,"GetThemeSysString");
      if (DAT_006d2cc4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x661);
      }
      DAT_006d2cc8 = GetProcAddress(DAT_006d2cfc,"GetThemeSysInt");
      if (DAT_006d2cc8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x664);
      }
      DAT_006d2ccc = GetProcAddress(DAT_006d2cfc,"IsThemeActive");
      if (DAT_006d2ccc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x667);
      }
      DAT_006d2cd0 = GetProcAddress(DAT_006d2cfc,"IsAppThemed");
      if (DAT_006d2cd0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x66a);
      }
      DAT_006d2cd4 = GetProcAddress(DAT_006d2cfc,"GetWindowTheme");
      if (DAT_006d2cd4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x66d);
      }
      DAT_006d2cd8 = GetProcAddress(DAT_006d2cfc,"EnableThemeDialogTexture");
      if (DAT_006d2cd8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x670);
      }
      DAT_006d2cdc = GetProcAddress(DAT_006d2cfc,"IsThemeDialogTextureEnabled");
      if (DAT_006d2cdc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x673);
      }
      DAT_006d2ce0 = GetProcAddress(DAT_006d2cfc,"GetThemeAppProperties");
      if (DAT_006d2ce0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x676);
      }
      DAT_006d2ce4 = GetProcAddress(DAT_006d2cfc,"SetThemeAppProperties");
      if (DAT_006d2ce4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x679);
      }
      DAT_006d2ce8 = GetProcAddress(DAT_006d2cfc,"GetCurrentThemeName");
      if (DAT_006d2ce8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x67c);
      }
      DAT_006d2cec = GetProcAddress(DAT_006d2cfc,"GetThemeDocumentationProperty");
      if (DAT_006d2cec == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x67f);
      }
      DAT_006d2cf0 = GetProcAddress(DAT_006d2cfc,"DrawThemeParentBackground");
      if (DAT_006d2cf0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x682);
      }
      DAT_006d2cf4 = GetProcAddress(DAT_006d2cfc,"EnableTheming");
      if (DAT_006d2cf4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\ATXPVS.pas",
                     0x685);
      }
    }
  }
  return;
}

