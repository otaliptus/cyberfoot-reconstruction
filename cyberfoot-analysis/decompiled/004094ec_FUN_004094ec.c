// Address: 004094ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004094ec(IID *param_1,undefined4 param_2,LPOLESTR param_3)

{
  int iVar1;
  LPOLESTR local_c;
  
  local_c = param_3;
  StringFromCLSID(param_1,&local_c);
  iVar1 = FUN_00408088();
  if (iVar1 == 0) {
    FUN_0040941c(PTR_PTR_0066b524);
  }
  FUN_00404b0c(param_2,local_c);
  CoTaskMemFree(local_c);
  return;
}

