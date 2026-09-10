// Address: 006426dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006426dc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  iVar3 = -1;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if ((((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar2 * 0x48) ==
             *(int *)(PTR_DAT_0066ac78 + 0x88)) &&
           (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar2 * 0x48) == param_1)) &&
          (*(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48) == param_3)) &&
         (iVar3 = iVar2, *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48) == param_2)) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
      iVar3 = -1;
    } while (iVar1 != 0);
  }
  if (iVar3 < 0) {
    *param_4 = 0xffffffff;
    param_4[1] = 0xffffffff;
  }
  else {
    *param_4 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar3 * 0x48);
    param_4[1] = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar3 * 0x48);
  }
  return;
}

