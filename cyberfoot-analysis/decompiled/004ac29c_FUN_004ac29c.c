// Address: 004ac29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac29c(undefined4 param_1,HPALETTE param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  HPALETTE hPal;
  BOOL bForceBkgd;
  
  iVar1 = FUN_004aa2e8(param_1);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    if (param_3 != '\0') {
      uVar2 = FUN_004aa2e8(param_1);
      FUN_004a70b0(uVar2,param_2);
    }
    bForceBkgd = 0;
    hPal = param_2;
    iVar1 = FUN_004aa2e8(param_1);
    SelectPalette(*(HDC *)(iVar1 + 0x18),hPal,bForceBkgd);
    iVar1 = FUN_004aa2e8(param_1);
    RealizePalette(*(HDC *)(iVar1 + 0x18));
    iVar1 = FUN_004aa2e8(param_1);
    DeleteObject(*(HGDIOBJ *)(iVar1 + 0x1c));
    iVar1 = FUN_004aa2e8(param_1);
    *(HPALETTE *)(iVar1 + 0x1c) = param_2;
  }
  return;
}

