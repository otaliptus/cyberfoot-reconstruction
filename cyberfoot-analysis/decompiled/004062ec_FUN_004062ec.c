// Address: 004062ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char * FUN_004062ec(char *param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  char *pcVar3;
  LPCSTR pCVar4;
  HANDLE hFindFile;
  int iVar5;
  CHAR local_253 [261];
  undefined1 local_14e [322];
  int local_c;
  char *local_8;
  
  local_14e._318_4_ = param_1;
  local_c = param_2;
  local_8 = param_1;
  hModule = GetModuleHandleA("kernel32.dll");
  if (((hModule == (HMODULE)0x0) ||
      (pFVar1 = GetProcAddress(hModule,"GetLongPathNameA"), pFVar1 == (FARPROC)0x0)) ||
     (iVar2 = (*pFVar1)(), iVar2 == 0)) {
    if (*local_8 == '\\') {
      if (local_8[1] != '\\') {
        return (char *)local_14e._318_4_;
      }
      pcVar3 = (char *)thunk_FUN_004062e0(local_8 + 2);
      if (*pcVar3 == '\0') {
        return (char *)local_14e._318_4_;
      }
      pcVar3 = (char *)thunk_FUN_004062e0(pcVar3 + 1);
      if (*pcVar3 == '\0') {
        return (char *)local_14e._318_4_;
      }
    }
    else {
      pcVar3 = local_8 + 2;
    }
    iVar2 = (int)pcVar3 - (int)local_8;
    lstrcpynA(local_253,local_8,iVar2 + 1);
    while (*pcVar3 != '\0') {
      pCVar4 = (LPCSTR)thunk_FUN_004062e0(pcVar3 + 1);
      if (0x105 < (int)(pCVar4 + (iVar2 - (int)pcVar3) + 1)) {
        return (char *)local_14e._318_4_;
      }
      lstrcpynA(local_253 + iVar2,pcVar3,(int)(pCVar4 + (1 - (int)pcVar3)));
      hFindFile = FindFirstFileA(local_253,(LPWIN32_FIND_DATAA)local_14e);
      if (hFindFile == (HANDLE)0xffffffff) {
        return (char *)local_14e._318_4_;
      }
      FindClose(hFindFile);
      iVar5 = lstrlenA(local_14e + 0x2c);
      if (0x105 < iVar5 + iVar2 + 2) {
        return (char *)local_14e._318_4_;
      }
      local_253[iVar2] = '\\';
      lstrcpynA(local_253 + iVar2 + 1,local_14e + 0x2c,0x104 - iVar2);
      iVar5 = lstrlenA(local_14e + 0x2c);
      iVar2 = iVar2 + iVar5 + 1;
      pcVar3 = pCVar4;
    }
    lstrcpynA(local_8,local_253,local_c);
  }
  else {
    lstrcpynA(local_8,local_253,local_c);
  }
  return (char *)local_14e._318_4_;
}

