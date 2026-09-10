// Address: 00441938
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441938(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCSTR lpSubKey;
  HKEY hKey;
  LSTATUS LVar3;
  undefined4 *in_FS_OFFSET;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  DWORD *lpdwDisposition;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  DWORD local_10;
  undefined4 local_c;
  HKEY local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  puStack_2c = &LAB_00441a04;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = (HKEY)0x0;
  FUN_0040496c(&local_c,param_2);
  uVar2 = FUN_004417c4(local_c);
  if ((char)uVar2 == '\0') {
    FUN_00404e44(&local_c,1,1);
  }
  lpdwDisposition = &local_10;
  phkResult = &local_8;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  dwOptions = 0;
  lpClass = (LPSTR)0x0;
  Reserved = 0;
  lpSubKey = (LPCSTR)FUN_00404da4(local_c);
  hKey = (HKEY)FUN_00441920(param_1,uVar2);
  LVar3 = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  if (LVar3 == 0) {
    RegCloseKey(local_8);
  }
  else {
    local_14 = 0xb;
    local_18 = param_2;
    FUN_0040e468(PTR_DAT_00441664,1,PTR_PTR_0066ada8,0,&local_18);
    FUN_00404250();
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00441a0b;
  puStack_2c = (undefined1 *)0x441a03;
  FUN_004048d4(&local_c,uStack_30,puVar1);
  return;
}

