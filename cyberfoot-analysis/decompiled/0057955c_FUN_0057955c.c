// Address: 0057955c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057955c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  
  local_14 = 4;
  do {
    iVar2 = FUN_00405ef4(DAT_006d216c);
    if (-1 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar5 = 0;
      do {
        iVar1 = *(int *)(DAT_006d216c + iVar5 * 0x20);
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) == '\0') {
          iVar3 = FUN_00579bd0(iVar1);
          if (iVar3 < 0) {
            if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar1 * 0x2f8) < *(int *)PTR_DAT_0066b610)
            {
              uVar4 = FUN_00579b98(iVar1);
              FUN_005796bc(iVar1,uVar4,1);
            }
          }
          else if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar1 * 0x2f8) <
                   *(int *)PTR_DAT_0066b610) {
            uVar4 = FUN_00579b98(iVar1);
            FUN_005796bc(iVar1,uVar4,1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  FUN_00578a28();
  FUN_005789d0();
  FUN_004060a8(&DAT_006d2168,PTR_DAT_00578714,1,0);
  FUN_004060a8(&DAT_006d2164,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d2160,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d215c,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d216c,PTR_DAT_0057873c,1,0);
  FUN_004060a8(&DAT_006d2178,PTR_DAT_00578764,1,0);
  return;
}

