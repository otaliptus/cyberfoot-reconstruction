// Address: 00405608
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405608(undefined4 *param_1)

{
  OLECHAR *strIn;
  BSTR pOVar1;
  
  strIn = (OLECHAR *)*param_1;
  if (strIn != (OLECHAR *)0x0) {
    pOVar1 = SysAllocStringLen(strIn,*(uint *)(strIn + -2) >> 1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402958(1);
      return;
    }
    *param_1 = pOVar1;
  }
  return;
}

