// Address: 004a6c70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6c70(HPALETTE param_1,HPALETTE param_2)

{
  int iVar1;
  tagPALETTEENTRY local_408 [256];
  UINT local_8;
  
  local_8 = 0;
  iVar1 = GetObjectA(param_1,4,&local_8);
  if ((iVar1 != 0) && (local_8 != 0)) {
    ResizePalette(param_2,local_8);
    GetPaletteEntries(param_1,0,local_8,local_408);
    SetPaletteEntries(param_2,0,local_8,local_408);
  }
  return;
}

