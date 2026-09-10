// Address: 0046a80c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a80c(int param_1,HDC param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  int nSavedDC;
  int iVar3;
  COLORREF CVar4;
  HBRUSH pHVar5;
  int iVar6;
  HBRUSH pHVar7;
  int iStack_24;
  RECT RStack_20;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') && (*(char *)(param_1 + 0x1a7) != '\0')) &&
     (*(int *)(param_1 + 0x17c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x20))(*(int **)(param_1 + 0x17c),param_2);
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    iVar6 = 0;
    if ((param_3 != 0) && (iVar6 = FUN_0041e078(*(int *)(param_1 + 0x198),param_3), iVar6 < 0)) {
      iVar6 = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x198) + 8);
    for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x198),iVar6);
      if ((*(char *)(iVar1 + 0x57) != '\0') ||
         (((*(byte *)(iVar1 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x51) & 4) == 0)))) {
        FUN_0041c990(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x48),&RStack_20,
                     *(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c));
        BVar2 = RectVisible(param_2,&RStack_20);
        if (BVar2 != 0) {
          if ((*(byte *)(param_1 + 0x54) & 0x80) != 0) {
            *(ushort *)(iVar1 + 0x54) = *(ushort *)(iVar1 + 0x54) | 0x80;
          }
          nSavedDC = SaveDC(param_2);
          FUN_00464b44(param_2,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44));
          IntersectClipRect(param_2,0,0,*(int *)(iVar1 + 0x48),*(int *)(iVar1 + 0x4c));
          FUN_004673cc(iVar1,0xf,param_2,0);
          RestoreDC(param_2,nSavedDC);
          *(ushort *)(iVar1 + 0x54) = *(ushort *)(iVar1 + 0x54) & 0xff7f;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x19c) != 0) &&
     (iStack_24 = *(int *)(*(int *)(param_1 + 0x19c) + 8), -1 < iStack_24 + -1)) {
    iVar6 = 0;
    do {
      iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),iVar6);
      if (((*(char *)(iVar3 + 0x1a5) != '\0') && ((*(byte *)(iVar3 + 0x50) & 0x10) != 0)) &&
         ((*(char *)(iVar3 + 0x57) != '\0' ||
          (((*(byte *)(iVar3 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar3 + 0x51) & 4) == 0)))))) {
        CVar4 = FUN_00429e64(0xff000010);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar7 = pHVar5;
        FUN_0041c990(*(int *)(iVar3 + 0x40) + -1,*(int *)(iVar3 + 0x44) + -1,
                     *(int *)(iVar3 + 0x40) + *(int *)(iVar3 + 0x48),&RStack_20,
                     *(int *)(iVar3 + 0x44) + *(int *)(iVar3 + 0x4c));
        FrameRect(param_2,&RStack_20,pHVar7);
        DeleteObject(pHVar5);
        CVar4 = FUN_00429e64(0xff000014);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar7 = pHVar5;
        FUN_0041c990(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44),
                     *(int *)(iVar3 + 0x40) + *(int *)(iVar3 + 0x48) + 1,&RStack_20,
                     *(int *)(iVar3 + 0x44) + *(int *)(iVar3 + 0x4c) + 1);
        FrameRect(param_2,&RStack_20,pHVar7);
        DeleteObject(pHVar5);
      }
      iVar6 = iVar6 + 1;
      iStack_24 = iStack_24 + -1;
    } while (iStack_24 != 0);
  }
  return;
}

