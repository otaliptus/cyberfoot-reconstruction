// Address: 004ef40c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef40c(int param_1)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT uFlags;
  
  if (*(int *)(param_1 + 0x228) != 0) {
    iVar3 = 0;
    if ((*(int **)(param_1 + 0x238) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))(), cVar1 == '\0')) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))();
      iVar3 = iVar3 + 4;
    }
    if (*(char *)(param_1 + 0x251) != '\0') {
      iVar3 = iVar3 + 0x14;
    }
    if ((*(char *)(param_1 + 0x251) == '\0') &&
       ((*(int **)(param_1 + 0x238) == (int *)0x0 ||
        (cVar1 = (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))(), cVar1 != '\0')))) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    uFlags = (&DAT_00669c7c)[iVar2];
    iVar2 = FUN_00465c50(param_1);
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x228));
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,iVar3,iVar2,uFlags);
    return;
  }
  return;
}

