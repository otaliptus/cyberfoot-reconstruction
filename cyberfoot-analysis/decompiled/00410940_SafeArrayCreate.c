// Address: 00410940
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

SAFEARRAY * __stdcall SafeArrayCreate(VARTYPE vt,UINT cDims,SAFEARRAYBOUND *rgsabound)

{
  SAFEARRAY *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00410940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = SafeArrayCreate(vt,cDims,rgsabound);
  return pSVar1;
}

