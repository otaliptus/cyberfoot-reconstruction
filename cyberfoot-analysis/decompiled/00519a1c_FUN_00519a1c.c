// Address: 00519a1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00519a1c(void)

{
  int iVar1;
  BYTE BVar2;
  PALETTEENTRY *pPVar3;
  LOGPALETTE local_408 [128];
  
  local_408[0].palVersion = 0x300;
  local_408[0].palNumEntries = 0x100;
  iVar1 = 0;
  pPVar3 = local_408[0].palPalEntry;
  do {
    BVar2 = (BYTE)iVar1;
    pPVar3->peRed = BVar2;
    pPVar3->peGreen = BVar2;
    pPVar3->peBlue = BVar2;
    pPVar3->peFlags = '\x04';
    iVar1 = iVar1 + 1;
    pPVar3 = pPVar3 + 1;
  } while (iVar1 != 0x100);
  CreatePalette(local_408);
  return;
}

