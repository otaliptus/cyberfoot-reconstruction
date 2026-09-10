// Address: 006452f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_006452f0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0064dee4(param_5,param_1,param_4,0xffffffff,0xffffffff);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066b058 + iVar3 * 0x14) == param_3) &&
          (iVar1 == *(int *)(*(int *)PTR_DAT_0066b058 + 4 + iVar3 * 0x14))) &&
         (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + iVar3 * 0x14) == param_2)) {
        return *(undefined4 *)(*(int *)PTR_DAT_0066b058 + 8 + iVar3 * 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0xffffffff;
}

