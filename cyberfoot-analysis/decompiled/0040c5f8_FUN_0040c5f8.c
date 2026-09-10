// Address: 0040c5f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c5f8(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + -4);
  iVar1 = *piVar2;
  while (*(char *)*piVar2 == *(char *)(in_stack_00000004 + -5)) {
    *piVar2 = *piVar2 + 1;
  }
  *(int *)(in_stack_00000004 + -0xc) = (*piVar2 - iVar1) + 1;
  return;
}

