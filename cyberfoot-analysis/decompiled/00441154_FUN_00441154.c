// Address: 00441154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  LPCSTR lpFileName;
  LPCSTR lpDefault;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  CHAR *lpReturnedString;
  DWORD DVar1;
  CHAR local_804 [2048];
  
  lpFileName = (LPCSTR)FUN_00404da4(*(undefined4 *)(param_1 + 4));
  DVar1 = 0x800;
  lpReturnedString = local_804;
  lpDefault = (LPCSTR)FUN_00404da4(param_5);
  lpKeyName = (LPCSTR)FUN_00404da4(param_3);
  lpAppName = (LPCSTR)FUN_00404da4(param_2);
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,DVar1,lpFileName);
  FUN_004049c4(param_4,local_804,DVar1);
  return;
}

