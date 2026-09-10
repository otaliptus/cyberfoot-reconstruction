// Address: 00658cbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00658cbc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294);
  DAT_006d5314 = FUN_00405eec(DAT_006d5320);
  FUN_004bcdb0(DAT_006d5320,0x1c,0,FUN_00643740,DAT_006d5314 + -1);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
      local_20 = *(int *)(PTR_DAT_0066ac78 + 0x4c);
    }
    else {
      local_20 = *(int *)(PTR_DAT_0066ac78 + 0x4c) + 0x13;
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
      local_20 = *(int *)(PTR_DAT_0066ac78 + 0x4c);
    }
    else {
      local_20 = *(int *)(PTR_DAT_0066ac78 + 0x4c) + 9;
    }
  }
  if (0 < local_1c) {
    iVar5 = 1;
    do {
      iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b578);
      FUN_004060a8(PTR_DAT_0066b578,PTR_DAT_00488d40,1,iVar1 + 1);
      local_24 = 1;
      piVar3 = (int *)PTR_DAT_0066b2e8;
      piVar4 = (int *)PTR_DAT_0066b274;
      do {
        iVar1 = FUN_00405ef4(DAT_006d5320);
        if (-1 < iVar1) {
          iVar1 = iVar1 + 1;
          iVar2 = 0;
          do {
            if ((((*(int *)(DAT_006d5320 + 8 + iVar2 * 0x1c) == iVar5) &&
                 (*(int *)(DAT_006d5320 + 0x18 + iVar2 * 0x1c) == 0)) &&
                (*piVar4 <= *(int *)(DAT_006d5320 + 0x10 + iVar2 * 0x1c))) &&
               (*(int *)(DAT_006d5320 + 0x10 + iVar2 * 0x1c) <= *piVar3)) {
              iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
              *(undefined4 *)(*(int *)PTR_DAT_0066b578 + iVar1 * 100) =
                   *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
              iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
              *(undefined4 *)(*(int *)PTR_DAT_0066b578 + 8 + iVar1 * 100) =
                   *(undefined4 *)(DAT_006d5320 + 0xc + iVar2 * 0x1c);
              iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
              *(int *)(*(int *)PTR_DAT_0066b578 + 4 + iVar1 * 100) = local_20;
              iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
              *(undefined4 *)(*(int *)PTR_DAT_0066b578 + iVar1 * 100 + 8 + local_24 * 4) =
                   *(undefined4 *)(DAT_006d5320 + iVar2 * 0x1c);
              iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
              *(undefined4 *)(*(int *)PTR_DAT_0066b578 + iVar1 * 100 + 0x34 + local_24 * 4) =
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(DAT_006d5320 + iVar2 * 0x1c) * 0x130
                    );
              *(undefined4 *)(DAT_006d5320 + 0x18 + iVar2 * 0x1c) = 1;
              break;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        local_24 = local_24 + 1;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (local_24 != 0xc);
      iVar5 = iVar5 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

