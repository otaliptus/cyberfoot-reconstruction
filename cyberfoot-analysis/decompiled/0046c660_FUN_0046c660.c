// Address: 0046c660
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c660(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(HWND *)(param_1 + 0x180) != (HWND)0x0) {
    BVar3 = IsWindowVisible(*(HWND *)(param_1 + 0x180));
    if (BVar3 != 0) {
      bVar1 = true;
      goto LAB_0046c68a;
    }
  }
  bVar1 = false;
LAB_0046c68a:
  if (bVar1) {
    ScrollWindow(*(HWND *)(param_1 + 0x180),param_2,param_3,(RECT *)0x0,(RECT *)0x0);
  }
  iVar4 = FUN_00469730(param_1);
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      iVar5 = FUN_004696f4(param_1,iVar6);
      cVar2 = FUN_00403c10(iVar5,PTR_PTR_00461f94);
      if ((cVar2 == '\0') || (*(int *)(iVar5 + 0x180) == 0)) {
        *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + param_2;
        *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + param_3;
      }
      else if (!bVar1) {
        SetWindowPos(*(HWND *)(iVar5 + 0x180),(HWND)0x0,*(int *)(iVar5 + 0x40) + param_2,
                     *(int *)(iVar5 + 0x44) + param_3,*(int *)(iVar5 + 0x48),*(int *)(iVar5 + 0x4c),
                     0x14);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004692c0(param_1);
  return;
}

