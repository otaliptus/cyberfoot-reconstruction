// Address: 004ac870
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac870(IID *param_1,undefined4 param_2)

{
  LPVOID *ppv;
  
  ppv = (LPVOID *)FUN_00406880(param_2);
  CoCreateInstance(param_1,(LPUNKNOWN)0x0,5,(IID *)&DAT_004ac898,ppv);
  FUN_004ac7a4();
  return;
}

