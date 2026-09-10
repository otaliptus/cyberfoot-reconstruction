// Address: 005698f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int TForm3_getnovoid(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = FUN_00405ef4(DAT_0067b4b8);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(DAT_0067b4b8 + 0xbc + iVar3 * 200);
      if (iVar4 < iVar1) {
        iVar4 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4 + 1000;
}

