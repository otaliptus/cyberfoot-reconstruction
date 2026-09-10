// Address: 0055d080
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055d080(undefined4 param_1)

{
  undefined1 *puVar1;
  LPCSTR lpstrCommand;
  MCIERROR MVar2;
  undefined4 *in_FS_OFFSET;
  LPSTR lpstrReturnString;
  UINT uReturnLength;
  HWND hwndCallback;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  puStack_10 = (undefined1 *)0x55d096;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_14 = &LAB_0055d104;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_0066ac78[0xdc] != '\0') {
    puStack_10 = &stack0xfffffffc;
    FUN_00404c64(&local_c,3);
    hwndCallback = (HWND)0x0;
    uReturnLength = 0;
    lpstrReturnString = (LPSTR)0x0;
    lpstrCommand = (LPCSTR)FUN_00404da4(local_c);
    MVar2 = mciSendStringA(lpstrCommand,lpstrReturnString,uReturnLength,hwndCallback);
    if (MVar2 != 0) {
      FUN_0055cf4c();
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0055d10b;
  puStack_14 = (undefined1 *)0x55d103;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

