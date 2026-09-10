// Address: 00541128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00541128(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int c;
  LPCWSTR lpString;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  tagSIZE *lpsz;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  tagSIZE local_10;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x54113c;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_1c = &LAB_00541186;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lpsz = &local_10;
  puStack_18 = &stack0xfffffffc;
  c = FUN_00405260(local_8);
  lpString = (LPCWSTR)FUN_00405250(local_8);
  hdc = (HDC)FUN_0042b5a8(param_1);
  GetTextExtentPointW(hdc,lpString,c,lpsz);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054118d;
  puStack_1c = (undefined1 *)0x541185;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

