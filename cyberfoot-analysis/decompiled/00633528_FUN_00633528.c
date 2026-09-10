// Address: 00633528
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00633528(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  FUN_004060a8(PTR_DAT_0066b1f0,PTR_DAT_00488dc0,1,local_14);
  if (-1 < local_14 + -1) {
    iVar6 = 0;
    do {
      bVar2 = false;
      iVar3 = FUN_006454a8(2,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294),
                           param_1);
      if (-1 < iVar3) {
        iVar4 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294));
        if (iVar4 == 0) {
          iVar4 = 2;
        }
        if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
          local_18 = FUN_0064c63c(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294),
                                  4,iVar4);
        }
        if (1 < local_18) {
          bVar2 = true;
        }
      }
      if (!bVar2) {
        iVar4 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar6 * 0x2c + -4 + iVar4 * 4) =
               *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar6 * 0x294 + 0x14c + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xb);
      }
      if (bVar2) {
        *(int *)(*(int *)PTR_DAT_0066b1f0 + iVar6 * 0x2c) = iVar3;
        iVar5 = 2;
        iVar4 = 1;
        do {
          iVar1 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar6 * 0x294 + 0x14c + iVar4 * 4);
          if (iVar3 != iVar1) {
            *(int *)(*(int *)PTR_DAT_0066b1f0 + iVar6 * 0x2c + -4 + iVar5 * 4) = iVar1;
            iVar5 = iVar5 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 10);
        *(undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar6 * 0x2c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1f0 + 4 + iVar6 * 0x2c);
        *(int *)(*(int *)PTR_DAT_0066b1f0 + 4 + iVar6 * 0x2c) = iVar3;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b1f0 + 0x28 + iVar6 * 0x2c) = 8;
      iVar6 = iVar6 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if ((param_2 == 1) && (PTR_DAT_0066ac78[0x171] != '\0')) {
    FUN_00631c58(0);
    FUN_006322a4(0);
    FUN_00632c10(0);
    FUN_0063309c(0);
    if ((1 < param_1) && ((PTR_DAT_0066ac78[0x171] != '\0' && (PTR_DAT_0066ac78[0x172] != '\0')))) {
      FUN_00633780();
    }
    FUN_0065a2bc(4,0xffffffff);
    if (PTR_DAT_0066ac78[0x172] != '\0') {
      FUN_0065a2bc(6,0xffffffff);
    }
  }
  return;
}

