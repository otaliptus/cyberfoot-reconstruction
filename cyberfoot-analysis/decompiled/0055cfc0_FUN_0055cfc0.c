// Address: 0055cfc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055cfc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  LPCSTR lpstrCommand;
  MCIERROR MVar2;
  undefined4 *in_FS_OFFSET;
  LPSTR lpstrReturnString;
  UINT uReturnLength;
  HWND hwndCallback;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  puStack_14 = (undefined1 *)0x55cfd9;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_14 = (undefined1 *)0x55cfe1;
  FUN_00404d94(local_c);
  uVar1 = local_c;
  puStack_18 = &LAB_0055d044;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcVar4 = "open ";
  uVar3 = local_8;
  puStack_14 = &stack0xfffffffc;
  FUN_00404c64(&local_10,4);
  hwndCallback = (HWND)0x0;
  uReturnLength = 0;
  lpstrReturnString = (LPSTR)0x0;
  lpstrCommand = (LPCSTR)FUN_00404da4(local_10);
  MVar2 = mciSendStringA(lpstrCommand,lpstrReturnString,uReturnLength,hwndCallback);
  if (MVar2 != 0) {
    FUN_0055cf4c();
  }
  *in_FS_OFFSET = uVar1;
  FUN_004048f8(&local_10,3,uVar3,&LAB_0055d04b,pcVar4);
  return;
}

