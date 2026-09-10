// Address: 0051115c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0051115c(void)

{
  int in_stack_00000004;
  
  switch(*(undefined1 *)(in_stack_00000004 + -1)) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                    (*(byte *)(*(int *)(in_stack_00000004 + -8) + 0x490) & 0x10) != 0);
  case 3:
    return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                    (*(byte *)(*(int *)(in_stack_00000004 + -8) + 0x490) & 0x40) != 0);
  case 4:
    return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                    (*(byte *)(*(int *)(in_stack_00000004 + -8) + 0x490) & 0x80) != 0);
  case 5:
    return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                    (*(byte *)(*(int *)(in_stack_00000004 + -8) + 0x491) & 1) != 0);
  }
}

