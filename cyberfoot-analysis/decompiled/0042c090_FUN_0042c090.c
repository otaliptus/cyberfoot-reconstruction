// Address: 0042c090
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HPALETTE FUN_0042c090(HGDIOBJ param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  HDC hdc;
  HGDIOBJ h;
  UINT UVar2;
  HPALETTE pHVar3;
  LOGPALETTE local_410 [128];
  
  local_410[0].palVersion = 0x300;
  if (param_1 == (HGDIOBJ)0x0) {
    local_410[0].palNumEntries = (WORD)param_3;
    FUN_00402a04(param_2,local_410[0].palPalEntry,param_3 << 2);
  }
  else {
    hdc = CreateCompatibleDC((HDC)0x0);
    h = SelectObject(hdc,param_1);
    UVar2 = GetDIBColorTable(hdc,0,0x100,(RGBQUAD *)local_410[0].palPalEntry);
    local_410[0].palNumEntries = (WORD)UVar2;
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  if (local_410[0].palNumEntries != 0) {
    if ((local_410[0].palNumEntries != 0x10) || (cVar1 = FUN_0042bff8(local_410), cVar1 == '\0')) {
      FUN_0042be88(local_410[0].palPalEntry,local_410[0].palNumEntries);
    }
    pHVar3 = CreatePalette(local_410);
    return pHVar3;
  }
  return (HPALETTE)0x0;
}

