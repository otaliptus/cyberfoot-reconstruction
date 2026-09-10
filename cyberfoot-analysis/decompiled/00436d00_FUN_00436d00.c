// Address: 00436d00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00436d00(void)

{
  LONG LVar1;
  HWND in_stack_00000004;
  int in_stack_00000008;
  WPARAM in_stack_0000000c;
  LPARAM in_stack_00000010;
  
  if (in_stack_00000008 == 0x110) {
    FUN_00436c4c(in_stack_00000004);
    *(HWND *)(DAT_006629c0 + 0x3c) = in_stack_00000004;
    LVar1 = SetWindowLongA(in_stack_00000004,-4,*(LONG *)(DAT_006629c0 + 0x40));
    *(LONG *)(DAT_006629c0 + 0x34) = LVar1;
    CallWindowProcA(*(WNDPROC *)(DAT_006629c0 + 0x40),in_stack_00000004,0x110,in_stack_0000000c,
                    in_stack_00000010);
    DAT_006629c0 = 0;
  }
  return 0;
}

