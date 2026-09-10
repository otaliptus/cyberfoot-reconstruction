// Address: 00487ef0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487ef0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWndParent;
  BOOL BVar4;
  int iVar5;
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_00484ee4(DAT_0066cbf8);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_00484ed0(DAT_0066cbf8,iVar5);
        if (*(char *)(iVar3 + 0x57) != '\0') {
          if ((*(int *)(iVar3 + 400) == 0) || (cVar1 = FUN_0046cde4(iVar3), cVar1 != '\0')) {
LAB_00487f57:
            FUN_00487e94(1);
            return;
          }
          hWnd = *(HWND *)(iVar3 + 400);
          hWndParent = (HWND)FUN_0046cae0(iVar3);
          BVar4 = IsChild(hWndParent,hWnd);
          if (BVar4 == 0) goto LAB_00487f57;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00487e94(0);
  }
  return;
}

