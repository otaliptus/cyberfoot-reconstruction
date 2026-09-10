// Address: 00585454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00585454(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  HFONT ho;
  HDC pHVar5;
  COLORREF CVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar9;
  HFONT h;
  HGDIOBJ h_00;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 local_64 [16];
  undefined4 local_54;
  HGDIOBJ local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  LOGFONTA local_40;
  
  puStack_74 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  local_54 = 0;
  local_48 = 0;
  puStack_78 = &LAB_005857b2;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  local_44 = param_1;
  iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
  FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),1);
  FUN_005852f4();
  if ((*(int *)(local_44 + 0x270) == 0) || (*(int *)(local_44 + 0x17c) != 100)) {
    FUN_00409dd8(*(undefined4 *)(local_44 + 0x17c),&local_54,puVar9);
    FUN_00404bf0(&local_48,local_54,*(undefined4 *)(local_44 + 0x26c));
  }
  else {
    FUN_0040496c(&local_48,*(undefined4 *)(local_44 + 0x270));
  }
  if (*(char *)(local_44 + 0x224) == '\x01') {
    FUN_00585440(0xa8c);
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar1 = FUN_0042b400(uVar2,local_48);
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar3 = FUN_0042b400(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a0) - iVar3;
    iVar3 = (int)uVar8 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar8 & 1) != 0);
    }
    iVar1 = iVar1 + iVar3 + -1;
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar3 = FUN_0042b3e4(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a4) - iVar3;
    local_4c = (int)uVar8 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar8 & 1) != 0);
    }
  }
  else if (*(char *)(local_44 + 0x224) == '\x02') {
    FUN_00585440(900);
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar1 = FUN_0042b400(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a0) - iVar1;
    iVar1 = (int)uVar8 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((uVar8 & 1) != 0);
    }
    iVar1 = iVar1 + 1;
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar3 = FUN_0042b3e4(uVar2,local_48);
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar4 = FUN_0042b3e4(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a4) - iVar4;
    local_4c = (int)uVar8 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar8 & 1) != 0);
    }
    local_4c = iVar3 + local_4c;
  }
  else {
    FUN_00585440(1);
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar1 = FUN_0042b3e4(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a0) - iVar1;
    iVar1 = (int)uVar8 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((uVar8 & 1) != 0);
    }
    uVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    iVar3 = FUN_0042b400(uVar2,local_48);
    uVar8 = *(int *)(local_44 + 0x1a4) - iVar3;
    local_4c = (int)uVar8 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar8 & 1) != 0);
    }
    local_4c = local_4c + 1;
  }
  ho = CreateFontIndirectA(&local_40);
  h = ho;
  FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  pHVar5 = (HDC)FUN_0042b5a8();
  local_50 = SelectObject(pHVar5,h);
  if (*(char *)(local_44 + 0x21d) != '\0') {
    CVar6 = FUN_00429e64(*(undefined4 *)(local_44 + 0x220));
    FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    pHVar5 = (HDC)FUN_0042b5a8();
    SetTextColor(pHVar5,CVar6);
    iVar3 = *(int *)(local_44 + 0x16c) + local_4c;
    uVar2 = local_48;
    FUN_0041c990(*(undefined4 *)(local_44 + 0x19c),*(undefined4 *)(local_44 + 0x19c),
                 *(undefined4 *)(local_44 + 0x1a0),local_64,*(undefined4 *)(local_44 + 0x1a4));
    puVar9 = local_64;
    uVar7 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
    FUN_0042b300(uVar7,puVar9,*(int *)(local_44 + 0x16c) + iVar1,uVar2,iVar3);
  }
  iVar3 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  CVar6 = FUN_00429e64(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x18));
  FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  pHVar5 = (HDC)FUN_0042b5a8();
  SetTextColor(pHVar5,CVar6);
  uVar2 = local_48;
  iVar3 = local_4c;
  FUN_0041c990(*(undefined4 *)(local_44 + 0x19c),*(undefined4 *)(local_44 + 0x19c),
               *(undefined4 *)(local_44 + 0x1a0),local_64,*(undefined4 *)(local_44 + 0x1a4));
  puVar9 = local_64;
  uVar7 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  FUN_0042b300(uVar7,puVar9,iVar1,uVar2,iVar3);
  h_00 = local_50;
  FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  pHVar5 = (HDC)FUN_0042b5a8();
  SelectObject(pHVar5,h_00);
  DeleteObject(ho);
  puVar9 = puStack_74;
  *in_FS_OFFSET = uStack_7c;
  puStack_74 = &LAB_005857b9;
  puStack_78 = (undefined1 *)0x5857a9;
  FUN_004048d4(&local_54,uStack_7c,puVar9);
  puStack_78 = (undefined1 *)0x5857b1;
  FUN_004048d4(&local_48);
  return;
}

