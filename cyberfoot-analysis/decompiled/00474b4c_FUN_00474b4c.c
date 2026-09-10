// Address: 00474b4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00474b4c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puStack_54 = (undefined1 *)0x474b69;
  local_8 = param_1;
  FUN_00420b00(param_2,&local_1c,4);
  puStack_54 = (undefined1 *)0x474b78;
  FUN_00420b00(param_2,&local_20,4);
  puStack_54 = (undefined1 *)0x474b84;
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_58 = &LAB_00474dd0;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x474b9c;
  puStack_54 = &stack0xfffffffc;
  iVar1 = FUN_004208d4(param_2);
  puStack_60 = (undefined1 *)0x474ba8;
  (**(code **)(*local_c + 0x54))(local_c,param_2);
  puStack_64 = (undefined1 *)(local_1c + iVar1);
  puStack_60 = (undefined1 *)((int)puStack_64 >> 0x1f);
  uStack_68 = 0x474bb7;
  FUN_004208f4(param_2);
  puStack_60 = (undefined1 *)0x474bc3;
  local_14 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_64 = &LAB_00474db3;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_6c = (undefined1 *)0x474bde;
  puStack_60 = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x54))(local_14,param_2);
  puStack_6c = (undefined1 *)0x474bea;
  local_10 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_6c = (undefined1 *)0x474bfb;
  (**(code **)(*local_10 + 0x40))(local_10,*(undefined4 *)(local_8 + 0x34));
  puStack_6c = (undefined1 *)0x474c09;
  (**(code **)(*local_10 + 0x34))(local_10,*(undefined4 *)(local_8 + 0x30));
  puStack_6c = (undefined1 *)0x474c15;
  local_18 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_6c = (undefined1 *)0x474c22;
  FUN_0043113c(local_18,1);
  puStack_6c = (undefined1 *)0x474c30;
  (**(code **)(*local_18 + 0x40))(local_18,*(undefined4 *)(local_8 + 0x34));
  puStack_6c = (undefined1 *)0x474c3e;
  (**(code **)(*local_18 + 0x34))(local_18,*(undefined4 *)(local_8 + 0x30));
  puStack_6c = *(undefined1 **)(local_8 + 0x30);
  puStack_70 = local_34;
  uStack_74 = 0x474c58;
  FUN_0041c990(0,0,*(undefined4 *)(local_8 + 0x34));
  puStack_6c = (undefined1 *)0x474c60;
  FUN_00475178(local_8);
  puStack_70 = &LAB_00474d96;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_6c = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_c + 0x20))();
  iVar1 = iVar1 / *(int *)(local_8 + 0x30);
  if (-1 < iVar1 + -1) {
    iVar5 = 0;
    local_24 = iVar1;
    do {
      if (local_20 == 0) break;
      iVar1 = (**(code **)(*local_c + 0x2c))();
      iVar1 = iVar1 / *(int *)(local_8 + 0x34);
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          if (local_20 == 0) break;
          FUN_0041c9b8(*(int *)(local_8 + 0x34) * iVar4,*(int *)(local_8 + 0x30) * iVar5,
                       *(undefined4 *)(local_8 + 0x34),local_44,*(undefined4 *)(local_8 + 0x30));
          puVar6 = local_44;
          uVar2 = FUN_00430280(local_c);
          uVar3 = FUN_00430280(local_10);
          FUN_0042addc(uVar3,local_34,uVar2,puVar6);
          FUN_0041c9b8(*(int *)(local_8 + 0x34) * iVar4,*(int *)(local_8 + 0x30) * iVar5,
                       *(undefined4 *)(local_8 + 0x34),local_44,*(undefined4 *)(local_8 + 0x30));
          puVar6 = local_44;
          uVar2 = FUN_00430280(local_14);
          uVar3 = FUN_00430280(local_18);
          FUN_0042addc(uVar3,local_34,uVar2,puVar6);
          FUN_00473d0c(local_8,local_10,local_18);
          local_20 = local_20 + -1;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  puVar6 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_00474d9d;
  puStack_70 = (undefined1 *)0x474d85;
  FUN_00403a84(local_10,uStack_74,puVar6);
  puStack_70 = (undefined1 *)0x474d8d;
  FUN_00403a84(local_18);
  puStack_70 = (undefined1 *)0x474d95;
  FUN_0047517c(local_8);
  return;
}

