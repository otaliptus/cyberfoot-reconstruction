// Address: 0043a94c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0043a94c(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x168) + 0xc);
  if ((((*(char *)(param_1 + 0x57) != '\0') && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) &&
      (piVar1 != (int *)0x0)) && (*(char *)((int)piVar1 + 0x22) != '\0')) {
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    if (iVar3 == 0) {
      *(undefined1 *)((int)piVar1 + 0x22) = 0;
    }
    else {
      iVar3 = FUN_0047e4c0(param_1);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x22e) != '\0')) {
        cVar2 = FUN_0046cde4(iVar3);
        if (cVar2 != '\0') {
          if (*(char *)(param_1 + 0x17c) == '\0') {
            lParam = 0;
            wParam = 0;
            Msg = 0x30f;
            hWnd = (HWND)FUN_0046cae0(iVar3);
            PostMessageA(hWnd,Msg,wParam,lParam);
          }
          else {
            FUN_004673cc(iVar3,0x30f,0,0);
          }
          uVar4 = 1;
          *(undefined1 *)((int)piVar1 + 0x22) = 0;
        }
      }
    }
  }
  return uVar4;
}

