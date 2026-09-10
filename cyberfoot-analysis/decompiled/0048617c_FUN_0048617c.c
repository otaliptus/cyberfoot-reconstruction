// Address: 0048617c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048617c(int param_1)

{
  undefined1 *puVar1;
  ATOM AVar2;
  undefined4 uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  LPARAM lParam;
  LONG dwNewLong;
  HMENU hMenu;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  HINSTANCE pHVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_30;
  tagWNDCLASSA local_2c;
  
  puStack_38 = &stack0xfffffffc;
  local_30 = 0;
  puStack_3c = &LAB_0048631d;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0xa4) == '\0') && (puVar1 = &stack0xfffffffc, *PTR_DAT_0066b4ac == '\0'))
  {
    uVar3 = FUN_00427ee8();
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    PTR_DefWindowProcA_006632d8 = DefWindowProcA;
    BVar4 = GetClassInfoA(DAT_0066c668,PTR_s_TApplication_006632f8,&local_2c);
    if (BVar4 == 0) {
      _DAT_006632e4 = DAT_0066c668;
      AVar2 = RegisterClassA((WNDCLASSA *)&DAT_006632d4);
      if (AVar2 == 0) {
        FUN_00406d44(PTR_PTR_0066ae24,&local_30);
        FUN_0040e370(PTR_DAT_0041b680,1,local_30);
        FUN_00404250();
      }
    }
    uVar3 = 0;
    (**(code **)PTR_DAT_0066b008)();
    uVar5 = (**(code **)PTR_DAT_0066b008)();
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    pHVar9 = DAT_0066c668;
    uVar7 = FUN_00404da4(*(undefined4 *)(param_1 + 0x8c));
    uVar3 = FUN_004081c8(PTR_s_TApplication_006632f8,uVar7,0x84ca0000,uVar8,pHVar9,uVar10,uVar11,
                         uVar12,uVar13,iVar6,uVar3);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    FUN_004048d4(param_1 + 0x8c);
    *(undefined1 *)(param_1 + 0xa4) = 1;
    SetWindowLongA(*(HWND *)(param_1 + 0x30),-4,*(LONG *)(param_1 + 0x40));
    if (*PTR_DAT_0066b148 != '\0') {
      lParam = FUN_00486e00(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x30),0x80,1,lParam);
      dwNewLong = FUN_00486e00(param_1);
      SetClassLongA(*(HWND *)(param_1 + 0x30),-0xe,dwNewLong);
    }
    hMenu = GetSystemMenu(*(HWND *)(param_1 + 0x30),0);
    DeleteMenu(hMenu,0xf030,0);
    DeleteMenu(hMenu,0xf000,0);
    puVar1 = puStack_38;
    if (*PTR_DAT_0066b148 != '\0') {
      DeleteMenu(hMenu,0xf010,0);
      puVar1 = puStack_38;
    }
  }
  puStack_38 = puVar1;
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00486324;
  puStack_3c = (undefined1 *)0x48631c;
  FUN_004048d4(&local_30,uStack_40,puVar1);
  return;
}

