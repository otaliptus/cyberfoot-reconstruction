// Address: 006501cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006501cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((param_1 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar2 * 0x130)) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar2 * 0x130) == 1)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

