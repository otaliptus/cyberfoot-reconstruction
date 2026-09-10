// Address: 00407310
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HANDLE __stdcall
CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateEventA(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}

