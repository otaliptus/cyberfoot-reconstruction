// Address: 0042fa48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HPALETTE FUN_0042fa48(HPALETTE param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  UINT local_410;
  LOGPALETTE local_40c [128];
  
  pHVar2 = (HPALETTE)0x0;
  if (param_1 != (HPALETTE)0x0) {
    local_410 = 0;
    iVar1 = GetObjectA(param_1,4,&local_410);
    if ((iVar1 != 0) && (local_410 != 0)) {
      local_40c[0].palVersion = 0x300;
      local_40c[0].palNumEntries = (WORD)local_410;
      GetPaletteEntries(param_1,0,local_410,local_40c[0].palPalEntry);
      pHVar2 = CreatePalette(local_40c);
    }
  }
  return pHVar2;
}

