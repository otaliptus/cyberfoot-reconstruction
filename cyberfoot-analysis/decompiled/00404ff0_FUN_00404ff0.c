// Address: 00404ff0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00404ff0(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}

