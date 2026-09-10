// Address: 004a716c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a716c(int param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  HDC pHVar4;
  HPALETTE pHVar5;
  HBITMAP h;
  
  FUN_004032a8(param_1 + 0x21,0x428,0);
  FUN_004a6db4(param_1);
  cVar1 = *(char *)(param_1 + 0x461);
  if (cVar1 == '\0') {
LAB_004a71ab:
    switch(*(undefined1 *)(param_1 + 0x460)) {
    case 1:
    case 4:
    case 8:
      FUN_004a7120(*(undefined1 *)(param_1 + 0x460),1);
      break;
    case 2:
      FUN_004a7120(4,1);
      break;
    case 0x10:
      FUN_004a7120(8,1);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if ((byte)(cVar1 - 3U) < 2) goto LAB_004a71ab;
      if (cVar1 != '\x06') goto switchD_004a71c2_caseD_0;
    }
    FUN_004a7120(0x18,0);
  }
switchD_004a71c2_caseD_0:
  *(uint *)(param_1 + 0x468) =
       ((uint)*(ushort *)(param_1 + 0x2f) * *(int *)(param_1 + 0x458) + 0x1f & 0xffffffe0) >> 3;
  if ((*(char *)(param_1 + 0x461) == '\x06') || (*(char *)(param_1 + 0x461) == '\x04')) {
    lVar2 = (longlong)*(int *)(param_1 + 0x458) * (longlong)*(int *)(param_1 + 0x45c);
    uVar3 = FUN_004027fc((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    *(undefined4 *)(param_1 + 0x454) = uVar3;
    FUN_004032a8(uVar3,*(int *)(param_1 + 0x458) * *(int *)(param_1 + 0x45c),0);
  }
  if (*(char *)(param_1 + 0x460) == '\x10') {
    lVar2 = (longlong)*(int *)(param_1 + 0x468) * (longlong)*(int *)(param_1 + 0x45c);
    uVar3 = FUN_004027fc((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    *(undefined4 *)(param_1 + 0x44c) = uVar3;
    FUN_004032a8(uVar3,*(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c),0);
  }
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)(param_1 + 0x18) = pHVar4;
  FUN_0042b628(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x128),pHVar4);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(char *)(param_1 + 0x461) == '\x03') {
      pHVar5 = CreateHalftonePalette(*(HDC *)(param_1 + 0x18));
      *(HPALETTE *)(param_1 + 0x1c) = pHVar5;
    }
    else {
      uVar3 = FUN_004a7010(param_1,*(undefined1 *)(param_1 + 0x460));
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    ResizePalette(*(HPALETTE *)(param_1 + 0x1c),1 << ((byte)*(undefined2 *)(param_1 + 0x2f) & 0x1f))
    ;
    *(int *)(param_1 + 0x41) = 1 << ((byte)*(undefined2 *)(param_1 + 0x2f) & 0x1f);
    SelectPalette(*(HDC *)(param_1 + 0x18),*(HPALETTE *)(param_1 + 0x1c),0);
    RealizePalette(*(HDC *)(param_1 + 0x18));
    FUN_004a70b0(param_1,*(undefined4 *)(param_1 + 0x1c));
  }
  h = CreateDIBSection(*(HDC *)(param_1 + 0x18),(BITMAPINFO *)(param_1 + 0x21),0,
                       (void **)(param_1 + 0x450),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x14) = h;
  SelectObject(*(HDC *)(param_1 + 0x18),h);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x450),
               *(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c),0);
  return;
}

