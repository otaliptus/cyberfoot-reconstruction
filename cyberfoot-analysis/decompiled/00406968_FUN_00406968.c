// Address: 00406968
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LONG FUN_00406968(void)

{
  LONG LVar1;
  int *in_stack_00000004;
  
  LVar1 = InterlockedDecrement(in_stack_00000004 + 1);
  if (LVar1 == 0) {
    (**(code **)(*in_stack_00000004 + -4))(in_stack_00000004,1);
  }
  return LVar1;
}

