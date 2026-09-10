// Address: 0046c750
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND hWndInsertAfter;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x198) != 0) {
      param_2 = param_2 - *(int *)(*(int *)(iVar3 + 0x198) + 8);
    }
    iVar3 = FUN_0041e078(*(undefined4 *)(iVar3 + 0x19c),param_1);
    if (-1 < iVar3) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x19c);
      iVar2 = *(int *)(iVar1 + 8);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar2 <= param_2) {
        param_2 = iVar2 + -1;
      }
      if (iVar3 != param_2) {
        FUN_0041df0c(iVar1,iVar3);
        FUN_0041e098(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x19c),param_2,param_1);
      }
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      if (param_2 == 0) {
        hWndInsertAfter = (HWND)0x1;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x19c);
        if (param_2 == *(int *)(iVar1 + 8) + -1) {
          hWndInsertAfter = (HWND)0x0;
        }
        else if (iVar3 < param_2) {
          FUN_0041e01c(iVar1,param_2 + 1);
          hWndInsertAfter = (HWND)FUN_0046cae0();
        }
        else {
          if (iVar3 <= param_2) {
            return;
          }
          FUN_0041e01c(iVar1,param_2);
          hWndInsertAfter = (HWND)FUN_0046cae0();
        }
      }
      SetWindowPos(*(HWND *)(param_1 + 0x180),hWndInsertAfter,0,0,0,0,3);
    }
  }
  return;
}

