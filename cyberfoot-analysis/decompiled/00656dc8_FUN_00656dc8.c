// Address: 00656dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00656dc8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  local_14 = -1;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  bVar1 = false;
  if ((*(int *)(PTR_DAT_0066ac78 + 0x110) == 0) && (-1 < iVar2 + -1)) {
    iVar5 = 0;
    iVar4 = iVar2;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar5 * 0x294) == 0x1d) &&
         (iVar3 = FUN_0065a250(iVar5,2,0), -1 < iVar3)) {
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) && (-1 < iVar2 + -1)) {
    iVar5 = 0;
    iVar4 = iVar2;
    do {
      if (((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar5 * 0x294) != '\0') ||
          (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar5 * 0x294) != '\0')) &&
         (iVar3 = FUN_0065a250(iVar5,2,1), -1 < iVar3)) {
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((1 < *(int *)(PTR_DAT_0066ac78 + 0x110)) && (-1 < iVar2 + -1)) {
    iVar5 = 0;
    iVar4 = iVar2;
    do {
      if ((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar5 * 0x294) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar5 * 0x294) != '\0')) {
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (!bVar1) {
    iVar4 = local_14;
    if (*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) {
      if (((*(int *)PTR_DAT_0066b4f8 < 0) ||
          (iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), iVar5 <= *(int *)PTR_DAT_0066b4f8)
          ) || (iVar5 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b4f8,2,1), iVar5 < 0)) {
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_0065a250(iVar5,2,1);
            iVar4 = iVar5;
            if (-1 < iVar3) break;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
            iVar4 = local_14;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar4 = *(int *)PTR_DAT_0066b4f8;
      }
    }
    local_14 = iVar4;
    if (1 < *(int *)(PTR_DAT_0066ac78 + 0x110)) {
      if ((*(int *)PTR_DAT_0066b4f8 < 0) ||
         (iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), iVar2 <= *(int *)PTR_DAT_0066b4f8))
      {
        local_14 = 0;
      }
      else {
        local_14 = *(int *)PTR_DAT_0066b4f8;
      }
    }
  }
  return local_14;
}

