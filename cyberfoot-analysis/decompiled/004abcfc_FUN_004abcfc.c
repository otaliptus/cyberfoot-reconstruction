// Address: 004abcfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004abcfc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  HDC local_24;
  HBITMAP local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_38 = 0;
  puStack_44 = &LAB_004ac00e;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((param_2 < 1) || (param_3 < 1)) {
    FUN_00406d44(PTR_LAB_0066b7d4,&local_38);
    FUN_004aa278(local_8,PTR_DAT_004a5304,local_38);
  }
  else {
    puStack_40 = &stack0xfffffffc;
    local_14 = FUN_004aa2e8(param_1);
    local_24 = CreateCompatibleDC(*(HDC *)(local_14 + 0x18));
    *(int *)(local_14 + 0x25) = local_c;
    *(int *)(local_14 + 0x29) = local_10;
    local_20 = CreateDIBSection(local_24,(BITMAPINFO *)(local_14 + 0x21),0,&local_28,(HANDLE)0x0,0);
    SelectObject(local_24,local_20);
    FUN_0042b628(local_8[0x4a],local_24);
    uVar1 = (uint)*(ushort *)(local_14 + 0x2f) * local_c + 0x1f & 0xffffffe0;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 7;
    }
    local_1c = (int)uVar1 >> 3;
    iVar2 = (**(code **)(*local_8 + 0x20))();
    iVar2 = FUN_004abcd0(local_10 + -1,iVar2 + -1);
    if (-1 < iVar2) {
      local_34 = iVar2 + 1;
      local_18 = 0;
      do {
        puVar5 = &stack0xfffffffc;
        uVar3 = FUN_004abcd0(local_1c,*(undefined4 *)(local_14 + 0x468));
        uVar4 = FUN_004ab7f0(local_8,local_18,puVar5);
        FUN_00408034((int)local_28 + ((local_10 + -1) * local_1c - local_18 * local_1c),uVar4,uVar3)
        ;
        local_18 = local_18 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    if ((*(char *)(local_14 + 0x461) == '\x06') || (*(char *)(local_14 + 0x461) == '\x04')) {
      local_2c = FUN_004027fc((int)((longlong)local_c * (longlong)local_10),
                              (int)((ulonglong)((longlong)local_c * (longlong)local_10) >> 0x20));
      FUN_004032a8(local_2c,local_c * local_10,0xff);
      iVar2 = (**(code **)(*local_8 + 0x20))();
      iVar2 = FUN_004abcd0(local_10 + -1,iVar2 + -1);
      if (-1 < iVar2) {
        local_34 = iVar2 + 1;
        local_18 = 0;
        do {
          puVar5 = &stack0xfffffffc;
          uVar3 = (**(code **)(*local_8 + 0x2c))();
          uVar3 = FUN_004abcd0(local_c,uVar3);
          uVar4 = FUN_004ab788(local_8,local_18,puVar5);
          FUN_00408034(local_18 * local_c + local_2c,uVar4,uVar3);
          local_18 = local_18 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      FUN_0040281c(*(undefined4 *)(local_14 + 0x454));
      *(int *)(local_14 + 0x454) = local_2c;
    }
    if (*(char *)(local_14 + 0x460) == '\x10') {
      local_30 = FUN_004027fc((int)((longlong)local_c * (longlong)local_10),
                              (int)((ulonglong)((longlong)local_c * (longlong)local_10) >> 0x20));
      FUN_004032a8(local_30,local_c * local_10,0);
      iVar2 = (**(code **)(*local_8 + 0x20))();
      iVar2 = FUN_004abcd0(local_10 + -1,iVar2 + -1);
      if (-1 < iVar2) {
        local_34 = iVar2 + 1;
        local_18 = 0;
        do {
          puVar5 = &stack0xfffffffc;
          uVar3 = (**(code **)(*local_8 + 0x2c))();
          uVar3 = FUN_004abcd0(local_c,uVar3);
          uVar4 = FUN_004ab7c0(local_8,local_18,puVar5);
          FUN_00408034(local_18 * local_c + local_30,uVar4,uVar3);
          local_18 = local_18 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      FUN_0040281c(*(undefined4 *)(local_14 + 0x44c));
      *(int *)(local_14 + 0x44c) = local_30;
    }
    DeleteObject(*(HGDIOBJ *)(local_14 + 0x14));
    DeleteDC(*(HDC *)(local_14 + 0x18));
    *(int *)(local_14 + 0x468) = local_1c;
    *(int *)(local_14 + 0x458) = local_c;
    *(int *)(local_14 + 0x45c) = local_10;
    *(void **)(local_14 + 0x450) = local_28;
    *(HBITMAP *)(local_14 + 0x14) = local_20;
    *(HDC *)(local_14 + 0x18) = local_24;
  }
  puVar5 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004ac015;
  puStack_44 = (undefined1 *)0x4ac00d;
  FUN_004048d4(&local_38,uStack_48,puVar5);
  return;
}

