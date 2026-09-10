// Address: 006311a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_XiButton3Click(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_006d4b9c == '\0') {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x308) + 0x194))
                  (*(int **)(param_1 + 0x308),1,iVar2,&DAT_00631238);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    DAT_006d4b9c = 1;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x308) + 0x194))
                  (*(int **)(param_1 + 0x308),1,iVar2,&DAT_00631240);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    DAT_006d4b9c = 0;
  }
  return;
}

