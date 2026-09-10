// Address: 0042e350
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042e350(int param_1)

{
  int iVar1;
  UINT nNumEntries;
  HPALETTE pHVar2;
  undefined4 uVar3;
  LOGPALETTE local_410 [128];
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      nNumEntries = GetEnhMetaFilePaletteEntries(*(HENHMETAFILE *)(iVar1 + 8),0,(LPPALETTEENTRY)0x0)
      ;
      if (nNumEntries == 0) {
        return 0;
      }
      if (0x100 < (int)nNumEntries) {
        nNumEntries = nNumEntries & 0xff;
      }
      FUN_00429594(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x14));
      local_410[0].palVersion = 0x300;
      local_410[0].palNumEntries = (WORD)nNumEntries;
      GetEnhMetaFilePaletteEntries
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8),nNumEntries,
                 local_410[0].palPalEntry);
      pHVar2 = CreatePalette(local_410);
      *(HPALETTE *)(*(int *)(param_1 + 0x28) + 0x14) = pHVar2;
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x14);
  }
  return uVar3;
}

