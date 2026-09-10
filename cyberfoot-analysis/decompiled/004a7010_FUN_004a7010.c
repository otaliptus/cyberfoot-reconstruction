// Address: 004a7010
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a7010(int param_1,int param_2)

{
  int iVar1;
  PALETTEENTRY *pPVar2;
  uint uVar3;
  int nNumber;
  LOGPALETTE local_40c [128];
  int local_8;
  
  if (param_2 == 0x10) {
    param_2 = 8;
  }
  local_8 = param_1;
  FUN_004032a8(local_40c,0x404,0);
  local_40c[0].palVersion = 0x300;
  local_40c[0].palNumEntries = 1 << ((byte)param_2 & 0x1f);
  uVar3 = (uint)local_40c[0].palNumEntries;
  if (-1 < (int)(uVar3 - 1)) {
    nNumber = 0;
    pPVar2 = local_40c[0].palPalEntry;
    do {
      iVar1 = MulDiv(nNumber,0xff,local_40c[0].palNumEntries - 1);
      pPVar2->peRed = *(BYTE *)(*(int *)(local_8 + 0xc) + 0x13d + iVar1);
      pPVar2->peGreen = pPVar2->peRed;
      pPVar2->peBlue = pPVar2->peRed;
      nNumber = nNumber + 1;
      pPVar2 = pPVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  CreatePalette(local_40c);
  return;
}

