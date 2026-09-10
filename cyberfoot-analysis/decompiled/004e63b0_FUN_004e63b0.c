// Address: 004e63b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e63b0(int param_1,LONG *param_2,char param_3,char param_4,undefined4 param_5)

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
  local_18.left = *param_2;
  local_18.top = param_2[1];
  local_18.right = param_2[2];
  local_18.bottom = param_2[3];
  puStack_28 = (undefined1 *)0x4e63d3;
  FUN_00405608(&param_5);
  puStack_2c = &LAB_004e649f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  format = 0x8a24;
  if (param_3 == '\0') {
    format = 0x8a24;
  }
  else if (param_3 == '\x01') {
    format = 0x8a26;
  }
  else if (param_3 == '\x02') {
    format = 0x8a25;
  }
  if (param_4 != '\0') {
    format = format | 0x20000;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puStack_28 = &stack0xfffffffc;
  FUN_0042ac88(uVar1,1);
  if (DAT_0067b1c4 == '\0') {
    FUN_00404b6c(&local_8,param_5);
    ptVar5 = &local_18;
    iVar3 = FUN_00404ba4(local_8);
    lpchText_00 = (LPCSTR)FUN_00404da4(local_8);
    pHVar4 = (HDC)FUN_0042b5a8(param_1);
    DrawTextA(pHVar4,lpchText_00,iVar3,ptVar5,format);
  }
  else if (DAT_0067b1c4 == '\x01') {
    ptVar5 = &local_18;
    iVar3 = FUN_00405260(param_5);
    lpchText = (LPCWSTR)FUN_00405250(param_5);
    pHVar4 = (HDC)FUN_0042b5a8(param_1);
    DrawTextW(pHVar4,lpchText,iVar3,ptVar5,format);
  }
  FUN_0042ac88(uVar1,0);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e64a6;
  puStack_2c = (undefined1 *)0x4e6496;
  FUN_004048d4(&local_8,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x4e649e;
  FUN_00404ff0(&param_5);
  return;
}

