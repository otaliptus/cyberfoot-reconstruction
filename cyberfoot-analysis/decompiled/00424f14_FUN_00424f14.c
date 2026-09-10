// Address: 00424f14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00424f14(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar2 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    iVar3 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -0x10),
                         *(undefined4 *)(in_stack_00000004 + -8));
    return iVar2 == iVar3;
  }
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x14);
  if ((iVar3 == -0x80000000) || (iVar3 != iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

