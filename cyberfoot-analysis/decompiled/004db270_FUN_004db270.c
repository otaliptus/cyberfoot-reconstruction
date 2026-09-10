// Address: 004db270
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db270(void)

{
  char cVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((-1 < in_stack_00000004) && (in_stack_00000008 == 1)) && (DAT_00669708 == 0)) &&
     (DAT_0067aeb0 != 0)) {
    cVar1 = FUN_004db038(DAT_0067aeb0,in_stack_0000000c);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_stack_0000000c + 4) = 0;
    }
  }
  CallNextHookEx(DAT_0067aeb8,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

