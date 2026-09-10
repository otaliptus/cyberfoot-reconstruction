// Address: 005b5678
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005b5678(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  piVar1 = (int *)0x0;
  local_18 = 0;
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)(iVar3 * 0x5f);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) == 0x1d) &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar3 * 0x2f8) == 0x19)) {
        iVar4 = 0x14;
        piVar1 = &DAT_0066a104;
        piVar2 = (int *)PTR_DAT_0066afac;
        do {
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2f0 + iVar3 * 0x2f8) == *piVar1) {
            local_18 = local_18 + 1;
            *piVar2 = iVar3;
          }
          piVar2 = piVar2 + 1;
          piVar1 = piVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),local_18 == 0x14);
}

