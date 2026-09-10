// Address: 0045ce88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045ce88(int param_1,WPARAM param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045ceee;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar2 == -1) {
    FUN_00406d44(PTR_PTR_0066b4e8,&local_8);
    FUN_0041f484(param_1,local_8,param_2);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045cef5;
  puStack_1c = (undefined1 *)0x45ceed;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

