// Address: 00485cc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_00485cc8(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_0066cc0c,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_0066cbf4 != 0)) {
    FUN_00487210(DAT_0066cbf4,in_stack_0000000c);
  }
  return LVar1;
}

