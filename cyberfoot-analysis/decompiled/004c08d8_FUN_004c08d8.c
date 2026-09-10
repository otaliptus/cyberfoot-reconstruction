// Address: 004c08d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004c08d8(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("kernel32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"GetLocaleInfoEx");
    return pFVar1 != (FARPROC)0x0;
  }
  return false;
}

