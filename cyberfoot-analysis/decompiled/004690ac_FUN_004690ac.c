// Address: 004690ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004690ac(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  
  puVar3 = (undefined4 *)(in_stack_00000004 + -4);
  iVar1 = FUN_00469730(*puVar3);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_004696f4(*puVar3,iVar1);
      if (*(char *)(iVar2 + 0x5b) != '\0') {
        return 1;
      }
      iVar2 = FUN_004696f4(*puVar3,iVar1);
      if (DAT_004690fc != *(char *)(iVar2 + 0x61)) {
        return 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}

