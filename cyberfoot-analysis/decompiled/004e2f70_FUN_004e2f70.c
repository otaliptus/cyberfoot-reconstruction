// Address: 004e2f70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e2f70(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  LPWSTR lpchText;
  HDC pHVar2;
  LPSTR lpchText_00;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  tagRECT *ptVar4;
  UINT UVar5;
  LPDRAWTEXTPARAMS ptVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  tagRECT local_18;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_2c = &LAB_004e300c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00404b6c(&local_8,param_2);
  if (DAT_0067aef0 == '\0') {
    ptVar6 = (LPDRAWTEXTPARAMS)0x0;
    UVar5 = 0x400;
    ptVar4 = &local_18;
    iVar3 = -1;
    lpchText_00 = (LPSTR)FUN_00404da4(local_8);
    pHVar2 = (HDC)FUN_0042b5a8(param_1);
    DrawTextExA(pHVar2,lpchText_00,iVar3,ptVar4,UVar5,ptVar6);
  }
  else {
    ptVar6 = (LPDRAWTEXTPARAMS)0x0;
    UVar5 = 0x400;
    ptVar4 = &local_18;
    iVar3 = -1;
    lpchText = (LPWSTR)FUN_00405250(param_2);
    pHVar2 = (HDC)FUN_0042b5a8(param_1);
    DrawTextExW(pHVar2,lpchText,iVar3,ptVar4,UVar5,ptVar6);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e3013;
  puStack_2c = (undefined1 *)0x4e300b;
  FUN_004048d4(&local_8,uStack_30,puVar1);
  return;
}

