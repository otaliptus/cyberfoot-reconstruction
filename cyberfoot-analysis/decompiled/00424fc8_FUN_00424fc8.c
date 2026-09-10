// Address: 00424fc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00424fc8(void)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  bool bVar3;
  int in_stack_00000004;
  
  iVar1 = FUN_0041aafc(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if (*(char *)(in_stack_00000004 + -9) == '\0') {
    bVar3 = extraout_EDX == 0 && iVar1 == 0;
  }
  else {
    iVar2 = FUN_0041aafc(*(undefined4 *)(in_stack_00000004 + -0x10),
                         *(undefined4 *)(in_stack_00000004 + -8));
    bVar3 = extraout_EDX_00 == extraout_EDX && iVar2 == iVar1;
  }
  return bVar3;
}

