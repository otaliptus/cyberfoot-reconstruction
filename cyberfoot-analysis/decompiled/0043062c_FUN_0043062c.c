// Address: 0043062c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043062c(int param_1)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  HPALETTE pHVar4;
  char cVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8)) {
    FUN_0042efa0();
  }
  iVar2 = FUN_0042c090(*(undefined4 *)(iVar1 + 0x14),0,
                       1 << ((byte)*(undefined2 *)(iVar1 + 0x3e) & 0x1f));
  *(int *)(iVar1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  GetDC((HWND)0x0);
  hdc = (HDC)FUN_0042b9a0();
  if (*(char *)(iVar1 + 0x71) == '\0') {
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar3 = GetDeviceCaps(hdc,0xe);
    if ((int)((uint)*(ushort *)(iVar1 + 0x2a) * (uint)*(ushort *)(iVar1 + 0x28)) <= iVar2 * iVar3) {
      cVar5 = '\0';
      goto LAB_004306bd;
    }
  }
  cVar5 = '\x01';
LAB_004306bd:
  *(char *)(iVar1 + 0x71) = cVar5;
  if (cVar5 != '\0') {
    pHVar4 = CreateHalftonePalette(hdc);
    *(HPALETTE *)(iVar1 + 0x10) = pHVar4;
  }
  ReleaseDC((HWND)0x0,hdc);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}

