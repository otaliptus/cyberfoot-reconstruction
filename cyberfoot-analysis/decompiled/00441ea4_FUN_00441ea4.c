// Address: 00441ea4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_00441ea4(int param_1,undefined4 param_2,LPBYTE param_3,undefined1 *param_4,DWORD param_5)

{
  DWORD DVar1;
  undefined1 uVar2;
  LPCSTR lpValueName;
  LSTATUS LVar3;
  LPDWORD lpReserved;
  DWORD *lpType;
  LPDWORD lpcbData;
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  
  local_8 = 0;
  lpcbData = &param_5;
  lpType = &local_8;
  lpReserved = (LPDWORD)0x0;
  lpValueName = (LPCSTR)FUN_00404da4(param_2);
  LVar3 = RegQueryValueExA(*(HKEY *)(param_1 + 4),lpValueName,lpReserved,lpType,param_3,lpcbData);
  if (LVar3 != 0) {
    local_c = 0xb;
    local_10 = param_2;
    FUN_0040e468(PTR_DAT_00441664,1,PTR_PTR_0066b7c8,0,&local_10);
    FUN_00404250();
  }
  DVar1 = param_5;
  uVar2 = FUN_00441808(local_8);
  *param_4 = uVar2;
  return DVar1;
}

