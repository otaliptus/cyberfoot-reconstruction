// Address: 0051a248
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a248(int *param_1,HPALETTE param_2)

{
  BYTE *pBVar1;
  tagPALETTEENTRY *ptVar2;
  UINT UVar3;
  tagPALETTEENTRY local_410 [256];
  int local_10;
  UINT local_c;
  int *local_8;
  
  local_8 = param_1;
  FUN_0051a088(param_1);
  local_c = GetPaletteEntries(param_2,0,0x100,local_410);
  if (local_c != 0) {
    FUN_0051a1fc(local_8,local_c);
    if (-1 < (int)(local_c - 1)) {
      local_10 = 0;
      ptVar2 = local_410;
      UVar3 = local_c;
      do {
        pBVar1 = (BYTE *)(local_8[1] + local_10 * 3);
        *pBVar1 = ptVar2->peRed;
        pBVar1[1] = ptVar2->peGreen;
        pBVar1[2] = ptVar2->peBlue;
        local_10 = local_10 + 1;
        ptVar2 = ptVar2 + 1;
        UVar3 = UVar3 - 1;
      } while (UVar3 != 0);
    }
    local_8[2] = local_c;
    (**(code **)(*local_8 + 0x1c))();
  }
  return;
}

