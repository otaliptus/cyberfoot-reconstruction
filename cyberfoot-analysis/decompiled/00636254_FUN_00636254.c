// Address: 00636254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00636254(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    cVar1 = FUN_00656990(*(undefined4 *)(PTR_DAT_0066ac78 + 0x16c),param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    return 1;
  }
  if (param_2 == 1) {
    return 1;
  }
  if (param_2 == 2) {
    if ((1 < *(int *)(PTR_DAT_0066ac78 + 0x110)) &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + param_3 * 0x2f8) != '\0')) {
      uVar2 = 1;
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x110) == 0) {
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + param_3 * 0x2f8) == '\0') ||
         (cVar1 = FUN_00646a00(param_3), cVar1 == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) {
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + param_3 * 0x2f8) != '\0') &&
         (cVar1 = FUN_006469c4(param_3), cVar1 != '\0')) {
        return 1;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_2 == 3) {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x216 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == '\0'
       ) {
      return 0;
    }
    return 1;
  }
  if (param_2 == 4) {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == '\0'
       ) {
      return 0;
    }
    return 1;
  }
  if (param_2 == 5) {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x21b + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == '\0'
       ) {
      return 0;
    }
    return 1;
  }
  if (param_2 == 6) {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == '\0'
       ) {
      return 0;
    }
    return 1;
  }
  if (param_2 != 10) {
    return 0;
  }
  cVar1 = FUN_0064544c(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}

