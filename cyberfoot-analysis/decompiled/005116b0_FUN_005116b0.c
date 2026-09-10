// Address: 005116b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005116b0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  HWND pHVar3;
  uint uVar4;
  int cx;
  int *piVar5;
  HWND hWndInsertAfter;
  LONG X;
  RECT *lpRect;
  int iVar6;
  BOOL bErase;
  tagRECT local_40;
  RECT RStack_30;
  int iStack_20;
  int iStack_1c;
  
  piVar5 = (int *)0x0;
  if ((*(byte *)(param_1 + 0x139) & 8) == 0) {
    if ((*(byte *)(param_1 + 0x139) & 0x40) == 0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))
                              ((int *)param_1[0x135],param_1[0xb7]);
    FUN_0050f53c(param_1,param_1[0xb7],&local_40);
  }
  else if ((-1 < param_1[0xa0]) && (-1 < param_1[0xa1])) {
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))
                              ((int *)param_1[0x135],param_1[0xa0]);
    (**(code **)(*param_1 + 0x1cc))(param_1,param_1[0xa0],param_1[0xa1]);
    uVar2 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xa1]);
    (**(code **)(*piVar5 + 100))(piVar5,uVar2,&stack0xffffffbc);
    FUN_00511d38(param_1,&local_40);
    if ((*(byte *)(param_1 + 0x124) & 0x20) == 0) {
      local_40.right = local_40.right + -1;
    }
    FUN_0050f004(param_1,&iStack_20);
    if (local_40.top < iStack_1c) {
      FUN_00466128(param_1[0xb5],0);
      return;
    }
    FUN_0050f004(param_1,&iStack_20);
    if (local_40.left < iStack_20) {
      FUN_0050f004(param_1,&iStack_20);
      local_40.left = iStack_20;
    }
  }
  InflateRect(&local_40,-1,-1);
  if (local_40.left < 0) {
    local_40.left = 0;
  }
  FUN_0050f004(param_1,&iStack_20);
  if (local_40.left < iStack_20) {
    FUN_0050f004(param_1,&iStack_20);
    local_40.right = iStack_20;
  }
  piVar1 = (int *)param_1[0xb5];
  iVar6 = 0;
  pHVar3 = (HWND)FUN_0046cae0(piVar1);
  ShowWindow(pHVar3,iVar6);
  uVar4 = (**(code **)(*piVar5 + 0x40))();
  uVar4 = *(uint *)(&DAT_00669cac + (uint)((uVar4 & 0x10) != 0) * 4) | 0x40;
  iVar6 = local_40.bottom - local_40.top;
  cx = local_40.right - local_40.left;
  hWndInsertAfter = (HWND)0x0;
  X = local_40.left;
  pHVar3 = (HWND)FUN_0046cae0(piVar1);
  SetWindowPos(pHVar3,hWndInsertAfter,X,local_40.top,cx,iVar6,uVar4);
  pHVar3 = (HWND)FUN_0046cae0(piVar1);
  SetFocus(pHVar3);
  (**(code **)(*piVar1 + 0x44))(piVar1,&RStack_30);
  bErase = 0;
  lpRect = &RStack_30;
  pHVar3 = (HWND)FUN_0046cae0(piVar1);
  InvalidateRect(pHVar3,lpRect,bErase);
  return;
}

