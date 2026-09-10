// Address: 00482af8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482af8(void)

{
  HWND hWnd;
  HMENU hMenu;
  int in_stack_00000004;
  BOOL bRevert;
  
  if (((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x229) != '\0') &&
      ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x228) & 1) != 0)) &&
     (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x22f) != '\x01')) {
    bRevert = 0;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
    hMenu = GetSystemMenu(hWnd,bRevert);
    if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x229) == '\x03') {
      DeleteMenu(hMenu,0xf130,0);
      DeleteMenu(hMenu,7,0x400);
      DeleteMenu(hMenu,5,0x400);
      DeleteMenu(hMenu,0xf030,0);
      DeleteMenu(hMenu,0xf020,0);
      DeleteMenu(hMenu,0xf000,0);
      DeleteMenu(hMenu,0xf120,0);
    }
    else {
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x228) & 2) == 0) {
        EnableMenuItem(hMenu,0xf020,1);
      }
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x228) & 4) == 0) {
        EnableMenuItem(hMenu,0xf030,1);
      }
    }
  }
  return;
}

