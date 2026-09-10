// Address: 0046c924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c924(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_004673cc(*(int *)(param_1 + 0x30),0xb034,1,0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,
                     -(uint)((*(byte *)(param_1 + 0x50) & 0x40) == 0));
      FUN_00456c14();
      cVar1 = FUN_00456cf4();
      if (cVar1 != '\0') {
        iVar2 = FUN_00469730(param_1);
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_004696f4(param_1,iVar5);
            if ((*(byte *)(iVar3 + 0x52) & 4) != 0) {
              piVar4 = (int *)FUN_004696f4(param_1,iVar5);
              (**(code **)(*piVar4 + 0x7c))();
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  return;
}

