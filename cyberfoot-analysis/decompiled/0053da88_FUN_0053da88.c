// Address: 0053da88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053da88(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
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
  puStack_28 = &LAB_0053db40;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar4 = (**(code **)(*param_1 + 0xcc))();
  uVar3 = FUN_00408020(uVar4);
  FUN_00409dd8(uVar3 >> 8,&local_8);
  uVar2 = FUN_00408020(uVar4);
  FUN_00409dd8(uVar2,&local_c);
  puVar6 = &LAB_0053db58;
  uVar7 = local_c;
  FUN_00409dd8(uVar4 >> 8 & 0xff,&local_10);
  uVar5 = local_10;
  FUN_00409dd8((ushort)uVar4 & 0xff,&local_14);
  uVar1 = local_14;
  FUN_00404c64(param_2,7);
  *in_FS_OFFSET = uVar1;
  FUN_004048f8(&local_14,4,uVar5,&LAB_0053db47,puVar6,uVar7);
  return;
}

