// Address: 00533d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533d58(void)

{
  if (DAT_00669dd0 == '\0') {
    DAT_0067b2f8 = LoadLibraryA("UXTHEME.DLL");
    if (DAT_0067b2f8 < (HMODULE)0x20) {
      DAT_00669dd0 = '\0';
    }
    else {
      DAT_00669dd0 = '\x01';
      _DAT_0067b240 = GetProcAddress(DAT_0067b2f8,"OpenThemeData");
      if (_DAT_0067b240 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x5fc);
      }
      _DAT_0067b244 = GetProcAddress(DAT_0067b2f8,"CloseThemeData");
      if (_DAT_0067b244 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x5ff);
      }
      _DAT_0067b248 = GetProcAddress(DAT_0067b2f8,"DrawThemeBackground");
      if (_DAT_0067b248 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x602);
      }
      _DAT_0067b24c = GetProcAddress(DAT_0067b2f8,"DrawThemeText");
      if (_DAT_0067b24c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x605);
      }
      _DAT_0067b250 = GetProcAddress(DAT_0067b2f8,"GetThemeBackgroundContentRect");
      if (_DAT_0067b250 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x608);
      }
      _DAT_0067b254 = GetProcAddress(DAT_0067b2f8,"GetThemeBackgroundExtent");
      if (_DAT_0067b254 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x60b);
      }
      _DAT_0067b258 = GetProcAddress(DAT_0067b2f8,"GetThemeTextExtent");
      if (_DAT_0067b258 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x60e);
      }
      _DAT_0067b25c = GetProcAddress(DAT_0067b2f8,"GetThemeTextMetrics");
      if (_DAT_0067b25c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x611);
      }
      _DAT_0067b260 = GetProcAddress(DAT_0067b2f8,"GetThemeBackgroundRegion");
      if (_DAT_0067b260 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x614);
      }
      _DAT_0067b264 = GetProcAddress(DAT_0067b2f8,"HitTestThemeBackground");
      if (_DAT_0067b264 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x617);
      }
      _DAT_0067b268 = GetProcAddress(DAT_0067b2f8,"DrawThemeEdge");
      if (_DAT_0067b268 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x61a);
      }
      _DAT_0067b26c = GetProcAddress(DAT_0067b2f8,"DrawThemeIcon");
      if (_DAT_0067b26c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x61d);
      }
      _DAT_0067b270 = GetProcAddress(DAT_0067b2f8,"IsThemePartDefined");
      if (_DAT_0067b270 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x620);
      }
      _DAT_0067b274 = GetProcAddress(DAT_0067b2f8,"IsThemeBackgroundPartiallyTransparent");
      if (_DAT_0067b274 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x623);
      }
      DAT_0067b278 = GetProcAddress(DAT_0067b2f8,"GetThemeColor");
      if (DAT_0067b278 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x626);
      }
      DAT_0067b27c = GetProcAddress(DAT_0067b2f8,"GetThemeMetric");
      if (DAT_0067b27c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x629);
      }
      DAT_0067b280 = GetProcAddress(DAT_0067b2f8,"GetThemeString");
      if (DAT_0067b280 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x62c);
      }
      DAT_0067b284 = GetProcAddress(DAT_0067b2f8,"GetThemeBool");
      if (DAT_0067b284 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x62f);
      }
      DAT_0067b288 = GetProcAddress(DAT_0067b2f8,"GetThemeInt");
      if (DAT_0067b288 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x632);
      }
      DAT_0067b28c = GetProcAddress(DAT_0067b2f8,"GetThemeEnumValue");
      if (DAT_0067b28c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x635);
      }
      DAT_0067b290 = GetProcAddress(DAT_0067b2f8,"GetThemePosition");
      if (DAT_0067b290 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x638);
      }
      DAT_0067b294 = GetProcAddress(DAT_0067b2f8,"GetThemeFont");
      if (DAT_0067b294 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x63b);
      }
      DAT_0067b298 = GetProcAddress(DAT_0067b2f8,"GetThemeRect");
      if (DAT_0067b298 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x63e);
      }
      DAT_0067b29c = GetProcAddress(DAT_0067b2f8,"GetThemeMargins");
      if (DAT_0067b29c == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x641);
      }
      DAT_0067b2a0 = GetProcAddress(DAT_0067b2f8,"GetThemeIntList");
      if (DAT_0067b2a0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x644);
      }
      DAT_0067b2a4 = GetProcAddress(DAT_0067b2f8,"SetWindowTheme");
      if (DAT_0067b2a4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x647);
      }
      DAT_0067b2a8 = GetProcAddress(DAT_0067b2f8,"GetThemeFilename");
      if (DAT_0067b2a8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x64a);
      }
      DAT_0067b2ac = GetProcAddress(DAT_0067b2f8,"GetThemeSysColor");
      if (DAT_0067b2ac == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x64d);
      }
      DAT_0067b2b0 = GetProcAddress(DAT_0067b2f8,"GetThemeSysColorBrush");
      if (DAT_0067b2b0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x650);
      }
      DAT_0067b2b4 = GetProcAddress(DAT_0067b2f8,"GetThemeSysBool");
      if (DAT_0067b2b4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x653);
      }
      DAT_0067b2b8 = GetProcAddress(DAT_0067b2f8,"GetThemeSysSize");
      if (DAT_0067b2b8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x656);
      }
      DAT_0067b2bc = GetProcAddress(DAT_0067b2f8,"GetThemeSysFont");
      if (DAT_0067b2bc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x659);
      }
      DAT_0067b2c0 = GetProcAddress(DAT_0067b2f8,"GetThemeSysString");
      if (DAT_0067b2c0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x65c);
      }
      DAT_0067b2c4 = GetProcAddress(DAT_0067b2f8,"GetThemeSysInt");
      if (DAT_0067b2c4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x65f);
      }
      DAT_0067b2c8 = GetProcAddress(DAT_0067b2f8,"IsThemeActive");
      if (DAT_0067b2c8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x662);
      }
      DAT_0067b2cc = GetProcAddress(DAT_0067b2f8,"IsAppThemed");
      if (DAT_0067b2cc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x665);
      }
      DAT_0067b2d0 = GetProcAddress(DAT_0067b2f8,"GetWindowTheme");
      if (DAT_0067b2d0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x668);
      }
      DAT_0067b2d4 = GetProcAddress(DAT_0067b2f8,"EnableThemeDialogTexture");
      if (DAT_0067b2d4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x66b);
      }
      DAT_0067b2d8 = GetProcAddress(DAT_0067b2f8,"IsThemeDialogTextureEnabled");
      if (DAT_0067b2d8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x66e);
      }
      DAT_0067b2dc = GetProcAddress(DAT_0067b2f8,"GetThemeAppProperties");
      if (DAT_0067b2dc == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x671);
      }
      DAT_0067b2e0 = GetProcAddress(DAT_0067b2f8,"SetThemeAppProperties");
      if (DAT_0067b2e0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x674);
      }
      DAT_0067b2e4 = GetProcAddress(DAT_0067b2f8,"GetCurrentThemeName");
      if (DAT_0067b2e4 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x677);
      }
      DAT_0067b2e8 = GetProcAddress(DAT_0067b2f8,"GetThemeDocumentationProperty");
      if (DAT_0067b2e8 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x67a);
      }
      DAT_0067b2ec = GetProcAddress(DAT_0067b2f8,"DrawThemeParentBackground");
      if (DAT_0067b2ec == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x67d);
      }
      DAT_0067b2f0 = GetProcAddress(DAT_0067b2f8,"EnableTheming");
      if (DAT_0067b2f0 == (FARPROC)0x0) {
        FUN_00404830("Assertion failure",
                     "C:\\Users\\Emael\\Documents\\tmssoftware\\TMS Component Pack\\BtnXPVS.pas",
                     0x680);
      }
    }
  }
  return;
}

