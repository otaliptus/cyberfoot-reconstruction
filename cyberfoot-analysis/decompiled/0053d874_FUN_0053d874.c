// Address: 0053d874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053d874(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  LPCSTR lpString;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x53d886;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_14 = &LAB_0053d8d5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  lpString = (LPCSTR)FUN_00404da4(local_8);
  hWnd = (HWND)FUN_0046cae0(param_1);
  SetWindowTextA(hWnd,lpString);
  FUN_00404928(param_1 + 0x93,local_8);
  (**(code **)(*param_1 + 0x7c))();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053d8dc;
  puStack_14 = (undefined1 *)0x53d8d4;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

