// Address: 0042a3b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042a3b4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HFONT pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  LOGFONTA local_44;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  puStack_5c = &LAB_0042a53d;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_64 = (undefined1 *)0x42a3f3;
    FUN_0042967c(DAT_0066c8e0);
    puStack_68 = &LAB_0042a515;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_6c;
    puStack_64 = &stack0xfffffffc;
    if (*(int *)(local_8 + 8) == 0) {
      local_44.lfHeight = *(LONG *)(local_8 + 0x14);
      local_44.lfWidth = 0;
      local_44.lfEscapement = 0;
      local_44.lfOrientation = 0;
      if ((*(byte *)(local_8 + 0x19) & 1) == 0) {
        local_44.lfWeight = 400;
      }
      else {
        local_44.lfWeight = 700;
      }
      local_44.lfItalic = (*(byte *)(local_8 + 0x19) & 2) != 0;
      local_44.lfUnderline = (*(byte *)(local_8 + 0x19) & 4) != 0;
      local_44.lfStrikeOut = (*(byte *)(local_8 + 0x19) & 8) != 0;
      local_44.lfCharSet = *(BYTE *)(local_8 + 0x1a);
      puStack_64 = &stack0xfffffffc;
      FUN_00404b48(&local_48,local_8 + 0x1b);
      iVar3 = FUN_00409790(local_48,"Default");
      if (iVar3 == 0) {
        FUN_00404b48(&local_4c,s_MS_Sans_Serif_006626ab);
        FUN_0040a7f8(local_44.lfFaceName,local_4c);
      }
      else {
        FUN_00404b48(&local_50,local_8 + 0x1b);
        FUN_0040a7f8(local_44.lfFaceName,local_50);
      }
      local_44.lfQuality = '\0';
      local_44.lfOutPrecision = '\0';
      local_44.lfClipPrecision = '\0';
      cVar2 = FUN_0042a698(param_1);
      if (cVar2 == '\x01') {
        local_44.lfPitchAndFamily = '\x02';
      }
      else if (cVar2 == '\x02') {
        local_44.lfPitchAndFamily = '\x01';
      }
      else {
        local_44.lfPitchAndFamily = '\0';
      }
      pHVar4 = CreateFontIndirectA(&local_44);
      *(HFONT *)(local_8 + 8) = pHVar4;
    }
    puVar1 = puStack_64;
    *in_FS_OFFSET = uStack_6c;
    puStack_64 = (undefined1 *)0x42a51c;
    puStack_68 = (undefined1 *)0x42a514;
    FUN_00429688(DAT_0066c8e0,uStack_6c,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_0042a544;
  puStack_5c = (undefined1 *)0x42a53c;
  FUN_004048f8(&local_50,3,&stack0xfffffffc);
  return;
}

