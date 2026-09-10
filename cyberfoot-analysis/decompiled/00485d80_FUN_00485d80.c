// Address: 00485d80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00485d80(void)

{
  DWORD DVar1;
  
  if (DAT_0066cc0c != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_0066cc0c);
  }
  DAT_0066cc0c = (HHOOK)0x0;
  if (DAT_0066cc10 != (HANDLE)0x0) {
    SetEvent(DAT_0066cc08);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_0066cc04) {
      WaitForSingleObject(DAT_0066cc10,0xffffffff);
    }
    CloseHandle(DAT_0066cc10);
    DAT_0066cc10 = (HANDLE)0x0;
  }
  return;
}

