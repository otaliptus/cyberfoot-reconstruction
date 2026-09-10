// Address: 00441cf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00441cf0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  LPCSTR lpValueName;
  LSTATUS LVar2;
  LPDWORD lpReserved;
  undefined1 **lpType;
  LPBYTE lpData;
  LPDWORD lpcbData;
  undefined1 *local_14;
  
  lpType = &local_14;
  local_14 = param_3;
  FUN_004032a8(param_3,8,0);
  lpcbData = (LPDWORD)(param_3 + 4);
  lpData = (LPBYTE)0x0;
  lpReserved = (LPDWORD)0x0;
  lpValueName = (LPCSTR)FUN_00404da4(param_2);
  LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),lpValueName,lpReserved,(LPDWORD)lpType,lpData,
                           lpcbData);
  uVar1 = FUN_00441808(local_14);
  *param_3 = uVar1;
  return LVar2 == 0;
}

