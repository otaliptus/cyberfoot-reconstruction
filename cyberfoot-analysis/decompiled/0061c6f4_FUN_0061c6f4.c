// Address: 0061c6f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061c6f4(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_00405ef4(DAT_006d491c,param_2,param_3,param_1);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      if ((*(int *)(DAT_006d491c + 8 + iVar4 * 0xc) == param_2) &&
         (param_3 == *(int *)(DAT_006d491c + iVar4 * 0xc))) {
        iVar3 = FUN_004032c8(0x28);
        if (iVar3 < 2) {
          if (*(int *)(DAT_006d491c + 4 + iVar4 * 0xc) == 1) {
            iVar3 = FUN_0060a404(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + param_3 * 0x1bc),
                                 0xffffffff,0xfffffffe);
          }
          else {
            iVar3 = FUN_0060a404(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + param_3 * 0x1bc),
                                 0xffffffff,0xfffffffe);
          }
        }
        else {
          iVar3 = FUN_0060a404(*(undefined4 *)
                                (*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 0xc +
                                *(int *)(DAT_006d491c + 4 + iVar4 * 0xc) * 4),0xffffffff,0xffffffff)
          ;
        }
        if (0 < iVar3) {
          uVar5 = 0xffffffff;
          iVar3 = FUN_0060cfa8(*(undefined4 *)(DAT_006d491c + 4 + iVar4 * 0xc),iVar3,param_3,
                               0xffffffff,4);
          piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 0x44 +
                          *(int *)(DAT_006d491c + 4 + iVar4 * 0xc) * 4);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 0x8c +
                          *(int *)(DAT_006d491c + 4 + iVar4 * 0xc) * 4);
          *piVar1 = *piVar1 + 1;
          if (-1 < iVar3) {
            FUN_0061b828(uVar5,iVar3);
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

