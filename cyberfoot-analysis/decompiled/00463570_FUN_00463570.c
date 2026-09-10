// Address: 00463570
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00463570(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  int local_10;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_10 = param_3;
    if (*(int *)(param_1 + 8) == 1) {
      piVar2 = (int *)FUN_0041e01c(param_1,0);
      iVar4 = *piVar2;
    }
    else {
      pHVar3 = GetDesktopWindow();
      pHVar3 = GetTopWindow(pHVar3);
      while ((iVar4 == 0 && (pHVar3 != (HWND)0x0))) {
        cVar1 = FUN_00463484(param_1,pHVar3,&local_10);
        if (cVar1 == '\0') {
          pHVar3 = GetWindow(pHVar3,2);
        }
        else {
          iVar4 = **(int **)(*(int *)(param_1 + 4) + local_10 * 4);
        }
      }
    }
  }
  return iVar4;
}

