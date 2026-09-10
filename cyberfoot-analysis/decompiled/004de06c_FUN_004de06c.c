// Address: 004de06c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004de06c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int nIndex;
  LONG dwNewLong;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004de11d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = *(int *)(param_1 + 0x3c);
  puVar2 = &stack0xfffffffc;
  if ((*(byte *)(iVar1 + 0x1c) & 8) == 0) {
    FUN_004dd724(iVar1,&local_8);
    FUN_004dd6c0(iVar1,local_8);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  cVar3 = FUN_004de05c();
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x54);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0x174) = *(undefined4 *)(param_1 + 0x48);
  dwNewLong = *(LONG *)(param_1 + 0x44);
  nIndex = -4;
  hWnd = (HWND)FUN_0046cae0(iVar1);
  SetWindowLongW(hWnd,nIndex,dwNewLong);
  if (*(char *)(param_1 + 0x60) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x3c) + 0x1c) & 8) == 0) {
      FUN_004328a0(DAT_00669720,param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x61) = 1;
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004de124;
  puStack_18 = (undefined1 *)0x4de11c;
  FUN_00404ff0(&local_8,uStack_1c,puVar2);
  return;
}

