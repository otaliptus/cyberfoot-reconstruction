// Address: 00476bd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476bd0(int param_1,HMENU param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  DWORD DVar5;
  LPCSTR pCVar6;
  UINT_PTR uIDNewItem;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  MENUITEMINFOA local_3d;
  byte local_d;
  undefined4 local_c;
  byte local_5;
  
  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_c = 0;
  puStack_58 = &LAB_00476e2b;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puVar1 = &stack0xfffffffc;
  local_5 = param_3;
  if (*(char *)(param_1 + 0x3e) == '\0') goto LAB_00476e0d;
  FUN_0040496c(&local_c,*(undefined4 *)(param_1 + 0x30));
  iVar4 = FUN_00478b4c(param_1);
  if (iVar4 < 1) {
    if (*(short *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(param_1 + 100);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 100) == 0)) {
        cVar2 = FUN_00403c10(*(undefined4 *)(iVar4 + 4),PTR_PTR_00475ac4);
        if (cVar2 != '\0') goto LAB_00476c6c;
      }
      FUN_00476234(*(undefined2 *)(param_1 + 0x60),&local_44);
      FUN_00404c64(&local_c,3);
    }
  }
  else {
    local_3d.hSubMenu = (HMENU)FUN_004770e0(param_1);
  }
LAB_00476c6c:
  DVar5 = GetVersion();
  uVar3 = (ushort)DVar5 & 0xff;
  bVar8 = uVar3 == 4;
  if (uVar3 < 4) {
    FUN_00404cf0(*(undefined4 *)(param_1 + 0x30),&DAT_00476e50);
    uVar7 = *(uint *)(&DAT_0066316c + (bVar8 & 0x7f) * 4) |
            *(uint *)(&DAT_00663160 + (uint)*(byte *)(param_1 + 0x48) * 4) |
            *(uint *)(&DAT_00663150 + (uint)*(byte *)(param_1 + 0x38) * 4) |
            *(uint *)(&DAT_00663158 + (uint)*(byte *)(param_1 + 0x39) * 4);
    iVar4 = FUN_00478b4c(param_1);
    if (iVar4 < 1) {
      pCVar6 = (LPCSTR)FUN_00404da4(local_c);
      InsertMenuA(param_2,0xffffffff,uVar7 | 0x400,(uint)*(ushort *)(param_1 + 0x50),pCVar6);
      puVar1 = puStack_54;
    }
    else {
      pCVar6 = (LPCSTR)FUN_00404da4(*(undefined4 *)(param_1 + 0x30));
      uIDNewItem = FUN_004770e0(param_1);
      InsertMenuA(param_2,0xffffffff,uVar7 | 0x410,uIDNewItem,pCVar6);
      puVar1 = puStack_54;
    }
    goto LAB_00476e0d;
  }
  local_3d.cbSize = 0x2c;
  local_3d.fMask = 0x3f;
  iVar4 = thunk_FUN_0047910c(param_1);
  if (iVar4 == 0) {
LAB_00476cac:
    if (*(int *)(param_1 + 0x4c) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
      bVar8 = 1;
      if (cVar2 == '\0') goto LAB_00476cc2;
    }
    local_d = 0;
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
    if (*(char *)(iVar4 + 0x40) == '\0') {
      iVar4 = FUN_00478724(param_1);
      bVar8 = 0;
      if (iVar4 == 0) goto LAB_00476cac;
    }
LAB_00476cc2:
    local_d = 1;
  }
  FUN_00404cf0(*(undefined4 *)(param_1 + 0x30),&DAT_00476e50);
  local_3d.fType =
       *(uint *)(&DAT_006631a0 + (bVar8 & 0x7f) * 4) |
       *(uint *)(&DAT_00663198 + (uint)*(byte *)(param_1 + 0x3d) * 4) |
       *(uint *)(&DAT_00663174 + (uint)*(byte *)(param_1 + 0x48) * 4) |
       *(uint *)(&DAT_006631a8 + (uint)local_5 * 4) | *(uint *)(&DAT_006631b0 + (uint)local_d * 4);
  local_3d.fState =
       *(uint *)(&DAT_00663180 + (uint)*(byte *)(param_1 + 0x38) * 4) |
       *(uint *)(&DAT_00663190 + (uint)*(byte *)(param_1 + 0x39) * 4) |
       *(uint *)(&DAT_00663188 + (uint)*(byte *)(param_1 + 0x3a) * 4);
  local_3d.wID = (UINT)*(ushort *)(param_1 + 0x50);
  local_3d.hSubMenu = (HMENU)0x0;
  local_3d.hbmpChecked = (HBITMAP)0x0;
  local_3d.hbmpUnchecked = (HBITMAP)0x0;
  local_3d.dwTypeData = (LPSTR)FUN_00404da4(local_c);
  iVar4 = FUN_00478b4c(param_1);
  if (0 < iVar4) {
    local_3d.hSubMenu = (HMENU)FUN_004770e0(param_1);
  }
  InsertMenuItemA(param_2,0xffffffff,-1,&local_3d);
  puVar1 = puStack_54;
LAB_00476e0d:
  puStack_54 = puVar1;
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00476e32;
  puStack_58 = (undefined1 *)0x476e22;
  FUN_004048d4(&local_44,uStack_5c,puVar1);
  puStack_58 = (undefined1 *)0x476e2a;
  FUN_004048d4(&local_c);
  return;
}

