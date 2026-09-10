// Address: 00485d0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00485d0c(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_0066cbf4 + 0xa5) == '\0') {
    DStack_4 = param_3;
    if (DAT_0066cc0c == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_0066cc0c = SetWindowsHookExA(3,FUN_00485cc8,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_0066cc08 == (HANDLE)0x0) {
      DAT_0066cc08 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_0066cc10 == (HANDLE)0x0) {
      DAT_0066cc10 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,
                                  (LPTHREAD_START_ROUTINE)&LAB_00485c6c,(LPVOID)0x0,0,&DStack_4);
    }
  }
  return;
}

