// Address: 00585920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00585920(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  HFONT ho;
  HDC pHVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  HFONT h;
  COLORREF color;
  HGDIOBJ h_00;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  HGDIOBJ local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  LOGFONTA local_40;
  
  puStack_84 = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  local_74 = 0;
  local_48 = 0;
  puStack_88 = &LAB_00585cdb;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_44 = param_1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x2c))();
  (**(code **)(**(int **)(local_44 + 0x1fc) + 0x40))(*(int **)(local_44 + 0x1fc),uVar1);
  uVar1 = (**(code **)(**(int **)(local_44 + 0x1f8) + 0x20))();
  (**(code **)(**(int **)(local_44 + 0x1fc) + 0x34))(*(int **)(local_44 + 0x1fc),uVar1);
  iVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  *(undefined4 *)(iVar2 + 0x20) = 0x42;
  FUN_0041c990(0,0,*(undefined4 *)(local_44 + 0x48),local_60,*(undefined4 *)(local_44 + 0x4c));
  puVar8 = local_60;
  FUN_0041c990(0,0,*(undefined4 *)(local_44 + 0x48),local_70,*(undefined4 *)(local_44 + 0x4c));
  puVar9 = local_70;
  uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  uVar3 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  FUN_0042addc(uVar3,puVar9,uVar1,puVar8);
  iVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  *(undefined4 *)(iVar2 + 0x20) = 0xcc0020;
  iVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  FUN_0042ac88(*(undefined4 *)(iVar2 + 0x14),1);
  FUN_005857c0();
  if ((*(int *)(local_44 + 0x270) == 0) || (*(int *)(local_44 + 0x17c) != 100)) {
    FUN_00409dd8(*(undefined4 *)(local_44 + 0x17c),&local_74,puVar10);
    FUN_00404bf0(&local_48,local_74,*(undefined4 *)(local_44 + 0x26c));
  }
  else {
    FUN_0040496c(&local_48,*(undefined4 *)(local_44 + 0x270));
  }
  if (*(char *)(local_44 + 0x224) == '\x01') {
    FUN_0058590c(0xa8c);
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar2 = FUN_0042b400(uVar1,local_48);
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar4 = FUN_0042b400(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a0) - iVar4;
    iVar4 = (int)uVar7 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar7 & 1) != 0);
    }
    iVar2 = iVar2 + iVar4 + -1;
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar4 = FUN_0042b3e4(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a4) - iVar4;
    local_4c = (int)uVar7 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar7 & 1) != 0);
    }
  }
  else if (*(char *)(local_44 + 0x224) == '\x02') {
    FUN_0058590c(900);
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar2 = FUN_0042b400(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a0) - iVar2;
    iVar2 = (int)uVar7 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar7 & 1) != 0);
    }
    iVar2 = iVar2 + 1;
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar4 = FUN_0042b3e4(uVar1,local_48);
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar5 = FUN_0042b3e4(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a4) - iVar5;
    local_4c = (int)uVar7 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar7 & 1) != 0);
    }
    local_4c = iVar4 + local_4c;
  }
  else {
    FUN_0058590c(1);
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar2 = FUN_0042b3e4(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a0) - iVar2;
    iVar2 = (int)uVar7 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar7 & 1) != 0);
    }
    uVar1 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
    iVar4 = FUN_0042b400(uVar1,local_48);
    uVar7 = *(int *)(local_44 + 0x1a4) - iVar4;
    local_4c = (int)uVar7 >> 1;
    if (local_4c < 0) {
      local_4c = local_4c + (uint)((uVar7 & 1) != 0);
    }
    local_4c = local_4c + 1;
  }
  ho = CreateFontIndirectA(&local_40);
  h = ho;
  FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  pHVar6 = (HDC)FUN_0042b5a8();
  local_50 = SelectObject(pHVar6,h);
  color = 0xffffff;
  FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  pHVar6 = (HDC)FUN_0042b5a8();
  SetTextColor(pHVar6,color);
  uVar1 = local_48;
  iVar4 = local_4c;
  FUN_0041c990(*(undefined4 *)(local_44 + 0x19c),*(undefined4 *)(local_44 + 0x19c),
               *(undefined4 *)(local_44 + 0x1a0),local_60,*(undefined4 *)(local_44 + 0x1a4));
  puVar8 = local_60;
  uVar3 = FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  FUN_0042b300(uVar3,puVar8,iVar2,uVar1,iVar4);
  h_00 = local_50;
  FUN_00430280(*(undefined4 *)(local_44 + 0x1fc));
  pHVar6 = (HDC)FUN_0042b5a8();
  SelectObject(pHVar6,h_00);
  DeleteObject(ho);
  iVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  *(undefined4 *)(iVar2 + 0x20) = 0x660046;
  uVar1 = *(undefined4 *)(local_44 + 0x1fc);
  uVar3 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  FUN_0042ae64(uVar3,0,0,uVar1);
  iVar2 = FUN_00430280(*(undefined4 *)(local_44 + 0x1f8));
  puVar8 = puStack_84;
  *(undefined4 *)(iVar2 + 0x20) = 0xcc0020;
  *in_FS_OFFSET = uStack_8c;
  puStack_84 = &LAB_00585ce2;
  puStack_88 = (undefined1 *)0x585cd2;
  FUN_004048d4(&local_74,uStack_8c,puVar8);
  puStack_88 = (undefined1 *)0x585cda;
  FUN_004048d4(&local_48);
  return;
}

