// Address: 0050b9b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b9b8(int param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  LPWSTR lpchText;
  HDC pHVar4;
  LPSTR lpchText_00;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar5;
  LPDRAWTEXTPARAMS ptVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  tagRECT local_1c;
  undefined4 local_c;
  UINT local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_1c.left = *param_3;
  local_1c.top = param_3[1];
  local_1c.right = param_3[2];
  local_1c.bottom = param_3[3];
  puStack_30 = &LAB_0050ba8b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),1);
  FUN_0050bbf4(param_1,param_2,&local_1c,1,&local_8);
  if (*PTR_DAT_0066af04 == '\0') {
    FUN_00404b6c(&local_c,param_2);
    ptVar6 = (LPDRAWTEXTPARAMS)0x0;
    ptVar5 = &local_1c;
    iVar3 = FUN_00404ba4(local_c);
    lpchText_00 = (LPSTR)FUN_00404da4(local_c);
    pHVar4 = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x20));
    DrawTextExA(pHVar4,lpchText_00,iVar3,ptVar5,local_8,ptVar6);
  }
  else if (*PTR_DAT_0066af04 == '\x01') {
    ptVar6 = (LPDRAWTEXTPARAMS)0x0;
    ptVar5 = &local_1c;
    iVar3 = FUN_00405260(param_2);
    lpchText = (LPWSTR)FUN_00405250(param_2);
    pHVar4 = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x20));
    DrawTextExW(pHVar4,lpchText,iVar3,ptVar5,local_8,ptVar6);
  }
  FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),0);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0050ba92;
  puStack_30 = (undefined1 *)0x50ba8a;
  FUN_004048d4(&local_c,uStack_34,puVar2);
  return;
}

