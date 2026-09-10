// Address: 004233ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004233ec(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_48 = &LAB_00423707;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x423425;
  local_c = param_2;
  local_8 = param_1;
  FUN_004237d4(param_1);
  local_10 = (int *)0x0;
  puStack_50 = (undefined1 *)0x423434;
  (**(code **)(*DAT_0066c84c + 0x14))();
  puStack_54 = &LAB_004236e5;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_60 = &LAB_004236a6;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  uStack_68 = 0x42345e;
  puStack_5c = &stack0xfffffffc;
  puStack_50 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x24))(local_8,&local_15,&local_14);
  if (local_c == (int *)0x0) {
    uStack_68 = 0x42346f;
    FUN_004237f8(local_8,&local_20);
    uStack_68 = 0x423477;
    iVar2 = FUN_0041d540(local_20);
    uStack_68 = 0x42347e;
    local_10 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,0);
    uStack_68 = 0x42348c;
    FUN_004237f8(local_8,&local_24);
    uStack_68 = 0x423497;
    (**(code **)(*local_10 + 0x18))(local_10,local_24);
  }
  else {
    local_10 = local_c;
    uStack_68 = 0x4234aa;
    FUN_004237f8(local_8,&local_28);
    if ((*(byte *)(local_10 + 7) & 0x10) == 0) {
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 1;
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 2;
      uStack_68 = 0x4234db;
      FUN_004237f8(local_8,&local_34);
      uStack_68 = 0x4234e6;
      FUN_0042338c(local_34,&local_30);
      uStack_68 = 0x4234f1;
      (**(code **)(*local_10 + 0x18))(local_10,local_30);
    }
    else {
      uStack_68 = 0x4234be;
      FUN_004237f8(local_8,&local_2c);
    }
  }
  local_8[6] = (int)local_10;
  uStack_68 = 1;
  puStack_6c = (undefined1 *)0x423504;
  uVar3 = FUN_004039cc(local_10);
  puStack_6c = (undefined1 *)0x423512;
  iVar2 = FUN_0041d290(PTR_DAT_0041c320,1,uVar3);
  local_8[0x1d] = iVar2;
  puStack_70 = &LAB_0042364b;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_8[7] = (int)local_10;
  puStack_78 = (undefined1 *)0x423534;
  puStack_6c = &stack0xfffffffc;
  iVar2 = FUN_00406fb0();
  local_1c = *(int *)(iVar2 + 8);
  if (local_1c == 0) {
    puStack_78 = (undefined1 *)0x42355a;
    iVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
    local_8[0xd] = iVar2;
  }
  else {
    local_8[0xd] = local_1c;
  }
  puStack_7c = &LAB_0042362b;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  puStack_78 = &stack0xfffffffc;
  iVar2 = FUN_0041e078(local_8[0xd],local_8[6]);
  if (iVar2 < 0) {
    FUN_0041dec0(local_8[0xd],local_8[6]);
  }
  local_8[10] = local_8[6];
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 1;
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 2;
  (**(code **)(*(int *)local_8[6] + 0x14))((int *)local_8[6],local_8);
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) & 0xfffd;
  if ((local_1c == 0) && (iVar2 = *(int *)(local_8[0xd] + 8), -1 < iVar2 + -1)) {
    local_14 = 0;
    do {
      piVar4 = (int *)FUN_0041e01c(local_8[0xd],local_14);
      (**(code **)(*piVar4 + 0xc))();
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_78;
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_00423632;
  if (local_1c == 0) {
    puStack_7c = (undefined1 *)0x423622;
    FUN_00403a84(local_8[0xd],uStack_80,puVar1);
  }
  local_8[0xd] = 0;
  return;
}

