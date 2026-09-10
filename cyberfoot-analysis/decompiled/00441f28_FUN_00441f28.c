// Address: 00441f28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441f28(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCSTR lpSubKey;
  HKEY hKey;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  HKEY local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00441fae;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040496c(&local_c,param_2);
  uVar2 = FUN_004417c4(local_c);
  if ((char)uVar2 == '\0') {
    FUN_00404e44(&local_c,1,1);
  }
  local_8 = (HKEY)0x0;
  phkResult = &local_8;
  samDesired = *(REGSAM *)(param_1 + 0x18);
  ulOptions = 0;
  lpSubKey = (LPCSTR)FUN_00404da4(local_c);
  hKey = (HKEY)FUN_00441920(param_1,uVar2);
  RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00441fb5;
  puStack_1c = (undefined1 *)0x441fad;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

