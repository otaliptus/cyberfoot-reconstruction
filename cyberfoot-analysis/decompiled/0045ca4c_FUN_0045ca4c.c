// Address: 0045ca4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045ca4c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  LRESULT LVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  LPARAM local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_0045cb15;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00409b60(param_2,1,&local_8);
  iVar2 = FUN_00404ba4(local_8);
  iVar3 = FUN_0046617c(*(undefined4 *)(param_1 + 0x10));
  uVar5 = iVar2 == iVar3;
  if ((bool)uVar5) {
    FUN_00466208(*(undefined4 *)(param_1 + 0x10),&local_c);
    FUN_00404cf0(local_8,local_c);
    if ((bool)uVar5) goto LAB_0045caef;
  }
  wParam = 0;
  Msg = 0xc;
  lParam = local_8;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  LVar4 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar4 == 0) {
    FUN_00406d44(PTR_PTR_0066b4a4,&local_10);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_10);
    FUN_00404250();
  }
  FUN_004673cc(*(undefined4 *)(param_1 + 0x10),0xb012,0,0);
LAB_0045caef:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045cb1c;
  puStack_20 = (undefined1 *)0x45cb04;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x45cb0c;
  FUN_004048d4(&local_c);
  puStack_20 = (undefined1 *)0x45cb14;
  FUN_004048d4(&local_8);
  return;
}

