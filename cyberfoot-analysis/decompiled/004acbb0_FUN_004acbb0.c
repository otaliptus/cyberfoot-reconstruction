// Address: 004acbb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004acbb0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_006694ac = GetProcAddress(hModule,"CoCreateInstanceEx");
    DAT_006694b0 = GetProcAddress(hModule,"CoInitializeEx");
    _DAT_006694b4 = GetProcAddress(hModule,"CoAddRefServerProcess");
    _DAT_006694b8 = GetProcAddress(hModule,"CoReleaseServerProcess");
    _DAT_006694bc = GetProcAddress(hModule,"CoResumeClassObjects");
    _DAT_006694c0 = GetProcAddress(hModule,"CoSuspendClassObjects");
  }
  return;
}

