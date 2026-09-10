// Address: 004fdb5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fdb5c(int param_1,int param_2,LONG *param_3,char param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  LPCWSTR lpchText;
  HDC pHVar4;
  LPCSTR lpchText_00;
  uint format;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  tagRECT local_18;
  undefined4 local_8;
  
  local_8 = 0;
  local_18.left = *param_3;
  local_18.top = param_3[1];
  local_18.right = param_3[2];
  local_18.bottom = param_3[3];
  puStack_28 = (undefined1 *)0x4fdb7f;
  FUN_00405608(&param_5);
  puStack_2c = &LAB_004fdc3c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  format = 0x8a04;
  if (param_4 == '\0') {
    format = 0x8a24;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    format = format | 0x20000;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  puStack_28 = &stack0xfffffffc;
  FUN_0042ac88(uVar1,1);
  if (*PTR_DAT_0066af04 == '\0') {
    FUN_00404b6c(&local_8,param_5);
    ptVar5 = &local_18;
    iVar3 = FUN_00404ba4(local_8);
    lpchText_00 = (LPCSTR)FUN_00404da4(local_8);
    pHVar4 = (HDC)FUN_0042b5a8(param_2);
    DrawTextA(pHVar4,lpchText_00,iVar3,ptVar5,format);
  }
  else if (*PTR_DAT_0066af04 == '\x01') {
    ptVar5 = &local_18;
    iVar3 = FUN_00405260(param_5);
    lpchText = (LPCWSTR)FUN_00405250(param_5);
    pHVar4 = (HDC)FUN_0042b5a8(param_2);
    DrawTextW(pHVar4,lpchText,iVar3,ptVar5,format);
  }
  FUN_0042ac88(uVar1,0);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004fdc43;
  puStack_2c = (undefined1 *)0x4fdc33;
  FUN_004048d4(&local_8,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x4fdc3b;
  FUN_00404ff0(&param_5);
  return;
}

