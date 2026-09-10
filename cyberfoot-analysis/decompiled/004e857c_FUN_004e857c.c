// Address: 004e857c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e857c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  undefined4 uVar5;
  UINT wSBflags;
  SCROLLINFO *lpsi;
  UINT wArrows;
  BOOL redraw;
  SCROLLINFO local_28;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
    iVar2 = FUN_004e7bdc(param_1);
    cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 0x24));
    if (cVar1 != '\0') {
      local_28.cbSize = 0x1c;
      local_28.fMask = 7;
      if (*(char *)(param_1 + 4) == '\0') {
        local_28.fMask = 0xf;
      }
      local_28.nMin = *(int *)(param_1 + 0x1c);
      local_28.nPage = *(UINT *)(param_1 + 0x28);
      local_28.nMax = *(int *)(param_1 + 0x18);
      local_28.nPos = *(int *)(param_1 + 0x2c);
      local_28.nTrackPos = 0;
      if (0 < local_28.nMax) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x50))();
        if ((cVar1 == '\0') || (*(char *)(param_1 + 0x10) == '\0')) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        wArrows = (&DAT_00669c68)[iVar3];
        wSBflags = *(UINT *)(param_1 + 8);
        pHVar4 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x24));
        EnableScrollBar(pHVar4,wSBflags,wArrows);
      }
      lpsi = &local_28;
      redraw = -1;
      iVar3 = *(int *)(param_1 + 8);
      pHVar4 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x24));
      SetScrollInfo(pHVar4,iVar3,lpsi,redraw);
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar2 != iVar3) {
      uVar5 = *(undefined4 *)(param_1 + 0x24);
      cVar1 = FUN_00403c10(uVar5,PTR_PTR_004e77fc);
      if (cVar1 != '\0') {
        uVar5 = FUN_00403c34(uVar5,PTR_PTR_004e77fc);
        if (*(char *)(param_1 + 0x11) == '\0') {
          FUN_00403c80(uVar5,iVar3);
        }
        else {
          FUN_00403c80(uVar5,iVar3);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}

