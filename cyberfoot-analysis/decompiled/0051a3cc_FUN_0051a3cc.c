// Address: 0051a3cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HPALETTE FUN_0051a3cc(int param_1)

{
  BYTE *pBVar1;
  HPALETTE pHVar2;
  int iVar3;
  PALETTEENTRY *pPVar4;
  LOGPALETTE local_410 [128];
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    pHVar2 = (HPALETTE)0x0;
  }
  else {
    local_410[0].palVersion = 0x300;
    local_410[0].palNumEntries = *(WORD *)(param_1 + 8);
    local_8 = param_1;
    if (-1 < iVar3 + -1) {
      local_c = 0;
      pPVar4 = local_410[0].palPalEntry;
      do {
        pBVar1 = (BYTE *)(*(int *)(local_8 + 4) + local_c * 3);
        pPVar4->peRed = *pBVar1;
        pPVar4->peGreen = pBVar1[1];
        pPVar4->peBlue = pBVar1[2];
        pPVar4->peFlags = '\x04';
        local_c = local_c + 1;
        pPVar4 = pPVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    pHVar2 = CreatePalette(local_410);
  }
  return pHVar2;
}

