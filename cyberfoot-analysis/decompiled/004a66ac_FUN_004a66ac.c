// Address: 004a66ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a66ac(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004a676b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_3;
  FUN_004a6414(param_1,param_4);
  if (0 < param_4) {
    (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(param_1 + 4),param_4);
  }
  (**(code **)(*param_2 + 0xc))(param_2,&local_10,4);
  local_10 = FUN_004a5d08(local_10);
  uVar2 = FUN_004a5c5c(0xffffffff,&local_8,4);
  uVar3 = FUN_004a5c5c(uVar2,*(undefined4 *)(param_1 + 4),param_4);
  local_9 = (uVar3 ^ 0xffffffff) == local_10;
  if (!(bool)local_9) {
    FUN_00406d44(PTR_PTR_0066b58c,&local_14);
    FUN_004aa278(*(undefined4 *)(param_1 + 0xc),PTR_DAT_004a4db4,local_14);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a6772;
  puStack_28 = (undefined1 *)0x4a676a;
  FUN_004048d4(&local_14,uStack_2c,puVar1);
  return;
}

