// Address: 004ac844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac844(IID *param_1,undefined4 param_2,LPOLESTR param_3)

{
  LPOLESTR local_c;
  
  local_c = param_3;
  ProgIDFromCLSID(param_1,&local_c);
  FUN_004ac7a4();
  FUN_00404b0c(param_2,local_c);
  CoTaskMemFree(local_c);
  return;
}

