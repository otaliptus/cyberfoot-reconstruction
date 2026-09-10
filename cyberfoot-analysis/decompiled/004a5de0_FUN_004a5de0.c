// Address: 004a5de0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a5de0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0067a68c != 0) {
    iVar2 = *(int *)(DAT_0067a68c + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        uVar1 = FUN_004a633c(DAT_0067a68c,iVar3);
        FUN_0040281c(uVar1,4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00403a84(DAT_0067a68c);
  }
  return;
}

