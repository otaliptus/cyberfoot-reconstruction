// Address: 00484560
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00484560(int param_1)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  int iVar5;
  UINT flags;
  
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (DAT_006631e4 != (code *)0x0)) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      iVar5 = -0x14;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      uVar3 = GetWindowLongA(pHVar2,iVar5);
      if ((*(char *)(param_1 + 0x2e0) == '\0') && (*(char *)(param_1 + 0x2e8) == '\0')) {
        uVar3 = uVar3 & 0xfff7ffff;
        iVar5 = -0x14;
        pHVar2 = (HWND)FUN_0046cae0(param_1);
        SetWindowLongA(pHVar2,iVar5,uVar3);
        flags = 0x485;
        hrgnUpdate = (HRGN)0x0;
        lprcUpdate = (RECT *)0x0;
        pHVar2 = (HWND)FUN_0046cae0(param_1);
        RedrawWindow(pHVar2,lprcUpdate,hrgnUpdate,flags);
      }
      else {
        uVar4 = extraout_ECX;
        if ((uVar3 & 0x80000) == 0) {
          uVar3 = uVar3 | 0x80000;
          iVar5 = -0x14;
          pHVar2 = (HWND)FUN_0046cae0(param_1);
          SetWindowLongA(pHVar2,iVar5,uVar3);
          uVar4 = extraout_ECX_00;
        }
        FUN_0046cae0(param_1,(uint)*(byte *)(param_1 + 0x2e8),uVar4,*(undefined4 *)(param_1 + 0x2ec)
                     ,CONCAT31((int3)((*(uint *)(&DAT_00663270 +
                                                (uint)*(byte *)(param_1 + 0x2e0) * 4) |
                                      *(uint *)(&DAT_00663278 + (uint)*(byte *)(param_1 + 0x2e8) * 4
                                               )) >> 8),*(undefined1 *)(param_1 + 0x2e1)),
                     *(uint *)(&DAT_00663270 + (uint)*(byte *)(param_1 + 0x2e0) * 4) |
                     *(uint *)(&DAT_00663278 + (uint)*(byte *)(param_1 + 0x2e8) * 4));
        (*DAT_006631e4)();
      }
    }
  }
  return;
}

