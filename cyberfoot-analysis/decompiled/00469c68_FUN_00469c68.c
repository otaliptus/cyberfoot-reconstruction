// Address: 00469c68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00469c68(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if ((iVar3 == 0) ||
     (cVar1 = FUN_00469c54(*(int *)(in_stack_00000004 + -8) + 0x1fa,iVar3 + 0x1fa), cVar1 == '\0'))
  {
    iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x198);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_0041e01c(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x198),iVar4);
        if ((*(char *)(iVar2 + 0x5b) == '\0') && (DAT_00469d3c != *(char *)(iVar2 + 0x61))) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x19c);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_0041e01c(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x19c),iVar4);
        if ((*(char *)(iVar2 + 0x5b) == '\0') && (DAT_00469d3c != *(char *)(iVar2 + 0x61))) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}

