// Address: 004dab8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dab8c(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  LRESULT LVar2;
  LPARAM lParam;
  WPARAM wParam;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004dac40;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30) == (HWND)0x0) || (*PTR_DAT_0066adfc == '\0')) {
    FUN_00487008(*(undefined4 *)PTR_DAT_0066b3ac,&local_8);
    FUN_004d83a8(param_1 + 0x40,local_8,param_2);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    LVar2 = DefWindowProcW(*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30),0xe,0,0);
    FUN_004055c4(param_2,LVar2 + 1);
    lParam = FUN_00405250(*param_2);
    wParam = FUN_00405260(*param_2);
    DefWindowProcW(*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30),0xd,wParam,lParam);
    iVar3 = FUN_00405260(*param_2);
    FUN_004055c4(param_2,iVar3 + -1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004dac47;
  puStack_1c = (undefined1 *)0x4dac3f;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

