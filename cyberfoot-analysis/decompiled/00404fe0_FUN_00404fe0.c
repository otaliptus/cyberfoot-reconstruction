// Address: 00404fe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404fe0(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  LOCK();
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  UNLOCK();
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}

