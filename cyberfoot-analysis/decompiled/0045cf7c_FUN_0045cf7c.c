// Address: 0045cf7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045cf7c(int param_1)

{
  undefined1 *puVar1;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0045cfe0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00466208(*(undefined4 *)(param_1 + 0x10),&local_8);
  lParam = 0;
  wParam = 0;
  Msg = 0x14b;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_00466238(*(undefined4 *)(param_1 + 0x10),local_8);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x88))();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045cfe7;
  puStack_14 = (undefined1 *)0x45cfdf;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

