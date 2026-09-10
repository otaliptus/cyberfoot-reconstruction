// Address: 0042cb70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0042cb70(void)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    uVar3 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x1c))();
    return uVar3 ^ 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  cVar2 = FUN_00403c10(uVar1,PTR_LAB_00428ed8);
  if ((cVar2 != '\0') &&
     (cVar2 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x18))
                        (*(int **)(in_stack_00000004 + -8),uVar1), cVar2 != '\0')) {
    return 0;
  }
  return 1;
}

