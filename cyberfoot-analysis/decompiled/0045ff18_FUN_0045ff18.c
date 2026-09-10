// Address: 0045ff18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045ff18(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  LPCSTR lpszHelp;
  HWND hWndMain;
  undefined4 *in_FS_OFFSET;
  UINT uCommand;
  ULONG_PTR dwData;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0045ff93;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = FUN_00460630(param_1);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 2;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c),&local_c);
    FUN_0045fcec(param_1,local_c,&local_8);
    if (local_8 != 0) {
      dwData = 0;
      uCommand = 3;
      lpszHelp = (LPCSTR)FUN_00404da4(local_8);
      hWndMain = (HWND)(**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
      WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0045ff9a;
  puStack_18 = (undefined1 *)0x45ff92;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

