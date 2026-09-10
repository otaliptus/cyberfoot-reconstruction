// Address: 004d4374
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_004d4374(LPWSTR param_1,DWORD param_2)

{
  WCHAR WVar1;
  DWORD DVar2;
  
  if (*PTR_DAT_0066adfc == '\0') {
    DVar2 = param_2;
    if (0 < (int)param_2) {
      do {
        WVar1 = FUN_004d42ac(*param_1);
        *param_1 = WVar1;
        param_1 = param_1 + 1;
        DVar2 = DVar2 - 1;
      } while (DVar2 != 0);
    }
  }
  else {
    param_2 = CharUpperBuffW(param_1,param_2);
  }
  return param_2;
}

