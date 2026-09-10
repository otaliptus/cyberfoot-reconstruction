// Address: 0040f9ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f9ec(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00662158 = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_00662158 == (FARPROC)0x0) {
    DAT_00662158 = (FARPROC)&LAB_0040a6ec;
  }
  return;
}

