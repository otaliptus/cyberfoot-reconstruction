// Address: 0042e12c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e12c(int *param_1,undefined4 param_2,LONG *param_3)

{
  HPALETTE pHVar1;
  HDC pHVar2;
  HPALETTE pHVar3;
  LONG *pLVar4;
  LONG *pLVar5;
  byte bVar6;
  LONG aLStackY_17fc [1523];
  HENHMETAFILE hmf;
  BOOL BVar7;
  RECT *lprect;
  RECT RStack_20;
  
  bVar6 = 0;
  if (param_1[10] != 0) {
    pHVar1 = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    pHVar3 = (HPALETTE)0x0;
    if (pHVar1 != (HPALETTE)0x0) {
      BVar7 = -1;
      pHVar3 = pHVar1;
      pHVar2 = (HDC)FUN_0042b5a8(param_2);
      pHVar3 = SelectPalette(pHVar2,pHVar3,BVar7);
      pHVar2 = (HDC)FUN_0042b5a8(param_2);
      RealizePalette(pHVar2);
    }
    pLVar4 = param_3 + (uint)bVar6 * -2 + 1;
    RStack_20.left = *param_3;
    pLVar5 = (LONG *)((int)&RStack_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(LONG *)((int)&RStack_20 + (uint)bVar6 * -8 + 4) = *pLVar4;
    *pLVar5 = pLVar4[(uint)bVar6 * -2 + 1];
    pLVar5[(uint)bVar6 * -2 + 1] = (pLVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    RStack_20.right = RStack_20.right + -1;
    RStack_20.bottom = RStack_20.bottom + -1;
    lprect = &RStack_20;
    hmf = *(HENHMETAFILE *)(param_1[10] + 8);
    pHVar2 = (HDC)FUN_0042b5a8(param_2);
    PlayEnhMetaFile(pHVar2,hmf,lprect);
    if (pHVar1 != (HPALETTE)0x0) {
      BVar7 = -1;
      pHVar2 = (HDC)FUN_0042b5a8(param_2);
      SelectPalette(pHVar2,pHVar3,BVar7);
    }
  }
  return;
}

