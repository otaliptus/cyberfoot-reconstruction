// Address: 0046dfac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046dfac(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  tagRECT local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0046e045;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_1 + 0x44))(param_1,&local_14);
  local_14.left = local_14.left + 2;
  local_14.top = local_14.top + 2;
  FUN_0042a3a0(*(undefined4 *)(param_1[0x82] + 0xc),
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_0066b760 + 0x80) + 0x18));
  uVar2 = FUN_00468538(param_1);
  uVar2 = uVar2 | 0x810;
  lprc = &local_14;
  cchText = -1;
  FUN_00466208(param_1,&local_18);
  lpchText = (LPCSTR)FUN_00404da4(local_18);
  hdc = (HDC)FUN_0042b5a8(param_1[0x82]);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046e04c;
  puStack_24 = (undefined1 *)0x46e044;
  FUN_004048d4(&local_18,uStack_28,puVar1);
  return;
}

