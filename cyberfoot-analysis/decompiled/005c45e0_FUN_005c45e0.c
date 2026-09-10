// Address: 005c45e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c45e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005c46bd;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00409dd8(param_1,&local_c,0,&DAT_005c46d4);
  FUN_00404c64(&local_8,3);
  iVar1 = FUN_00427360(DAT_006d2b98,local_8);
  puVar3 = &DAT_005c46d4;
  FUN_00409dd8(param_1,&local_14);
  FUN_00404c64(&local_10,3);
  iVar2 = FUN_00427360(DAT_006d2b98,local_10);
  FUN_00466238(iVar1,0);
  FUN_00466238(iVar2,0);
  FUN_004663a8(iVar1,0xc0c0c0);
  FUN_0042a3a0(*(undefined4 *)(iVar1 + 0x68),0);
  FUN_004663a8(iVar2,0xc0c0c0);
  FUN_0042a3a0(*(undefined4 *)(iVar2 + 0x68),0);
  *in_FS_OFFSET = &DAT_005c46ec;
  FUN_004048f8(&local_14,4,puVar3,&LAB_005c46c4);
  return;
}

