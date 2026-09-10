// Address: 004de534
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004de534(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(DAT_00669720 + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_004328ec(DAT_00669720,iVar2);
      if (param_1 == *(int *)(iVar1 + 0x3c)) {
        iVar3 = FUN_004328ec(DAT_00669720,iVar2);
        FUN_0041df0c(DAT_00669720,iVar2);
        break;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  if (iVar3 == 0) {
    iVar3 = FUN_004dde70(PTR_PTR_004dddb4,1,param_1);
  }
  return iVar3;
}

