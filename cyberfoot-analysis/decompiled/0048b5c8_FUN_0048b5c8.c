// Address: 0048b5c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048b5c8(int param_1)

{
  BYTE BVar1;
  int iVar2;
  PALETTEENTRY *pPVar3;
  uint uVar4;
  LOGPALETTE local_40c [128];
  
  local_40c[0].palVersion = 0x300;
  local_40c[0].palNumEntries = *(ushort *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x2c) == 1) {
    uVar4 = (uint)local_40c[0].palNumEntries;
    if (-1 < (int)(uVar4 - 1)) {
      iVar2 = 0;
      pPVar3 = local_40c[0].palPalEntry;
      do {
        BVar1 = *(BYTE *)(**(int **)(param_1 + 0x88) + iVar2);
        pPVar3->peRed = BVar1;
        pPVar3->peGreen = BVar1;
        pPVar3->peBlue = BVar1;
        pPVar3->peFlags = '\0';
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar4 = (uint)local_40c[0].palNumEntries;
    if (-1 < (int)(uVar4 - 1)) {
      iVar2 = 0;
      pPVar3 = local_40c[0].palPalEntry;
      do {
        pPVar3->peRed = *(BYTE *)(*(int *)(*(int *)(param_1 + 0x88) + 8) + iVar2);
        pPVar3->peGreen = *(BYTE *)(*(int *)(*(int *)(param_1 + 0x88) + 4) + iVar2);
        pPVar3->peBlue = *(BYTE *)(**(int **)(param_1 + 0x88) + iVar2);
        pPVar3->peFlags = '\0';
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  CreatePalette(local_40c);
  return;
}

