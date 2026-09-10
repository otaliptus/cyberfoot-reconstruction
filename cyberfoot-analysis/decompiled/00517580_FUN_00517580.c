// Address: 00517580
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00517580(int param_1,char param_2,HPALETTE param_3)

{
  UINT UVar1;
  undefined4 uVar2;
  HPALETTE extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00517544(param_1,0,param_3);
  *(HPALETTE *)(param_1 + 0xc) = param_3;
  UVar1 = GetPaletteEntries(param_3,0,0x100,(LPPALETTEENTRY)0x0);
  *(UINT *)(param_1 + 4) = UVar1;
  if (0 < (int)UVar1) {
    uVar2 = FUN_004027fc(UVar1 << 2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    UVar1 = GetPaletteEntries(param_3,0,0x100,*(LPPALETTEENTRY *)(param_1 + 8));
    *(UINT *)(param_1 + 4) = UVar1;
  }
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}

