// Address: 004654d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004654d4(int *param_1,char param_2)

{
  HPALETTE pHVar1;
  HDC hdc;
  UINT UVar2;
  undefined4 uVar3;
  HWND pHStack_14;
  
  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x57) != '\0') {
    pHVar1 = (HPALETTE)FUN_00403c80(param_1);
    if (pHVar1 != (HPALETTE)0x0) {
      hdc = (HDC)(**(code **)(*param_1 + 0x48))(param_1,&pHStack_14);
      pHVar1 = SelectPalette(hdc,pHVar1,-(uint)(param_2 != '\x01'));
      UVar2 = RealizePalette(hdc);
      if (UVar2 != 0) {
        (**(code **)(*param_1 + 0x7c))();
      }
      SelectPalette(hdc,pHVar1,-1);
      ReleaseDC(pHStack_14,hdc);
      uVar3 = 1;
    }
  }
  return uVar3;
}

