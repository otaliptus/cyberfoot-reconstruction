// Address: 005fa4dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_005fa4dc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if (((*(double *)(*(int *)PTR_DAT_0066b154 + 0x40 + iVar2 * 600) ==
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) &&
          (*(int *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar2 * 600) ==
           *(int *)(PTR_DAT_0066ac78 + 0x88))) &&
         (param_2 == *(int *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar2 * 600))) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

