// Address: 004c47d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

short FUN_004c47d4(void)

{
  short in_stack_00000004;
  byte *in_stack_00000008;
  
  while( true ) {
    if (in_stack_00000004 == 0) {
      return 0;
    }
    if (*in_stack_00000008 != 0) break;
    if (in_stack_00000004 == 1) {
      return 0;
    }
    in_stack_00000004 = in_stack_00000004 + -2;
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  if (*in_stack_00000008 >> 4 != 0) {
    return in_stack_00000004;
  }
  return in_stack_00000004 + -1;
}

