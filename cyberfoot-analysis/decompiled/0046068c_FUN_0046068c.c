// Address: 0046068c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046068c(int param_1)

{
  undefined1 *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  LPCSTR lpszHelp;
  HWND hWndMain;
  undefined4 *in_FS_OFFSET;
  UINT uCommand;
  ULONG_PTR dwData;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00460709;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004600ec(param_1);
  DVar2 = GetTickCount();
  do {
    Sleep(0);
    DVar3 = GetTickCount();
  } while (DVar3 - DVar2 < 0x3e9);
  FUN_0045fcec(param_1,0,&local_8);
  if (local_8 != 0) {
    dwData = 0;
    uCommand = 9;
    lpszHelp = (LPCSTR)FUN_00404da4(local_8);
    hWndMain = (HWND)(**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
    WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00460710;
  puStack_18 = (undefined1 *)0x460708;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

