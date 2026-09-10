// Address: 004d4548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4548(int param_1,undefined4 *param_2)

{
  LPWSTR pWVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    FUN_004d395c(0,param_2);
  }
  else {
    pWVar1 = GetCommandLineW();
    for (; pWVar1 = (LPWSTR)FUN_004d444c(pWVar1,param_2), param_1 != 0; param_1 = param_1 + -1) {
      bVar2 = true;
      FUN_00405378(*param_2);
      if (bVar2) {
        return;
      }
    }
  }
  return;
}

