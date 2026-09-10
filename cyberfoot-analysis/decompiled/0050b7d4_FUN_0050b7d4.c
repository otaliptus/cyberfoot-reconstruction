// Address: 0050b7d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b7d4(int param_1,LONG *param_2,uint *param_3,char param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  LPWSTR lpchText;
  HDC pHVar3;
  LPSTR lpchText_00;
  LONG *pLVar4;
  LONG *pLVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  LONG aLStackY_17f4 [1514];
  int iVar7;
  tagRECT *ptVar8;
  LPDRAWTEXTPARAMS ptVar9;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  tagRECT local_18;
  undefined4 local_8;
  
  bVar6 = 0;
  local_8 = 0;
  puStack_2c = (undefined1 *)0x50b7f0;
  FUN_00405608(&param_5);
  puStack_30 = &LAB_0050b8cd;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *param_3 = *param_3;
  pLVar4 = param_2 + (uint)bVar6 * -2 + 1;
  local_18.left = *param_2;
  pLVar5 = (LONG *)((int)&local_18 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(LONG *)((int)&local_18 + (uint)bVar6 * -8 + 4) = *pLVar4;
  puStack_2c = &stack0xfffffffc;
  *pLVar5 = pLVar4[(uint)bVar6 * -2 + 1];
  pLVar5[(uint)bVar6 * -2 + 1] = (pLVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  FUN_00404b6c(&local_8,param_5);
  if (*PTR_DAT_0066af04 == '\0') {
    ptVar9 = (LPDRAWTEXTPARAMS)0x0;
    uVar2 = *param_3 | 0x400;
    ptVar8 = &local_18;
    iVar7 = -1;
    lpchText_00 = (LPSTR)FUN_00404da4(local_8);
    pHVar3 = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x20));
    DrawTextExA(pHVar3,lpchText_00,iVar7,ptVar8,uVar2,ptVar9);
  }
  else {
    ptVar9 = (LPDRAWTEXTPARAMS)0x0;
    uVar2 = *param_3 | 0x400;
    ptVar8 = &local_18;
    iVar7 = -1;
    lpchText = (LPWSTR)FUN_00405250(param_5);
    pHVar3 = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x20));
    DrawTextExW(pHVar3,lpchText,iVar7,ptVar8,uVar2,ptVar9);
  }
  if (param_4 == '\0') {
    *param_3 = *param_3;
  }
  else if (param_4 == '\x01') {
    param_2[1] = param_2[3] - (local_18.bottom - local_18.top);
  }
  else if (param_4 == '\x02') {
    iVar7 = FUN_00402c38();
    param_2[1] = param_2[1] + iVar7;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0050b8d4;
  puStack_30 = (undefined1 *)0x50b8c4;
  FUN_004048d4(&local_8,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x50b8cc;
  FUN_00404ff0(&param_5);
  return;
}

