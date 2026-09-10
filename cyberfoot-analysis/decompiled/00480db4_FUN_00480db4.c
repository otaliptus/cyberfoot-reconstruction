// Address: 00480db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00480db4(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = CallWindowProcA(*(WNDPROC *)(*(int *)(in_stack_00000004 + -4) + 0x274),
                          *(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x254),
                          **(UINT **)(in_stack_00000004 + -8),
                          *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                          *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}

