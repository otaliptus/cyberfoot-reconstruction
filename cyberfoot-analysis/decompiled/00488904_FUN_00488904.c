// Address: 00488904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488904(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("User32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_006631e4 = GetProcAddress(hModule,"SetLayeredWindowAttributes");
  }
  return;
}

