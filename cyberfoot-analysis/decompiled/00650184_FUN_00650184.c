// Address: 00650184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00650184(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((-1 < *(int *)(*(int *)PTR_DAT_0066b05c + iVar2 * 0x18)) &&
         (param_1 == *(int *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar2 * 0x18))) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

