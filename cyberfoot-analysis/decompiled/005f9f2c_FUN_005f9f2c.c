// Address: 005f9f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f9f2c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_004032c8(3);
  if ((PTR_DAT_0066ac78[0x6c8] == '\0') && (0 < iVar1)) {
    iVar1 = 10;
    piVar3 = (int *)(PTR_DAT_0066ac78 + 0x14);
    do {
      iVar2 = *piVar3;
      *(int *)(PTR_DAT_0066ac78 + 0x10) = iVar2;
      if (((-1 < iVar2) &&
          (iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x10),
          *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar2 * 0x80) == -1)) && (iVar2 != -1)) {
        FUN_00654d60(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar2 * 0x80),iVar2,
                     PTR_DAT_0066ac78);
        if (-1 < *(int *)PTR_DAT_0066adf4) {
          iVar2 = FUN_0065208c(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066adf4 * 0x2f8)
                              );
          if (-1 < iVar2) {
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d5dbc,PTR_DAT_0066b408);
            (**(code **)(**(int **)PTR_DAT_0066b408 + 0xec))();
          }
        }
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

