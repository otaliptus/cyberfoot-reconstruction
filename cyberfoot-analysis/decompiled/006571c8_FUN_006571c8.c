// Address: 006571c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006571c8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == 0) {
    return 0;
  }
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
  if (iVar1 == 1) {
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066af90 * 0x2f8) != '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 4) * 0x2f8) != '\0')
       ) {
      uVar2 = 1;
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0x30) * 0x2f8) !=
         '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0x34) * 0x2f8) !=
        '\0')) {
      uVar2 = 1;
    }
  }
  else if (iVar1 == 2) {
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0x60) * 0x2f8) !=
         '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 100) * 0x2f8) !=
        '\0')) {
      uVar2 = 1;
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0x90) * 0x2f8) !=
         '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0x94) * 0x2f8) !=
        '\0')) {
      uVar2 = 1;
    }
  }
  else if (iVar1 == 3) {
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0xc0) * 0x2f8) !=
         '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0xc4) * 0x2f8) !=
        '\0')) {
      uVar2 = 1;
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0xf0) * 0x2f8) !=
         '\0') ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(PTR_DAT_0066af90 + 0xf4) * 0x2f8) !=
        '\0')) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

