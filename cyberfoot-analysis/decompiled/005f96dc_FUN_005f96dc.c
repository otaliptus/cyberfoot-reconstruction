// Address: 005f96dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f96dc(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    iVar3 = 10;
    puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x14);
    do {
      *(undefined4 *)(PTR_DAT_0066ac78 + 0x10) = *puVar2;
      iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x10);
      if ((-1 < iVar1) && (-1 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar1 * 0x80))) {
        FUN_006552ec(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar1 * 0x80));
        if (-1 < *(int *)PTR_DAT_0066adf4) {
          iVar1 = FUN_0065208c(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066adf4 * 0x2f8)
                              );
          if (-1 < iVar1) {
            *(undefined1 *)
             (*(int *)PTR_DAT_0066b718 + 0x30 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80) = 0;
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d5dbc,PTR_DAT_0066b408);
            (**(code **)(**(int **)PTR_DAT_0066b408 + 0xec))();
          }
        }
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_005f4074(param_1);
  FUN_00483bc4(DAT_006d3f38);
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d89b0,PTR_DAT_0066b204);
  FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b204);
  return;
}

