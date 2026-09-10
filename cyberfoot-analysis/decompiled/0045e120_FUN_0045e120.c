// Address: 0045e120
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  LONG LVar4;
  UINT UVar5;
  WPARAM wParam;
  LPARAM lParam;
  
  FUN_0045dd3c(param_1);
  uVar1 = FUN_0046cae0(param_1);
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  if (*(int *)(param_1 + 0x278) != 0) {
    (**(code **)(**(int **)(param_1 + 0x23c) + 8))
              (*(int **)(param_1 + 0x23c),*(int *)(param_1 + 0x278));
    FUN_00403a84(*(undefined4 *)(param_1 + 0x278));
    *(undefined4 *)(param_1 + 0x278) = 0;
    if (*(int *)(param_1 + 0x260) != -1) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x14))();
      if (iVar2 < *(int *)(param_1 + 0x260)) {
        uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x14))();
        *(undefined4 *)(param_1 + 0x260) = uVar1;
      }
      lParam = 0;
      wParam = *(WPARAM *)(param_1 + 0x260);
      UVar5 = 0x14e;
      pHVar3 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar3,UVar5,wParam,lParam);
    }
  }
  if (*(byte *)(param_1 + 0x276) < 2) {
    UVar5 = 5;
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    pHVar3 = GetWindow(pHVar3,UVar5);
    if (pHVar3 != (HWND)0x0) {
      if (*(char *)(param_1 + 0x276) == '\x01') {
        *(HWND *)(param_1 + 0x244) = pHVar3;
        LVar4 = GetWindowLongA(pHVar3,-4);
        *(LONG *)(param_1 + 600) = LVar4;
        SetWindowLongA(*(HWND *)(param_1 + 0x244),-4,*(LONG *)(param_1 + 0x254));
        pHVar3 = GetWindow(pHVar3,2);
      }
      *(HWND *)(param_1 + 0x240) = pHVar3;
      LVar4 = GetWindowLongA(pHVar3,-4);
      *(LONG *)(param_1 + 0x250) = LVar4;
      SetWindowLongA(*(HWND *)(param_1 + 0x240),-4,*(LONG *)(param_1 + 0x24c));
    }
  }
  if ((*PTR_DAT_0066b148 != '\0') && (*(int *)(param_1 + 0x240) != 0)) {
    SendMessageA(*(HWND *)(param_1 + 0x240),0xd3,3,0);
  }
  return;
}

