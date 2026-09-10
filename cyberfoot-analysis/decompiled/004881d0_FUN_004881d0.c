// Address: 004881d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004881d0(void)

{
  undefined1 *puVar1;
  char cVar2;
  HCURSOR hIcon;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  ICONINFO *piconinfo;
  ICONINFO local_2c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (**(code **)PTR_DAT_0066b008)();
  piconinfo = &local_2c;
  hIcon = GetCursor();
  uStack_48 = 0x4881f6;
  BVar3 = GetIconInfo(hIcon,piconinfo);
  if (BVar3 != 0) {
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_4c = (undefined1 *)0x48821a;
    FUN_0042c848(local_2c.hbmMask,&local_c,&local_10);
    puStack_4c = (undefined1 *)0x488225;
    iVar4 = FUN_0040952c(local_c + local_10);
    puStack_50 = &LAB_004882e3;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    iVar6 = iVar4 + local_c;
    puStack_4c = &stack0xfffffffc;
    local_14 = iVar4;
    cVar2 = FUN_0042c900(local_2c.hbmMask,0,iVar4,iVar6);
    if ((cVar2 != '\0') && (*(short *)(local_14 + 0xe) == 1)) {
      uVar5 = *(int *)(iVar4 + 4) * (uint)*(ushort *)(iVar4 + 0xe) + 0x1f & 0xffffffe0;
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 + 7;
      }
      local_18 = (int)uVar5 >> 3;
      iVar7 = *(int *)(iVar4 + 4) * local_18;
      iVar6 = (iVar6 + local_10) - iVar7;
      local_8 = FUN_004881c0(iVar6,iVar7,0xff);
      if ((local_8 == 0) && (*(int *)(iVar4 + 4) * 2 <= *(int *)(iVar4 + 8))) {
        local_8 = FUN_004881c0(iVar6 - iVar7,iVar7,0);
      }
      local_8 = local_8 / local_18 - local_2c.yHotspot;
    }
    puVar1 = puStack_4c;
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &LAB_004882ea;
    puStack_50 = (undefined1 *)0x4882e2;
    iVar4 = FUN_0040281c(local_14,local_c + local_10,puVar1);
    return iVar4;
  }
  return local_8;
}

