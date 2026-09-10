// Address: 005ad0e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ad0e4(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005ad1d9;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  DAT_006d25c0 = DAT_006d25c0 + 1;
  FUN_00409dd8(DAT_006d25c0,&local_c);
  FUN_00404bf0(&local_8,&DAT_005ad1f0,local_c);
  iVar2 = FUN_00427360(DAT_006d25b8,local_8);
  FUN_00645508(param_1,&local_10);
  if (local_10 != 0) {
    FUN_00645508(param_1,&local_14);
    FUN_0042d6c0(*(undefined4 *)(iVar2 + 0x168),local_14);
  }
  DAT_006d25c0 = DAT_006d25c0 + 1;
  if (-1 < param_2) {
    FUN_00409dd8(DAT_006d25c0,&local_1c);
    FUN_00404bf0(&local_18,&DAT_005ad1f0,local_1c);
    iVar2 = FUN_00427360(DAT_006d25b8,local_18);
    FUN_00645508(param_2,&local_20);
    if (local_20 != 0) {
      FUN_00645508(param_2,&local_24);
      FUN_0042d6c0(*(undefined4 *)(iVar2 + 0x168),local_24);
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005ad1e0;
  puStack_38 = (undefined1 *)0x5ad1d8;
  FUN_004048f8(&local_24,8,puVar1);
  return;
}

