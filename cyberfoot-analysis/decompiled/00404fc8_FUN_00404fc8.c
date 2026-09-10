// Address: 00404fc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404fc8(UINT param_1)

{
  BSTR pOVar1;
  
  if (param_1 != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,param_1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402958(1);
      return;
    }
  }
  return;
}

