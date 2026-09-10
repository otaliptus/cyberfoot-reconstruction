// Address: 00441e3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441e3c(int param_1,undefined4 param_2,BYTE *param_3,undefined1 param_4,DWORD param_5)

{
  DWORD dwType;
  LPCSTR lpValueName;
  LSTATUS LVar1;
  DWORD Reserved;
  BYTE *lpData;
  undefined4 local_10;
  undefined1 local_c;
  BYTE *local_8;
  
  local_8 = param_3;
  dwType = FUN_004417d8(param_4);
  Reserved = 0;
  lpData = local_8;
  lpValueName = (LPCSTR)FUN_00404da4(param_2);
  LVar1 = RegSetValueExA(*(HKEY *)(param_1 + 4),lpValueName,Reserved,dwType,lpData,param_5);
  if (LVar1 != 0) {
    local_c = 0xb;
    local_10 = param_2;
    FUN_0040e468(PTR_DAT_00441664,1,PTR_PTR_0066b25c,0,&local_10);
    FUN_00404250();
  }
  return;
}

