// Address: 005f3380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f3380(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  int *local_14;
  
  puVar1 = PTR_DAT_0066af70;
  local_18 = 0;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar4 == 7) {
    local_18 = 8;
  }
  else if (iVar4 == 8) {
    local_18 = 3;
  }
  else if (iVar4 == 9) {
    local_18 = 4;
  }
  if (local_18 != 0) {
    local_14 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
    do {
      iVar4 = 4;
      piVar3 = local_14;
      do {
        if ((*(char *)(*(int *)puVar1 + 0x39 + *piVar3 * 0x2f8) == '\0') &&
           (cVar2 = FUN_0064d890(*(undefined4 *)(*(int *)puVar1 + 0x3c + *piVar3 * 0x2f8)),
           cVar2 != '\0')) {
          FUN_005fad94(param_1,*(undefined4 *)(*(int *)puVar1 + 0x3c + *piVar3 * 0x2f8),*piVar3);
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_14 = local_14 + 4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x700) = 1;
  return;
}

