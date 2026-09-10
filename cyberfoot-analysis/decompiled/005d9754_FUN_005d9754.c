// Address: 005d9754
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d9754(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = PTR_DAT_0066acdc;
  local_18 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < local_18) {
    local_18 = local_18 + 1;
    local_20 = 0;
    do {
      local_14 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294);
      if (0 < local_14) {
        local_1c = 1;
        do {
          iVar5 = 0;
          iVar2 = FUN_0064dee4(1,*(undefined4 *)
                                  (*(int *)PTR_DAT_0066aca0 + 0x140 + local_20 * 0x294),local_1c,
                               0xffffffff,0xffffffff);
          if (0 < iVar2) {
            FUN_00643810(iVar2,0x13);
            iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066acd8);
            FUN_004060a8(PTR_DAT_0066acd8,PTR_DAT_00488d60,1,iVar3 + 1);
            iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
            *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68) =
                 *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
            iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
            *(int *)(*(int *)PTR_DAT_0066acd8 + 4 + iVar3 * 0x68) = iVar2;
            iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
            *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + 0x60 + iVar2 * 0x68) =
                 **(undefined4 **)puVar1;
            if (local_1c == 1) {
              *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + **(int **)puVar1 * 0x130) = 1;
            }
            iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
            *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + 100 + iVar2 * 0x68) =
                 *(undefined4 *)(*(int *)puVar1 + 0x14);
            iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
            if (-1 < iVar2) {
              iVar2 = iVar2 + 1;
              iVar3 = 0;
              do {
                if (*(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) == 0) {
                  iVar5 = 1;
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 8) =
                       *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x18);
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 0x34) =
                       *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar3 * 0x18);
                  *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) = 0xffffffff;
                  break;
                }
                iVar3 = iVar3 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
            if (-1 < iVar2) {
              iVar2 = iVar2 + 1;
              iVar3 = 0;
              do {
                if (*(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) == 1) {
                  iVar5 = iVar5 + 1;
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 4 + iVar5 * 4) =
                       *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x18);
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 0x30 + iVar5 * 4) =
                       *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar3 * 0x18);
                  *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) = 0xffffffff;
                  break;
                }
                iVar3 = iVar3 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = 2;
            do {
              iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
              if (-1 < iVar3) {
                iVar3 = iVar3 + 1;
                iVar4 = 0;
                do {
                  if (*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) == 2) {
                    iVar5 = iVar5 + 1;
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x18);
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar4 * 0x18);
                    *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) = 0xffffffff;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
            if (-1 < iVar2) {
              iVar2 = iVar2 + 1;
              iVar3 = 0;
              do {
                if (*(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) == 5) {
                  iVar5 = iVar5 + 1;
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 4 + iVar5 * 4) =
                       *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x18);
                  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                  *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar2 * 0x68 + 0x30 + iVar5 * 4) =
                       *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar3 * 0x18);
                  *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18) = 0xffffffff;
                  break;
                }
                iVar3 = iVar3 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = 2;
            do {
              iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
              if (-1 < iVar3) {
                iVar3 = iVar3 + 1;
                iVar4 = 0;
                do {
                  if (*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) == 7) {
                    iVar5 = iVar5 + 1;
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x18);
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar4 * 0x18);
                    *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) = 0xffffffff;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar2 = 2;
            do {
              iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
              if (-1 < iVar3) {
                iVar3 = iVar3 + 1;
                iVar4 = 0;
                do {
                  if (*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) == 3) {
                    iVar5 = iVar5 + 1;
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x18);
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar4 * 0x18);
                    *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) = 0xffffffff;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar2 = 2;
            do {
              iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
              if (-1 < iVar3) {
                iVar3 = iVar3 + 1;
                iVar4 = 0;
                do {
                  if (*(int *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) == 4) {
                    iVar5 = iVar5 + 1;
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x18);
                    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
                    *(undefined4 *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar5 * 4) =
                         *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar4 * 0x18);
                    *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar4 * 0x18) = 0xffffffff;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_1c = local_1c + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_004060a8(PTR_DAT_0066b1b8,PTR_DAT_00489020,1,0);
  return;
}

