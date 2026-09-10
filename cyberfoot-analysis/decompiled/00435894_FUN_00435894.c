// Address: 00435894
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435894(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0066c97c = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_0066c980 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_0066c974 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_0066c978 = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_0066c950 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_0066c950 == (FARPROC)0x0) {
      _DAT_0066c950 = EnableScrollBar;
    }
    _DAT_0066c954 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_0066c954 == (FARPROC)0x0) {
      _DAT_0066c954 = ShowScrollBar;
    }
    _DAT_0066c958 = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_0066c958 == (FARPROC)0x0) {
      _DAT_0066c958 = (FARPROC)&DAT_00407c58;
    }
    _DAT_0066c95c = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (_DAT_0066c95c == (FARPROC)0x0) {
      _DAT_0066c95c = GetScrollInfo;
    }
    DAT_0066c960 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_0066c960 == (FARPROC)0x0) {
      DAT_0066c960 = GetScrollPos;
    }
    DAT_0066c964 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_0066c964 == (FARPROC)0x0) {
      DAT_0066c964 = (FARPROC)&DAT_00407f10;
    }
    DAT_0066c968 = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_0066c968 == (FARPROC)0x0) {
      DAT_0066c968 = SetScrollInfo;
    }
    _DAT_0066c96c = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_0066c96c == (FARPROC)0x0) {
      _DAT_0066c96c = (FARPROC)&DAT_00407f18;
    }
  }
  return;
}

