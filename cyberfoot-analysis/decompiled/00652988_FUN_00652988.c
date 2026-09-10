// Address: 00652988
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00652988(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20 [5];
  
  if (param_1 != -1) {
    FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    local_28 = 0;
    local_24 = 0;
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_20[4] = 0;
    iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
    if (0 < iVar2) {
      iVar3 = 1;
      do {
        iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar3 * 0x130);
        if ((-1 < iVar1) && (param_1 == iVar1)) {
          if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar3 * 0x130) == '\0') {
            local_28 = local_28 + 1;
            local_20[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130)] =
                 local_20[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130)] + 1;
          }
          else {
            local_24 = local_24 + 1;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(*(int *)PTR_DAT_0066af70 + 100 + param_1 * 0x2f8) = local_28;
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + param_1 * 0x2f8) = local_20[0];
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x6c + param_1 * 0x2f8) = local_20[1];
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x70 + param_1 * 0x2f8) = local_20[2];
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x74 + param_1 * 0x2f8) = local_20[3];
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x78 + param_1 * 0x2f8) = local_20[4];
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + param_1 * 0x2f8) = local_24;
    FUN_0064fbb8(0,param_1);
  }
  return;
}

