// Address: 004a7734
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a7734(int param_1)

{
  int iVar1;
  int iVar2;
  HPALETTE pHVar3;
  PALETTEENTRY *pPVar4;
  LOGPALETTE local_414 [128];
  uint local_10;
  int local_c;
  ushort local_6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar1 + 0x461) == '\0') || (*(char *)(iVar1 + 0x461) == '\x04')) {
    local_6 = 1 << (*(byte *)(iVar1 + 0x2f) & 0x1f);
    FUN_004032a8(local_414,0x404,0);
    local_414[0].palVersion = 0x300;
    local_414[0].palNumEntries = local_6;
    if (-1 < (int)(local_6 - 1)) {
      local_c = 0;
      pPVar4 = local_414[0].palPalEntry;
      local_10 = (uint)local_6;
      do {
        iVar2 = MulDiv(local_c,0xff,local_6 - 1);
        pPVar4->peRed = *(BYTE *)(*(int *)(iVar1 + 0xc) + 0x13d + iVar2);
        pPVar4->peGreen = pPVar4->peRed;
        pPVar4->peBlue = pPVar4->peRed;
        local_c = local_c + 1;
        pPVar4 = pPVar4 + 1;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    pHVar3 = CreatePalette(local_414);
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x38))(*(int **)(iVar1 + 0xc),pHVar3);
  }
  return;
}

