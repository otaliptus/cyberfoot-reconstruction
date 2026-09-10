// Address: 00648ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00648ea0(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int *local_10;
  
  iVar5 = *(int *)PTR_DAT_0066b57c;
  if (0 < iVar5) {
    piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if (*piVar1 == -1) {
        *piVar1 = 5000;
      }
      piVar1 = piVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00649098(PTR_DAT_0066ac78 + 0x140,9);
  iVar5 = *(int *)PTR_DAT_0066b57c;
  if (0 < iVar5) {
    piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if (*piVar1 == 5000) {
        *piVar1 = -1;
      }
      piVar1 = piVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    local_14 = 0x1b;
    puVar2 = PTR_DAT_0066ae98 + 0x52c;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x568;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0x1b;
    piVar1 = (int *)(PTR_DAT_0066ae98 + 0x510);
    do {
      iVar5 = *piVar1 + 1;
      if (0 < iVar5) {
        local_10 = piVar1 + -0x144;
        do {
          iVar4 = 0x14;
          piVar3 = local_10;
          do {
            if ((-1 < *piVar3) &&
               (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar3 * 0x2f8) != '\0')) {
              *(undefined1 *)(piVar1 + 7) = 1;
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          local_10 = local_10 + 0x14;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      piVar1 = piVar1 + 0x15a;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

