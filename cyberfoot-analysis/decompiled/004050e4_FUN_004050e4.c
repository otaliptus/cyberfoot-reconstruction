// Address: 004050e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BSTR FUN_004050e4(BSTR param_1,OLECHAR *param_2,UINT param_3)

{
  BSTR bstrString;
  BSTR pOVar1;
  
  if (param_3 == 0) {
    if (*(BSTR *)param_1 != (BSTR)0x0) {
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      SysFreeString(*(BSTR *)param_1);
    }
    return param_1;
  }
  pOVar1 = SysAllocStringLen(param_2,param_3);
  if (pOVar1 != (BSTR)0x0) {
    bstrString = *(BSTR *)param_1;
    *(BSTR *)param_1 = pOVar1;
    SysFreeString(bstrString);
    return pOVar1;
  }
  pOVar1 = (BSTR)FUN_00402958(1);
  return pOVar1;
}

