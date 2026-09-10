// Address: 006216fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006216fc(void)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(PTR_DAT_0066ac78 + 0x62c) == 8) {
    PTR_DAT_0066ac78[0x640] = 1;
    iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      iVar2 = 0;
      do {
        *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x38 + iVar2 * 0x80) = 0;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(int *)(PTR_DAT_0066ac78 + 0x634) = *(int *)(PTR_DAT_0066ac78 + 0x634) + 1;
    FUN_0064c36c(7,*(undefined4 *)(PTR_DAT_0066ad60 + 0x2b8),0xffffffff,1,0xffffffff,0xffffffff,
                 0xffffffff);
    if (*(int *)(PTR_DAT_0066ad60 + 0x2a0) == *(int *)(PTR_DAT_0066ad60 + 0x2b8)) {
      FUN_0064c36c(7,*(undefined4 *)(PTR_DAT_0066ad60 + 0x2a4),0xffffffff,2,0xffffffff,0xffffffff,
                   0xffffffff);
    }
    else {
      FUN_0064c36c(7,*(int *)(PTR_DAT_0066ad60 + 0x2a0),0xffffffff,2,0xffffffff,0xffffffff,
                   0xffffffff);
    }
    FUN_0064c36c(7,*(undefined4 *)(PTR_DAT_0066ad60 + 0x2e8),0xffffffff,3,0xffffffff,0xffffffff,
                 0xffffffff);
    if (*(int *)(PTR_DAT_0066ad60 + 0x2d0) == *(int *)(PTR_DAT_0066ad60 + 0x2e8)) {
      FUN_0064c36c(7,*(undefined4 *)(PTR_DAT_0066ad60 + 0x2d4),0xffffffff,4,0xffffffff,0xffffffff,
                   0xffffffff);
    }
    else {
      FUN_0064c36c(7,*(int *)(PTR_DAT_0066ad60 + 0x2d0),0xffffffff,4,0xffffffff,0xffffffff,
                   0xffffffff);
    }
    if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066ad60 + 0x2b8) * 0x2f8))
    {
      FUN_0064c4bc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ad60 + 0x2b8) * 0x2f8),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066ad60 + 0x2b8) * 0x2f8),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ad60 + 0x2b8) * 0x2f8),1
                   ,0xffffffff);
    }
    FUN_00657674(7,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    *PTR_DAT_0066acd0 = 1;
  }
  return;
}

