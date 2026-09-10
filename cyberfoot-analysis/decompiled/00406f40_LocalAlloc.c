// Address: 00406f40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}

