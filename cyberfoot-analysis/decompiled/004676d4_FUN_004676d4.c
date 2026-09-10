// Address: 004676d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004676d4(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(iVar1 + 0x5e) != *(char *)(*(int *)(in_stack_00000004 + -8) + 0x5e));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(undefined1 *)(*(int *)(in_stack_00000004 + -8) + 0x5e));
}

