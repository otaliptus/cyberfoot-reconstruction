// Address: 004aca0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aca0c(undefined4 param_1,undefined4 param_2)

{
  LPVOID *ppv;
  IID local_18;
  
  FUN_004ac7e8(param_1,&local_18);
  ppv = (LPVOID *)FUN_00406880(param_2);
  CoCreateInstance(&local_18,(LPUNKNOWN)0x0,5,(IID *)&DAT_004aca44,ppv);
  FUN_004ac7a4();
  return;
}

