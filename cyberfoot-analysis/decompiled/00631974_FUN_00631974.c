// Address: 00631974
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00631974(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  iVar2 = FUN_00405eec(DAT_006d4ba4);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    local_14 = iVar2;
    do {
      uVar1 = FUN_004032c8(0x32);
      *(undefined1 *)(DAT_006d4ba4 + 0x51 + iVar5 * 0x74) = uVar1;
      iVar5 = iVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  DAT_006d4ba8 = FUN_00405eec(DAT_006d4ba4);
  FUN_004bcdb0(DAT_006d4ba4,0x74,0,&LAB_00631934,DAT_006d4ba8 + -1);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    iVar5 = 0x14;
    if (iVar2 < 0x52) {
      if (iVar2 < 0x3e) {
        if (iVar2 < 0x2a) {
          *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 1;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 2;
        }
      }
      else {
        *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 3;
      }
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 4;
    }
  }
  else {
    iVar5 = 10;
    if (iVar2 < 0x2a) {
      if (iVar2 < 0x20) {
        *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 2;
      }
      else {
        *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 3;
      }
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) = 4;
    }
  }
  iVar4 = 0;
  iVar2 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294);
  if (0 < iVar2) {
    iVar6 = 1;
    do {
      iVar3 = 1;
      if (iVar5 != 0) {
        do {
          *(undefined4 *)
           (*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + iVar6 * 0x50 + -0x54 + iVar3 * 4) =
               *(undefined4 *)(DAT_006d4ba4 + 0x54 + iVar4 * 0x74);
          *(undefined4 *)
           (*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + iVar6 * 0x50 + 0xfc + iVar3 * 4) =
               *(undefined4 *)(DAT_006d4ba4 + 0x54 + iVar4 * 0x74);
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                  *(int *)(DAT_006d4ba4 + 0x54 + iVar4 * 0x74) * 0x2f8) = iVar6;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar5);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004060a8(&DAT_006d4ba4,PTR_DAT_0063160c,1,0);
  return;
}

