// Address: 004073c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LONG __stdcall InterlockedExchange(LONG *Target,LONG Value)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004073c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedExchange(Target,Value);
  return LVar1;
}

