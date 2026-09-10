// Address: 004064a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HMODULE FUN_004064a4(LPCSTR param_1)

{
  LSTATUS LVar1;
  HMODULE pHVar2;
  LCID Locale;
  char *pcVar3;
  LPSTR lpString1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LCTYPE LCType;
  int iVar5;
  char local_121 [261];
  DWORD local_1c;
  BYTE local_16 [4];
  undefined1 local_12;
  char local_11 [2];
  undefined1 local_f;
  HKEY local_c;
  LPCSTR local_8;
  
  local_8 = param_1;
  GetModuleFileNameA((HMODULE)0x0,local_121,0x105);
  local_16[0] = '\0';
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\Borland\\Locales",0,0xf0019,&local_c);
  if (LVar1 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Software\\Borland\\Locales",0,0xf0019,&local_c);
    if (LVar1 != 0) {
      LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\Borland\\Delphi\\Locales",0,0xf0019,&local_c
                           );
      if (LVar1 != 0) {
        lstrcpynA(local_121,local_8,0x105);
        iVar5 = 5;
        pcVar3 = local_11;
        LCType = 3;
        Locale = GetThreadLocale();
        GetLocaleInfoA(Locale,LCType,pcVar3,iVar5);
        pHVar2 = (HMODULE)0x0;
        if ((local_121[0] != '\0') && ((local_11[0] != '\0' || (local_16[0] != '\0')))) {
          iVar5 = lstrlenA(local_121);
          for (pcVar3 = local_121 + iVar5; (*pcVar3 != '.' && (pcVar3 != local_121));
              pcVar3 = pcVar3 + -1) {
          }
          if (pcVar3 != local_121) {
            lpString1 = pcVar3 + 1;
            if (local_16[0] != '\0') {
              lstrcpynA(lpString1,(LPCSTR)local_16,0x105 - ((int)lpString1 - (int)local_121));
              pHVar2 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
            }
            if ((pHVar2 == (HMODULE)0x0) && (local_11[0] != '\0')) {
              lstrcpynA(lpString1,local_11,0x105 - ((int)lpString1 - (int)local_121));
              pHVar2 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
              if (pHVar2 == (HMODULE)0x0) {
                local_f = 0;
                lstrcpynA(lpString1,local_11,0x105 - ((int)lpString1 - (int)local_121));
                pHVar2 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
              }
            }
          }
        }
        return pHVar2;
      }
    }
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffec8;
  local_1c = 5;
  FUN_004062ec(local_121,0x105);
  LVar1 = RegQueryValueExA(local_c,local_121,(LPDWORD)0x0,(LPDWORD)0x0,local_16,&local_1c);
  if (LVar1 != 0) {
    LVar1 = RegQueryValueExA(local_c,"",(LPDWORD)0x0,(LPDWORD)0x0,local_16,&local_1c);
    if (LVar1 != 0) {
      local_16[0] = '\0';
    }
  }
  local_12 = 0;
  *in_FS_OFFSET = uVar4;
  pHVar2 = (HMODULE)RegCloseKey(local_c);
  return pHVar2;
}

