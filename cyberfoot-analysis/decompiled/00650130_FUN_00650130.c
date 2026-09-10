// Address: 00650130
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00650130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18);
      if ((-1 < iVar1) && (param_1 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130))) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}

