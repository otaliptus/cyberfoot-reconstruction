// Address: 00440e48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00440e48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00440fa3;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  uStack_2c = 0;
  piStack_30 = &local_10;
  puStack_34 = (undefined1 *)0x440e7b;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  puVar1 = puStack_28;
  if (local_10 != 0) {
    puStack_34 = (undefined1 *)0x440e93;
    cVar2 = FUN_00403c10(param_4,PTR_PTR_0041c090);
    if (cVar2 == '\0') {
      puStack_34 = (undefined1 *)0x440eab;
      local_14 = (int *)FUN_00403a54(PTR_PTR_0041c090,1);
    }
    else {
      local_14 = param_4;
    }
    puStack_38 = &LAB_00440f81;
    iStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_3c;
    puStack_34 = &stack0xfffffffc;
    iVar3 = FUN_004208d4(local_14);
    iVar4 = (**(code **)*local_14)();
    uVar5 = FUN_00404ba4(local_10);
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    (**(code **)(*local_14 + 4))(local_14,iVar4 + iVar6);
    uVar5 = FUN_00404ba4(local_10);
    iVar4 = (int)uVar5 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar5 & 1) != 0);
    }
    uVar7 = FUN_004208d4(local_14);
    uVar5 = local_14[1];
    uVar8 = FUN_00404da4(local_10,((int)uVar5 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar5,uVar7));
    FUN_004266b8(uVar8,uVar5 + uVar7,iVar4);
    FUN_004208f4(local_14);
    if (param_4 != local_14) {
      FUN_00404ba4(local_10);
      FUN_00420b70(param_4,local_14);
    }
    local_c = (**(code **)*local_14)();
    puVar1 = puStack_34;
    local_c = local_c - iVar3;
    *in_FS_OFFSET = iStack_3c;
    puStack_34 = (undefined1 *)0x440f8d;
    if (param_4 != local_14) {
      puStack_38 = (undefined1 *)0x440f80;
      FUN_00403a84(local_14,iStack_3c,puVar1);
    }
    return;
  }
  local_c = 0;
  *in_FS_OFFSET = (int)piStack_30;
  puStack_28 = &LAB_00440faa;
  uStack_2c = 0x440fa2;
  FUN_004048d4(&local_10,piStack_30,puVar1);
  return;
}

