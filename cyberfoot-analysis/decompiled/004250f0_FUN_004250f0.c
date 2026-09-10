// Address: 004250f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004250f0(void)

{
  char cVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (*(char *)(*(int *)(in_stack_00000004 + 8) + -9) != '\0') {
    iVar2 = FUN_00419ee8(*(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -0x10),
                         *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -8));
    cVar1 = FUN_004250b0(iVar2,*(undefined4 *)(in_stack_00000004 + -4));
    if (cVar1 != '\0') {
      iVar2 = *(int *)(in_stack_00000004 + -4);
    }
  }
  return iVar2 == *(int *)(in_stack_00000004 + -4);
}

