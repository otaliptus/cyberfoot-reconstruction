// Address: 0044d38c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d38c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  LPARAM lParam;
  HWND hWnd;
  short sVar4;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0044d458;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  sVar4 = (short)param_2;
  puVar2 = &stack0xfffffffc;
  if (sVar4 != *(short *)(param_1 + 0x21c)) {
    puVar2 = &stack0xfffffffc;
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      cVar3 = FUN_0044ce58(param_1,param_2,sVar4 - *(short *)(param_1 + 0x21c));
      puVar2 = puStack_18;
      if (cVar3 == '\0') goto LAB_0044d442;
    }
    puStack_18 = puVar2;
    *(short *)(param_1 + 0x21c) = sVar4;
    if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 0x20c) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x20c);
      cVar3 = FUN_00403c10(uVar1,PTR_PTR_00457f24);
      if (cVar3 != '\0') {
        FUN_00409dd8((int)*(short *)(param_1 + 0x21c),&local_8);
        FUN_00466238(uVar1,local_8);
      }
    }
    cVar3 = FUN_0046cde4(param_1);
    puVar2 = puStack_18;
    if (cVar3 != '\0') {
      lParam = FUN_00408014(*(undefined2 *)(param_1 + 0x21c),0);
      wParam = 0;
      Msg = 0x467;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      puVar2 = puStack_18;
    }
  }
LAB_0044d442:
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044d45f;
  puStack_1c = (undefined1 *)0x44d457;
  FUN_004048d4(&local_8,uStack_20,puVar2);
  return;
}

