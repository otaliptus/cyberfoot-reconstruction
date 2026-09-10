// Address: 00588bdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00588bdc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = param_2;
      if (param_2 == -1) {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar3 * 0x48);
      }
      if ((iVar2 == *(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar3 * 0x48)) &&
         ((*(int *)(*(int *)PTR_DAT_0066afa0 + iVar3 * 0x48) == *(int *)PTR_DAT_0066ae40 ||
          (*(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar3 * 0x48) == *(int *)PTR_DAT_0066ae40)))) {
        FUN_00588c74(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

