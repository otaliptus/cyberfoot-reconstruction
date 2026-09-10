// Address: 00519a6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00519a6c(void)

{
  BYTE *pBVar1;
  PALETTEENTRY *pPVar2;
  int iVar3;
  LOGPALETTE local_408 [128];
  
  local_408[0].palVersion = 0x300;
  local_408[0].palNumEntries = 2;
  iVar3 = 2;
  pPVar2 = local_408[0].palPalEntry;
  pBVar1 = &DAT_00669d18;
  do {
    pPVar2->peRed = *pBVar1;
    pPVar2->peGreen = *pBVar1;
    pPVar2->peBlue = *pBVar1;
    pPVar2->peFlags = '\x04';
    pBVar1 = pBVar1 + 1;
    pPVar2 = pPVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  CreatePalette(local_408);
  return;
}

