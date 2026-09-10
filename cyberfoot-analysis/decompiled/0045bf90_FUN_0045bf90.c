// Address: 0045bf90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bf90(int param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint wParam;
  HWND hWnd;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0045c00d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x20d)) {
    *(char *)(param_1 + 0x20d) = param_2;
    cVar2 = FUN_0046cde4(param_1);
    puVar1 = puStack_10;
    if (cVar2 != '\0') {
      lParam = 0;
      wParam = (uint)*(byte *)(param_1 + 0x20d);
      Msg = 0xcc;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      FUN_00466208(param_1,&local_8);
      uVar3 = FUN_00404da4(local_8);
      FUN_004661e4(param_1,uVar3);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045c014;
  puStack_14 = (undefined1 *)0x45c00c;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

