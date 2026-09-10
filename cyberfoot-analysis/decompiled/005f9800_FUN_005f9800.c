// Address: 005f9800
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f9800(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066ac78;
  if ((((1 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) && (3 < *(int *)(PTR_DAT_0066ac78 + 0x4c))) &&
      (*(int *)(PTR_DAT_0066ac78 + 0x4c) < 0x11)) &&
     ((1 < *(int *)(PTR_DAT_0066ac78 + 0x50) && ((PTR_DAT_0066ac78[0x4c] & 1) == 0)))) {
    iVar4 = 10;
    puVar3 = (undefined4 *)(PTR_DAT_0066ac78 + 0x14);
    do {
      *(undefined4 *)(puVar1 + 0x10) = *puVar3;
      iVar2 = *(int *)(puVar1 + 0x10);
      if ((-1 < iVar2) && (-1 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar2 * 0x80))) {
        FUN_006556f4(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar2 * 0x80));
        if (-1 < *(int *)PTR_DAT_0066adf4) {
          iVar2 = FUN_0065208c(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066adf4 * 0x2f8)
                              );
          if (-1 < iVar2) {
            *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x30 + *(int *)(puVar1 + 0x10) * 0x80) = 0;
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d5dbc,PTR_DAT_0066b408);
            (**(code **)(**(int **)PTR_DAT_0066b408 + 0xec))();
          }
        }
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

