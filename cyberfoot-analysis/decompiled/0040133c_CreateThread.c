// Address: 0040133c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HANDLE __stdcall
CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
            LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
            LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040133c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}

