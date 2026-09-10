// Address: 00427628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00427628(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x20) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0x20) + 4))();
  }
  return uVar1;
}

