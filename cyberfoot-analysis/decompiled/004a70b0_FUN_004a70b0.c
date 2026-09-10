// Address: 004a70b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a70b0(int param_1,HPALETTE param_2)

{
  UINT UVar1;
  BYTE *pBVar2;
  int iVar3;
  undefined1 local_408 [4];
  tagPALETTEENTRY local_404 [256];
  
  FUN_004032a8(local_408,0x404,0);
  UVar1 = GetPaletteEntries(param_2,0,0x100,local_404);
  *(UINT *)(param_1 + 0x41) = UVar1;
  if (-1 < (int)(UVar1 - 1)) {
    iVar3 = 0;
    pBVar2 = &local_404[0].peBlue;
    do {
      *(BYTE *)(param_1 + 0x49 + iVar3 * 4) = *pBVar2;
      *(BYTE *)(param_1 + 0x4b + iVar3 * 4) = ((tagPALETTEENTRY *)(pBVar2 + -2))->peRed;
      *(BYTE *)(param_1 + 0x4a + iVar3 * 4) = pBVar2[-1];
      iVar3 = iVar3 + 1;
      pBVar2 = pBVar2 + 4;
      UVar1 = UVar1 - 1;
    } while (UVar1 != 0);
  }
  return;
}

