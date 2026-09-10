// Address: 00491398
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00491398(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if ((iVar2 < *(int *)(param_1 + 0x1c)) && (0 < *(int *)(param_1 + 0x18))) {
        iVar2 = *(int *)(param_1 + 0x1c);
        iVar3 = param_1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x20;
    } while (iVar1 < param_2);
  }
  return iVar3;
}

