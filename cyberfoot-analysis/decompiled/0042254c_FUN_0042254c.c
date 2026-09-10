// Address: 0042254c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042254c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  byte local_d;
  int *local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_8 = 0;
  puStack_40 = &LAB_0042276d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x422582;
  local_14 = param_2;
  local_c = param_1;
  (**(code **)(*param_1 + 0x24))(param_1,&local_d,&local_24);
  puStack_48 = (undefined1 *)0x42258d;
  FUN_004237f8(local_c,&local_1c);
  puStack_48 = (undefined1 *)0x422598;
  FUN_004237f8(local_c,&local_20);
  iVar1 = local_c[0xb];
  iVar2 = local_c[7];
  puStack_4c = &LAB_0042273d;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_18 = local_14;
  puStack_48 = &stack0xfffffffc;
  if (local_14 == (int *)0x0) {
    if ((local_d & 1) == 0) {
      puStack_58 = (undefined1 *)0x4225d9;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_004222f8();
    }
    else {
      puStack_58 = (undefined1 *)0x4225d0;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_004224a8();
    }
  }
  if (local_18 != (int *)0x0) {
    puStack_58 = &LAB_004226fb;
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    puStack_54 = &stack0xfffffffc;
    FUN_00422198(local_18);
    *(ushort *)(local_18 + 7) = *(ushort *)(local_18 + 7) | 1;
    FUN_00422210(DAT_00422780,1,puVar4);
    if ((local_d & 1) == 0) {
      FUN_00422408();
      puVar5 = puVar6;
    }
    puVar4 = puStack_54;
    if (local_18 == (int *)0x0) {
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = (undefined1 *)0x422633;
      FUN_004042fc(0,uStack_5c,puVar4);
      puVar5 = puStack_3c;
      *in_FS_OFFSET = uStack_44;
      puStack_3c = &LAB_00422774;
      puStack_40 = (undefined1 *)0x42275e;
      FUN_004048f8(&local_20,2,puVar5);
      puStack_40 = (undefined1 *)0x42276c;
      FUN_004061c8(&local_8,PTR_DAT_00422138);
      return;
    }
    if ((*(byte *)((int)local_18 + 0x1d) & 2) != 0) {
      local_c[7] = (int)local_18;
    }
    *(ushort *)(local_18 + 7) = *(ushort *)(local_18 + 7) | 2;
    FUN_00422210(DAT_00422784,1,puVar5,&stack0xfffffffc);
    (**(code **)(*local_18 + 0x14))(local_18,local_c);
    *(ushort *)(local_18 + 7) = *(ushort *)(local_18 + 7) & 0xfffd;
    FUN_00422210(DAT_00422784,0);
    if ((local_d & 2) != 0) {
      FUN_00403c80(local_c[0xb],local_18,local_24);
    }
    if (((local_d & 1) == 0) && ((*(byte *)((int)local_18 + 0x1d) & 2) == 0)) {
      FUN_0042215c(local_18);
      FUN_0041dec0(local_c[0xd],local_18,puVar8);
    }
    else {
      iVar3 = FUN_0041e078(local_c[0xd],local_18);
      if (iVar3 < 0) {
        FUN_0042215c(local_18);
        FUN_0041dec0(local_c[0xd],local_18,puVar7);
      }
    }
    *in_FS_OFFSET = uStack_5c;
  }
  *in_FS_OFFSET = uStack_50;
  local_c[0xb] = iVar1;
  local_c[7] = iVar2;
  return;
}

