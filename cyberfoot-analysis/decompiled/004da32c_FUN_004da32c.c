// Address: 004da32c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da32c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  HBITMAP pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x4da33c;
  local_8 = (int *)param_3;
  local_8 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_10 = &LAB_004da3a5;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  pHVar2 = LoadBitmapA((HINSTANCE)0x0,&DAT_00007ff7);
  FUN_00430eec(local_8,pHVar2);
  _DAT_0067ae94 = (**(code **)(*local_8 + 0x2c))();
  if (_DAT_0067ae94 < 0) {
    _DAT_0067ae94 = _DAT_0067ae94 + 3;
  }
  _DAT_0067ae94 = _DAT_0067ae94 >> 2;
  _DAT_0067ae98 = (**(code **)(*local_8 + 0x20))();
  puVar1 = puStack_c;
  _DAT_0067ae98 = _DAT_0067ae98 / 3;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004da3ac;
  puStack_10 = (undefined1 *)0x4da3a4;
  FUN_00403a84(local_8,uStack_14,puVar1);
  return;
}

