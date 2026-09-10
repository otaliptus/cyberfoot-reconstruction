// Address: 00435ebc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435ebc(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x435ed0;
  FUN_00435cb4(DAT_0066ca50);
  puStack_14 = &LAB_0043626f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  DAT_0066ca4c = DAT_0066ca4c + 1;
  puStack_10 = &stack0xfffffffc;
  if (DAT_0066ca48 == (HMODULE)0x0) {
    puStack_10 = &stack0xfffffffc;
    DAT_0066ca48 = LoadLibraryA("uxtheme.dll");
    if (DAT_0066ca48 != (HMODULE)0x0) {
      DAT_0066c988 = GetProcAddress(DAT_0066ca48,"OpenThemeData");
      DAT_0066c98c = GetProcAddress(DAT_0066ca48,"CloseThemeData");
      DAT_0066c990 = GetProcAddress(DAT_0066ca48,"DrawThemeBackground");
      _DAT_0066c994 = GetProcAddress(DAT_0066ca48,"DrawThemeText");
      DAT_0066c998 = GetProcAddress(DAT_0066ca48,"GetThemeBackgroundContentRect");
      _DAT_0066c99c = GetProcAddress(DAT_0066ca48,"GetThemeBackgroundContentRect");
      _DAT_0066c9a0 = GetProcAddress(DAT_0066ca48,"GetThemePartSize");
      _DAT_0066c9a4 = GetProcAddress(DAT_0066ca48,"GetThemeTextExtent");
      _DAT_0066c9a8 = GetProcAddress(DAT_0066ca48,"GetThemeTextMetrics");
      _DAT_0066c9ac = GetProcAddress(DAT_0066ca48,"GetThemeBackgroundRegion");
      _DAT_0066c9b0 = GetProcAddress(DAT_0066ca48,"HitTestThemeBackground");
      DAT_0066c9b4 = GetProcAddress(DAT_0066ca48,"DrawThemeEdge");
      DAT_0066c9b8 = GetProcAddress(DAT_0066ca48,"DrawThemeIcon");
      _DAT_0066c9bc = GetProcAddress(DAT_0066ca48,"IsThemePartDefined");
      DAT_0066c9c0 = GetProcAddress(DAT_0066ca48,"IsThemeBackgroundPartiallyTransparent");
      _DAT_0066c9c4 = GetProcAddress(DAT_0066ca48,"GetThemeColor");
      _DAT_0066c9c8 = GetProcAddress(DAT_0066ca48,"GetThemeMetric");
      _DAT_0066c9cc = GetProcAddress(DAT_0066ca48,"GetThemeString");
      _DAT_0066c9d0 = GetProcAddress(DAT_0066ca48,"GetThemeBool");
      _DAT_0066c9d4 = GetProcAddress(DAT_0066ca48,"GetThemeInt");
      _DAT_0066c9d8 = GetProcAddress(DAT_0066ca48,"GetThemeEnumValue");
      _DAT_0066c9dc = GetProcAddress(DAT_0066ca48,"GetThemePosition");
      _DAT_0066c9e0 = GetProcAddress(DAT_0066ca48,"GetThemeFont");
      _DAT_0066c9e4 = GetProcAddress(DAT_0066ca48,"GetThemeRect");
      _DAT_0066c9e8 = GetProcAddress(DAT_0066ca48,"GetThemeMargins");
      _DAT_0066c9ec = GetProcAddress(DAT_0066ca48,"GetThemeIntList");
      _DAT_0066c9f0 = GetProcAddress(DAT_0066ca48,"GetThemePropertyOrigin");
      _DAT_0066c9f4 = GetProcAddress(DAT_0066ca48,"SetWindowTheme");
      _DAT_0066c9f8 = GetProcAddress(DAT_0066ca48,"GetThemeFilename");
      _DAT_0066c9fc = GetProcAddress(DAT_0066ca48,"GetThemeSysColor");
      _DAT_0066ca00 = GetProcAddress(DAT_0066ca48,"GetThemeSysColorBrush");
      _DAT_0066ca04 = GetProcAddress(DAT_0066ca48,"GetThemeSysBool");
      _DAT_0066ca08 = GetProcAddress(DAT_0066ca48,"GetThemeSysSize");
      _DAT_0066ca0c = GetProcAddress(DAT_0066ca48,"GetThemeSysFont");
      _DAT_0066ca10 = GetProcAddress(DAT_0066ca48,"GetThemeSysString");
      _DAT_0066ca14 = GetProcAddress(DAT_0066ca48,"GetThemeSysInt");
      DAT_0066ca18 = GetProcAddress(DAT_0066ca48,"IsThemeActive");
      DAT_0066ca1c = GetProcAddress(DAT_0066ca48,"IsAppThemed");
      _DAT_0066ca20 = GetProcAddress(DAT_0066ca48,"GetWindowTheme");
      _DAT_0066ca24 = GetProcAddress(DAT_0066ca48,"EnableThemeDialogTexture");
      _DAT_0066ca28 = GetProcAddress(DAT_0066ca48,"IsThemeDialogTextureEnabled");
      _DAT_0066ca2c = GetProcAddress(DAT_0066ca48,"GetThemeAppProperties");
      _DAT_0066ca30 = GetProcAddress(DAT_0066ca48,"SetThemeAppProperties");
      _DAT_0066ca34 = GetProcAddress(DAT_0066ca48,"GetCurrentThemeName");
      _DAT_0066ca38 = GetProcAddress(DAT_0066ca48,"GetThemeDocumentationProperty");
      DAT_0066ca3c = GetProcAddress(DAT_0066ca48,"DrawThemeParentBackground");
      _DAT_0066ca40 = GetProcAddress(DAT_0066ca48,"EnableTheming");
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00436276;
  puStack_14 = (undefined1 *)0x43626e;
  FUN_00435cbc(DAT_0066ca50,uStack_18,puVar1);
  return;
}

