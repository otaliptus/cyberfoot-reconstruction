// Address: 00516a60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516a60(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_14 = 0;
  puStack_2c = &LAB_00516b35;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_c = param_2;
  local_8 = param_1;
  local_18 = (**(code **)(*param_2 + 0x14))();
  if (-1 < local_18 + -1) {
    local_10 = 0;
    do {
      iVar1 = *local_c;
      (**(code **)(iVar1 + 0xc))(local_c,local_10,&local_14);
      uVar4 = FUN_00404ba4(local_14);
      uVar2 = uVar4;
      if (0xff < (int)uVar4) {
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0xff);
      }
      while (0 < (int)uVar4) {
        uVar4 = uVar4 - (uVar2 & 0xff);
        FUN_005169c0(local_8,uVar2);
        uVar5 = FUN_00404da4(local_14);
        (**(code **)(*local_8 + 0x10))(local_8,uVar5,uVar2 & 0xff);
        FUN_00404e44(&local_14,1,uVar2 & 0xff);
        if ((int)uVar4 < (int)(uVar2 & 0xff)) {
          uVar2 = uVar4;
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_005169c0(local_8,0);
  puVar3 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00516b3c;
  puStack_2c = (undefined1 *)0x516b34;
  FUN_004048d4(&local_14,uStack_30,puVar3);
  return;
}

