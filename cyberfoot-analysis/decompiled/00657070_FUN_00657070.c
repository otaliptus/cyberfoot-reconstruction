// Address: 00657070
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00657070(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14;
  
  local_14 = 0;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (iVar4 == 0) {
    local_14 = 0;
  }
  else {
    if ((1 < *(int *)(PTR_DAT_0066ac78 + 0x110)) && (0 < iVar4)) {
      piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar1) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar1 * 0x2f8) != '\0')) {
          local_14 = 1;
          break;
        }
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) &&
       (iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x13c), 0 < iVar4)) {
      piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar1) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar1 * 0x2f8) != '\0')) {
          uVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar1 * 0x2f8));
          iVar3 = FUN_0065a250(uVar2,2,1);
          if (-1 < iVar3) {
            local_14 = 1;
            break;
          }
        }
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((*(int *)(PTR_DAT_0066ac78 + 0x110) == 0) &&
       (iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x13c), 0 < iVar4)) {
      piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar1) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + *piVar1 * 0x2f8 + 0x214) != '\0')) {
          uVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar1 * 0x2f8));
          iVar3 = FUN_0065a250(uVar2,2,0);
          if (-1 < iVar3) {
            return 1;
          }
        }
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return local_14;
}

