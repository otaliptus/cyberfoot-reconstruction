// Address: 00487b64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487b64(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;
  
  iVar2 = FUN_00484f00(DAT_0066cbf8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_00484eec(DAT_0066cbf8,iVar6);
      cVar1 = FUN_0046cde4(piVar3);
      if (cVar1 != '\0') {
        pHVar4 = (HWND)FUN_0046cae0(piVar3);
        BVar5 = IsWindowVisible(pHVar4);
        if (BVar5 != 0) {
          pHVar4 = (HWND)FUN_0046cae0(piVar3);
          BVar5 = IsWindowEnabled(pHVar4);
          if (BVar5 != 0) {
            (**(code **)(*piVar3 + 0xdc))();
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

