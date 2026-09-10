// Address: 0051678c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051678c(void)

{
  char cVar1;
  PALETTEENTRY *pPVar2;
  PALETTEENTRY *pPVar3;
  PALETTEENTRY *local_370;
  char local_36a;
  char local_369;
  LOGPALETTE local_368 [108];
  
  local_368[0].palVersion = 0x300;
  local_368[0].palNumEntries = 0xd8;
  local_369 = '\0';
  local_370 = local_368[0].palPalEntry;
  do {
    local_36a = '\0';
    pPVar3 = local_370;
    do {
      cVar1 = '\0';
      pPVar2 = pPVar3;
      do {
        pPVar2->peRed = local_369 * '3';
        pPVar2->peGreen = local_36a * '3';
        pPVar2->peBlue = cVar1 * '3';
        pPVar2->peFlags = '\0';
        cVar1 = cVar1 + '\x01';
        pPVar2 = pPVar2 + 1;
      } while (cVar1 != '\x06');
      local_36a = local_36a + '\x01';
      pPVar3 = pPVar3 + 6;
    } while (local_36a != '\x06');
    local_369 = local_369 + '\x01';
    local_370 = local_370 + 0x24;
  } while (local_369 != '\x06');
  CreatePalette(local_368);
  return;
}

